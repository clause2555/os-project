// vmemory.cpp
#include "kernel/vmemory.h"
#include <stdio.h>
#include <string.h>

// Global Virtual Memory Allocator instance
static vma_t virtual_memory_manager;

// Initialize the Virtual Memory Allocator
void vma_init() {
    uintptr_t kernel_end_addr = (uintptr_t)&_kernel_end;
    uintptr_t aligned_kernel_end = (kernel_end_addr + PAGE_SIZE -1) & ~(PAGE_SIZE - 1);
    virtual_memory_manager.start_address = aligned_kernel_end;  // Example: Start allocating virtual memory after 4MB
    virtual_memory_manager.end_address = VIRTUAL_MEMORY_SIZE;
    virtual_memory_manager.bitmap.total_pages = (virtual_memory_manager.end_address - virtual_memory_manager.start_address) / PAGE_SIZE;

    // Allocate bitmap (1 bit per virtual page)
    // For simplicity, place it just after PMM bitmap
    virtual_memory_manager.bitmap.bitmap = (uint8_t*) (physical_memory_manager.usable_memory_start);
    physical_memory_manager.usable_memory_start += (virtual_memory_manager.bitmap.total_pages + BITS_PER_BYTE - 1) / BITS_PER_BYTE;

    memset(virtual_memory_manager.bitmap.bitmap, 0, (virtual_memory_manager.bitmap.total_pages + BITS_PER_BYTE - 1) / BITS_PER_BYTE);

    printf("VMA initialized with %u total virtual pages.\n", virtual_memory_manager.bitmap.total_pages);
}

// Set a virtual page as used
static inline void set_vpage_used(bitmap_t* bitmap, uint32_t vpage_index) {
    set_page_used(bitmap, vpage_index);
}

// Set a virtual page as free
static inline void set_vpage_free(bitmap_t* bitmap, uint32_t vpage_index) {
    set_page_free(bitmap, vpage_index);
}

// Find the first free virtual page
static inline int find_free_vpage(bitmap_t* bitmap) {
    return find_free_page(bitmap);
}

// Allocate a virtual page and map it to a physical page
void* vma_alloc_page() {
    int vpage_index = find_free_vpage(&virtual_memory_manager.bitmap);
    if (vpage_index == -1) {
        // No free virtual pages available
        return NULL;
    }

    set_vpage_used(&virtual_memory_manager.bitmap, vpage_index);

    // Calculate virtual address
    uintptr_t virtual_addr = virtual_memory_manager.start_address + (vpage_index * PAGE_SIZE);

    // Allocate a physical page
    void* phys_page = pmm_alloc_page();
    if (!phys_page) {
        // Allocation failed, free the virtual page
        set_vpage_free(&virtual_memory_manager.bitmap, vpage_index);
        return NULL;
    }

    // Map the virtual page to the physical page
    // Assuming you have a function to map pages, e.g., map_page(virtual, physical, flags)
    // map_page((void*)virtual_addr, phys_page, 0x03);  // Present | Read/Write

    return (void*) virtual_addr;
}

// Free a virtual page and unmap it from the physical page
void vma_free_page(void* virtual_page) {
    uintptr_t virt_addr = (uintptr_t) virtual_page;
    if (virt_addr < virtual_memory_manager.start_address || virt_addr >= virtual_memory_manager.end_address) {
        // Address out of range, handle error
        return;
    }

    uint32_t vpage_index = (virt_addr - virtual_memory_manager.start_address) / PAGE_SIZE;
    set_vpage_free(&virtual_memory_manager.bitmap, vpage_index);

    // Unmap the page and free the physical page
    // Assuming you have a function to unmap pages, e.g., unmap_page(virtual)
    // void* phys_page = unmap_page((void*)virt_addr);
    // if (phys_page) {
    //     pmm_free_page(phys_page);
    // }
}
