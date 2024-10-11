# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright (C) 2001-2024 Free Software Foundation, Inc.
#
# This file may be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = bfd
VERSION = 2.42.90

SHELL = /bin/sh


srcdir = ../../../../binutils/binutils-2.42.90/bfd/po
top_srcdir = ../../../../binutils/binutils-2.42.90/bfd
VPATH = ../../../../binutils/binutils-2.42.90/bfd/po
top_builddir = ..

prefix = /home/aidan/os-project/cross-compiler
exec_prefix = ${prefix}
datadir = ${datarootdir}
localedir = ${datarootdir}/locale
gnulocaledir = ${prefix}/share/locale
gettextsrcdir = ${prefix}/share/gettext/po
subdir = po

DESTDIR =

INSTALL = /usr/bin/install -c
INSTALL_DATA = /usr/bin/install -c -m 644
MKINSTALLDIRS = $(top_builddir)/../../../binutils/binutils-2.42.90/bfd/../mkinstalldirs

CC = gcc
GENCAT = 
GMSGFMT = PATH=../src:$$PATH :
MSGFMT = :
XGETTEXT = PATH=../src:$$PATH :
MSGMERGE = PATH=../src:$$PATH msgmerge

DEFS = -DHAVE_CONFIG_H
CFLAGS = -g -O2    
CPPFLAGS = 

INCLUDES = -I.. -I$(top_srcdir)/intl

COMPILE = $(CC) -c $(DEFS) $(INCLUDES) $(CPPFLAGS) $(CFLAGS) $(XCFLAGS)

SOURCES = cat-id-tbl.c
POFILES =  $(srcdir)/da.po $(srcdir)/es.po $(srcdir)/fi.po $(srcdir)/fr.po $(srcdir)/hr.po $(srcdir)/id.po $(srcdir)/ja.po $(srcdir)/ro.po $(srcdir)/ru.po $(srcdir)/rw.po $(srcdir)/sr.po $(srcdir)/sv.po $(srcdir)/tr.po $(srcdir)/uk.po $(srcdir)/vi.po $(srcdir)/zh_CN.po $(srcdir)/pt.po
GMOFILES =  $(srcdir)/da.gmo $(srcdir)/es.gmo $(srcdir)/fi.gmo $(srcdir)/fr.gmo $(srcdir)/hr.gmo $(srcdir)/id.gmo $(srcdir)/ja.gmo $(srcdir)/ro.gmo $(srcdir)/ru.gmo $(srcdir)/rw.gmo $(srcdir)/sr.gmo $(srcdir)/sv.gmo $(srcdir)/tr.gmo $(srcdir)/uk.gmo $(srcdir)/vi.gmo $(srcdir)/zh_CN.gmo $(srcdir)/pt.gmo
DISTFILES = ChangeLog Makefile.in.in SRC-POTFILES.in BLD-POTFILES.in $(PACKAGE).pot \
stamp-cat-id $(POFILES) $(GMOFILES) $(SOURCES)

