// handlers.cpp
#include "kernel/idt.h"
#include <stdint.h>

// Example: Divide by Zero Exception Handler
extern "C" void isr0_handler() {
    // Implement your handler logic here
    // For example, you can print an error message and halt

    // Placeholder: Infinite loop
    while (1) {
        asm volatile ("hlt");
    }
}

// Example: Timer Interrupt Handler (IRQ0)
extern "C" void irq0_handler() {
    // Handle system timer tick
    // For example, increment a tick count or switch tasks

    // Send EOI to PIC
    asm volatile ("mov $0x20, %al\n\t"
                  "out %al, $0x20");

    // Placeholder: Return from interrupt
}

