# Declare constants for the multiboot header.
.set ALIGN,    1<<0             # align loaded modules on page boundaries
.set MEMINFO,  1<<1             # provide memory map
.set FLAGS,    ALIGN | MEMINFO  # this is the Multiboot 'flag' field
.set MAGIC,    0x1BADB002       # 'magic number' lets bootloader find the header
.set CHECKSUM, -(MAGIC + FLAGS) # checksum of above, to prove we are multiboot

# Declare a header as in the Multiboot Standard.
# that marks the program as a kernel
.section .multiboot.data, "aw"
.align 4
.long MAGIC
.long FLAGS
.long CHECKSUM

# Allocate the initial stack
.section .bootstrap_stack, "aw", @nobits
stack_bottom:
.skip 16384 # 16 KiB
stack_top:

# Preallocate pages used for paging.  Dont hard cade addresses and assume they are available
# as the bootloader might have loaded its multiboot structures or odules there.
# This lets the bootloader know it must avoid the addresses.
.section .bss, "aw", @nobits
	.align 4096
boot_page_directory:
	.skip 4096
boot_page_table1:
	.skip 4096
# Further page tables may be required if the kernel grows beyond 3Mib (currently as 22Kib)

/* Define the GDT entries */
.section .gdt, "a", @progbits
.align 8
gdt_start:
    /* NULL Descriptor */
    	.quad 0x0000000000000000

    /* Kernel Code Segment: base=0, limit=4G, code, executable, readable */
    	.word 0xFFFF       /* Limit 0-15 */
    	.word 0x0000       /* Base 0-15 */
    	.byte 0x00         /* Base 16-23 */
    	.byte 0x9A         /* Access byte: present, ring 0, code segment */
    	.byte 0xCF         /* Flags: 4K granularity, 32-bit */
    	.byte 0x00         /* Base 24-31 */

    /* Kernel Data Segment: base=0, limit=4G, data, writable */
    	.word 0xFFFF
    	.word 0x0000
    	.byte 0x00
    	.byte 0x92         /* Access byte: present, ring 0, data segment */
    	.byte 0xCF
    	.byte 0x00

    /* User Code Segment: base=0, limit=4G, code, executable, readable, DPL=3 */
    	.word 0xFFFF
    	.word 0x0000
    	.byte 0x00
    	.byte 0xFA         /* Access byte: present, ring 3, code segment */
    	.byte 0xCF
    	.byte 0x00

    /* User Data Segment: base=0, limit=4G, data, writable, DPL=3 */
    	.word 0xFFFF
    	.word 0x0000
    	.byte 0x00
    	.byte 0xF2         /* Access byte: present, ring 3, data segment */
    	.byte 0xCF
    	.byte 0x00

    /* TSS Descriptor */
    /* Assuming TSS is defined in the .tss section below */
    	.word tss_limit        /* Limit 0-15 */
    	.word tss_base_low     /* Base 0-15 */
    	.byte tss_base_mid     /* Base 16-23 */
    	.byte 0x89             /* Access byte: present, type 9 (32-bit TSS) */
    	.byte 0x00             /* Flags */
    	.byte tss_base_high    /* Base 24-31 */

gdt_end:
.set gdt_size, gdt_end - gdt_start

/* GDT Pointer */
.section .gdt_ptr, "a", @progbits
.align 8
gdt_ptr:
    	.word gdt_size - 1      /* Limit */
    	.long gdt_start         /* Base */

/* Task State Segment (TSS) */
.section .tss, "aw", @progbits
.align 8
tss:
    	.quad 0                  /* Previous TSS */
    	.long stack_top          /* Stack pointer (ESP0) */
    	.quad 0x10               /* Stack segment (SS0) - Kernel Data Segment Selector */
    	.zero 104                /* Zero the rest of the TSS (total size 104 bytes) */

tss_start:
    /* TSS is defined above */
	.quad 0                  /* Previous TSS */
    	.long stack_top          /* ESP0 */
    	.word 0x10               /* SS0: Kernel Data Segment Selector (0x10) */
    	.word 0x0000             /* Reserved */
    	.quad 0                  /* ESP1 */
    	.quad 0                  /* SS1 */
    	.quad 0                  /* ESP2 */
    	.quad 0                  /* SS2 */
    	.quad 0                  /* CR3 */
    	.quad 0                  /* EIP */
    	.quad 0                  /* EFLAGS */
    	.quad 0                  /* ESP */
    	.quad 0                  /* SS */
    /* The rest of the TSS should be zeroed */
    	.zero 80                /* Total TSS size is 104 bytes (0x68) */