# Note - the following line gets processed by bfd/configure and amended
# to contain the full list of source dir POTFILES.
SRC-POTFILES = \
	../../../../binutils/binutils-2.42.90/bfd/aix5ppc-core.c \
	../../../../binutils/binutils-2.42.90/bfd/aout-cris.c \
	../../../../binutils/binutils-2.42.90/bfd/aout-ns32k.c \
	../../../../binutils/binutils-2.42.90/bfd/aout-target.h \
	../../../../binutils/binutils-2.42.90/bfd/aout32.c \
	../../../../binutils/binutils-2.42.90/bfd/aout64.c \
	../../../../binutils/binutils-2.42.90/bfd/aoutx.h \
	../../../../binutils/binutils-2.42.90/bfd/arc-got.h \
	../../../../binutils/binutils-2.42.90/bfd/arc-plt.h \
	../../../../binutils/binutils-2.42.90/bfd/archive.c \
	../../../../binutils/binutils-2.42.90/bfd/archive64.c \
	../../../../binutils/binutils-2.42.90/bfd/archures.c \
	../../../../binutils/binutils-2.42.90/bfd/bfd.c \
	../../../../binutils/binutils-2.42.90/bfd/bfdio.c \
	../../../../binutils/binutils-2.42.90/bfd/binary.c \
	../../../../binutils/binutils-2.42.90/bfd/cache.c \
	../../../../binutils/binutils-2.42.90/bfd/cf-i386lynx.c \
	../../../../binutils/binutils-2.42.90/bfd/cisco-core.c \
	../../../../binutils/binutils-2.42.90/bfd/coff-alpha.c \
	../../../../binutils/binutils-2.42.90/bfd/coff-arm.h \
	../../../../binutils/binutils-2.42.90/bfd/coff-bfd.c \
	../../../../binutils/binutils-2.42.90/bfd/coff-bfd.h \
	../../../../binutils/binutils-2.42.90/bfd/coff-go32.c \
	../../../../binutils/binutils-2.42.90/bfd/coff-i386.c \
	../../../../binutils/binutils-2.42.90/bfd/coff-mips.c \
	../../../../binutils/binutils-2.42.90/bfd/coff-rs6000.c \
	../../../../binutils/binutils-2.42.90/bfd/coff-sh.c \
	../../../../binutils/binutils-2.42.90/bfd/coff-stgo32.c \
	../../../../binutils/binutils-2.42.90/bfd/coff-tic30.c \
	../../../../binutils/binutils-2.42.90/bfd/coff-tic4x.c \
	../../../../binutils/binutils-2.42.90/bfd/coff-tic54x.c \
	../../../../binutils/binutils-2.42.90/bfd/coff-x86_64.c \
	../../../../binutils/binutils-2.42.90/bfd/coff-z80.c \
	../../../../binutils/binutils-2.42.90/bfd/coff-z8k.c \
	../../../../binutils/binutils-2.42.90/bfd/coff64-rs6000.c \
	../../../../binutils/binutils-2.42.90/bfd/coffcode.h \
	../../../../binutils/binutils-2.42.90/bfd/coffgen.c \
	../../../../binutils/binutils-2.42.90/bfd/cofflink.c \
	../../../../binutils/binutils-2.42.90/bfd/coffswap.h \
	../../../../binutils/binutils-2.42.90/bfd/compress.c \
	../../../../binutils/binutils-2.42.90/bfd/corefile.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-aarch64.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-aarch64.h \
	../../../../binutils/binutils-2.42.90/bfd/cpu-alpha.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-amdgcn.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-arc.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-arm.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-arm.h \
	../../../../binutils/binutils-2.42.90/bfd/cpu-avr.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-bfin.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-bpf.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-cr16.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-cris.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-crx.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-csky.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-d10v.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-d30v.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-dlx.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-epiphany.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-fr30.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-frv.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-ft32.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-h8300.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-h8300.h \
	../../../../binutils/binutils-2.42.90/bfd/cpu-hppa.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-i386.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-ia64.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-iamcu.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-ip2k.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-iq2000.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-kvx.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-lm32.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-loongarch.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-m10200.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-m10300.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-m32c.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-m32r.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-m68hc11.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-m68hc12.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-m68k.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-m68k.h \
	../../../../binutils/binutils-2.42.90/bfd/cpu-m9s12x.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-m9s12xg.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-mcore.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-mep.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-metag.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-microblaze.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-mips.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-mmix.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-moxie.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-msp430.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-mt.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-nds32.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-nfp.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-nios2.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-ns32k.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-or1k.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-pdp11.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-pj.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-powerpc.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-pru.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-riscv.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-riscv.h \
	../../../../binutils/binutils-2.42.90/bfd/cpu-rl78.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-rs6000.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-rx.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-s12z.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-s390.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-score.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-sh.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-sparc.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-spu.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-tic30.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-tic4x.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-tic54x.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-tic6x.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-tilegx.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-tilepro.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-v850.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-v850_rh850.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-vax.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-visium.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-wasm32.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-xgate.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-xstormy16.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-xtensa.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-z80.c \
	../../../../binutils/binutils-2.42.90/bfd/cpu-z8k.c \
	../../../../binutils/binutils-2.42.90/bfd/dwarf1.c \
	../../../../binutils/binutils-2.42.90/bfd/dwarf2.c \
	../../../../binutils/binutils-2.42.90/bfd/ecoff-bfd.h \
	../../../../binutils/binutils-2.42.90/bfd/ecoff.c \
	../../../../binutils/binutils-2.42.90/bfd/ecofflink.c \
	../../../../binutils/binutils-2.42.90/bfd/ecoffswap.h \
	../../../../binutils/binutils-2.42.90/bfd/elf-attrs.c \
	../../../../binutils/binutils-2.42.90/bfd/elf-bfd.h \
	../../../../binutils/binutils-2.42.90/bfd/elf-eh-frame.c \
	../../../../binutils/binutils-2.42.90/bfd/elf-hppa.h \
	../../../../binutils/binutils-2.42.90/bfd/elf-ifunc.c \
	../../../../binutils/binutils-2.42.90/bfd/elf-linker-x86.h \
	../../../../binutils/binutils-2.42.90/bfd/elf-linux-core.h \
	../../../../binutils/binutils-2.42.90/bfd/elf-m10200.c \
	../../../../binutils/binutils-2.42.90/bfd/elf-m10300.c \
	../../../../binutils/binutils-2.42.90/bfd/elf-nacl.c \
	../../../../binutils/binutils-2.42.90/bfd/elf-nacl.h \
	../../../../binutils/binutils-2.42.90/bfd/elf-properties.c \
	../../../../binutils/binutils-2.42.90/bfd/elf-s390.h \
	../../../../binutils/binutils-2.42.90/bfd/elf-sframe.c \
	../../../../binutils/binutils-2.42.90/bfd/elf-strtab.c \
	../../../../binutils/binutils-2.42.90/bfd/elf-vxworks.c \
	../../../../binutils/binutils-2.42.90/bfd/elf-vxworks.h \
	../../../../binutils/binutils-2.42.90/bfd/elf.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-am33lin.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-arc.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-arm.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-arm.h \
	../../../../binutils/binutils-2.42.90/bfd/elf32-avr.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-avr.h \
	../../../../binutils/binutils-2.42.90/bfd/elf32-bfin.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-bfin.h \
	../../../../binutils/binutils-2.42.90/bfd/elf32-cr16.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-cr16.h \
	../../../../binutils/binutils-2.42.90/bfd/elf32-cris.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-crx.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-csky.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-csky.h \
	../../../../binutils/binutils-2.42.90/bfd/elf32-d10v.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-d30v.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-dlx.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-dlx.h \
	../../../../binutils/binutils-2.42.90/bfd/elf32-epiphany.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-fr30.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-frv.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-ft32.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-gen.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-h8300.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-hppa.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-hppa.h \
	../../../../binutils/binutils-2.42.90/bfd/elf32-i386.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-ip2k.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-iq2000.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-lm32.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-m32c.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-m32r.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-m68hc11.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-m68hc12.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-m68hc1x.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-m68hc1x.h \
	../../../../binutils/binutils-2.42.90/bfd/elf32-m68k.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-m68k.h \
	../../../../binutils/binutils-2.42.90/bfd/elf32-mcore.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-mep.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-metag.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-metag.h \
	../../../../binutils/binutils-2.42.90/bfd/elf32-microblaze.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-mips.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-moxie.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-msp430.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-mt.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-nds32.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-nds32.h \
	../../../../binutils/binutils-2.42.90/bfd/elf32-nios2.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-nios2.h \
	../../../../binutils/binutils-2.42.90/bfd/elf32-or1k.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-pj.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-ppc.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-ppc.h \
	../../../../binutils/binutils-2.42.90/bfd/elf32-pru.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-rl78.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-rx.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-rx.h \
	../../../../binutils/binutils-2.42.90/bfd/elf32-s12z.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-s390.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-score.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-score.h \
	../../../../binutils/binutils-2.42.90/bfd/elf32-score7.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-sh-relocs.h \
	../../../../binutils/binutils-2.42.90/bfd/elf32-sh.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-sparc.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-spu.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-spu.h \
	../../../../binutils/binutils-2.42.90/bfd/elf32-tic6x.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-tic6x.h \
	../../../../binutils/binutils-2.42.90/bfd/elf32-tilegx.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-tilegx.h \
	../../../../binutils/binutils-2.42.90/bfd/elf32-tilepro.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-tilepro.h \
	../../../../binutils/binutils-2.42.90/bfd/elf32-v850.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-v850.h \
	../../../../binutils/binutils-2.42.90/bfd/elf32-vax.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-visium.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-wasm32.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-xgate.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-xstormy16.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-xtensa.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32-z80.c \
	../../../../binutils/binutils-2.42.90/bfd/elf32.c \
	../../../../binutils/binutils-2.42.90/bfd/elf64-alpha.c \
	../../../../binutils/binutils-2.42.90/bfd/elf64-amdgcn.c \
	../../../../binutils/binutils-2.42.90/bfd/elf64-bpf.c \
	../../../../binutils/binutils-2.42.90/bfd/elf64-gen.c \
	../../../../binutils/binutils-2.42.90/bfd/elf64-hppa.c \
	../../../../binutils/binutils-2.42.90/bfd/elf64-hppa.h \
	../../../../binutils/binutils-2.42.90/bfd/elf64-ia64-vms.c \
	../../../../binutils/binutils-2.42.90/bfd/elf64-mips.c \
	../../../../binutils/binutils-2.42.90/bfd/elf64-mmix.c \
	../../../../binutils/binutils-2.42.90/bfd/elf64-nfp.c \
	../../../../binutils/binutils-2.42.90/bfd/elf64-ppc.c \
	../../../../binutils/binutils-2.42.90/bfd/elf64-ppc.h \
	../../../../binutils/binutils-2.42.90/bfd/elf64-s390.c \
	../../../../binutils/binutils-2.42.90/bfd/elf64-sparc.c \
	../../../../binutils/binutils-2.42.90/bfd/elf64-tilegx.c \
	../../../../binutils/binutils-2.42.90/bfd/elf64-tilegx.h \
	../../../../binutils/binutils-2.42.90/bfd/elf64-x86-64.c \
	../../../../binutils/binutils-2.42.90/bfd/elf64.c \
	../../../../binutils/binutils-2.42.90/bfd/elfcode.h \
	../../../../binutils/binutils-2.42.90/bfd/elfcore.h \
	../../../../binutils/binutils-2.42.90/bfd/elflink.c \
	../../../../binutils/binutils-2.42.90/bfd/elfn32-mips.c \
	../../../../binutils/binutils-2.42.90/bfd/elfxx-aarch64.c \
	../../../../binutils/binutils-2.42.90/bfd/elfxx-aarch64.h \
	../../../../binutils/binutils-2.42.90/bfd/elfxx-ia64.c \
	../../../../binutils/binutils-2.42.90/bfd/elfxx-ia64.h \
	../../../../binutils/binutils-2.42.90/bfd/elfxx-kvx.c \
	../../../../binutils/binutils-2.42.90/bfd/elfxx-loongarch.c \
	../../../../binutils/binutils-2.42.90/bfd/elfxx-loongarch.h \
	../../../../binutils/binutils-2.42.90/bfd/elfxx-mips.c \
	../../../../binutils/binutils-2.42.90/bfd/elfxx-mips.h \
	../../../../binutils/binutils-2.42.90/bfd/elfxx-riscv.c \
	../../../../binutils/binutils-2.42.90/bfd/elfxx-riscv.h \
	../../../../binutils/binutils-2.42.90/bfd/elfxx-sparc.c \
	../../../../binutils/binutils-2.42.90/bfd/elfxx-sparc.h \
	../../../../binutils/binutils-2.42.90/bfd/elfxx-tilegx.c \
	../../../../binutils/binutils-2.42.90/bfd/elfxx-tilegx.h \
	../../../../binutils/binutils-2.42.90/bfd/elfxx-x86.c \
	../../../../binutils/binutils-2.42.90/bfd/elfxx-x86.h \
	../../../../binutils/binutils-2.42.90/bfd/format.c \
	../../../../binutils/binutils-2.42.90/bfd/genlink.h \
	../../../../binutils/binutils-2.42.90/bfd/go32stub.h \
	../../../../binutils/binutils-2.42.90/bfd/hash.c \
	../../../../binutils/binutils-2.42.90/bfd/hpux-core.c \
	../../../../binutils/binutils-2.42.90/bfd/i386aout.c \
	../../../../binutils/binutils-2.42.90/bfd/i386bsd.c \
	../../../../binutils/binutils-2.42.90/bfd/i386lynx.c \
	../../../../binutils/binutils-2.42.90/bfd/i386msdos.c \
	../../../../binutils/binutils-2.42.90/bfd/ihex.c \
	../../../../binutils/binutils-2.42.90/bfd/irix-core.c \
	../../../../binutils/binutils-2.42.90/bfd/libaout.h \
	../../../../binutils/binutils-2.42.90/bfd/libbfd.c \
	../../../../binutils/binutils-2.42.90/bfd/libbfd.h \
	../../../../binutils/binutils-2.42.90/bfd/libcoff.h \
	../../../../binutils/binutils-2.42.90/bfd/libecoff.h \
	../../../../binutils/binutils-2.42.90/bfd/libhppa.h \
	../../../../binutils/binutils-2.42.90/bfd/libpei.h \
	../../../../binutils/binutils-2.42.90/bfd/libxcoff.h \
	../../../../binutils/binutils-2.42.90/bfd/linker.c \
	../../../../binutils/binutils-2.42.90/bfd/lynx-core.c \
	../../../../binutils/binutils-2.42.90/bfd/mach-o-aarch64.c \
	../../../../binutils/binutils-2.42.90/bfd/mach-o-arm.c \
	../../../../binutils/binutils-2.42.90/bfd/mach-o-i386.c \
	../../../../binutils/binutils-2.42.90/bfd/mach-o-x86-64.c \
	../../../../binutils/binutils-2.42.90/bfd/mach-o.c \
	../../../../binutils/binutils-2.42.90/bfd/mach-o.h \
	../../../../binutils/binutils-2.42.90/bfd/merge.c \
	../../../../binutils/binutils-2.42.90/bfd/mmo.c \
	../../../../binutils/binutils-2.42.90/bfd/netbsd-core.c \
	../../../../binutils/binutils-2.42.90/bfd/netbsd.h \
	../../../../binutils/binutils-2.42.90/bfd/ns32k.h \
	../../../../binutils/binutils-2.42.90/bfd/ns32knetbsd.c \
	../../../../binutils/binutils-2.42.90/bfd/opncls.c \
	../../../../binutils/binutils-2.42.90/bfd/osf-core.c \
	../../../../binutils/binutils-2.42.90/bfd/pc532-mach.c \
	../../../../binutils/binutils-2.42.90/bfd/pdb.c \
	../../../../binutils/binutils-2.42.90/bfd/pdp11.c \
	../../../../binutils/binutils-2.42.90/bfd/pe-aarch64.c \
	../../../../binutils/binutils-2.42.90/bfd/pe-arm-wince.c \
	../../../../binutils/binutils-2.42.90/bfd/pe-arm.c \
	../../../../binutils/binutils-2.42.90/bfd/pe-i386.c \
	../../../../binutils/binutils-2.42.90/bfd/pe-mcore.c \
	../../../../binutils/binutils-2.42.90/bfd/pe-sh.c \
	../../../../binutils/binutils-2.42.90/bfd/pe-x86_64.c \
	../../../../binutils/binutils-2.42.90/bfd/pef-traceback.h \
	../../../../binutils/binutils-2.42.90/bfd/pef.c \
	../../../../binutils/binutils-2.42.90/bfd/pef.h \
	../../../../binutils/binutils-2.42.90/bfd/pei-aarch64.c \
	../../../../binutils/binutils-2.42.90/bfd/pei-arm-wince.c \
	../../../../binutils/binutils-2.42.90/bfd/pei-arm.c \
	../../../../binutils/binutils-2.42.90/bfd/pei-i386.c \
	../../../../binutils/binutils-2.42.90/bfd/pei-ia64.c \
	../../../../binutils/binutils-2.42.90/bfd/pei-loongarch64.c \
	../../../../binutils/binutils-2.42.90/bfd/pei-mcore.c \
	../../../../binutils/binutils-2.42.90/bfd/pei-riscv64.c \
	../../../../binutils/binutils-2.42.90/bfd/pei-sh.c \
	../../../../binutils/binutils-2.42.90/bfd/pei-x86_64.c \
	../../../../binutils/binutils-2.42.90/bfd/peicode.h \
	../../../../binutils/binutils-2.42.90/bfd/plugin.c \
	../../../../binutils/binutils-2.42.90/bfd/plugin.h \
	../../../../binutils/binutils-2.42.90/bfd/ppcboot.c \
	../../../../binutils/binutils-2.42.90/bfd/reloc.c \
	../../../../binutils/binutils-2.42.90/bfd/reloc16.c \
	../../../../binutils/binutils-2.42.90/bfd/rs6000-core.c \
	../../../../binutils/binutils-2.42.90/bfd/section.c \
	../../../../binutils/binutils-2.42.90/bfd/simple.c \
	../../../../binutils/binutils-2.42.90/bfd/som.c \
	../../../../binutils/binutils-2.42.90/bfd/som.h \
	../../../../binutils/binutils-2.42.90/bfd/srec.c \
	../../../../binutils/binutils-2.42.90/bfd/stab-syms.c \
	../../../../binutils/binutils-2.42.90/bfd/stabs.c \
	../../../../binutils/binutils-2.42.90/bfd/syms.c \
	../../../../binutils/binutils-2.42.90/bfd/sysdep.h \
	../../../../binutils/binutils-2.42.90/bfd/targets.c \
	../../../../binutils/binutils-2.42.90/bfd/tekhex.c \
	../../../../binutils/binutils-2.42.90/bfd/trad-core.c \
	../../../../binutils/binutils-2.42.90/bfd/vax1knetbsd.c \
	../../../../binutils/binutils-2.42.90/bfd/vaxnetbsd.c \
	../../../../binutils/binutils-2.42.90/bfd/verilog.c \
	../../../../binutils/binutils-2.42.90/bfd/version.h \
	../../../../binutils/binutils-2.42.90/bfd/vms-alpha.c \
	../../../../binutils/binutils-2.42.90/bfd/vms-lib.c \
	../../../../binutils/binutils-2.42.90/bfd/vms-misc.c \
	../../../../binutils/binutils-2.42.90/bfd/vms.h \
	../../../../binutils/binutils-2.42.90/bfd/wasm-module.c \
	../../../../binutils/binutils-2.42.90/bfd/wasm-module.h \
	../../../../binutils/binutils-2.42.90/bfd/xcofflink.c \
	../../../../binutils/binutils-2.42.90/bfd/xcofflink.h \
	../../../../binutils/binutils-2.42.90/bfd/xsym.c \
	../../../../binutils/binutils-2.42.90/bfd/xsym.h \
	../../../../binutils/binutils-2.42.90/bfd/xtensa-dynconfig.c \
	../../../../binutils/binutils-2.42.90/bfd/xtensa-isa.c \
	../../../../binutils/binutils-2.42.90/bfd/xtensa-modules.c 

