# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright (C) 2003-2024 Free Software Foundation, Inc.
#
# This file may be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = binutils
VERSION = 2.42.90

SHELL = /bin/sh


srcdir = ../../../../binutils/binutils-2.42.90/binutils/po
top_srcdir = ../../../../binutils/binutils-2.42.90/binutils
VPATH = ../../../../binutils/binutils-2.42.90/binutils/po
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
MKINSTALLDIRS = $(top_builddir)/../../../binutils/binutils-2.42.90/binutils/../mkinstalldirs

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
POFILES =  $(srcdir)/bg.po $(srcdir)/ca.po $(srcdir)/da.po $(srcdir)/es.po $(srcdir)/fi.po $(srcdir)/fr.po $(srcdir)/hr.po $(srcdir)/id.po $(srcdir)/it.po $(srcdir)/ja.po $(srcdir)/pt.po $(srcdir)/ro.po $(srcdir)/ru.po $(srcdir)/rw.po $(srcdir)/sk.po $(srcdir)/sr.po $(srcdir)/sv.po $(srcdir)/tr.po $(srcdir)/uk.po $(srcdir)/vi.po $(srcdir)/zh_CN.po $(srcdir)/zh_TW.po
GMOFILES =  $(srcdir)/bg.gmo $(srcdir)/ca.gmo $(srcdir)/da.gmo $(srcdir)/es.gmo $(srcdir)/fi.gmo $(srcdir)/fr.gmo $(srcdir)/hr.gmo $(srcdir)/id.gmo $(srcdir)/it.gmo $(srcdir)/ja.gmo $(srcdir)/pt.gmo $(srcdir)/ro.gmo $(srcdir)/ru.gmo $(srcdir)/rw.gmo $(srcdir)/sk.gmo $(srcdir)/sr.gmo $(srcdir)/sv.gmo $(srcdir)/tr.gmo $(srcdir)/uk.gmo $(srcdir)/vi.gmo $(srcdir)/zh_CN.gmo $(srcdir)/zh_TW.gmo
DISTFILES = ChangeLog Makefile.in.in POTFILES.in $(PACKAGE).pot \
stamp-cat-id $(POFILES) $(GMOFILES) $(SOURCES)

