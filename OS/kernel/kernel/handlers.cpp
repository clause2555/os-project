// handlers.cpp
#include "kernel/idt.h"
#include <stdint.h>
#include <stdio.h>
#include "kernel/apic.h"
#include "kernel/keyboard.h"

static inline void outb(uint16_t port, uint8_t val) {
        asm volatile ("outb %0, %1" : : "a"(val), "Nd"(port));
}

extern "C" __attribute__((noreturn)) void exception_handler(void) {
    __asm__ volatile ("cli; hlt"); // Completely hangs the computer
}

//extern "C" void irq_handler(void) {
    // acknowledge the interupt to the PIC
    //outb(0x20, 0x20); // send end of interrupt to PIC
    // handle IRQs here
    // TODO add in logic for determing whether to use PIC or APIC 
//	APIC::send_eoi();
//}


extern "C" void irq_handler(int irq_number) {
    // Acknowledge the interrupt to the PIC or APIC
    APIC::send_eoi(); 

    // Handle the specific IRQs
    switch (irq_number) {
        case 1:
            // Call the keyboard handler
            keyboard_handler();
            break;
        // Handle other IRQs here as needed
        default:
            // Unhandled IRQ, you might want to log or handle spurious IRQs
            break;
    }
}
