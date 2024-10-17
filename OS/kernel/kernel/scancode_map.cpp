// scancode_map.cpp
#include "kernel/scancode_map.h"

const char scancode_ascii_unshifted[128] = {
    0, 0, '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=', 0, 0,   // 0x00 to 0x0F
    'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', '[', ']', 0, 0,          // 0x10 to 0x1F
    'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', '\'', '`', 0, '\\',      // 0x20 to 0x2F
    'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/', 0, '*', 0, ' ',          // 0x30 to 0x3F
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,                           // 0x40 to 0x4F (unused)
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,                           // 0x50 to 0x5F (unused)
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,                           // 0x60 to 0x6F (unused)
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0                            // 0x70 to 0x7F (unused)
};

const char scancode_ascii_shifted[128] = {
    0, 0, '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '_', '+', 0, 0,     // 0x00 to 0x0F
    'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', '{', '}', 0, 0,          // 0x10 to 0x1F
    'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', ':', '"', '~', 0, '|',        // 0x20 to 0x2F
    'Z', 'X', 'C', 'V', 'B', 'N', 'M', '<', '>', '?', 0, '*', 0, ' ',          // 0x30 to 0x3F
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,                           // 0x40 to 0x4F (unused)
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,                           // 0x50 to 0x5F (unused)
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,                           // 0x60 to 0x6F (unused)
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0                            // 0x70 to 0x7F (unused)
};

// Function to translate scancode to ASCII with shift handling
extern char scancode_to_ascii(uint8_t scancode, bool shift_pressed) {
    if (scancode >= 128) return 0; // Invalid scancode
    if (shift_pressed) {
        return scancode_ascii_shifted[scancode];
    } else {
        return scancode_ascii_unshifted[scancode];
    }
}
