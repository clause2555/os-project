/* interrupts.S */

.section .text
.global idt_load
.type idt_load, @function
idt_load:
    #Load the IDT using the lidt instruction
    lidt (%eax)          # IDT pointer is passed in EAX
    ret
.global interrupt_stub
.type interrupt_stub, @function
interrupt_stub:
    pusha                # Save all general-purpose registers
    push %ds             # Save data segment
    push %es
    push %fs
    push %gs

    # Set DS, ES, FS, GS to kernel data segment (0x10)
    movw $0x10, %ax
    movw %ax, %ds
    movw %ax, %es
    movw %ax, %fs
    movw %ax, %gs

    # Call the C++ interrupt handler
    call interrupt_handler_c

    pop %gs              # Restore GS
    pop %fs              # Restore FS
    pop %es              # Restore ES
    pop %ds              # Restore DS
    popa                 # Restore all general-purpose registers

    # Send End of Interrupt (EOI) to PIC
    movb $0x20, %al
    outb %al, $0x20

    iret                 # Return from interrupt

.global isr0_stub
.type isr0_stub, @function
isr0_stub:
    pushl $0             # Push interrupt number (0)
    jmp interrupt_stub

.global isr1_stub
.type isr0_stub, @function
isr1_stub:
    pushl $1             # Push interrupt number (1)
    jmp interrupt_stub

.global irq0_stub
.type irq0_stub, @function
irq0_stub:
    pushl $32            # IRQ0 mapped to interrupt 32
    jmp interrupt_stub

    # Repeat the above pattern for other interrupts/exceptions as needed

