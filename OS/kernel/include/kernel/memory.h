#ifndef MEMORY_H
#define MEMORY_H

#include "multiboot.h"
#include <stdint.h>

// Function to initialize memory management using the Multiboot memory map
void initialize_memory_manager();

// Function to allocate a 4KB page
void* allocate_page();

// Function to free a previously allocated page
void free_page(void* page);

// Function to reserve a preallocated page
void reserve_page(void* page);

extern multiboot_info_t* g_multiboot_info;
extern uint32_t boot_page_directory;
extern uint32_t boot_page_table1;
#endif // MEMORY_H