# Note - the following line gets processed by bfd/configure and amended
# to contain the full list of build dir POTFILES.
BLD-POTFILES = \
	../bfdver.h \
	../elf32-aarch64.c \
	../elf32-ia64.c \
	../elf32-kvx.c \
	../elf32-loongarch.c \
	../elf32-riscv.c \
	../elf32-target.h \
	../elf64-aarch64.c \
	../elf64-ia64.c \
	../elf64-kvx.c \
	../elf64-loongarch.c \
	../elf64-riscv.c \
	../elf64-target.h \
	../pe-aarch64igen.c \
	../pe-loongarch64igen.c \
	../pe-riscv64igen.c \
	../peigen.c \
	../pepigen.c \
	../pex64igen.c \
	../targmatch.h 

CATALOGS = 
CATOBJEXT = 
INSTOBJEXT = 

.SUFFIXES:
.SUFFIXES: .c .o .po .pox .gmo .mo .msg .cat

.c.o:
	$(COMPILE) $<

.po.pox:
	$(MAKE) $(PACKAGE).pot
	$(MSGMERGE) $< $(srcdir)/$(PACKAGE).pot -o $*.pox

.po.mo:
	$(MSGFMT) -o $@ $<

.po.gmo:
	file=`echo $* | sed 's,.*/,,'`.gmo \
	  && rm -f $$file && $(GMSGFMT) -o $$file $<

