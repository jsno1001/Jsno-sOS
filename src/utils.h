// video.c
extern volatile char* video;
extern int vcursor;
extern void print(int pos, char* text, char col);
extern void put(int pos, char symbol, char col);
// math.c

typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;

extern int round(double n);
// memory.c

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

extern uint64_t init_memory(multiboot_info_t mbi);