// acpi.h

#ifndef ACPI_H
#define ACPI_H

#include <stdint.h>

// ACPI Header structure
typedef struct {
    char signature[4];
    uint32_t length;
    uint8_t revision;
    uint8_t checksum;
    char oem_id[6];
    char oem_table_id[8];
    uint32_t oem_revision;
    uint32_t creator_id;
    uint32_t creator_revision;
} __attribute__((packed)) acpi_header_t;

// ACPI RSDT structure
typedef struct {
    acpi_header_t header;
    uint32_t pointer_to_other_sdt[];
} __attribute__((packed)) acpi_rsdt_t;

// ACPI MADT structure
typedef struct {
    acpi_header_t header;
    uint32_t lapic_address;
    uint32_t flags;
} __attribute__((packed)) acpi_madt_t;

// ACPI MADT I/O APIC entry structure
typedef struct {
    uint8_t type;
    uint8_t length;
    uint8_t ioapic_id;
    uint8_t reserved;
    uint32_t ioapic_address;
    uint32_t gsi_base;
} __attribute__((packed)) acpi_madt_ioapic_t;

// RSDP structure (ACPI 1.0 version)
struct acpi_rsdp_t {
    char signature[8];        // "RSD PTR "
    uint8_t checksum;         // Checksum for the first 20 bytes
    char oem_id[6];           // OEM Identifier
    uint8_t revision;         // ACPI version (0 for 1.0, >=2 for ACPI 2.0+)
    uint32_t rsdt_address;    // Physical address of the RSDT
};

bool is_rsdp(acpi_rsdp_t* rsdp);
void map_rsdt();
uint32_t find_rsdt_address();
void* find_rsdp();
void* find_madt(acpi_rsdt_t* rsdt);
void* find_ioapic_base_from_madt(void* madt);
void map_bios_area();

#endif  // ACPI_H

