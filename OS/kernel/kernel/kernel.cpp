#include <stdio.h>
#include "kernel/idt.h"
#include "kernel/pic.h"
#include <kernel/tty.h>

extern "C" unsigned int read_cr0() {
    unsigned int cr0;
    asm volatile ("mov %%cr0, %0" : "=r"(cr0));
    return cr0;
}

extern "C" unsigned int read_cr3() {
	unsigned int cr3;
	asm volatile ("mov %%cr3, %0" : "=r"(cr3));
	return cr3;
}

extern "C" void check_paging() {
    unsigned int cr0 = read_cr0();
    unsigned int cr3 = read_cr3();
    if (cr0 & 0x80000000) {
        printf("Paging is active.\n");
	printf("cr0: 0x%x\n", cr0);
        printf("cr3: 0x%x\n", cr3);	
    } else {
        printf("Paging is NOT active.\n");
    }
}

static inline void outb(uint16_t port, uint8_t val) {
	asm volatile ("outb %0, %1" : : "a"(val), "Nd"(port));
}

void init_timer(uint32_t frequency) {
	uint32_t divisor = 1193180 / frequency;

	outb(0x43, 0x36);

	outb(0x40, (uint8_t)(divisor & 0xFF));
	outb(0x40, (uint8_t)((divisor >> 8) & 0xFF));
}

void wait() {
	for (volatile int i = 0; i < 100000000; ++i);
}

extern "C" void kernel_main(void) {
	terminal_initialize();

	check_paging();

	idt_init();

	pic_remap(32, 40);

	init_timer(19);

	//asm volatile ("sti");

	//asm volatile ("int $13"); // manually trigger divide by zero
	
	printf("Hello, c++ kernel World!\n");

	while (1) {
		asm volatile("hlt");
	}
}
