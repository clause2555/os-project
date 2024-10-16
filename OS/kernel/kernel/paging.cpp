// paging.cpp
#include "kernel/paging.h"
#include "kernel/apic.h" // For APIC-related mappings
#include "kernel/cpuid.h" // For CPUID detection
#include "kernel/memory.h" // For memory allocation
#include <stdio.h> // For debugging prints
#include <string.h> 
#include <stddef.h>

namespace Paging {

    // Self-referencing entry index (typically the last entry)
    constexpr size_t SELF_REF_INDEX = 1023;

    // Kernel's page directory and table (virtual addresses)
    uint32_t* kernel_page_directory;
    uint32_t* boot_page_table1;

    // Initialize paging with existing page directory and first page table
    void init_paging(uint32_t* page_directory_phys, uint32_t* page_table1_phys) {
        kernel_page_directory = reinterpret_cast<uint32_t*>(0xC0106000); // Virtual address
        boot_page_table1 = reinterpret_cast<uint32_t*>(0xC0107000); // Virtual address

        // Identity map the first 4MB (if needed)
        //for (size_t i = 0; i < 1024; ++i) {
        //    kernel_page_directory[i] = (i * 0x1000) | PAGE_PRESENT | PAGE_WRITABLE;
        //    boot_page_table1[i] = (i * 0x1000) | PAGE_PRESENT | PAGE_WRITABLE;
        //}

        // Set up self-referencing
        kernel_page_directory[SELF_REF_INDEX] = reinterpret_cast<uint32_t>(page_directory_phys) | PAGE_PRESENT | PAGE_WRITABLE;

        // Flush TLB
        asm volatile ("mov %0, %%cr3" : : "r"(page_directory_phys));
    }

    // Helper to extract indices from virtual address
    static inline void get_indices(void* virt_addr, size_t& pd_index, size_t& pt_index) {
        uintptr_t addr = reinterpret_cast<uintptr_t>(virt_addr);
        pd_index = (addr >> 22) & 0x3FF;
        pt_index = (addr >> 12) & 0x3FF;
    }

    bool map_page(uint32_t* page_directory, void* virt_addr, void* phys_addr, uint32_t flags) {
        size_t pd_index, pt_index;
        get_indices(virt_addr, pd_index, pt_index);

        // Check if page table is present
        if (!(page_directory[pd_index] & PAGE_PRESENT)) {
            // Allocate a new page table
            void* new_page_table_phys = allocate_page(); // Implement allocate_page()
            if (!new_page_table_phys) {
                printf("Failed to allocate new page table.\n");
                return false;
            }

            // Clear the new page table
            memset(new_page_table_phys, 0, 4096);

            // Map the new page table in the page directory
            page_directory[pd_index] = reinterpret_cast<uint32_t>(new_page_table_phys) | PAGE_PRESENT | PAGE_WRITABLE;

            // If self-referencing is set, update the mapping
            if (pd_index == SELF_REF_INDEX) {
                // Update self-referencing entry if needed
            }
        }

        // Get the page table
        uint32_t* page_table = reinterpret_cast<uint32_t*>(0xFFC00000 + pd_index * 0x1000); // Self-referencing mapping

        // Check if the page is already mapped
        if (page_table[pt_index] & PAGE_PRESENT) {
            printf("Virtual address already mapped.\n");
            return false;
        }

        // Map the page
        page_table[pt_index] = (reinterpret_cast<uint32_t>(phys_addr) & 0xFFFFF000) | (flags & 0xFFF) | PAGE_PRESENT;

        // Flush TLB
        flush_tlb(virt_addr);

        return true;
    }

    bool unmap_page(uint32_t* page_directory, void* virt_addr) {
        size_t pd_index, pt_index;
        get_indices(virt_addr, pd_index, pt_index);

        // Check if page table is present
        if (!(page_directory[pd_index] & PAGE_PRESENT)) {
            printf("Page directory entry not present.\n");
            return false;
        }

        // Get the page table
        uint32_t* page_table = reinterpret_cast<uint32_t*>(0xFFC00000 + pd_index * 0x1000); // Self-referencing mapping

        // Check if the page is mapped
        if (!(page_table[pt_index] & PAGE_PRESENT)) {
            printf("Page not mapped.\n");
            return false;
        }

        // Unmap the page
        page_table[pt_index] = 0;

        // Optionally, check if the entire page table is empty and free it
        bool empty = true;
        for (size_t i = 0; i < 1024; ++i) {
            if (page_table[i] & PAGE_PRESENT) {
                empty = false;
                break;
            }
        }

        if (empty) {
            // Free the page table
            void* page_table_phys = reinterpret_cast<void*>(page_directory[pd_index] & 0xFFFFF000);
            free_page(page_table_phys); // Implement free_page()

            // Unmap the page table from the page directory
            page_directory[pd_index] = 0;
        }

        // Flush TLB
        flush_tlb(virt_addr);

        return true;
    }

    void* get_physical_address(uint32_t* page_directory, void* virt_addr) {
        size_t pd_index, pt_index;
        get_indices(virt_addr, pd_index, pt_index);

        // Check if page table is present
        if (!(page_directory[pd_index] & PAGE_PRESENT)) {
            return nullptr;
        }

        // Get the page table
        uint32_t* page_table = reinterpret_cast<uint32_t*>(0xFFC00000 + pd_index * 0x1000); // Self-referencing mapping

        // Check if the page is present
        if (!(page_table[pt_index] & PAGE_PRESENT)) {
            return nullptr;
        }

        // Get physical address
        uint32_t phys_addr = page_table[pt_index] & 0xFFFFF000;
        uintptr_t offset = reinterpret_cast<uintptr_t>(virt_addr) & 0xFFF;

        return reinterpret_cast<void*>(phys_addr + offset);
    }

    void flush_tlb(void* virt_addr) {
        asm volatile (
            "invlpg (%0)"
            :
            : "r"(virt_addr)
            : "memory"
        );
    }

} // namespace Paging


extern "C" void paging_init(uint32_t* page_directory_phys, uint32_t* page_table1_phys) {
    Paging::init_paging(page_directory_phys, page_table1_phys);

    // Check for APIC support
    if (CPUID::cpuid(1).edx & (1 << 9)) { // APIC is bit 9 in EDX
        //printf("APIC supported. Enabling APIC.\n");

        // Allocate virtual memory for APIC if not already mapped
        // APIC_BASE_VIRT is 0xC0EE0000
        // APIC physical address is typically 0xFEE00000
        // Map APIC region (assuming 4KB for simplicity)
        if (!Paging::map_page(reinterpret_cast<uint32_t*>(0xC0106000), reinterpret_cast<void*>(0xC0EE0000), reinterpret_cast<void*>(0xFEE00000), Paging::PAGE_PRESENT | Paging::PAGE_WRITABLE)) {
            //printf("Failed to map APIC.\n");
	    asm volatile ("int $0"); // no console init yet, testing for failuring with divby0
            // Handle error
        } else {
            // Initialize APIC
            APIC::enable_apic();
            //printf("APIC enabled and mapped.\n");
        }
    } else {
        //printf("APIC not supported.\n");
    }
}
