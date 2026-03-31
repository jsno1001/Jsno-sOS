CC=gcc
CFLAGS= -m32 -ffreestanding -nostdlib

TARGET=kernel

build: build_kernel build_boot
	ld -m elf_i386 -T src/linker.ld -o bin/build/kernel.elf bin/boot.o bin/kernel.o

build_kernel:
	$(CC) $(CFLAGS) -c src/kernel.c -o bin/kernel.o

build_boot:
	nasm -f elf32 src/boot.asm -o bin/boot.o

build_image: build
	cp -r grub/* bin/build/image/boot/grub/
	cp bin/build/kernel.elf bin/build/image/boot/kernel.elf
	grub-mkrescue -o bin/build/image.iso bin/build/image