.po.cat:
	sed -f ../intl/po2msg.sed < $< > $*.msg \
	  && rm -f $@ && $(GENCAT) $@ $*.msg


all: all-no

all-yes: $(CATALOGS) # $(PACKAGE).pot
all-no:

$(srcdir)/$(PACKAGE).pot: $(SRC-POTFILES) $(BLD-POTFILES)
	$(XGETTEXT) --default-domain=$(PACKAGE) \
	  --directory=$(top_srcdir) \
	  --add-comments --keyword=_ --keyword=N_ \
	  --msgid-bugs-address=https://sourceware.org/bugzilla/ \
	  --files-from=$(srcdir)/SRC-POTFILES.in 
	$(XGETTEXT) --default-domain=$(PACKAGE) \
	  --directory=.. \
	  --directory=. \
	  --add-comments --keyword=_ --keyword=N_ \
	  --join-existing \
	  --msgid-bugs-address=https://sourceware.org/bugzilla/ \
	  --files-from=$(srcdir)/BLD-POTFILES.in
	sed -e '/^#:/s,$(top_srcdir)/,,g' < $(PACKAGE).po > $@-t
	mv -f $@-t $@

$(srcdir)/cat-id-tbl.c: stamp-cat-id; @:
$(srcdir)/stamp-cat-id: $(PACKAGE).pot
	rm -f cat-id-tbl.tmp
	sed -f ../intl/po2tbl.sed $(srcdir)/$(PACKAGE).pot \
		| sed -e "s/@PACKAGE NAME@/$(PACKAGE)/" > cat-id-tbl.tmp
	if cmp -s cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; then \
	  rm cat-id-tbl.tmp; \
	else \
	  echo cat-id-tbl.c changed; \
	  rm -f $(srcdir)/cat-id-tbl.c; \
	  mv cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; \
	fi
	cd $(srcdir) && rm -f stamp-cat-id && echo timestamp > stamp-cat-id


