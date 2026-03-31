#include "utils.h"

void kernel_main() {
    print(0, "Hello world\0", 0x07);
    while(1);
}