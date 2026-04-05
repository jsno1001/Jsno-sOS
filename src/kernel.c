#include "utils.h"

void kernel_main(unsigned int magic, multiboot_info_t addr) {
    if (magic!=0x2BADB002) while(1);

    init_memory(addr);

    print(0, addr.cmdline, 0x07);

    // print(0, "Hello is", 0x07);
    // print(9, "Jsno`s OS \r\nIt`s my OS", 0x09);
    // print(0, 10%2, 0x07);
    while(1);
}