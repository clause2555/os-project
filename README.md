# OS Project

This project follows along with the OSDEV.org tutorials, focusing on building an operating system from scratch. It serves as a learning experience in low-level programming, using a combination of C and assembly language, and leveraging tools like GCC and Binutils.

### Prerequisites

GCC: Cross-compiler version to build the kernel.

Binutils: Required for linking and assembling.

QEMU/Bochs: Emulator to run the OS.

### Project Structure

ISOs/: Generated ISO files for testing.

OS/: Core operating system files.

barebones/: Initial kernel files from original build.  This kernel just prints "Hello World" on successful boot.

binutils/, gcc/: Compiler toolchain setup.

src/: Source code for building the Cross-Compiler (Cross-Compiler files and binaries not included as they are very large.  Follow along with the OSDEV [Cross Compiler](https://wiki.osdev.org/GCC_Cross-Compiler) tutorial to build compile the CC for your build.

### Setup and Build
#### Manually for barebones

1. ***Clone the Repository:***

```bash
git clone https://github.com/clause2555/os-project.git
cd os-project
```
2. ***Toolchain Setup:*** Follow the instructions at [GCC Cross-Compiler](https://wiki.osdev.org/GCC_Cross-Compiler) to utilize binutils/ and gcc/ and set up a cross-compiler toolchain.

3. ***Build the OS:***

From `OS/`

```bash
make all
i686-elf-gcc -T linker.ld -o myos.bin -ffreestanding -O2 -nostdlib boot.o kernel.o -lgcc
cp myos.bin $PREFIX/isodir/boot
cd $PREFIX
grub-mkrescue -o myos.iso isodir
mv myos.iso $PREFIX/ISOs
```

4. ***Run the OS in QEMU:***

```bash
qemu-system-i386 -cdrom myos.iso
```

#### Shell Scripting for the more complicated OS Skeleton
##### Cross-Compling the Operating System
The system is cross-compiled in the same manner as [Barebones](https://wiki.osdev.org/Bare_Bones), though with the complexity of having a system root with the final system and using a libk. In this example, we elected to use shell scripts to to the top-level build process, though you could possibly also use a makefile for that or a wholly different build system. Though, assuming this setup works for you, you can clean the source tree by invoking:

```bash
./clean.sh
```
You can install all the system headers intot he system root without relying on the compile at all, which will useful later when I begin working on switching to a [Hosted GCC Cross-Compiler](https://wiki.osdev.org/Hosted_GCC_Cross-Compiler), by invoking:

```bash
./headers.sh
```
You can build a bootable cdrom image of the OS by invoking:
```bash
./iso.sh
```
Build then launch short cut:
```bash
./qemu.sh
```


### Contributing

Contributions are welcome! Please follow the standard fork-and-pull workflow:

Fork this repository.

Create a new branch.

Make changes and commit.

Submit a pull request for review.

### License

This project is licensed under the GPL-3.0 License. See LICENSE for more information.

### Credits

This project is inspired by the tutorials from OSDEV.org.
