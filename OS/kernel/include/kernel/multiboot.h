// memory.h
#ifndef MULTIBOOT_H
#define MULTIBOOT_H

#include <stdint.h>


// Multiboot memory map entry
typedef struct multiboot_memory_map {
    uint32_t size;          // Size of the structure (not including 'size' itself)
    uint64_t base_addr;     // Base address of the memory region
    uint64_t length;        // Length of the memory region
    uint32_t type;          // Type of the memory region (1 = usable, others = reserved)
} __attribute__((packed)) multiboot_memory_map_t;

// Multiboot information structure
typedef struct multiboot_info {
    uint32_t flags;
    uint32_t mem_lower;
    uint32_t mem_upper;
    uint32_t boot_device;
    uint32_t cmdline;
    uint32_t mods_count;
    uint32_t mods_addr;
    uint32_t syms[4];
    uint32_t mmap_length;
    uint32_t mmap_addr;
} __attribute__((packed)) multiboot_info_t;

extern "C" uint64_t get_mmap(uint32_t magic, multiboot_info_t* mb_info);
	
		

#endif // MULTIBOOT_H