install: install-exec install-data
install-exec:
install-info:
install-html:
install-dvi:
install-pdf:
install-ps:
install-data: install-data-no
install-data-no: all
install-data-yes: all
	if test -r $(MKINSTALLDIRS); then \
	  $(MKINSTALLDIRS) $(DESTDIR)$(datadir); \
	else \
	  $(top_srcdir)/mkinstalldirs $(DESTDIR)$(datadir); \
	fi
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  case "$$cat" in \
	    *.gmo) destdir=$(gnulocaledir);; \
	    *)     destdir=$(localedir);; \
	  esac; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  dir=$(DESTDIR)$$destdir/$$lang/LC_MESSAGES; \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $$dir; \
	  else \
	    $(top_srcdir)/mkinstalldirs $$dir; \
	  fi; \
	  if test -r $$cat; then \
	    $(INSTALL_DATA) $$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $$cat as $$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  else \
	    $(INSTALL_DATA) $(srcdir)/$$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $(srcdir)/$$cat as" \
		 "$$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  fi; \
	  if test -r $$cat.m; then \
	    $(INSTALL_DATA) $$cat.m $$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	    echo "installing $$cat.m as $$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	  else \
	    if test -r $(srcdir)/$$cat.m ; then \
	      $(INSTALL_DATA) $(srcdir)/$$cat.m \
		$$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	      echo "installing $(srcdir)/$$cat as" \
		   "$$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	    else \
	      true; \
	    fi; \
	  fi; \
	done
	if test "$(PACKAGE)" = "gettext"; then \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $(DESTDIR)$(gettextsrcdir); \
	  else \
	    $(top_srcdir)/mkinstalldirs $(DESTDIR)$(gettextsrcdir); \
	  fi; \
	  $(INSTALL_DATA) $(srcdir)/Makefile.in.in \
			  $(DESTDIR)$(gettextsrcdir)/Makefile.in.in; \
	else \
	  : ; \
	fi

