#include "utils.h"

void kernel_main(unsigned int magic, unsigned int addr) {
    print(0, "Hello is", 0x07);
    print(9, "Jsno`s OS \r\n It`s my OS", 0x09);
    // print(0, 10%2, 0x07);
    while(1);
}