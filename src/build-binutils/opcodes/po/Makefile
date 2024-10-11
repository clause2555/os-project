# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright (C) 2003-2024 Free Software Foundation, Inc.
#
# This file may be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = opcodes
VERSION = 2.42.90

SHELL = /bin/sh


srcdir = ../../../../binutils/binutils-2.42.90/opcodes/po
top_srcdir = ../../../../binutils/binutils-2.42.90/opcodes
VPATH = ../../../../binutils/binutils-2.42.90/opcodes/po
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
MKINSTALLDIRS = $(top_builddir)/../../../binutils/binutils-2.42.90/opcodes/../mkinstalldirs

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
POFILES =  $(srcdir)/da.po $(srcdir)/de.po $(srcdir)/es.po $(srcdir)/fi.po $(srcdir)/fr.po $(srcdir)/ga.po $(srcdir)/id.po $(srcdir)/it.po $(srcdir)/nl.po $(srcdir)/pt_BR.po $(srcdir)/ro.po $(srcdir)/sr.po $(srcdir)/sv.po $(srcdir)/tr.po $(srcdir)/uk.po $(srcdir)/vi.po $(srcdir)/zh_CN.po
GMOFILES =  $(srcdir)/da.gmo $(srcdir)/de.gmo $(srcdir)/es.gmo $(srcdir)/fi.gmo $(srcdir)/fr.gmo $(srcdir)/ga.gmo $(srcdir)/id.gmo $(srcdir)/it.gmo $(srcdir)/nl.gmo $(srcdir)/pt_BR.gmo $(srcdir)/ro.gmo $(srcdir)/sr.gmo $(srcdir)/sv.gmo $(srcdir)/tr.gmo $(srcdir)/uk.gmo $(srcdir)/vi.gmo $(srcdir)/zh_CN.gmo
DISTFILES = ChangeLog Makefile.in.in POTFILES.in $(PACKAGE).pot \
stamp-cat-id $(POFILES) $(GMOFILES) $(SOURCES)

