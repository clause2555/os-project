// memory.cpp
#include "kernel/memory.h"
#include <string.h>  // For memset
#include <stdio.h>
#include <stddef.h>

// Global Physical Memory Manager instance
pmm_t physical_memory_manager;

// Initialize the Physical Memory Manager
void pmm_init(multiboot_info_t* mb_info) {
    if (!(mb_info->flags & (1 << 6))) {
        // No memory map available, handle error
        // TODO: Implement proper error handling
        return;
    }

    multiboot_memory_map_t* mmap = (multiboot_memory_map_t*) mb_info->mmap_addr;
    multiboot_memory_map_t* mmap_end = (multiboot_memory_map_t*) (mb_info->mmap_addr + mb_info->mmap_length);

    uint64_t total_usable_memory = 0;
    uintptr_t first_usable_addr = 0;

    uintptr_t k_start = reinterpret_cast<uintptr_t>(&_kernel_start) - 0xC0000000;
    uintptr_t k_end = reinterpret_cast<uintptr_t>(&_kernel_end) - 0xC0000000;
    uintptr_t k_size = reinterpret_cast<uintptr_t>(&_kernel_size);
    uintptr_t next_aligned_page = (k_end + PAGE_SIZE - 1) &  ~(PAGE_SIZE - 1);

    printf("_kernel_start: %x\n", &_kernel_start);
    printf("_kernel_end: %x\n", &_kernel_end);
    printf("_kernel_size: %x\n", &_kernel_size);
    printf("next aligned page: %x\n", next_aligned_page);

    // Calculate total usable memory and find the first usable address
    while (mmap < mmap_end) {
        if (mmap->type == 1) {  // Type 1 is usable memory
            if (first_usable_addr == 0) {
                first_usable_addr = mmap->base_addr;
            }
            total_usable_memory += mmap->length;
        }
        mmap = (multiboot_memory_map_t*) ((uintptr_t)mmap + mmap->size + sizeof(mmap->size));
    }

    // Initialize PMM structure
    physical_memory_manager.usable_memory_start = next_aligned_page + 0x1000;
    physical_memory_manager.usable_memory_end = physical_memory_manager.usable_memory_start + total_usable_memory; // TODO fix this logic, it needs to account for total - next aligned
    physical_memory_manager.bitmap.total_pages = total_usable_memory / PAGE_SIZE;

    // Allocate bitmap (1 bit per page)
    size_t bitmap_size = (physical_memory_manager.bitmap.total_pages + BITS_PER_BYTE - 1) / BITS_PER_BYTE;
    physical_memory_manager.bitmap.bitmap = (uint8_t*) physical_memory_manager.usable_memory_start;
    physical_memory_manager.usable_memory_start += bitmap_size;

    memset(physical_memory_manager.bitmap.bitmap, 0, bitmap_size);  // All pages free initially

    // Reserve kernel and critical areas
    //for (uintptr_t addr = 0x00000000; addr < 0x100000; addr += PAGE_SIZE) {
    //    set_page_used(&physical_memory_manager.bitmap, addr / PAGE_SIZE);  // Mark BIOS region as used
    //}
    //for (uintptr_t addr = 0x100000; addr < k_end - 0xC0000000; addr += PAGE_SIZE) {
    //    set_page_used(&physical_memory_manager.bitmap, addr / PAGE_SIZE);  // Mark kernel region as used
    //}

    // Reserve additional critical addresses (e.g., ACPI, APIC)
    //uintptr_t critical_addresses[] = {0x1FFE0000, 0x1FFE1000, 0xFEC00000, 0xFEE00000};
    //for (size_t i = 0; i < sizeof(critical_addresses) / sizeof(critical_addresses[0]); i++) {
    //    set_page_used(&physical_memory_manager.bitmap, critical_addresses[i] / PAGE_SIZE);  // Mark critical regions as used
    //}

    // Optionally, print total pages for debugging
    printf("PMM initialized with %u total pages.\n", physical_memory_manager.bitmap.total_pages);
}

// Set a page as used
void set_page_used(bitmap_t* bitmap, uint32_t page_index) {
    uint32_t byte_index = page_index / BITS_PER_BYTE;
    uint8_t bit = page_index % BITS_PER_BYTE;
    bitmap->bitmap[byte_index] |= (1 << bit);
}

// Set a page as free
void set_page_free(bitmap_t* bitmap, uint32_t page_index) {
    uint32_t byte_index = page_index / BITS_PER_BYTE;
    uint8_t bit = page_index % BITS_PER_BYTE;
    bitmap->bitmap[byte_index] &= ~(1 << bit);
}

// Find the first free page
int find_free_page(bitmap_t* bitmap) {
    for (uint32_t i = 0; i < bitmap->total_pages; ++i) {
        uint32_t byte_index = i / BITS_PER_BYTE;
        uint8_t bit = i % BITS_PER_BYTE;
        if (!(bitmap->bitmap[byte_index] & (1 << bit))) {
            return i;
        }
    }
    return -1;  // No free page found
}

// Allocate a physical page
void* pmm_alloc_page() {
    int page_index = find_free_page(&physical_memory_manager.bitmap);
    if (page_index == -1) {
        // No free pages available
        return NULL;
    }

    set_page_used(&physical_memory_manager.bitmap, page_index);
    uintptr_t phys_addr = physical_memory_manager.usable_memory_start + (page_index * PAGE_SIZE);
    return (void*) phys_addr;
}

// Free a physical page
void pmm_free_page(void* page) {
    uintptr_t phys_addr = (uintptr_t) page;
    if (phys_addr < physical_memory_manager.usable_memory_start || 
        phys_addr >= physical_memory_manager.usable_memory_end) {
        // Address out of range, handle error
        return;
    }

    uint32_t page_index = (phys_addr - physical_memory_manager.usable_memory_start) / PAGE_SIZE;
    set_page_free(&physical_memory_manager.bitmap, page_index);
}
