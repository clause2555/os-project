// handlers.cpp
#include "kernel/idt.h"
#include <stdint.h>
#include <stdio.h>

// Example: Divide by Zero Exception Handler
extern "C" void isr0_handler() {
    printf("Divide by Zero Exception (ISR0)\n");
    while (1) {
        asm volatile ("hlt");
    }
}

// Example: Debug Exception Handler (ISR1)
extern "C" void isr1_handler() {
    printf("Debug Exception (ISR1)\n");
    while (1) {
        asm volatile ("hlt");
    }
}

// Double Fault Handler
extern "C" void isr8_handler(uint32_t error_code) {
    printf("Double Fault occured! Error Code: %u\n", error_code);
    while (1) {
        asm volatile ("hlt");
    }
}

// General Protection Fault Handler
extern "C" void isr13_handler(uint32_t error_code) {
    printf("General Protection Fault! Error Code: %u\n", error_code);
    while (1) {
        asm volatile ("hlt");
    }
}

// Page fault handler
extern "C" void isr14_handler(uint32_t error_code) {
    uint32_t faulting_address;
    // Get the faulting address from CR2 register
    asm volatile("mov %%cr2, %0" : "=r" (faulting_address));

    printf("Page Fault occurred at address: %p\n", (void*)faulting_address);
    printf("Error Code: %u\n", error_code);

    // Decode error code
    if (!(error_code & 0x1)) {
        printf("Page not present.\n");
    }
    if (error_code & 0x2) {
        printf("Write fault.\n");
    } else {
        printf("Read fault.\n");
    }
    if (error_code & 0x4) {
        printf("User-mode fault.\n");
    } else {
        printf("Kernel-mode fault.\n");
    }
    if (error_code & 0x8) {
        printf("Reserved bits were overwritten.\n");
    }
    if (error_code & 0x10) {
        printf("Instruction fetch fault.\n");
    }

    // Halt the CPU
    while (1) {
        asm volatile("hlt");
    }
}


// Example: Timer Interrupt Handler (IRQ0)
extern "C" void irq0_handler() {
    printf("Timer Interrupt (IRQ0)\n");

    // Send EOI to PIC
    asm volatile ("movb $0x20, %al; outb %al, $0x20");
}

