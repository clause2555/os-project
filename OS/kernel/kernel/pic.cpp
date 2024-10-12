// pic.cpp
#include "kernel/pic.h"

static inline void outb(uint16_t port, uint8_t val) {
    asm volatile ("outb %0, %1" : : "a"(val), "Nd"(port));
}

static inline uint8_t inb(uint16_t port) {
    uint8_t ret;
    asm volatile ("inb %1, %0"
                  : "=a"(ret)
                  : "Nd"(port));
    return ret;
}

extern "C" void pic_remap(int offset1, int offset2) {
    // Save masks
    uint8_t a1 = inb(0x21); // Master PIC
    uint8_t a2 = inb(0xA1); // Slave PIC

    // Start initialization sequence (in cascade mode)
    outb(0x20, 0x11); // Master PIC command
    outb(0xA0, 0x11); // Slave PIC command
    outb(0x21, offset1); // Master PIC vector offset
    outb(0xA1, offset2); // Slave PIC vector offset
    outb(0x21, 0x04); // Tell Master PIC there is a slave PIC at IRQ2 (0000 0100)
    outb(0xA1, 0x02); // Tell Slave PIC its cascade identity (0000 0010)
    outb(0x21, 0x01); // Tell Master PIC to operate in 8086/88 mode
    outb(0xA1, 0x01); // Tell Slave PIC to operate in 8086/88 mode
    outb(0x21, a1);    // Restore saved masks
    outb(0xA1, a2);
}

