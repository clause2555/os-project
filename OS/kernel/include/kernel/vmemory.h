// vmemory.h
#ifndef VMEMORY_H
#define VMEMORY_H

#include "kernel/memory.h"
#include "kernel/paging.h"
#include <stdint.h>
#include <stddef.h>

// Constants
#define VIRTUAL_MEMORY_SIZE (3ULL * 1024 * 1024 * 1024)  // Example: 4 GB virtual address space

// Virtual Memory Allocator structure
typedef struct {
    bitmap_t bitmap;  // Reuse bitmap_t from PMM for simplicity
    uintptr_t start_address;  // Start of virtual address space
    uintptr_t end_address;    // End of virtual address space
} vma_t;

// Initialize the Virtual Memory Allocator
void vma_init();

// Allocate a virtual page and map it to a physical page
void* vma_alloc_page();

// Free a virtual page and unmap it from the physical page
void vma_free_page(void* virtual_page);

// Helper functions
static inline void set_vpage_used(bitmap_t* bitmap, uint32_t vpage_index);
static inline void set_vpage_free(bitmap_t* bitmap, uint32_t vpage_index);
static inline int find_free_vpage(bitmap_t* bitmap);

extern pmm_t physical_memory_manager;

#endif // VMEMORY_H
