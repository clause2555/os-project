// acpi.cpp

#include "kernel/acpi.h"
#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "kernel/paging.h"

// Signature for RSDP is "RSD PTR "
#define RSDP_SIGNATURE "RSD PTR "
#define MAX_IOAPICS 16


namespace ACPI {
    IOAPICInfo ioapics[MAX_IOAPICS];
    uint32_t ioapic_count = 0;

    RSDP_t* find_rsdp() {
        // Access EBDA segment from physical address 0x40E
        uint16_t ebda_segment = *((uint16_t*)0x40E);
        uintptr_t ebda_phys = ebda_segment * 16;
        uintptr_t ebda_virt = 0xC0000000 + ebda_phys; // Assuming identity mapping or appropriate mapping

        // Search EBDA for RSDP
        for (uintptr_t addr = ebda_phys; addr < ebda_phys + 1024; addr += 16) {
            RSDP_t* rsdp = (RSDP_t*)addr;
            if (memcmp(rsdp->Signature, RSDP_SIGNATURE, 8) == 0) {
		size_t rsdp_size = (rsdp->Revision == 0) ? 20 : sizeof(RSDP_t);
                if (validate_rsdp_checksum((uint8_t*)rsdp, rsdp_size)) {
                    return rsdp;
                }
            }
        }

        // If not found, search main BIOS area
        uintptr_t bios_start_virt = 0xE0000; // Mapped virtual address for 0x000E0000
        for (uintptr_t addr = bios_start_virt; addr < bios_start_virt + 0x20000; addr += 16) { // 128KB
            RSDP_t* rsdp = (RSDP_t*)addr;
            if (memcmp(rsdp->Signature, RSDP_SIGNATURE, 8) == 0) {
		size_t rsdp_size = (rsdp->Revision == 0) ? 20 : sizeof(RSDP_t);
                if (validate_rsdp_checksum((uint8_t*)rsdp, rsdp_size)) {
                    return rsdp;
                }
            }
        }

        // RSDP not found
        return nullptr;
    }

    bool validate_rsdp_checksum(uint8_t* data, size_t length) {
        uint8_t sum = 0;
        for (size_t i = 0; i < length; i++) {
            sum += data[i];
        }
        return (sum == 0);
    }

    ACPISDTHeader* find_sdt(RSDP_t* rsdp) {
        if (rsdp->Revision >= 2) {
            // ACPI 2.0+, use XSDT
            uintptr_t xsdt_phys = rsdp->XsdtAddress;
            uintptr_t xsdt_virt = 0xA041A000 + xsdt_phys; // Adjust as per your mapping
            ACPISDTHeader* xsdt = (ACPISDTHeader*)xsdt_virt;

            // Validate the XSDT checksum (similar to RSDT checksum validation)
            if (!validate_sdt_checksum(xsdt)) {
                return nullptr;
            }
            return xsdt;
        } else {
            // ACPI 1.0, use RSDT
            uintptr_t rsdt_phys = rsdp->RsdtAddress;
            uintptr_t rsdt_virt = 0xA041A000 + rsdt_phys; // Adjust as per your mapping
            ACPISDTHeader* rsdt = (ACPISDTHeader*)rsdt_virt;

            // Validate the RSDT checksum
            if (!validate_sdt_checksum(rsdt)) {
                return nullptr;
            }
            return rsdt;
        }
    }

    bool validate_sdt_checksum(ACPISDTHeader* sdt) {
        uint8_t sum = 0;
        uint8_t* data = (uint8_t*)sdt;
        for (size_t i = 0; i < sdt->Length; i++) {
            sum += data[i];
        }
        return (sum == 0);
    }

    ACPISDTHeader* find_rsdt(RSDP_t* rsdp) {
        uintptr_t rsdt_phys = rsdp->RsdtAddress;
        uintptr_t rsdt_virt = rsdt_phys; // Adjust as per your mapping

        ACPISDTHeader* rsdt = (ACPISDTHeader*)rsdt_virt;

        // Validate RSDT checksum
        if (!validate_rsdt_checksum(rsdt)) {
            return nullptr;
        }

        return rsdt;
    }