# Define this as empty until I found a useful application.
installcheck:

uninstall:
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	done
	rm -f $(DESTDIR)$(gettextsrcdir)/po-Makefile.in.in

check: all

cat-id-tbl.o: ../intl/libgettext.h

html dvi pdf ps info tags TAGS ID:

mostlyclean:
	rm -f core core.* *.pox $(PACKAGE).po *.old.po cat-id-tbl.tmp
	rm -fr *.o

clean: mostlyclean

distclean: clean
	rm -f Makefile Makefile.in *.mo *.msg *.cat *.cat.m
	rm -f SRC-POTFILES BLD-POTFILES 

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f $(GMOFILES) SRC-POTFILES.in BLD-POTFILES.in

distdir = ../$(PACKAGE)-$(VERSION)/$(subdir)
dist distdir: update-po $(DISTFILES)
	dists="$(DISTFILES)"; \
	for file in $$dists; do \
	  ln $(srcdir)/$$file $(distdir) 2> /dev/null \
	    || cp -p $(srcdir)/$$file $(distdir); \
	done

update-po: Makefile
	$(MAKE) $(PACKAGE).pot
	PATH=`pwd`/../src:$$PATH; \
	cd $(srcdir); \
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  mv $$lang.po $$lang.old.po; \
	  echo "$$lang:"; \
	  if $(MSGMERGE) $$lang.old.po $(PACKAGE).pot -o $$lang.po; then \
	    rm -f $$lang.old.po; \
	  else \
	    echo "msgmerge for $$cat failed!"; \
	    rm -f $$lang.po; \
	    mv $$lang.old.po $$lang.po; \
	  fi; \
	done

