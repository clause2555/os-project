# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright (C) 2003-2024 Free Software Foundation, Inc.
#
# This file may be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = gas
VERSION = 2.42.90

SHELL = /bin/sh


srcdir = ../../../../binutils/binutils-2.42.90/gas/po
top_srcdir = ../../../../binutils/binutils-2.42.90/gas
VPATH = ../../../../binutils/binutils-2.42.90/gas/po
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
MKINSTALLDIRS = $(top_builddir)/../../../binutils/binutils-2.42.90/gas/../mkinstalldirs

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
POFILES =  $(srcdir)/es.po $(srcdir)/fi.po $(srcdir)/fr.po $(srcdir)/id.po $(srcdir)/ja.po $(srcdir)/ru.po $(srcdir)/rw.po $(srcdir)/sv.po $(srcdir)/tr.po $(srcdir)/uk.po $(srcdir)/zh_CN.po
GMOFILES =  $(srcdir)/es.gmo $(srcdir)/fi.gmo $(srcdir)/fr.gmo $(srcdir)/id.gmo $(srcdir)/ja.gmo $(srcdir)/ru.gmo $(srcdir)/rw.gmo $(srcdir)/sv.gmo $(srcdir)/tr.gmo $(srcdir)/uk.gmo $(srcdir)/zh_CN.gmo
DISTFILES = ChangeLog Makefile.in.in POTFILES.in $(PACKAGE).pot \
stamp-cat-id $(POFILES) $(GMOFILES) $(SOURCES)

