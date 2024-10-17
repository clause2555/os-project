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

#define RSDT_VIRT_ADDRESS 0xC0300000  // Virtual address for mapping RSDT above kernel

void map_rsdt() {
    uint32_t rsdt_phys_addr = find_rsdt_address();

    if (rsdt_phys_addr == 0) {
	printf("Failed to find RSDT address!\n");
	return;
    }

    // Map the RSDT physical address to the virtual address (RSDT_VIRT_ADDRESS)
    if (!Paging::map_page(reinterpret_cast<uint32_t*>(0xC0106000),
                          reinterpret_cast<void*>(RSDT_VIRT_ADDRESS),
                          reinterpret_cast<void*>(rsdt_phys_addr),
                          Paging::PAGE_PRESENT | Paging::PAGE_WRITABLE)) {
        printf("Failed to map RSDT!\n");
        return;
    }

    printf("RSDT mapped to virtual address: 0x%x\n", RSDT_VIRT_ADDRESS);
}

// use the RSDP to get the RSDT physical address
uint32_t find_rsdt_address() {
    acpi_rsdp_t* rsdp = reinterpret_cast<acpi_rsdp_t*>(find_rsdp());
    if (rsdp == NULL) {
        printf("RSDP not found!\n");
        return 0;
    }

    // RSDT address is stored in the RSDP
    return rsdp->rsdt_address;  // Physical address of the RSDT
}


// Find the RSDP in the memory
void* find_rsdp() {
    uint8_t* addr = (uint8_t*)0xC0200000;  // Search the mapped virtual BIOS memory area
    uint8_t* end = (uint8_t*)(0xC0200000 + (0x00100000 - 0x000A0000));  // End of the mapped region

    for (uint8_t* ptr = addr; ptr < end; ptr += 16) {
        if (memcmp(ptr, RSDP_SIGNATURE, 8) == 0) {
            return ptr;  // Found RSDP
        }
    }

    return NULL;
}
// Find the MADT in the ACPI tables
void* find_madt(acpi_rsdt_t* rsdt) {
    uint32_t entries = (rsdt->header.length - sizeof(acpi_header_t)) / 4;
    for (uint32_t i = 0; i < entries; i++) {
        acpi_header_t* header = (acpi_header_t*)(uint32_t)rsdt->pointer_to_other_sdt[i];
        // Check for MADT signature
        if (memcmp(header->signature, "APIC", 4) == 0) {
            return (void*)header;  // Found MADT
        }
    }
    return NULL;
}

// Find the I/O APIC base address from the MADT
void* find_ioapic_base_from_madt(void* madt) {
    acpi_madt_t* madt_ptr = (acpi_madt_t*)madt;
    uint8_t* entry = (uint8_t*)madt + sizeof(acpi_madt_t);
    uint8_t* end = (uint8_t*)madt + madt_ptr->header.length;

    while (entry < end) {
        acpi_madt_ioapic_t* madt_entry = (acpi_madt_ioapic_t*)entry;

        if (madt_entry->type == 1) {  // Type 1 is I/O APIC
            acpi_madt_ioapic_t* ioapic_entry = (acpi_madt_ioapic_t*)madt_entry;
            return (void*)(uintptr_t)ioapic_entry->ioapic_address;  // Return I/O APIC base address
        }

        entry += madt_entry->length;  // Move to next entry
    }

    return NULL;  // No I/O APIC entry found
}

void map_bios_area() {
    // Map the BIOS area (0x000A0000 to 0x00100000) into virtual memory
    uint32_t bios_physical_start = 0x000A0000;
    uint32_t bios_physical_end = 0x00100000;
    uint32_t bios_virtual_start = 0xC0200000;  // Arbitrary virtual address to map this region

    for (uint32_t phys = bios_physical_start; phys < bios_physical_end; phys += 0x1000) {
        // Map each page in the BIOS area to the corresponding virtual address
        if (!Paging::map_page(reinterpret_cast<uint32_t*>(0xC0106000),  // Use your page directory
                              reinterpret_cast<void*>(bios_virtual_start + (phys - bios_physical_start)),
                              reinterpret_cast<void*>(phys),
                              Paging::PAGE_PRESENT | Paging::PAGE_WRITABLE)) {
            printf("Failed to map BIOS area at physical address: 0x%08x\n", phys);
            return;
        }
    }
    printf("Mapped BIOS area (0x000A0000 - 0x00100000) to virtual address 0xC0200000\n");
}
