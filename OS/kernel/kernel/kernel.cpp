#include <stdio.h>

#include <kernel/tty.h>

void extern "C" kernel_main(void) {
	terminal_initialize();
	printf("Hellow, kernel World!\n")
}
