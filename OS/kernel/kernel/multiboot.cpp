#include "kernel/multiboot.h"
#include <stdio.h>

extern "C" uint64_t get_mmap(uint32_t magic, multiboot_info_t* mb_info) {
	uint64_t total_usable_memory = 0;

	if (mb_info->flags & (1 << 6)){
		multiboot_memory_map_t* mmap = (multiboot_memory_map_t*) mb_info->mmap_addr;
		multiboot_memory_map_t* mmap_end = (multiboot_memory_map_t*)(mb_info->mmap_addr + mb_info->mmap_length);

		while (mmap < mmap_end) {
			if (mmap < mmap_end) {
				total_usable_memory += mmap->length;
			}

			mmap = (multiboot_memory_map_t*) ((uint32_t)mmap + mmap->size + sizeof(mmap->size));
		}
	}

	return total_usable_memory;
}
