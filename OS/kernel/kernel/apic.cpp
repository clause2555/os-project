#include "kernel/apic.h"
#include "kernel/acpi.h"
#include "stdio.h"
#include "kernel/paging.h"

namespace APIC {

    #define IA32_APIC_BASE_MSR          0x1B
    #define IA32_APIC_BASE_MSR_ENABLE  0x800
    #define APIC_BASE_VIRT              0xC0EE0000  // Virtual address where APIC is mapped
    #define IOAPIC_BASE_VIRT		0xC0EF0000 // virtual address of I/O APIC
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

    void map_ioapic() {
	// RSDT mapped earlier
	acpi_rsdt_t* rsdt = reinterpret_cast<acpi_rsdt_t*>(0xC0200000);

        void* madt = find_madt(rsdt);
        if (madt == NULL) {
            printf("MADT not found!\n");
           return;
        }

        void* ioapic_physical_address = find_ioapic_base_from_madt(madt);
        if (ioapic_physical_address == NULL) {
            printf("I/O APIC not found in MADT!\n");
            return;
        }

        if (!Paging::map_page(reinterpret_cast<uint32_t*>(0xC0106000),
                              reinterpret_cast<void*>(IOAPIC_BASE_VIRT),
                              ioapic_physical_address,
                              Paging::PAGE_PRESENT | Paging::PAGE_WRITABLE)) {
            printf("Failed to map I/O APIC!\n");
            return;
        }

        printf("I/O APIC mapped to virtual address 0x%08x\n", IOAPIC_BASE_VIRT);
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

    uint32_t io_apic_read_reg(uint32_t reg) {
        ioapic_base[IOAPIC_REG_SELECT / 4 ] = reg;
	return ioapic_base[IOAPIC_REG_WINDOW / 4];
    }

    void io_apic_write_reg(uint32_t reg, uint32_t value) {
	ioapic_base[IOAPIC_REG_SELECT / 4] = reg;
	ioapic_base[IOAPIC_REG_WINDOW / 4] = value;
    }

    // Enable I/O APIC
    void enable_io_apic() {
        // Typically, no specific enable is needed beyond configuring the redirection table.
        // However, ensure that the spurious interrupt vector is set and enabled.

        // Read the current value
        uint32_t spurious_vector = io_apic_read_reg(0xF);
        spurious_vector |= 0x100; // Enable the I/O APIC (bit 8)
        spurious_vector |= 0xFF;  // Set the spurious interrupt vector to 0xFF
        io_apic_write_reg(0xF, spurious_vector);
    }

    // Unmask and set IRQ1 to vector 33 in I/O APIC
    void unmask_io_apic_irq(int irq, uint8_t vector) {
        // Each redirection entry is 2 registers: low and high
        // Entry 0 corresponds to IRQ0, Entry 1 to IRQ1, etc.
        // Each entry occupies 16 bytes: low (bits 0-31) and high (bits 32-63)

        uint32_t redirection_reg_low = irq * 2;
        uint32_t redirection_reg_high = irq * 2 + 1;

        // Read the current redirection entry
        uint32_t lower = io_apic_read_reg(redirection_reg_low);
        uint32_t upper = io_apic_read_reg(redirection_reg_high);

        // Set the vector
        lower = (lower & ~0xFF) | vector;

        // Clear the mask bit (bit 16) to unmask
        lower &= ~(1 << 16);

        // Set the delivery mode to fixed (bits 8-10 = 000)
        lower &= ~(0x7 << 8); // Clear bits 8-10

        // Set the destination to this CPU's APIC ID
        // Assuming single CPU, set to 0
        upper = 0;

        // Write back the modified redirection entry
        io_apic_write_reg(redirection_reg_low, lower);
        io_apic_write_reg(redirection_reg_high, upper);
    }

    // Initialize I/O APIC
    void init_io_apic() {
	map_ioapic();    
        enable_io_apic();

        // Unmask IRQ1 and set it to vector 33
        unmask_io_apic_irq(1, 33);
    }

} // namespace APIC
