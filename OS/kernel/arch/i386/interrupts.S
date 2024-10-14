.section .interrupts, "ax", @progbits
.align 4

# General interrupt stub
.global interrupt_stub
.type interrupt_stub, @function
interrupt_stub:
    popl %eax               # Pop interrupt number into eax
    pusha                   # Save registers
    push %ds
    push %es
    push %fs
    push %gs

    movw $0x10, %ax         # Set kernel data segment
    movw %ax, %ds
    movw %ax, %es
    movw %ax, %fs
    movw %ax, %gs

    pushl %eax              # Push interrupt number for C handler
    call interrupt_handler_c

    addl $4, %esp           # Clean stack
    pop %gs
    pop %fs
    pop %es
    pop %ds
    popa
    iret                    # Return from interrupt

# Error code interrupt stub
.global interrupt_stub_error
.type interrupt_stub_error, @function
interrupt_stub_error:
    popl %eax               # Pop interrupt number
    pusha                   # Save registers
    push %ds
    push %es
    push %fs
    push %gs

    movw $0x10, %ax         # Set kernel data segment
    movw %ax, %ds
    movw %ax, %es
    movw %ax, %fs
    movw %ax, %gs

    pushl 8(%esp)           # Push error code
    pushl %eax              # Push interrupt number for C handler
    call interrupt_handler_c_with_error_code

    addl $8, %esp           # Clean stack
    pop %gs
    pop %fs
    pop %es
    pop %ds
    popa
    iret                    # Return from interrupt

# Specific Interrupt Stubs
.global isr0_stub
.type isr0_stub, @function
isr0_stub:
    pushl $0                # Interrupt number 0 (Divide by zero)
    jmp interrupt_stub

.global isr1_stub
.type isr1_stub, @function
isr1_stub:
    pushl $1
    jmp interrupt_stub

.global isr8_stub
.type isr8_stub, @function
isr8_stub:
    pushl $8                # Interrupt number 8 (Double Fault)
    jmp interrupt_stub_error

.global isr13_stub
.type isr13_stub, @function
isr13_stub:
    pushl $13               # Interrupt number 13 (General Protection Fault)
    jmp interrupt_stub_error

.global isr14_stub
.type isr14_stub, @function
isr14_stub:
    pushl $14
    jmp interrupt_stub_error

.global irq0_stub
.type irq0_stub, @function
irq0_stub:
    pushl $32               # IRQ0 mapped to interrupt 32
    jmp interrupt_stub
