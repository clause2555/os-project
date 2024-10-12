// idt.h
#ifndef IDT_H
#define IDT_H

#include <stdint.h>

// Structure of an IDT entry
struct IDTEntry {
    uint16_t base_low;    // Lower 16 bits of handler function address
    uint16_t selector;    // Kernel segment selector
    uint8_t  zero;        // Reserved, set to 0
    uint8_t  flags;       // Type and attributes
    uint16_t base_high;   // Upper 16 bits of handler function address
} __attribute__((packed));

// Structure of the IDT pointer
struct IDTPointer {
    uint16_t limit;
    uint32_t base;
} __attribute__((packed));

// Function to initialize the IDT
extern "C" void init_idt();

// Function to handle an interrupt (defined in assembly)
extern "C" void idt_load(IDTPointer*);

// Function to register an interrupt handler
extern "C" void register_interrupt_handler(uint8_t interrupt, void (*handler)());

//extern "C" void isr0_handler();

//extern "C" void interrupt_handler_c();

#endif // IDT_H

