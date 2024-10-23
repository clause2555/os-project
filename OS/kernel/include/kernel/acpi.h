// acpi.h

#ifndef ACPI_H
#define ACPI_H

#include <stdint.h>
#include <stddef.h>

namespace ACPI {

    struct RSDP_t {
        char Signature[8];
        uint8_t Checksum;
        char OEMID[6];
        uint8_t Revision;
        uint32_t RsdtAddress;

	// valid on if revisoin >= 2
	uint32_t Length;
	uint64_t XsdtAddress;
	uint8_t ExtendedChecksum;
	uint8_t Reserved[3];
    } __attribute__((packed));

    struct ACPISDTHeader {
        char Signature[4];
        uint32_t Length;
        uint8_t Revision;
        uint8_t Checksum;
        char OEMID[6];
        char OEMTableID[8];
        uint32_t OEMRevision;
        uint32_t CreatorID;
        uint32_t CreatorRevision;
    } __attribute__((packed));

    struct MADT {
        ACPISDTHeader header;
	uint32_t local_apic_address;
	uint32_t flags;
	// variable-length entries
    } __attribute__((packed));

    struct MADTEntryHeader {
        uint8_t type;
        uint8_t length;
    } __attribute__((packed));

    struct IOAPICEntry {
        MADTEntryHeader header;
        uint8_t io_apic_id;
        uint8_t reserved;
        uint32_t io_apic_address;
        uint32_t global_system_interrupt_base;
    } __attribute__((packed));

    struct MADTEntry {
        MADTEntryHeader header;
        // Union of possible entries
    } __attribute__((packed));

    struct IOAPICInfo {
        uint8_t id;
        uint32_t address;
        uint32_t gsi_base;
    };

    RSDP_t* find_rsdp();

    bool validate_rsdp_checksum(uint8_t* data, size_t length);

    bool validate_rsdp_extended(RSDP_t* rsdp);

    ACPISDTHeader* find_rsdt(RSDP_t* rsdp);

    ACPISDTHeader* find_sdt(RSDP_t* rsdp);

    bool validate_sdt_checksum(ACPISDTHeader* sdt);

    bool validate_rsdt_checksum(ACPISDTHeader* rsdt);

    MADT* find_madt(ACPISDTHeader* rsdt);

    void parse_madt(uint8_t* madt_ptr, size_t madt_length);

    bool configure_ioapic_for_keyboard(IOAPICInfo* ioapic, uint32_t gsi, uint8_t vector);

    void setup_keyboard_ioapic();

    void initialize_acpi_and_ioapic();

    void disable_ps2_ports();

    void flush_output_buffer();

    void configure_ps2_controller();

    bool perform_controller_self_test();

    bool check_dual_channel_ps2();

    bool test_ps2_ports();

    void enable_ps2_ports();

    bool reset_ps2_devices();

    void initialize_ps2_controller();
}

#endif  // ACPI_H