POTFILES = \
     ../../../../binutils/binutils-2.42.90/binutils/addr2line.c \
     ../../../../binutils/binutils-2.42.90/binutils/ar.c \
     ../../../../binutils/binutils-2.42.90/binutils/arsup.c \
     ../../../../binutils/binutils-2.42.90/binutils/arsup.h \
     ../../../../binutils/binutils-2.42.90/binutils/bin2c.c \
     ../../../../binutils/binutils-2.42.90/binutils/binemul.c \
     ../../../../binutils/binutils-2.42.90/binutils/binemul.h \
     ../../../../binutils/binutils-2.42.90/binutils/bucomm.c \
     ../../../../binutils/binutils-2.42.90/binutils/bucomm.h \
     ../../../../binutils/binutils-2.42.90/binutils/budbg.h \
     ../../../../binutils/binutils-2.42.90/binutils/coffdump.c \
     ../../../../binutils/binutils-2.42.90/binutils/coffgrok.c \
     ../../../../binutils/binutils-2.42.90/binutils/coffgrok.h \
     ../../../../binutils/binutils-2.42.90/binutils/cxxfilt.c \
     ../../../../binutils/binutils-2.42.90/binutils/debug.c \
     ../../../../binutils/binutils-2.42.90/binutils/debug.c \
     ../../../../binutils/binutils-2.42.90/binutils/debug.h \
     ../../../../binutils/binutils-2.42.90/binutils/demanguse.c \
     ../../../../binutils/binutils-2.42.90/binutils/demanguse.h \
     ../../../../binutils/binutils-2.42.90/binutils/dlltool.c \
     ../../../../binutils/binutils-2.42.90/binutils/dlltool.h \
     ../../../../binutils/binutils-2.42.90/binutils/dllwrap.c \
     ../../../../binutils/binutils-2.42.90/binutils/dwarf.c \
     ../../../../binutils/binutils-2.42.90/binutils/dwarf.h \
     ../../../../binutils/binutils-2.42.90/binutils/elfcomm.c \
     ../../../../binutils/binutils-2.42.90/binutils/elfcomm.h \
     ../../../../binutils/binutils-2.42.90/binutils/elfedit.c \
     ../../../../binutils/binutils-2.42.90/binutils/emul_aix.c \
     ../../../../binutils/binutils-2.42.90/binutils/emul_vanilla.c \
     ../../../../binutils/binutils-2.42.90/binutils/filemode.c \
     ../../../../binutils/binutils-2.42.90/binutils/is-ranlib.c \
     ../../../../binutils/binutils-2.42.90/binutils/is-strip.c \
     ../../../../binutils/binutils-2.42.90/binutils/maybe-ranlib.c \
     ../../../../binutils/binutils-2.42.90/binutils/maybe-strip.c \
     ../../../../binutils/binutils-2.42.90/binutils/mclex.c \
     ../../../../binutils/binutils-2.42.90/binutils/nm.c \
     ../../../../binutils/binutils-2.42.90/binutils/not-ranlib.c \
     ../../../../binutils/binutils-2.42.90/binutils/not-strip.c \
     ../../../../binutils/binutils-2.42.90/binutils/objcopy.c \
     ../../../../binutils/binutils-2.42.90/binutils/objdump.c \
     ../../../../binutils/binutils-2.42.90/binutils/objdump.h \
     ../../../../binutils/binutils-2.42.90/binutils/od-elf32_avr.c \
     ../../../../binutils/binutils-2.42.90/binutils/od-macho.c \
     ../../../../binutils/binutils-2.42.90/binutils/od-pe.c \
     ../../../../binutils/binutils-2.42.90/binutils/od-xcoff.c \
     ../../../../binutils/binutils-2.42.90/binutils/prdbg.c \
     ../../../../binutils/binutils-2.42.90/binutils/rclex.c \
     ../../../../binutils/binutils-2.42.90/binutils/rdcoff.c \
     ../../../../binutils/binutils-2.42.90/binutils/rdcoff.c \
     ../../../../binutils/binutils-2.42.90/binutils/rddbg.c \
     ../../../../binutils/binutils-2.42.90/binutils/rddbg.c \
     ../../../../binutils/binutils-2.42.90/binutils/readelf.c \
     ../../../../binutils/binutils-2.42.90/binutils/rename.c \
     ../../../../binutils/binutils-2.42.90/binutils/resbin.c \
     ../../../../binutils/binutils-2.42.90/binutils/rescoff.c \
     ../../../../binutils/binutils-2.42.90/binutils/resrc.c \
     ../../../../binutils/binutils-2.42.90/binutils/resres.c \
     ../../../../binutils/binutils-2.42.90/binutils/size.c \
     ../../../../binutils/binutils-2.42.90/binutils/srconv.c \
     ../../../../binutils/binutils-2.42.90/binutils/stabs.c \
     ../../../../binutils/binutils-2.42.90/binutils/stabs.c \
     ../../../../binutils/binutils-2.42.90/binutils/strings.c \
     ../../../../binutils/binutils-2.42.90/binutils/sysdep.h \
     ../../../../binutils/binutils-2.42.90/binutils/sysdump.c \
     ../../../../binutils/binutils-2.42.90/binutils/syslex_wrap.c \
     ../../../../binutils/binutils-2.42.90/binutils/unwind-ia64.c \
     ../../../../binutils/binutils-2.42.90/binutils/unwind-ia64.h \
     ../../../../binutils/binutils-2.42.90/binutils/version.c \
     ../../../../binutils/binutils-2.42.90/binutils/windint.h \
     ../../../../binutils/binutils-2.42.90/binutils/windmc.c \
     ../../../../binutils/binutils-2.42.90/binutils/windmc.h \
     ../../../../binutils/binutils-2.42.90/binutils/windres.c \
     ../../../../binutils/binutils-2.42.90/binutils/windres.h \
     ../../../../binutils/binutils-2.42.90/binutils/winduni.c \
     ../../../../binutils/binutils-2.42.90/binutils/winduni.h \
     ../../../../binutils/binutils-2.42.90/binutils/wrstabs.c

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
