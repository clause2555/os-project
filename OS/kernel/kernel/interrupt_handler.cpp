// interrupt_handler.cpp
#include "stdio.h"
#include "kernel/idt.h"
#include <stdint.h>

extern "C" void (*interrupt_handlers[256])();

extern "C" void (*interrupt_handlers_with_error_code[256])(uint32_t);

// Common C++ interrupt handler function
extern "C" void interrupt_handler_c(uint32_t interrupt_number) {
    if (interrupt_number < 256 && interrupt_handlers[interrupt_number]) {
        interrupt_handlers[interrupt_number]();
    } else {
        // Handle unknown interrupt
        // For example, print an error message or halt
	printf("Unhandled Interrupt: %u\n", interrupt_number);
	while (1) {
		asm volatile ("hlt");
	}
    }
}

extern "C" void interrupt_handler_c_with_error_code(uint32_t interrupt_number, uint32_t error_code) {
    	if (interrupt_number < 256 && interrupt_handlers[interrupt_number]) {
        // Assuming your handlers are adjusted to accept an error code
    	    interrupt_handlers_with_error_code[interrupt_number](error_code);
    	} else {
        	printf("Unhandled Interrupt: %u, Error Code: %u\n", interrupt_number, error_code);
        	while (1) {
            		asm volatile ("hlt");
        	}	
    }
}

