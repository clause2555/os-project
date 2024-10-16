// paging.h
#ifndef PAGING_H
#define PAGING_H

#include <stdint.h>
#include <stddef.h>

namespace Paging {

    // Page flags
    constexpr uint32_t PAGE_PRESENT    = 1 << 0;
    constexpr uint32_t PAGE_WRITABLE   = 1 << 1;
    constexpr uint32_t PAGE_USER       = 1 << 2;
    constexpr uint32_t PAGE_ACCESSED   = 1 << 5;
    constexpr uint32_t PAGE_DIRTY      = 1 << 6;
    constexpr uint32_t PAGE_PS         = 1 << 7; // Page Size (for 4MB pages)

    // Initialize paging system
    void init_paging(uint32_t* page_directory_phys, uint32_t* page_table1_phys); 

    // Map a virtual address to a physical address with given flags
    bool map_page(uint32_t* page_directory, void* virt_addr, void* phys_addr, uint32_t flags);

    // Unmap a virtual address
    bool unmap_page(uint32_t* page_directory, void* virt_addr);

    // Get the physical address corresponding to a virtual address
    void* get_physical_address(uint32_t* page_directory, void* virt_addr);

    // Flush a page from the TLB
    void flush_tlb(void* virt_addr);

} // namespace Paging
  
#endif // PAGING_H

