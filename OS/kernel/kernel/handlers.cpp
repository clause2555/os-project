// handlers.cpp
#include "kernel/idt.h"
#include <stdint.h>
#include <stdio.h>

extern "C" __attribute__((noreturn)) void exception_handler(void) {
    __asm__ volatile ("cli; hlt"); // Completely hangs the computer
}
