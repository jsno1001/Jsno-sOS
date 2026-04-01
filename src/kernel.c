#include "utils.h"

void kernel_main() {
    print(0, "Hello\n\rworld\0", 0x07);
    // print(0, 10%2, 0x07);
    while(1);
}