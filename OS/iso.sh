#!/bin/sh
set -e
. ./build.sh

mkdir -p isodir
mkdir -p isodir/boot
mkdir -p isodir/boot/grub

cp sysroot/boot/fableos.kernel isodir/boot/fableos.kernel
cat > isodir/boot/grub/grub.cfg <<EOF
set default = 0
set timeout = 5

menuentry "FableOS" {
    multiboot /boot/fableos.kernel
    boot
}
EOF
grub-mkrescue -o fableos.iso isodir
