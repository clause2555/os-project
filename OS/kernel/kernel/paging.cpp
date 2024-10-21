// paging.c
#include "kernel/paging.h"
#include "kernel/memory.h"
#include <string.h>
#include <stdint.h>

// Assuming boot_page_directory is mapped and accessible
extern uint32_t boot_page_directory;

// Convert virtual address to page directory and table indices
static inline uint32_t get_pd_index(uintptr_t addr) {
    return (addr >> 22) & 0x3FF;
}

static inline uint32_t get_pt_index(uintptr_t addr) {
    return (addr >> 12) & 0x3FF;
}

void map_page(void* virtual_addr, void* physical_addr, uint32_t flags) {
    uintptr_t virt = (uintptr_t) virtual_addr;
    uintptr_t phys = (uintptr_t) physical_addr;

    uint32_t pd_index = get_pd_index(virt);
    uint32_t pt_index = get_pt_index(virt);

    // Get the page directory entry
    uint32_t* page_directory = (uint32_t*) &boot_page_directory;
    uint32_t pd_entry = page_directory[pd_index];

    // If the page table is not present, allocate one
    if (!(pd_entry & PAGE_PRESENT)) {
        void* new_pt = pmm_alloc_page();
        if (!new_pt) {
            // Handle allocation failure
            return;
        }
        memset(new_pt, 0, PAGE_SIZE);
        page_directory[pd_index] = (uintptr_t)new_pt | PAGE_PRESENT | PAGE_RW;
        pd_entry = page_directory[pd_index];
    }

    // Get the page table
    uint32_t* page_table = (uint32_t*)(pd_entry & 0xFFFFF000);
    page_table[pt_index] = phys | flags | PAGE_PRESENT;

    flush_tlb();
}

void unmap_page(void* virtual_addr) {
    uintptr_t virt = (uintptr_t) virtual_addr;
    uint32_t pd_index = get_pd_index(virt);
    uint32_t pt_index = get_pt_index(virt);

    uint32_t* page_directory = (uint32_t*) &boot_page_directory;
    uint32_t pd_entry = page_directory[pd_index];

    if (!(pd_entry & PAGE_PRESENT)) {
        // Page table not present
        return;
    }

    uint32_t* page_table = (uint32_t*)(pd_entry & 0xFFFFF000);
    uint32_t pt_entry = page_table[pt_index];

    if (!(pt_entry & PAGE_PRESENT)) {
        // Page not mapped
        return;
    }

    // Clear the page table entry
    page_table[pt_index] = 0;

    // Optionally, free the physical page
    uintptr_t phys_addr = pt_entry & 0xFFFFF000;
    pmm_free_page((void*) phys_addr);

    flush_tlb();
}

void flush_tlb() {
    uintptr_t cr3;
    __asm__ volatile("mov %%cr3, %0" : "=r"(cr3));  // Read CR3
    __asm__ volatile("mov %0, %%cr3" : : "r"(cr3));  // Write CR3 (flush TLB)
}