SRC-POTFILES: SRC-POTFILES.in
	( if test 'x$(srcdir)' != 'x.'; then \
	    posrcprefix='$(top_srcdir)/'; \
	  else \
	    posrcprefix="../"; \
	  fi; \
	  rm -f $@-t $@ \
	    && (sed -e '/^#/d' \
	            -e '/^[ 	]*$$/d' \
		    -e "s@.*@	$$posrcprefix& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

BLD-POTFILES: BLD-POTFILES.in
	  ( rm -f $@-t $@ \
	    && (sed -e '/^#/d' \
	            -e '/^[ 	]*$$/d' \
		    -e "s@.*@	../& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

SRC-POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/SRC-POTFILES.in

BLD-POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/BLD-POTFILES.in

# Note - The presence of SRC-POTFILES and BLD-POTFILES as dependencies
# here breaks the implementation of the 'distclean' rule for maintainers.
# This is because if 'make distclean' is run in the BFD directory, the
# Makefile there will be deleted before 'distclean' is made here, and so
# the dependency SRC-POTFILES -> SRC-POTFILES.in -> ../Makefile cannot
# be satisfied.
#
# The SRC-POTFILES and BLD-POTFILES dependencies cannot be removed,
# however since it is necessary that these files be built during
# *configure* time, so that configure can insert them into the
# po/Makefile that it is creating, so that the Makefile will have
# the correct dependencies.
Makefile: Make-in ../config.status SRC-POTFILES BLD-POTFILES
	cd .. \
	  && CONFIG_FILES=$(subdir)/Makefile.in:$(subdir)/Make-in \
	     CONFIG_HEADERS= $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
