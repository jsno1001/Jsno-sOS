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
    unsigned long size;
    unsigned long long addr;
    unsigned long long len;
    unsigned long type;
} mmap_entry_t;

multiboot_info_t* mbi;