POTFILES = \
     ../../../../binutils/binutils-2.42.90/gas/app.c \
     ../../../../binutils/binutils-2.42.90/gas/as.c \
     ../../../../binutils/binutils-2.42.90/gas/as.h \
     ../../../../binutils/binutils-2.42.90/gas/asintl.h \
     ../../../../binutils/binutils-2.42.90/gas/atof-generic.c \
     ../../../../binutils/binutils-2.42.90/gas/bignum.h \
     ../../../../binutils/binutils-2.42.90/gas/bit_fix.h \
     ../../../../binutils/binutils-2.42.90/gas/cgen.c \
     ../../../../binutils/binutils-2.42.90/gas/cgen.h \
     ../../../../binutils/binutils-2.42.90/gas/codeview.c \
     ../../../../binutils/binutils-2.42.90/gas/codeview.h \
     ../../../../binutils/binutils-2.42.90/gas/compress-debug.c \
     ../../../../binutils/binutils-2.42.90/gas/compress-debug.h \
     ../../../../binutils/binutils-2.42.90/gas/cond.c \
     ../../../../binutils/binutils-2.42.90/gas/config/atof-ieee.c \
     ../../../../binutils/binutils-2.42.90/gas/config/atof-vax.c \
     ../../../../binutils/binutils-2.42.90/gas/config/bfin-lex-wrapper.c \
     ../../../../binutils/binutils-2.42.90/gas/config/e-crisaout.c \
     ../../../../binutils/binutils-2.42.90/gas/config/e-criself.c \
     ../../../../binutils/binutils-2.42.90/gas/config/e-i386aout.c \
     ../../../../binutils/binutils-2.42.90/gas/config/e-i386coff.c \
     ../../../../binutils/binutils-2.42.90/gas/config/e-i386elf.c \
     ../../../../binutils/binutils-2.42.90/gas/config/e-mipself.c \
     ../../../../binutils/binutils-2.42.90/gas/config/kvx-parse.c \
     ../../../../binutils/binutils-2.42.90/gas/config/kvx-parse.h \
     ../../../../binutils/binutils-2.42.90/gas/config/obj-aout.c \
     ../../../../binutils/binutils-2.42.90/gas/config/obj-aout.h \
     ../../../../binutils/binutils-2.42.90/gas/config/obj-coff.c \
     ../../../../binutils/binutils-2.42.90/gas/config/obj-coff.h \
     ../../../../binutils/binutils-2.42.90/gas/config/obj-ecoff.c \
     ../../../../binutils/binutils-2.42.90/gas/config/obj-ecoff.h \
     ../../../../binutils/binutils-2.42.90/gas/config/obj-elf.c \
     ../../../../binutils/binutils-2.42.90/gas/config/obj-elf.h \
     ../../../../binutils/binutils-2.42.90/gas/config/obj-evax.c \
     ../../../../binutils/binutils-2.42.90/gas/config/obj-evax.h \
     ../../../../binutils/binutils-2.42.90/gas/config/obj-fdpicelf.c \
     ../../../../binutils/binutils-2.42.90/gas/config/obj-fdpicelf.h \
     ../../../../binutils/binutils-2.42.90/gas/config/obj-macho.c \
     ../../../../binutils/binutils-2.42.90/gas/config/obj-macho.h \
     ../../../../binutils/binutils-2.42.90/gas/config/obj-multi.c \
     ../../../../binutils/binutils-2.42.90/gas/config/obj-multi.h \
     ../../../../binutils/binutils-2.42.90/gas/config/obj-som.c \
     ../../../../binutils/binutils-2.42.90/gas/config/obj-som.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-aarch64.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-aarch64.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-alpha.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-alpha.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-arc.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-arc.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-arm.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-arm.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-avr.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-avr.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-bfin.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-bfin.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-bpf.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-bpf.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-cr16.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-cr16.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-cris.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-cris.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-crx.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-crx.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-csky.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-csky.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-d10v.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-d10v.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-d30v.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-d30v.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-dlx.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-dlx.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-epiphany.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-epiphany.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-fr30.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-fr30.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-frv.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-frv.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-ft32.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-ft32.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-h8300.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-h8300.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-hppa.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-hppa.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-i386.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-i386.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-ia64.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-ia64.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-ip2k.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-ip2k.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-iq2000.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-iq2000.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-kvx.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-kvx.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-lm32.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-lm32.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-loongarch.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-m32c.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-m32c.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-m32r.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-m32r.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-m68hc11.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-m68hc11.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-m68k.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-m68k.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-mcore.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-mcore.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-mep.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-mep.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-metag.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-metag.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-microblaze.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-microblaze.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-mips.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-mips.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-mmix.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-mmix.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-mn10200.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-mn10200.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-mn10300.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-mn10300.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-moxie.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-msp430.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-msp430.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-mt.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-mt.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-nds32.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-nds32.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-nios2.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-nios2.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-ns32k.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-ns32k.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-or1k.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-or1k.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-pdp11.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-pdp11.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-pj.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-pj.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-ppc.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-ppc.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-pru.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-pru.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-riscv.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-riscv.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-rl78.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-rl78.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-rx.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-rx.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-s12z.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-s12z.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-s390.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-s390.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-score.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-score.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-sh.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-sh.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-sparc.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-sparc.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-spu.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-spu.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-tic30.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-tic30.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-tic4x.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-tic4x.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-tic54x.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-tic54x.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-tic6x.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-tic6x.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-tilegx.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-tilegx.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-tilepro.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-tilepro.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-v850.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-v850.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-vax.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-vax.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-visium.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-visium.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-wasm32.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-wasm32.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-xgate.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-xgate.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-xstormy16.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-xstormy16.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-xtensa.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-xtensa.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-z80.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-z80.h \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-z8k.c \
     ../../../../binutils/binutils-2.42.90/gas/config/tc-z8k.h \
     ../../../../binutils/binutils-2.42.90/gas/config/te-386bsd.h \
     ../../../../binutils/binutils-2.42.90/gas/config/te-aix5.h \
     ../../../../binutils/binutils-2.42.90/gas/config/te-armeabi.h \
     ../../../../binutils/binutils-2.42.90/gas/config/te-armfbsdeabi.h \
     ../../../../binutils/binutils-2.42.90/gas/config/te-armfbsdvfp.h \
     ../../../../binutils/binutils-2.42.90/gas/config/te-armlinuxeabi.h \
     ../../../../binutils/binutils-2.42.90/gas/config/te-csky_abiv1.h \
     ../../../../binutils/binutils-2.42.90/gas/config/te-csky_abiv1_linux.h \
     ../../../../binutils/binutils-2.42.90/gas/config/te-csky_abiv2.h \
     ../../../../binutils/binutils-2.42.90/gas/config/te-csky_abiv2_linux.h \
     ../../../../binutils/binutils-2.42.90/gas/config/te-freebsd.h \
     ../../../../binutils/binutils-2.42.90/gas/config/te-generic.h \
     ../../../../binutils/binutils-2.42.90/gas/config/te-gnu.h \
     ../../../../binutils/binutils-2.42.90/gas/config/te-go32.h \
     ../../../../binutils/binutils-2.42.90/gas/config/te-hppa.h \
     ../../../../binutils/binutils-2.42.90/gas/config/te-hppa64.h \
     ../../../../binutils/binutils-2.42.90/gas/config/te-hppalinux64.h \
     ../../../../binutils/binutils-2.42.90/gas/config/te-interix.h \
     ../../../../binutils/binutils-2.42.90/gas/config/te-lynx.h \
     ../../../../binutils/binutils-2.42.90/gas/config/te-macos.h \
     ../../../../binutils/binutils-2.42.90/gas/config/te-nbsd.h \
     ../../../../binutils/binutils-2.42.90/gas/config/te-nbsd532.h \
     ../../../../binutils/binutils-2.42.90/gas/config/te-pc532mach.h \
     ../../../../binutils/binutils-2.42.90/gas/config/te-pe.h \
     ../../../../binutils/binutils-2.42.90/gas/config/te-solaris.h \
     ../../../../binutils/binutils-2.42.90/gas/config/te-tmips.h \
     ../../../../binutils/binutils-2.42.90/gas/config/te-vms.c \
     ../../../../binutils/binutils-2.42.90/gas/config/te-vxworks.h \
     ../../../../binutils/binutils-2.42.90/gas/config/te-wince-pe.h \
     ../../../../binutils/binutils-2.42.90/gas/config/xtensa-relax.c \
     ../../../../binutils/binutils-2.42.90/gas/config/xtensa-relax.h \
     ../../../../binutils/binutils-2.42.90/gas/depend.c \
     ../../../../binutils/binutils-2.42.90/gas/dw2gencfi.c \
     ../../../../binutils/binutils-2.42.90/gas/dw2gencfi.h \
     ../../../../binutils/binutils-2.42.90/gas/dwarf2dbg.c \
     ../../../../binutils/binutils-2.42.90/gas/dwarf2dbg.h \
     ../../../../binutils/binutils-2.42.90/gas/ecoff.c \
     ../../../../binutils/binutils-2.42.90/gas/ecoff.h \
     ../../../../binutils/binutils-2.42.90/gas/ehopt.c \
     ../../../../binutils/binutils-2.42.90/gas/emul-target.h \
     ../../../../binutils/binutils-2.42.90/gas/emul.h \
     ../../../../binutils/binutils-2.42.90/gas/expr.c \
     ../../../../binutils/binutils-2.42.90/gas/expr.h \
     ../../../../binutils/binutils-2.42.90/gas/flonum-copy.c \
     ../../../../binutils/binutils-2.42.90/gas/flonum-konst.c \
     ../../../../binutils/binutils-2.42.90/gas/flonum-mult.c \
     ../../../../binutils/binutils-2.42.90/gas/flonum.h \
     ../../../../binutils/binutils-2.42.90/gas/frags.c \
     ../../../../binutils/binutils-2.42.90/gas/frags.h \
     ../../../../binutils/binutils-2.42.90/gas/gen-sframe.c \
     ../../../../binutils/binutils-2.42.90/gas/gen-sframe.h \
     ../../../../binutils/binutils-2.42.90/gas/ginsn.c \
     ../../../../binutils/binutils-2.42.90/gas/ginsn.h \
     ../../../../binutils/binutils-2.42.90/gas/hash.c \
     ../../../../binutils/binutils-2.42.90/gas/hash.h \
     ../../../../binutils/binutils-2.42.90/gas/input-file.c \
     ../../../../binutils/binutils-2.42.90/gas/input-file.h \
     ../../../../binutils/binutils-2.42.90/gas/input-scrub.c \
     ../../../../binutils/binutils-2.42.90/gas/itbl-lex.h \
     ../../../../binutils/binutils-2.42.90/gas/itbl-ops.c \
     ../../../../binutils/binutils-2.42.90/gas/itbl-ops.h \
     ../../../../binutils/binutils-2.42.90/gas/listing.c \
     ../../../../binutils/binutils-2.42.90/gas/listing.h \
     ../../../../binutils/binutils-2.42.90/gas/literal.c \
     ../../../../binutils/binutils-2.42.90/gas/macro.c \
     ../../../../binutils/binutils-2.42.90/gas/macro.h \
     ../../../../binutils/binutils-2.42.90/gas/messages.c \
     ../../../../binutils/binutils-2.42.90/gas/obj.h \
     ../../../../binutils/binutils-2.42.90/gas/output-file.c \
     ../../../../binutils/binutils-2.42.90/gas/output-file.h \
     ../../../../binutils/binutils-2.42.90/gas/read.c \
     ../../../../binutils/binutils-2.42.90/gas/read.h \
     ../../../../binutils/binutils-2.42.90/gas/remap.c \
     ../../../../binutils/binutils-2.42.90/gas/sb.c \
     ../../../../binutils/binutils-2.42.90/gas/sb.h \
     ../../../../binutils/binutils-2.42.90/gas/scfi.c \
     ../../../../binutils/binutils-2.42.90/gas/scfi.h \
     ../../../../binutils/binutils-2.42.90/gas/scfidw2gen.c \
     ../../../../binutils/binutils-2.42.90/gas/scfidw2gen.h \
     ../../../../binutils/binutils-2.42.90/gas/sframe-opt.c \
     ../../../../binutils/binutils-2.42.90/gas/stabs.c \
     ../../../../binutils/binutils-2.42.90/gas/subsegs.c \
     ../../../../binutils/binutils-2.42.90/gas/subsegs.h \
     ../../../../binutils/binutils-2.42.90/gas/symbols.c \
     ../../../../binutils/binutils-2.42.90/gas/symbols.h \
     ../../../../binutils/binutils-2.42.90/gas/tc.h \
     ../../../../binutils/binutils-2.42.90/gas/write.c \
     ../../../../binutils/binutils-2.42.90/gas/write.h

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

$(srcdir)/$(PACKAGE).pot: $(POTFILES)
	$(XGETTEXT) --default-domain=$(PACKAGE) --directory=$(top_srcdir) \
	  --add-comments --keyword=_ --keyword=N_ \
	  --msgid-bugs-address=https://sourceware.org/bugzilla/ \
	  --files-from=$(srcdir)/POTFILES.in
	rm -f $(srcdir)/$(PACKAGE).pot
	mv $(PACKAGE).po $(srcdir)/$(PACKAGE).pot

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
	rm -f Makefile Makefile.in POTFILES *.mo *.msg *.cat *.cat.m

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f $(GMOFILES)

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

POTFILES: POTFILES.in
	( if test 'x$(srcdir)' != 'x.'; then \
	    posrcprefix='$(top_srcdir)/'; \
	  else \
	    posrcprefix="../"; \
	  fi; \
	  rm -f $@-t $@ \
	    && (sed -e '/^#/d' -e '/^[ 	]*$$/d' \
		    -e "s@.*@	$$posrcprefix& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/POTFILES.in

Makefile: Make-in ../config.status POTFILES
	cd .. \
	  && CONFIG_FILES=$(subdir)/Makefile.in:$(subdir)/Make-in \
	     CONFIG_HEADERS= $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
