#include <stdio.h>

#include <kernel/tty.h>

extern "C" void kernel_main(void) {
	terminal_initialize();
	printf("Hello, c++ kernel World!\n");
}
