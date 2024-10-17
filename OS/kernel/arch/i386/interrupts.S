.section .interrupts, "ax", @progbits
.align 4

.global exception_handler
.extern exception_handler

# ISR stubs with no error code
.macro isr_no_err_stub number
.global isr_stub_\number
isr_stub_\number:
    call exception_handler
    iret
.endm

# ISR stubs with error code
.macro isr_err_stub number
.global isr_stub_\number
isr_stub_\number:
    call exception_handler
    iret
.endm

# Define the 32 ISR stubs
isr_no_err_stub 0
isr_no_err_stub 1
isr_no_err_stub 2
isr_no_err_stub 3
isr_no_err_stub 4
isr_no_err_stub 5
isr_no_err_stub 6
isr_no_err_stub 7
isr_err_stub    8
isr_no_err_stub 9
isr_err_stub    10
isr_err_stub    11
isr_err_stub    12
isr_err_stub    13
isr_err_stub    14
isr_no_err_stub 15
isr_no_err_stub 16
isr_err_stub    17
isr_no_err_stub 18
isr_no_err_stub 19
isr_no_err_stub 20
isr_no_err_stub 21
isr_no_err_stub 22
isr_no_err_stub 23
isr_no_err_stub 24
isr_no_err_stub 25
isr_no_err_stub 26
isr_no_err_stub 27
isr_no_err_stub 28
isr_no_err_stub 29
isr_err_stub    30
isr_no_err_stub 31

# Stub table
.global isr_stub_table
isr_stub_table:
    .long isr_stub_0
    .long isr_stub_1
    .long isr_stub_2
    .long isr_stub_3
    .long isr_stub_4
    .long isr_stub_5
    .long isr_stub_6
    .long isr_stub_7
    .long isr_stub_8
    .long isr_stub_9
    .long isr_stub_10
    .long isr_stub_11
    .long isr_stub_12
    .long isr_stub_13
    .long isr_stub_14
    .long isr_stub_15
    .long isr_stub_16
    .long isr_stub_17
    .long isr_stub_18
    .long isr_stub_19
    .long isr_stub_20
    .long isr_stub_21
    .long isr_stub_22
    .long isr_stub_23
    .long isr_stub_24
    .long isr_stub_25
    .long isr_stub_26
    .long isr_stub_27
    .long isr_stub_28
    .long isr_stub_29
    .long isr_stub_30
    .long isr_stub_31

# IRQ stubs
.macro irq_stub number
.global irq_stub_\number
irq_stub_\number:
    pushl $ \number
    call irq_handler
    addl $4, %esp
    iret
.endm

# Define stubs for IRQ0 to IRQ15
irq_stub 0
irq_stub 1
irq_stub 2
irq_stub 3
irq_stub 4
irq_stub 5
irq_stub 6
irq_stub 7
irq_stub 8
irq_stub 9
irq_stub 10
irq_stub 11
irq_stub 12
irq_stub 13
irq_stub 14
irq_stub 15

# IRQ stub table
.global irq_stub_table
irq_stub_table:
    .long irq_stub_0
    .long irq_stub_1
    .long irq_stub_2
    .long irq_stub_3
    .long irq_stub_4
    .long irq_stub_5
    .long irq_stub_6
    .long irq_stub_7
    .long irq_stub_8
    .long irq_stub_9
    .long irq_stub_10
    .long irq_stub_11
    .long irq_stub_12
    .long irq_stub_13
    .long irq_stub_14
    .long irq_stub_15