    bool validate_rsdt_checksum(ACPISDTHeader* rsdt) {
        uint8_t sum = 0;
        uint8_t* data = (uint8_t*)rsdt;
        for (size_t i = 0; i < rsdt->Length; i++) {
            sum += data[i];
        }
        return (sum == 0);
    }

    MADT* find_madt(ACPISDTHeader* rsdt) {
        size_t entry_count = (rsdt->Length - sizeof(ACPISDTHeader)) / 4;
        uint32_t* sdt_ptr = (uint32_t*)((uint8_t*)rsdt + sizeof(ACPISDTHeader));

        for (size_t i = 0; i < entry_count; i++) {
            ACPISDTHeader* table = (ACPISDTHeader*)(0xB0000000 + sdt_ptr[i]); // Adjust mapping
            if (memcmp(table->Signature, "APIC", 4) == 0) {
                // Validate MADT checksum
                if (validate_rsdt_checksum(table)) {
                    return (MADT*)table;
                }
            }
        }

        return nullptr; // MADT not found
    }

    void parse_madt(uint8_t* madt_ptr, size_t madt_length) {
        size_t processed = sizeof(MADT); // Start after the MADT header
        while (processed < madt_length) {
            MADTEntryHeader* entry_header = (MADTEntryHeader*)(madt_ptr + processed);
            switch (entry_header->type) {
                case 1: { // IOAPIC
                    if (ioapic_count >= MAX_IOAPICS) {
                        printf("Maximum IOAPIC count reached.\n");
                        return;
                    }
                    IOAPICEntry* ioapic_entry = (IOAPICEntry*)(madt_ptr + processed);
                    ioapics[ioapic_count].id = ioapic_entry->io_apic_id;
                    ioapics[ioapic_count].address = ioapic_entry->io_apic_address;
                    ioapics[ioapic_count].gsi_base = ioapic_entry->global_system_interrupt_base;
                    ioapic_count++;
                    break;
                }
                // Handle other entry types if necessary
                default:
                    break;
            }
            processed += entry_header->length;
        }
    }

    bool configure_ioapic_for_keyboard(IOAPICInfo* ioapic, uint32_t gsi, uint8_t vector) {
        // Calculate the redirection register offset
        // Each redirection entry occupies two 32-bit registers
        // Lower 32 bits: Interrupt Vector, Delivery Mode, Destination Mode, etc.
        // Upper 32 bits: Mask, etc.
        uint32_t redirection_reg = gsi * 2;

        uint32_t lower = vector | 0x00000020;
	uint32_t upper = 0x00000000;
        // Configure the lower 32 bits
        lower = vector | 0x00000020; // Delivery mode: Fixed, Interrupt Vector

        // Configure the upper 32 bits
        upper = 0x00000000; // Unmask the interrupt

        volatile uint32_t* redir_low = (volatile uint32_t*)(ioapic->address + 0x10 + redirection_reg * 4);
	volatile uint32_t* redir_high = (volatile uint32_t*)(ioapic->address + 0x10 + (redirection_reg * 4) + 4);

        *redir_low = lower;
	*redir_high = upper;

        return true;
    }

    // Example usage after parsing MADT
    void setup_keyboard_ioapic() {
        for (uint32_t i = 0; i < ioapic_count; i++) {
            // Assume GSI1 is for keyboard
            if (configure_ioapic_for_keyboard(&ioapics[i], 1, 0x21)) { // Vector 0x21
                printf("Keyboard IOAPIC configured successfully.\n");
            } else {
                printf("Failed to configure Keyboard IOAPIC.\n");
            }
        }
    }

    void initialize_acpi_and_ioapic() {
        RSDP_t* rsdp = find_rsdp();
        if (!rsdp) {
            printf("RSDP not found.\n");
            return;
        }

        ACPISDTHeader* sdt = find_sdt(rsdp);
        if (!sdt) {
            printf("RSDT/XSDT not found or invalid.\n");
            return;
        }

        MADT* madt = find_madt(sdt);
        if (!madt) {
            printf("MADT not found or invalid.\n");
            return;
        }

        parse_madt((uint8_t*)madt, madt->header.Length);
        if (ioapic_count == 0) {
            printf("No IOAPICs found.\n");
            return;
        } else {
            setup_keyboard_ioapic();
	}
    }
} // ACPI namespace
