#include <stdio.h>
#include "kernel/idt.h"
#include "kernel/pic.h"
#include <kernel/tty.h>
#include "kernel/apic.h"
#include "kernel/multiboot.h"
#include "kernel/memory.h"
#include "kernel/paging.h"
#include "kernel/cpuid.h"

static inline void outb(uint16_t port, uint8_t val) {
	asm volatile ("outb %0, %1" : : "a"(val), "Nd"(port));
}

void init_timer(uint32_t frequency) {
	uint32_t divisor = 1193180 / frequency;

	outb(0x43, 0x36);

	outb(0x40, (uint8_t)(divisor & 0xFF));
	outb(0x40, (uint8_t)((divisor >> 8) & 0xFF));
}

extern "C" void kernel_main(uint32_t magic, multiboot_info_t* mb_info) {
	terminal_initialize();


	g_multiboot_info = mb_info;

	initialize_memory_manager();

	uint32_t* page_dir_phys = reinterpret_cast<uint32_t*>(0x106000);

	uint32_t* page_table_phys = reinterpret_cast<uint32_t*>(0x107000);

	Paging::init_paging(page_dir_phys, page_table_phys);

	idt_init();

	if (CPUID::cpuid(1).edx & (1 << 9)) { // APIC is bit 9 in EDX
        	if (!Paging::map_page(reinterpret_cast<uint32_t*>(0xC0106000), reinterpret_cast<void*>(0xC0EE0000), reinterpret_cast<void*>(0xFEE00000), Paging::PAGE_PRESENT | Paging::PAGE_WRITABLE)) {
            		asm volatile ("int $0"); // no console init yet, testing for failuring with divby0
        	} else {
            		// Initialize APIC
            		APIC::enable_apic();
			APIC::disable_pic();
			APIC::setup_apic_timer(1000, 0x3);
       		}
    	} else {
    		pic_remap(32, 40);
		init_timer(19);
	}

	printf("Hello, c++ kernel World!\n");

	while (1) {
		asm volatile("hlt");
	}
}
