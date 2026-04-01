CC=gcc
CFLAGS= -m32 -ffreestanding -nostdlib

build_image: build 
	cp -r grub/* bin/build/image/boot/grub/
	cp bin/build/kernel.elf bin/build/image/boot/kernel.elf
	grub-mkrescue -o bin/build/image.iso bin/build/image

	# Image is in /bin/build/image.iso

build: make_build_dir build_kernel build_boot build_utils
	ld -m elf_i386 -T src/linker.ld -o bin/build/kernel.elf bin/boot.o bin/kernel.o bin/video.o bin/math.o

clear: 
	rm -rf bin/*
make_build_dir:
	mkdir bin/build/image -p
	mkdir bin/build/image/boot -p
	mkdir bin/build/image/boot/grub -p

build_utils:
	$(CC) $(CFLAGS) -c src/utils/video.c -o bin/video.o
	$(CC) $(CFLAGS) -c src/utils/math.c -o bin/math.o

build_kernel:
	$(CC) $(CFLAGS) -c src/kernel.c -o bin/kernel.o

build_boot:
	nasm -f elf32 src/boot.asm -o bin/boot.o