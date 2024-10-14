// handlers.cpp
#include "kernel/idt.h"
#include <stdint.h>
#include <stdio.h>

__attribute__((noreturn))
extern "C" void exception_handler(void) {
    printf("Unhandled Exception Occured");
    __asm__ volatile ("cli; hlt"); // Completely hangs the computer
}
