// memory.h
#ifndef MEMORY_H
#define MEMORY_H

#include <stdint.h>
#include <stddef.h>
#include <kernel/multiboot.h>

// Constants
#define PAGE_SIZE 4096
#define BITS_PER_BYTE 8

// Bitmap structure
typedef struct {
    uint8_t* bitmap;
    uint32_t total_pages;
} bitmap_t;

// Physical Memory Manager structure
typedef struct {
    bitmap_t bitmap;
    uintptr_t usable_memory_start;
    uintptr_t usable_memory_end;
} pmm_t;

// Initialize the Physical Memory Manager
void pmm_init(multiboot_info_t* mb_info);

// Allocate and free pages
void* pmm_alloc_page();
void pmm_free_page(void* page);

// Utility functions
void set_page_used(bitmap_t* bitmap, uint32_t page_index);
void set_page_free(bitmap_t* bitmap, uint32_t page_index);
int find_free_page(bitmap_t* bitmap);

extern "C" uintptr_t _kernel_start;
extern "C" uintptr_t _kernel_end;
extern "C" uintptr_t _kernel_size;

#endif // MEMORY_H
