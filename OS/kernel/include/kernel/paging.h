// paging.h
#ifndef PAGING_H
#define PAGING_H

#include <stdint.h>
#include <stddef.h>

// Flags for page table entries
#define PAGE_PRESENT    0x1
#define PAGE_RW         0x2
#define PAGE_USER       0x4
#define PAGE_ACCESSED   0x20
#define PAGE_DIRTY      0x40

// Map a virtual address to a physical address with flags
void map_page(void* virtual_addr, void* physical_addr, uint32_t flags);

// Unmap a virtual address
void unmap_page(void* virtual_addr);

void flush_tlb();

#endif // PAGING_H