tss_end:

/* Calculate TSS fields for the descriptor */
.extern tss_limit
.extern tss_base_low
.extern tss_base_mid
.extern tss_base_high

# The kernel entry point.
.section .multiboot.text, "a"
.global _start
.type _start, @function
_start:
	# Load GDT
	lgdt gdt_ptr

	# Reload segent registers
	mov $0x10, %ax
	mov %ax, %ds
	mov %ax, %es
	mov %ax, %fs
	mov %ax, %gs
	mov %ax, %ss

	# Reload CS
	ljmp $0x08, $reload_cs

reload_cs:
	#init TSS
	cli
	mov $0x28, %ax
	ltr %ax
	#sti
	#ret
	jmp _continue


_continue:
	# Physical address of boot_page_table1.
	# TODO: Assembly that uses a macro to do conversion to and from phyical, could be done here?
	#
	movl $(boot_page_table1 - 0xC0000000), %edi
	# First address to map is address 0
	# TODO: Start at the first kernel page instead.  Alternatively map the first
	# 1 MiB as it can be generally usefull, and there no need to specially map the VGA buffer.
	movl $0, %esi
	# Map 1023 pages. the 1024 will be the VGA text buffer
	movl $1023, %ecx

1:
	# Only map the kernel.
	cmpl $_kernel_start, %esi
	jl 2f
	cmpl $(_kernel_end - 0xC0000000), %esi
	jge 3f

	# Map physical address as "present, writable". Note that this maps
	# .text and .rodata as writable.  Mind security and map them as non-writable
	movl %esi, %edx
	orl $0x003, %edx
	movl %edx, (%edi)

2:
	# Size of the page is 4096 bytes
	addl $4096, %esi
	# size of the entries in boot_page_table1 is 4 bytes.
	addl $4, %edi
	# Loop to the next entry if we havent finished.
	loop 1b

3:
	# Map VGA video emory to 0xC03FF000 as "present, writable".
	movl $(0x000B8000 | 0x003), boot_page_table1 - 0xC0000000 + 1023 * 4

	# The page table is used at both page directory entry 0 (virtually from 0x0
	# to 0x3FFFFF) (thus identity mapping the kernel) and page directory entry
	# 768 (virtually from 0xC0000000 to 0xC03FFFFF) (thus mapping it in the 
	# higher half).  THe kernel is identity apped because enabling paging does
	# not change the next instruction, which continues to be physical.  The CPU
	# would instead page fault if there was no identity mapping.

	# Map the page table to both virtual address 0x00000000 and 0xC0000000
	movl $(boot_page_table1 - 0xC0000000 + 0x003), boot_page_directory - 0xC0000000 + 0
	movl $(boot_page_table1 - 0xC0000000 + 0x003), boot_page_directory - 0xC0000000 + 768 * 4

	#### DEBUG #####
	# Map physical address 0x2000 to virtual address 0x00002000 (identity-mapped)
	#movl $(0x2000 | 0x003), boot_page_table1 - 0xC0000000 + 2 * 4

	# Optionally, map 0x2000 to a virtual address in the higher half (e.g., 0xC0002000)
	#movl $(0x2000 | 0x003), boot_page_table1 - 0xC0000000 + (768 * 4 + 2 * 4)

	# Set cr3 to the address of the boot_page_directory.
	movl $(boot_page_directory - 0xC0000000), %ecx
	movl %ecx, %cr3

	# Enable paging and the write-protect bit.
	movl %cr0, %ecx
	orl $0x80010000, %ecx
	movl %ecx, %cr0

	# Jump to higher half with an absolute jump.
	lea 4f, %ecx
	jmp *%ecx

.section .text

4:
	# At this point, paging is fully set up and enabled

	# Unmap the identity mapping as it is now unnecessary
	movl $0, boot_page_directory + 0

	# Reload cr3 to force a TLB flush so the changes take effect.
	movl %cr3, %ecx
	movl %ecx, %cr3

	# Zero out BSS section
	#movl $_bss_start, %edi
	#movl $_bss_end, %ecx
	#subl %edi, %ecx
	#shrl $2, %ecx
	#xorl %eax, %eax
	#rep stosl

	# set up the stack
	mov $stack_top, %esp

	# Enter the high-level kernel.
	call kernel_main

	# Infinit loop if the system has nothing more to do.
	cli
1:	hlt
	jmp 1b
