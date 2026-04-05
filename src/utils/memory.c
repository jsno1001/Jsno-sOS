#include "utils.h"


typedef struct multiboot_info_t {
    unsigned int flags;
    unsigned int mem_lower;
    unsigned int mem_upper;
    unsigned int boot_device;
    unsigned int cmdline;
    unsigned int mods_count;
    unsigned int mods_addr;
    unsigned int mmap_length;
    unsigned int mmap_addr;
} multiboot_info_t;

typedef struct multiboot_memory_map {
    uint32_t size;
    uint64_t addr;
    uint64_t len;
    uint32_t type;
} __attribute__((packed)) multiboot_memory_map_t;

uint64_t init_memory(multiboot_info_t* mbi) {
    if (!(mbi->flags & (1 << 6))) return 0;

    
    
}