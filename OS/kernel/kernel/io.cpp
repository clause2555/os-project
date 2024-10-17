#include "kernel/io.h"

extern "C" uint8_t inb(uint16_t port) {
    uint8_t ret;
    __asm__ volatile ("inb %1, %0"
                      : "=a"(ret)
                      : "Nd"(port));
    return ret;
}

extern "C" void outb(uint16_t port, uint8_t data) {
    __asm__ volatile ("outb %0, %1"
                      :
                      : "a"(data), "Nd"(port));
}

