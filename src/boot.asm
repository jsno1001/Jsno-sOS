global _start
extern kernel_main

section .multiboot
align 4

    dd 0x1BADB002        ; magic
    dd 0x0               ; flags
    dd -(0x1BADB002 + 0x0) ; checksum

section .text
bits 32

_start:
    call kernel_main

.hang:
    hlt
    jmp .hang