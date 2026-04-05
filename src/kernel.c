#include "utils.h"

void kernel_main(unsigned int magic, multiboot_info_t addr) {
    if (magic!=0x2BADB002) while(1);
    vcursor = 0;

    init_memory(addr);
    print(vcursor, "Hello is", 0x07);
    print(vcursor, "Jsno`s OS \r\nIt`s my OS", 0x09);
    while(1);
}