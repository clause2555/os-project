#include <stdio.h>
#include "kernel/idt.h"
#include "kernel/pic.h"
#include <kernel/tty.h>

extern "C" void isr0_handler();
extern "C" void irq0_handler();

extern "C" void kernel_main(void) {
	terminal_initialize();
	printf("Hello, c++ kernel World!\n");
	// init the IDT
	//
	
	printf("Remapping PIC ...\n");
	pic_remap(32, 40);
	printf("PIC Remapped.\n");

	printf("init IDI ...\n");
	init_idt();
	printf("IDT init complete\n");

	// register interupt handlers
	printf("Registering Interrupt Handlers ...\n");
	register_interrupt_handler(0, isr0_handler); // divide by zero
	register_interrupt_handler(32, irq0_handler);
	printf("Done registering Interrupt Handlers\n");
	
	// other handlers as needed
	//
	// enable interupts
	//
	printf("Enabling interrupts");
	asm volatile ("sti");

	while (1) {
		asm volatile ("hlt");
	}
}
