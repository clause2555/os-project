// acpi.cpp

#include "kernel/acpi.h"
#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>
#include "kernel/io.h"
#include <string.h>
#include "kernel/paging.h"

// Signature for RSDP is "RSD PTR "
#define RSDP_SIGNATURE "RSD PTR "
#define MAX_IOAPICS 16
#define RSDT_VIRT_ADDRESS 0xC01F1905


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
            ACPISDTHeader* table = (ACPISDTHeader*)(sdt_ptr[i] + 0xA0210000); // Adjust mapping
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
                    ioapics[ioapic_count].address = 0xC0FEC000;
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

        uint32_t lower = vector | (0x00 << 8);
	    uint32_t upper = 0x00000000;

        volatile uint32_t* redir_low = (volatile uint32_t*)(ioapic->address + 0x10 + redirection_reg * 4);
	    volatile uint32_t* redir_high = (volatile uint32_t*)(ioapic->address + 0x10 + (redirection_reg * 4) + 4);

        *redir_low = lower;
	    *redir_high = upper;

        *redir_low &= ~(1 << 16);

       initialize_ps2_controller();

       outb(0x60, 0xF4);

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


    void disable_ps2_ports() {
        // Disable first PS/2 port (keyboard)
        outb(0x64, 0xAD);

        // Disable second PS/2 port (mouse), if present
        outb(0x64, 0xA7);
    }

    void flush_output_buffer() {
        while (inb(0x64) & 0x01) {  // Check if the output buffer is full (bit 0 of port 0x64)
            inb(0x60);  // Discard the data from port 0x60
        }
    }

    void configure_ps2_controller() {
        // Send command to read configuration byte
        outb(0x64, 0x20);
        uint8_t config_byte = inb(0x60);

        // Modify the configuration byte
        config_byte &= ~0x01; // Disable IRQ1 (keyboard)
        config_byte &= ~0x40; // Disable translation for port 1
        config_byte &= ~0x10; // Enable clock for port 1

        // Send command to write configuration byte
        outb(0x64, 0x60);
        outb(0x60, config_byte);
    }

    bool perform_controller_self_test() {
        outb(0x64, 0xAA);
        uint8_t result = inb(0x60);
        
        if (result == 0x55) {
            printf("PS/2 Controller self-test passed.\n");
            return true;
        } else {
            printf("PS/2 Controller self-test failed (code: 0x%x).\n", result);
            return false;
        }
    }

    bool check_dual_channel_ps2() {
        outb(0x64, 0xA8);  // Enable second PS/2 port
        outb(0x64, 0x20);  // Read the configuration byte again
        uint8_t config_byte = inb(0x60);

        // Check if the second PS/2 port is enabled
        if (config_byte & 0x20) {
            printf("Second PS/2 port not available.\n");
            return false;
        } else {
            printf("Dual channel PS/2 controller detected.\n");
            return true;
        }
    }

    bool test_ps2_ports() {
        // Test first PS/2 port (keyboard)
        outb(0x64, 0xAB);
        uint8_t result = inb(0x60);
        if (result != 0x00) {
            printf("First PS/2 port test failed.\n");
            return false;
        }

        // If dual channel, test the second PS/2 port (mouse)
        if (check_dual_channel_ps2()) {
            outb(0x64, 0xA9);
            result = inb(0x60);
            if (result != 0x00) {
                printf("Second PS/2 port test failed.\n");
                return false;
            }
        }

        printf("PS/2 port tests passed.\n");
        return true;
    }

    void enable_ps2_ports() {
        // Enable first PS/2 port (keyboard)
        outb(0x64, 0xAE);

        // If dual channel, enable second PS/2 port (mouse)
        if (check_dual_channel_ps2()) {
            outb(0x64, 0xA8);
        }
    }

    bool reset_ps2_devices() {
        // Reset the first device (keyboard)
        outb(0x60, 0xFF);
        uint8_t response = inb(0x60);
        if (response != 0xFA) {
            printf("Failed to reset first PS/2 device.\n");
            return false;
        }
        printf("First PS/2 device reset successfully.\n");

        // If dual channel, reset the second device (mouse)
        if (check_dual_channel_ps2()) {
            outb(0x60, 0xFF);
            response = inb(0x60);
            if (response != 0xFA) {
                printf("Failed to reset second PS/2 device.\n");
                return false;
            }
            printf("Second PS/2 device reset successfully.\n");
        }

        return true;
    }

    void initialize_ps2_controller() {

        disable_ps2_ports();

        flush_output_buffer();

        configure_ps2_controller();

        if (!perform_controller_self_test()) {
            printf("PS/2 controller self-test failed.\n");
            return;
        }

        bool dual_channel = check_dual_channel_ps2();

        if (!test_ps2_ports()) {
            printf("PS/2 port tests failed.\n");
            return;
        }

        enable_ps2_ports();

        if (!reset_ps2_devices()) {
            printf("PS/2 device reset failed.\n");
            return;
        }

        printf("PS/2 controller initialization complete.\n");
    }



    void initialize_acpi_and_ioapic() {
        //RSDP_t* rsdp = find_rsdp();
        //if (!rsdp) {
        //    printf("RSDP not found.\n");
        //    return;
        //}

        ACPISDTHeader* sdt = reinterpret_cast<ACPISDTHeader*>(RSDT_VIRT_ADDRESS);
        //if (!sdt) {
        //    printf("RSDT/XSDT not found or invalid.\n");
        //    return;
        //}

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
