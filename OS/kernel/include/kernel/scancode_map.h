// scancode_map.h
#ifndef SCANCODE_MAP_H
#define SCANCODE_MAP_H

#include <stdint.h>

// Example scancode to ASCII table for Set 1 (unshifted)
extern const char scancode_ascii_unshifted[128];

// Example scancode to ASCII table for Set 1 (shifted)
extern const char scancode_ascii_shifted[128];

// Function to translate scancode to ASCII with shift handling
char scancode_to_ascii(uint8_t scancode, bool shift_pressed);

#endif // SCANCODE_MAP_H

