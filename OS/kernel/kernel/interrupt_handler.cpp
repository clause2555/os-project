// interrupt_handler.cpp
#include "kernel/idt.h"
#include <stdint.h>

// Example handler for Divide by Zero Exception

extern void (*interrupt_handlers[256])();

// Common C++ interrupt handler function
extern "C" void interrupt_handler_c(uint32_t interrupt_number) {
    if (interrupt_number < 256 && interrupt_handlers[interrupt_number]) {
        interrupt_handlers[interrupt_number]();
    } else {
        // Handle unknown interrupt
        // For example, print an error message or halt
	while (1) {
		asm volatile ("hlt");
	}
    }
}