POTFILES = \
     ../../../../binutils/binutils-2.42.90/opcodes/aarch64-asm-2.c \
     ../../../../binutils/binutils-2.42.90/opcodes/aarch64-asm.c \
     ../../../../binutils/binutils-2.42.90/opcodes/aarch64-asm.h \
     ../../../../binutils/binutils-2.42.90/opcodes/aarch64-dis-2.c \
     ../../../../binutils/binutils-2.42.90/opcodes/aarch64-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/aarch64-dis.h \
     ../../../../binutils/binutils-2.42.90/opcodes/aarch64-opc-2.c \
     ../../../../binutils/binutils-2.42.90/opcodes/aarch64-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/aarch64-opc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/aarch64-tbl.h \
     ../../../../binutils/binutils-2.42.90/opcodes/alpha-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/alpha-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/arc-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/arc-ext.c \
     ../../../../binutils/binutils-2.42.90/opcodes/arc-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/arm-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/avr-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/bfin-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/bpf-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/bpf-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/cgen-asm.c \
     ../../../../binutils/binutils-2.42.90/opcodes/cgen-bitset.c \
     ../../../../binutils/binutils-2.42.90/opcodes/cgen-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/cgen-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/cr16-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/cr16-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/cris-desc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/cris-desc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/cris-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/cris-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/cris-opc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/crx-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/crx-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/csky-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/d10v-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/d10v-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/d30v-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/d30v-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/dis-buf.c \
     ../../../../binutils/binutils-2.42.90/opcodes/dis-init.c \
     ../../../../binutils/binutils-2.42.90/opcodes/disassemble.c \
     ../../../../binutils/binutils-2.42.90/opcodes/dlx-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/epiphany-asm.c \
     ../../../../binutils/binutils-2.42.90/opcodes/epiphany-desc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/epiphany-desc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/epiphany-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/epiphany-ibld.c \
     ../../../../binutils/binutils-2.42.90/opcodes/epiphany-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/epiphany-opc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/fr30-asm.c \
     ../../../../binutils/binutils-2.42.90/opcodes/fr30-desc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/fr30-desc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/fr30-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/fr30-ibld.c \
     ../../../../binutils/binutils-2.42.90/opcodes/fr30-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/fr30-opc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/frv-asm.c \
     ../../../../binutils/binutils-2.42.90/opcodes/frv-desc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/frv-desc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/frv-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/frv-ibld.c \
     ../../../../binutils/binutils-2.42.90/opcodes/frv-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/frv-opc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/ft32-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/ft32-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/h8300-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/hppa-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/i386-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/i386-opc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/ia64-asmtab.h \
     ../../../../binutils/binutils-2.42.90/opcodes/ia64-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/ia64-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/ia64-opc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/ip2k-asm.c \
     ../../../../binutils/binutils-2.42.90/opcodes/ip2k-desc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/ip2k-desc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/ip2k-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/ip2k-ibld.c \
     ../../../../binutils/binutils-2.42.90/opcodes/ip2k-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/ip2k-opc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/iq2000-asm.c \
     ../../../../binutils/binutils-2.42.90/opcodes/iq2000-desc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/iq2000-desc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/iq2000-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/iq2000-ibld.c \
     ../../../../binutils/binutils-2.42.90/opcodes/iq2000-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/iq2000-opc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/kvx-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/kvx-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/lm32-asm.c \
     ../../../../binutils/binutils-2.42.90/opcodes/lm32-desc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/lm32-desc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/lm32-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/lm32-ibld.c \
     ../../../../binutils/binutils-2.42.90/opcodes/lm32-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/lm32-opc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/lm32-opinst.c \
     ../../../../binutils/binutils-2.42.90/opcodes/loongarch-coder.c \
     ../../../../binutils/binutils-2.42.90/opcodes/loongarch-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/loongarch-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/m10200-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/m10200-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/m10300-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/m10300-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/m32c-asm.c \
     ../../../../binutils/binutils-2.42.90/opcodes/m32c-desc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/m32c-desc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/m32c-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/m32c-ibld.c \
     ../../../../binutils/binutils-2.42.90/opcodes/m32c-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/m32c-opc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/m32r-asm.c \
     ../../../../binutils/binutils-2.42.90/opcodes/m32r-desc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/m32r-desc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/m32r-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/m32r-ibld.c \
     ../../../../binutils/binutils-2.42.90/opcodes/m32r-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/m32r-opc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/m32r-opinst.c \
     ../../../../binutils/binutils-2.42.90/opcodes/m68hc11-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/m68hc11-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/m68k-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/m68k-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/mcore-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/mcore-opc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/mep-asm.c \
     ../../../../binutils/binutils-2.42.90/opcodes/mep-desc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/mep-desc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/mep-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/mep-ibld.c \
     ../../../../binutils/binutils-2.42.90/opcodes/mep-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/mep-opc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/metag-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/microblaze-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/microblaze-opc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/micromips-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/mips-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/mips-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/mips16-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/mmix-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/mmix-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/moxie-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/moxie-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/msp430-decode.c \
     ../../../../binutils/binutils-2.42.90/opcodes/msp430-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/mt-asm.c \
     ../../../../binutils/binutils-2.42.90/opcodes/mt-desc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/mt-desc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/mt-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/mt-ibld.c \
     ../../../../binutils/binutils-2.42.90/opcodes/mt-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/mt-opc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/nds32-asm.c \
     ../../../../binutils/binutils-2.42.90/opcodes/nds32-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/nfp-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/nios2-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/nios2-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/ns32k-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/or1k-asm.c \
     ../../../../binutils/binutils-2.42.90/opcodes/or1k-desc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/or1k-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/or1k-ibld.c \
     ../../../../binutils/binutils-2.42.90/opcodes/or1k-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/pdp11-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/pdp11-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/pj-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/pj-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/ppc-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/ppc-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/pru-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/pru-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/riscv-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/riscv-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/rl78-decode.c \
     ../../../../binutils/binutils-2.42.90/opcodes/rl78-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/rx-decode.c \
     ../../../../binutils/binutils-2.42.90/opcodes/rx-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/s12z-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/s12z-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/s390-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/s390-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/score-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/score-opc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/score7-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/sh-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/sh-opc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/sparc-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/sparc-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/spu-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/spu-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/sysdep.h \
     ../../../../binutils/binutils-2.42.90/opcodes/tic30-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/tic4x-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/tic54x-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/tic54x-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/tic6x-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/tilegx-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/tilegx-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/tilepro-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/tilepro-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/v850-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/v850-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/vax-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/visium-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/visium-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/wasm32-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/xgate-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/xgate-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/xstormy16-asm.c \
     ../../../../binutils/binutils-2.42.90/opcodes/xstormy16-desc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/xstormy16-desc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/xstormy16-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/xstormy16-ibld.c \
     ../../../../binutils/binutils-2.42.90/opcodes/xstormy16-opc.c \
     ../../../../binutils/binutils-2.42.90/opcodes/xstormy16-opc.h \
     ../../../../binutils/binutils-2.42.90/opcodes/xtensa-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/z80-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/z8k-dis.c \
     ../../../../binutils/binutils-2.42.90/opcodes/z8k-opc.h

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
