#include <stdio.h>
#include "kernel/idt.h"
#include "kernel/pic.h"
#include <kernel/tty.h>
#include "kernel/apic.h"
#include "kernel/multiboot.h"
//#include "kernel/cpuid.h"
#include "kernel/keyboard.h"
#include "kernel/acpi.h"
#include "kernel/memory.h"
#include "kernel/vmemory.h"
#include "kernel/paging.h"

extern "C" void kernel_main(uint32_t magic, multiboot_info_t* mb_info) {
	terminal_initialize();

	pmm_init(mb_info);

	vma_init();

	idt_init();

	//printf("THIS IS A TEST");

	// Map FEE00000 to a virtual address in the higher-half
    map_page((void*)0xC0FEE000, (void*)0xFEE00000, PAGE_PRESENT | PAGE_RW | CACHE_DISABLE);
    // Map FEC00000 to a virtual address in the higher-half
    map_page((void*)0xC0FEC000, (void*)0xFEC00000, PAGE_PRESENT | PAGE_RW | CACHE_DISABLE);
    // Map 1FFE0000-1FFE1000 to a virtual address in the higher-half
	map_page((void*)0xC01F0000, (void*)0x1FFE0000, PAGE_PRESENT | PAGE_RW);
    map_page((void*)0xC01F1000, (void*)0x1FFE1000, PAGE_PRESENT | PAGE_RW);

    APIC::enable_apic();
	APIC::disable_pic();
	//ACPI::initialize_acpi_and_ioapic();
	ACPI::initialize_ps2_controller();
	//APIC::setup_apic_timer(1000, 0x3);

	APIC::inspect_ioapic_registers();

	printf("Hello, c++ kernel World!\n");

	asm volatile("sti");

	//asm volatile("int $0x21"); // keryboard handler force test

	while (1) {
		handle_keyboard_input();
		asm volatile("hlt");
	}
}
