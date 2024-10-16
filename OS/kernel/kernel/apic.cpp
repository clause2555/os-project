#include "kernel/apic.h"

namespace APIC {

    #define IA32_APIC_BASE_MSR          0x1B
    #define IA32_APIC_BASE_MSR_ENABLE  0x800
    #define APIC_BASE_VIRT              0xC0EE0000  // Virtual address where APIC is mapped
    #define APIC_REG(offset)            *((volatile uint32_t *)(APIC_BASE_VIRT + offset))

    static inline void outb(uint16_t port, uint8_t val) {
        asm volatile ("outb %0, %1" : : "a"(val), "Nd"(port));
    }

    // CPUID instruction wrapper
    void cpuid(uint32_t eax, uint32_t *ebx, uint32_t *ecx, uint32_t *edx) {
        asm volatile ("cpuid"
                      : "=b"(*ebx), "=c"(*ecx), "=d"(*edx)
                      : "a"(eax));
    }

    // Check if the CPU supports APIC
    bool check_apic_support() {
        uint32_t eax, ebx, ecx, edx;
        cpuid(1, &ebx, &ecx, &edx);
        return edx & (1 << 9); // APIC is bit 9 in EDX
    }

    // Write to MSR
    inline void write_msr(uint32_t msr, uint32_t eax, uint32_t edx) {
        asm volatile ("wrmsr" : : "c"(msr), "a"(eax), "d"(edx));
    }

    // Read from MSR
    inline void read_msr(uint32_t msr, uint32_t *eax, uint32_t *edx) {
        asm volatile ("rdmsr" : "=a"(*eax), "=d"(*edx) : "c"(msr));
    }

    // Enable APIC
    void enable_apic() {
        uint32_t eax, edx;
        read_msr(IA32_APIC_BASE_MSR, &eax, &edx);
        eax |= IA32_APIC_BASE_MSR_ENABLE;
        write_msr(IA32_APIC_BASE_MSR, eax, edx);
    }  

    // Read from APIC register
    uint32_t apic_read(uint32_t reg_offset) {
        return APIC_REG(reg_offset);
    }

    // Write to APIC register
    void apic_write(uint32_t reg_offset, uint32_t value) {
        APIC_REG(reg_offset) = value;
    }  

    // Disable the PIC (mask all interrupts)
    void disable_pic() {
        outb(0x21, 0xFF); // PIC1 data port
        outb(0xA1, 0xFF); // PIC2 data port
    }

    // Send End of Interrupt (EOI) to APIC
    void send_eoi() {
        apic_write(0xB0, 0x0); // EOI register offset is 0xB0
    }  

    // Set up APIC timer
    void setup_apic_timer(uint32_t initial_count, uint32_t divide_config) {
        apic_write(0x3E0, divide_config);           // Divide Configuration Register
        apic_write(0x380, initial_count);           // Initial Count Register
        apic_write(0x320, 0x20 | 0x20000);         // LVT Timer Register, vector 0x20, periodic mode
    }
} // namespace APIC
