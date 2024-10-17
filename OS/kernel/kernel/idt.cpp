#include <string.h>
#include "kernel/idt.h"
#include "kernel/keyboard.h"

// Create an aligned array of IDT entries
__attribute__((aligned(0x10)))
static idt_entry_t idt[IDT_MAX_DESCRIPTORS];

// Define an IDTR structure
static idtr_t idtr;

// Set the ISR stubs table in assembly (will be defined in interrupts.S)
extern void* isr_stub_table[];

// Set the IRQ stubs table in assembly (defined in interrups.S)
extern void* irq_stub_table[];

// Def to keyboard handler
extern "C" void keyboard_handler();

extern "C" void idt_set_descriptor(uint8_t vector, void* isr, uint8_t flags) {
    idt_entry_t* descriptor = &idt[vector];

    descriptor->isr_low        = (uint32_t)isr & 0xFFFF;
    descriptor->kernel_cs      = 0x08; // Your kernel code segment selector
    descriptor->attributes     = flags;
    descriptor->isr_high       = (uint32_t)isr >> 16;
    descriptor->reserved       = 0;
}

extern "C" void idt_init() {
    // Set up the IDT pointer
    idtr.base = (uintptr_t)&idt[0];
    idtr.limit = (uint16_t)sizeof(idt_entry_t) * IDT_MAX_DESCRIPTORS - 1;

    // Load exception handlers (stubs for first 32 interrupts)
    for (uint8_t vector = 0; vector < 32; vector++) {
        idt_set_descriptor(vector, isr_stub_table[vector], 0x8E);  // Use 0x8E for present, DPL 0, 32-bit interrupt gate
    }

    for (uint8_t vector = 0; vector < 16; vector++) {
        idt_set_descriptor(32 + vector, irq_stub_table[vector], 0x8E);
    }

    //idt_set_descriptor(33, (void*)keyboard_handler, 0x8E);

    // Load the new IDT and enable interrupts
    __asm__ volatile ("lidt %0" : : "m"(idtr)); // Load IDT
    __asm__ volatile ("sti");                   // Set the interrupt flag
}
