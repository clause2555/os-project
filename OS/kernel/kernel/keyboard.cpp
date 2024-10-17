// keyboard.cpp
#include "kernel/keyboard.h"
#include "stdio.h"
#include "kernel/scancode_map.h"
#include "kernel/apic.h"
#include "kernel/tty.h"
#include "kernel/io.h"

// Define scancodes for Shift keys
#define SCANCODE_LEFT_SHIFT 0x2A
#define SCANCODE_RIGHT_SHIFT 0x36

#define KEYBUFFER_SIZE 256
volatile uint8_t keybuffer[KEYBUFFER_SIZE];
volatile uint32_t keybuffer_head = 0;
volatile uint32_t keybuffer_tail = 0;

// Modifier states
volatile bool shift_pressed = false;

// Function to add a key to the buffer
void keyboard_buffer_put(uint8_t scancode) {
    uint32_t next_head = (keybuffer_head + 1) % KEYBUFFER_SIZE;
    if (next_head != keybuffer_tail) { // Check for buffer overflow
        keybuffer[keybuffer_head] = scancode;
        keybuffer_head = next_head;
    }
    // Else: Buffer is full; handle overflow as needed
}

// Keyboard ISR
extern "C" void keyboard_handler() {
    // Read scancode from keyboard data port
    uint8_t scancode = inb(0x60);

    // Handle Shift key press/release
    if (scancode == SCANCODE_LEFT_SHIFT || scancode == SCANCODE_RIGHT_SHIFT) {
        if (scancode & 0x80) { // Key release
            shift_pressed = false;
        } else { // Key press
            shift_pressed = true;
        }
    }

    // Add scancode to buffer
    keyboard_buffer_put(scancode);

    // Send End of Interrupt (EOI) to the APIC
    APIC::send_eoi(); 
}

uint8_t keyboard_get_key() {
    if (keybuffer_head == keybuffer_tail) {
        return 0; // Buffer is empty
    }

    uint8_t scancode = keybuffer[keybuffer_tail];
    keybuffer_tail = (keybuffer_tail + 1) % KEYBUFFER_SIZE;

    // Handle key press vs. key release
    bool key_released = scancode & 0x80;
    uint8_t keycode = scancode & 0x7F; // Remove the release bit

    if (key_released) {
        // Handle key release if necessary (e.g., modifier keys)
        if (keycode == SCANCODE_LEFT_SHIFT || keycode == SCANCODE_RIGHT_SHIFT) {
            shift_pressed = false;
        }
        return 0; // Ignore key releases for character input
    }

    // Translate scancode to ASCII
    char ascii = scancode_to_ascii(keycode, shift_pressed);
    return ascii;
}

void handle_keyboard_input() {
	uint8_t key = keyboard_get_key();
	if (key != 0)
	    terminal_putchar(scancode_to_ascii(key, shift_pressed));
}

