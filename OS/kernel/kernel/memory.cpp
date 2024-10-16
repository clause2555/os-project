#include "kernel/memory.h"
#include "kernel/multiboot.h"  // Assuming you have your multiboot info structure here
#include <string.h>      // For memset

#define PAGE_SIZE 4096  // 4KB pages
#define BITS_PER_BYTE 8

multiboot_info_t* g_multiboot_info = nullptr;  // Global pointer to multiboot info

static uint8_t* bitmap;  // Bitmap to track free/used pages
static uint32_t total_pages;  // Total number of pages in physical memory

// Helper function to find the first free page
static int find_free_page();

// Helper function to mark a page as used/free
static void set_page_used(uint32_t page_index);
static void set_page_free(uint32_t page_index);

void initialize_memory_manager() {
    // Ensure we have access to the multiboot information
    if (!g_multiboot_info || !(g_multiboot_info->flags & (1 << 6))) {
        // No memory map available, handle error
        return;
    }

    // Calculate the total available physical memory from the memory map
    uint64_t total_memory = 0;
    multiboot_memory_map_t* mmap = (multiboot_memory_map_t*) g_multiboot_info->mmap_addr;
    multiboot_memory_map_t* mmap_end = (multiboot_memory_map_t*) (g_multiboot_info->mmap_addr + g_multiboot_info->mmap_length);

    // Iterate through the memory map and sum up the usable memory
    while (mmap < mmap_end) {
        if (mmap->type == 1) {  // Type 1 means usable memory
            total_memory += mmap->length;
        }
        mmap = (multiboot_memory_map_t*) ((uint32_t)mmap + mmap->size + sizeof(mmap->size));
    }

    // Calculate the number of 4KB pages in total_memory
    total_pages = total_memory / PAGE_SIZE;

    // Allocate the bitmap (1 bit per page, so total_pages / 8 bytes)
    bitmap = new uint8_t[total_pages / BITS_PER_BYTE];
    memset(bitmap, 0, total_pages / BITS_PER_BYTE);  // Initially mark all pages as free

    // Reserve the pages used by the boot page directory and page tables
    // This ensures the memory manager doesn't try to allocate them again
    reserve_page((void*)boot_page_directory);
    reserve_page((void*)boot_page_table1);

}

void reserve_page(void* page) {
    uintptr_t addr = (uintptr_t)page;
    uint32_t page_index = addr / PAGE_SIZE;
    set_page_used(page_index);  // Mark this page as used in the bitmap
}

void* allocate_page() {
    // Find the first free page
    int page_index = find_free_page();
    if (page_index == -1) {
        // No free pages available
        return nullptr;
    }

    // Mark the page as used
    set_page_used(page_index);

    // Calculate the physical address of the allocated page
    uintptr_t phys_addr = page_index * PAGE_SIZE;

    // Return the physical address
    return (void*) phys_addr;
}

void free_page(void* page) {
    // Calculate the page index from the physical address
    uintptr_t phys_addr = (uintptr_t)page;
    uint32_t page_index = phys_addr / PAGE_SIZE;

    // Mark the page as free
    set_page_free(page_index);
}

static int find_free_page() {
    for (uint32_t i = 0; i < total_pages; ++i) {
        uint32_t byte_index = i / BITS_PER_BYTE;
        uint8_t bit_index = i % BITS_PER_BYTE;

        if (!(bitmap[byte_index] & (1 << bit_index))) {
            // This page is free
            return i;
        }
    }
    // No free page found
    return -1;
}

static void set_page_used(uint32_t page_index) {
    uint32_t byte_index = page_index / BITS_PER_BYTE;
    uint8_t bit_index = page_index % BITS_PER_BYTE;
    bitmap[byte_index] |= (1 << bit_index);  // Set the bit to mark it as used
}

static void set_page_free(uint32_t page_index) {
    uint32_t byte_index = page_index / BITS_PER_BYTE;
    uint8_t bit_index = page_index % BITS_PER_BYTE;
    bitmap[byte_index] &= ~(1 << bit_index);  // Clear the bit to mark it as free
}

void* operator new[](size_t size) {
    // Implement your own memory allocation logic, or call a simple allocator
    return allocate_page();  // Or another allocator
}

// Define delete[] operator (for array deallocations)
void operator delete[](void* ptr) noexcept {
    // Implement deallocation logic
    free_page(ptr);  // Or another deallocator
}
