#include "kernel/apic.h"
#include "kernel/acpi.h"
#include "stdio.h"


namespace APIC {

    #define IA32_APIC_BASE_MSR          0x1B
    #define IA32_APIC_BASE_MSR_ENABLE  0x800
    #define APIC_BASE_VIRT              0xC0FEE000  // Virtual address where APIC is mapped
    #define IOAPIC_BASE_VIRT		0xC0FEC000 // virtual address of I/O APIC
    #define APIC_REG(offset)            *((volatile uint32_t *)(APIC_BASE_VIRT + offset))

    // Local APIC register offsets
    #define LAPIC_ID_REG                0x020
    #define LAPIC_VERSION_REG           0x030
    #define LAPIC_TPR                   0x080  // Task Priority Register
    #define LAPIC_EOI                   0x0B0  // End of Interrupt Register
    #define LAPIC_SPURIOUS_VECTOR_REG   0x0F0  // Spurious Interrupt Vector Register
    #define LAPIC_ICR_LOWER             0x300  // Interrupt Command Register (Lower)
    #define LAPIC_ICR_UPPER             0x310  // Interrupt Command Register (Upper)
    #define LAPIC_LVT_TIMER             0x320  // Local Vector Table Timer Register
    #define LAPIC_LVT_LINT0             0x350  // Local Interrupt 0 Register
    #define LAPIC_LVT_LINT1             0x360  // Local Interrupt 1 Register
    #define LAPIC_INITIAL_COUNT         0x380  // Initial Count Register (for Timer)
    #define LAPIC_CURRENT_COUNT         0x390  // Current Count Register (for Timer)
    #define LAPIC_DIVIDE_CONFIG         0x3E0  // Divide Configuration Register

    #define IOAPIC_REG_SELECT		0x00
    #define IOAPIC_REG_WINDOW		0x10
    #define IOAPIC_MAX_REDIRECTION	0x01 // test redirection entry for irq1

    volatile uint32_t* lapic_base = (volatile uint32_t*)APIC_BASE_VIRT;
    volatile uint32_t* ioapic_base = (volatile uint32_t*)IOAPIC_BASE_VIRT;

    static inline void outb(uint16_t port, uint8_t val) {
        asm volatile ("outb %0, %1" : : "a"(val), "Nd"(port));
    }

    static inline void memory_barrier() {
        asm volatile("mfence" ::: "memory");
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

        // Set the Spurious Interrupt Vectory Register to 0xFF and enable APIC
        uint32_t spurious_value = lapic_base[LAPIC_SPURIOUS_VECTOR_REG / 4];
        spurious_value |= 0x100; // enable (bit 8)
        spurious_value |= 0xFF; // set vector num for spurious interrupts
        lapic_base[LAPIC_SPURIOUS_VECTOR_REG / 4] = spurious_value;

        configure_ioapic_irq(1, 0x21);
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
        apic_write(LAPIC_DIVIDE_CONFIG, divide_config);           // Divide Configuration Register
        apic_write(LAPIC_INITIAL_COUNT, initial_count);           // Initial Count Register
        apic_write(LAPIC_LVT_TIMER, 0x20 | 0x20000);         // LVT Timer Register, vector 0x20, periodic mode
    }

      // Send an interrupt to another processor using ICR
    void send_ipi(uint32_t apic_id, uint8_t vector) {
        // Write APIC ID to the upper ICR register
        apic_write(LAPIC_ICR_UPPER, apic_id << 24);

        // Write the vector and delivery mode (fixed) to the lower ICR register
        apic_write(LAPIC_ICR_LOWER, vector);
    }

    // Function to configure IOAPIC for a specific IRQ
    void configure_ioapic_irq(uint8_t irq, uint8_t vector) {
        uint32_t redirection_reg = irq * 2;  // Redirection register index

        // Step 1: Configure RedLow with mask
        uint32_t redir_low = vector | (0x00 << 8) | (1 << 16); // Vector | Delivery Mode | Mask
        ioapic_write(redirection_reg, redir_low);

        // Step 2: Configure RedHigh
        uint32_t redir_high = 0x00000000; // Destination CPU 0, etc.
        ioapic_write(redirection_reg + 1, redir_high);

        // Step 3: Unmask the interrupt by clearing the mask bit
        redir_low &= ~(1 << 16);
        ioapic_write(redirection_reg, redir_low);

        // Optional: Read back to verify
        uint32_t read_redir_low = ioapic_read(redirection_reg);
        uint32_t read_redir_high = ioapic_read(redirection_reg + 1);

        printf("I/O APIC pin %d (IRQ%d) configured for keyboard with vector 0x%x.\n", irq, irq, vector);
        printf("RedLow: 0x%x, RedHigh: 0x%x\n", read_redir_low, read_redir_high);
    }

    // Function to read from the I/O APIC register
    uint32_t ioapic_read(uint32_t reg) {
        volatile uint32_t* ioregsel = (volatile uint32_t*)(IOAPIC_BASE_VIRT + IOAPIC_REG_SELECT);
        volatile uint32_t* iowin = (volatile uint32_t*)(IOAPIC_BASE_VIRT + IOAPIC_REG_WINDOW);

        *ioregsel = reg;      // Select the register
        memory_barrier();     // Ensure the write completes
        return *iowin;        // Read the value
    }

    // Function to write to the I/O APIC register
    void ioapic_write(uint32_t reg, uint32_t value) {
        volatile uint32_t* ioregsel = (volatile uint32_t*)(IOAPIC_BASE_VIRT + IOAPIC_REG_SELECT);
        volatile uint32_t* iowin = (volatile uint32_t*)(IOAPIC_BASE_VIRT + IOAPIC_REG_WINDOW);

        *ioregsel = reg;      // Select the register
        memory_barrier();     // Ensure the write completes
        *iowin = value;       // Write the value
        memory_barrier();     // Ensure the write completes
    }

    void inspect_ioapic_registers() {
        printf("I/O APIC ID Register: 0x%x\n", ioapic_read(0x00));        // Read I/O APIC ID
        printf("I/O APIC Version Register: 0x%x\n", ioapic_read(0x01));   // Read I/O APIC version
        // Read the redirection table entries (pins 0 to 23)
        for (uint32_t pin = 0; pin < 24; pin++) {
            uint32_t redirection_reg_low = 0x10 + (pin * 2);  // Low part of redirection entry
            uint32_t redirection_reg_high = 0x10 + (pin * 2) + 1;  // High part of redirection entry
            printf("Pin %u: redirection table low = 0x%x, high = 0x%x\n", pin,
                ioapic_read(redirection_reg_low), ioapic_read(redirection_reg_high));
        }
    }
} // namespace APIC
