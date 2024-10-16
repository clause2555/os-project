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

} //APIC

#endif // APIC_H

