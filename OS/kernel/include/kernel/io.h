// io.h
#ifndef IO_H
#define IO_H

#include <stdint.h>

extern "C" uint8_t inb(uint16_t port);
extern "C" void outb(uint16_t port, uint8_t data);

#endif // IO_H

