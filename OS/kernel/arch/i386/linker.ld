/* The bootloader will look at this image and start execution at the symbol
   designated at the entry point. */
ENTRY(_start)

/* Tell where the various sections of the object files will be put in the final
   kernel image. */
SECTIONS
{
	. = 0x00100000;
	/* The kernel will live at 3GB + 1MB in the virtual address space, */
	/* which will be mapped to 1MB in the physcial address space. */
	/* Note that we page-align the sections. */

	_kernel_start = .;
	.multiboot.data : {
		*(.multiboot.data)
	}

	.multiboot.text : {
		*(.multiboot.text)
	}

	/*GDT AND TSS */
	.gdt : ALIGN(8) {
		*(.gdt)
	}

	.gdt_ptr : ALIGN(8) {
		*(.gdt_ptr)
	}

	/* IDT Section */
	.idt : ALIGN(8) {
		*(.idt)
	}

	.tss : ALIGN(8) {
		tss_start = ABSOLUTE(.);
		*(.tss)
		tss_end = ABSOLUTE(.);
	}

	/* calc tss limit and base address parts */
	tss_limit = tss_end - tss_start -1;
	tss_base_low = tss_start & 0xFFFF;
	tss_base_mid = (tss_start >> 16) & 0xFF;
	tss_base_high = (tss_start >> 24) & 0xFF;

	. += 0xC0000000;
	/* Add a symbool that indicates the start address of the kernel */
	.text ALIGN(4K) : AT (ADDR (.text) - 0xC0000000)
	{
		*(.text)
	}
	.rodata ALIGN(4K) : AT (ADDR (.rodata) - 0xC0000000)
	{
		*(.rodata)
	}
	.data ALIGN(4K) : AT (ADDR (.data) - 0xC0000000)
	{
		*(.data)
	}
	.bss ALIGN(4K) : AT (ADDR (.bss) - 0xC0000000)
	{
		*(COMMON)
		*(.bss)
		*(.bootstrap_stack)
	}
	/* Add a symble the indicates the end address of the kernel. */
	_kernel_end = .;
}
