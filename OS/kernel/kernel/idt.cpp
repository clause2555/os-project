#include <string.h>
#include "kernel/idt.h"

// Define 256 IDT entries and the IDT pointer
IDTEntry idt_entries[256] __attribute__((aligned(16)));
IDTPointer idt_ptr;

void (*interrupt_handlers[256])() = { nullptr };
void (*interrupt_handlers_with_error_code[256])(uint32_t) = { nullptr };

// Forward declarations for interrupt handlers
extern "C" void interrupt_stub();
extern "C" void interrupt_stub_error();
extern "C" void isr0_stub();
extern "C" void irq0_stub();
extern "C" void isr14_stub();

// Extern functions for C interrupt handlers
extern "C" void isr0_handler();
extern "C" void irq0_handler();
extern "C" void isr14_handler(uint32_t error_code);

extern "C" void register_interrupt_handler_with_error_code(uint8_t interrupt, void (*handler)(uint32_t)) {
    interrupt_handlers_with_error_code[interrupt] = handler;
}

// Load the IDT pointer into %eax for assembly
extern "C" void idt_load(IDTPointer* idt_ptr) {
    asm volatile ("lidt (%0)" : : "r"(idt_ptr));
}

// Register a handler for a specific interrupt
void register_interrupt_handler(uint8_t interrupt, void (*handler)()) {
    idt_entries[interrupt].base_low = ((uint32_t)handler) & 0xFFFF;
    idt_entries[interrupt].base_high = ((uint32_t)handler >> 16) & 0xFFFF;
    idt_entries[interrupt].selector = 0x08; // Kernel code segment selector
    idt_entries[interrupt].zero = 0;
    idt_entries[interrupt].flags = 0x8E; // Present, Ring 0, 32-bit interrupt gate
}

// Initialize the IDT with default handlers
void init_idt() {
    memset(idt_entries, 0, sizeof(IDTEntry) * 256);

    // Set up specific handlers
    register_interrupt_handler(0, isr0_stub);     // Divide by zero
    register_interrupt_handler(14, isr14_stub);   // Page fault
    register_interrupt_handler(32, irq0_stub);    // Timer IRQ

    // Set up the IDT pointer and load it
    idt_ptr.limit = sizeof(IDTEntry) * 256 - 1;
    idt_ptr.base = (uint32_t)&idt_entries;
    idt_load(&idt_ptr);
}

