// idt.cpp
#include "kernel/idt.h"
#include <string.h>

// Array of 256 IDT entries
IDTEntry idt[256];

// IDT pointer
IDTPointer idt_ptr;

// Array of interrupt handler function pointers
void (*interrupt_handlers[256])();

// Forward declarations for assembly stubs
extern "C" void interrupt_stub();

// Initialize the IDT
extern "C" void init_idt() {
    // Clear the IDT
    memset(&idt, 0, sizeof(IDTEntry) * 256);
    memset(&interrupt_handlers, 0, sizeof(void*) * 256);

    // Set up each IDT entry to point to the interrupt_stub
    for (int i = 0; i < 256; i++) {
        // Assuming interrupt_stub is a generic handler for all interrupts
        uint32_t handler_address = (uint32_t)&interrupt_stub;
        idt[i].base_low    = handler_address & 0xFFFF;
        idt[i].base_high   = (handler_address >> 16) & 0xFFFF;
        idt[i].selector     = 0x08; // Kernel code segment selector (from GDT)
        idt[i].zero         = 0;
        idt[i].flags        = 0x8E; // Present, Ring 0, 32-bit interrupt gate
    }

    // Set the IDT pointer
    idt_ptr.limit = sizeof(IDTEntry) * 256 - 1;
    idt_ptr.base  = (uint32_t)&idt;

    // Load the IDT
    idt_load(&idt_ptr);
}

// Register an interrupt handler
extern "C" void register_interrupt_handler(uint8_t interrupt, void (*handler)()) {
    if (interrupt >= 256)
        return; // Invalid interrupt number
    interrupt_handlers[interrupt] = handler;
}

// Example handler function (can be defined in your kernel code)
//extern "C" void isr0_handler();

// Interrupt handler stub called by assembly
//void interrupt_stub() {
    // Get the interrupt number from the stack (assuming stack layout)
//    uint32_t interrupt_number;
//    asm volatile ("movl %%eax, %0" : "=r"(interrupt_number));
//    if (interrupt_number < 256 && interrupt_handlers[interrupt_number]) {
//        interrupt_handlers[interrupt_number]();
//    }
    // Send End of Interrupt (EOI) to PIC (assuming PIC is set up)
    // You need to implement the EOI sending here
//}

