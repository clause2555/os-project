#ifndef APIC_H
#define APIC_H

#include <stdint.h>

namespace APIC {

    bool check_apic_support();
    void enable_apic();
    uint32_t apic_read(uint32_t reg_offset);
    void apic_write(uint32_t reg_offset, uint32_t value);
    void disable_pic();
    void send_eoi();
    void setup_apic_timer(uint32_t initial_count, uint32_t divide_config);
    void send_ipi(uint32_t apic_id, uint8_t vector);

    // I/O functions
    void map_ioapic();
    void enable_io_apic();
    void unmask_io_apic_irq(int irq, uint8_t vector);
    void init_io_apic();

    void configure_ioapic_irq(uint8_t irq, uint8_t vector);
    uint32_t ioapic_read(uint32_t reg);
    void ioapic_write(uint32_t, uint32_t value);

    void inspect_ioapic_registers();
} //APIC

#endif // APIC_H

