#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <stdint.h>

void handle_keyboard_input();
uint8_t keyboard_get_key();
extern "C" void keyboard_handler();

#endif // KEYBOARD_H

