# Generated automatically from Makefile.in by configure.
# Build all models of the libnix libraries.
#
# CFLAGS=-Wall -O3
#
#   -fbaserel -DSMALL_DATA	for small data model
#   -fbaserel32			for large baserel model
#   -m68020			for 68020 specific code
#   -m68060			for 68060 specific code
#   -m68881			for 68881 specific code (FPU)
#   -DIXPATHS			for Un*x path option
#   -DDEBUG_LIB 		build a library for debugging (not yet fully working)

#### Start of system configuration section. ####

srcdir =	/cygdrive/g/cvs/projets/FloppyEmulator/Software/Floppy_Emulator_Control/Amiga/libnix
VPATH =		/cygdrive/g/cvs/projets/FloppyEmulator/Software/Floppy_Emulator_Control/Amiga/libnix

# Common prefix for machine-independent installed files.
prefix =	/usr/local

# Common prefix for machine-dependent installed files.
exec_prefix =	${prefix}

libdir =	$(exec_prefix)/lib
infodir =	$(exec_prefix)/info
guidedir =	$(exec_prefix)/guide

INSTALL =	/usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_DATA =	${INSTALL} -m 644

#### End system configuration section ####

V=VER: libnix 2.1 (11.09.2004)

CURDIR := $(shell pwd)

MAK2=$(MAKE) -f $(CURDIR)/sources/Makefile

SUBDIRS=startup lib #libb lib020 libb020 lib881 libb881 libb32 #lib060 libb060 libb32 libb32881 libb32060

all: $(SUBDIRS)
	cd sources;	$(MAKE) filelists
	cd startup;	$(MAKE) -f $(CURDIR)/sources/startup/Makefile V="$(V)"
	cd lib; 	$(MAK2) V="$(V)" CFLAGS="-Wall -O3 -fomit-frame-pointer"
#	cd libb;	$(MAK2) V="$(V)" CFLAGS="-Wall -O3 -fomit-frame-pointer -fbaserel -DSMALL_DATA"
#	cd lib020;	$(MAK2) V="$(V)" CFLAGS="-Wall -O3 -fomit-frame-pointer -m68020"
#	cd libb020;	$(MAK2) V="$(V)" CFLAGS="-Wall -O3 -fomit-frame-pointer -fbaserel -DSMALL_DATA -m68020"
#	cd lib881;	$(MAK2) V="$(V)" CFLAGS="-Wall -O3 -fomit-frame-pointer -m68020 -m68881"
#	cd libb881;	$(MAK2) V="$(V)" CFLAGS="-Wall -O3 -fomit-frame-pointer -fbaserel -DSMALL_DATA -m68020 -m68881"
#	cd lib060;	$(MAK2) V="$(V)" CFLAGS="-Wall -O3 -fomit-frame-pointer -m68060 -m68881"
#	cd libb060;	$(MAK2) V="$(V)" CFLAGS="-Wall -O3 -fomit-frame-pointer -fbaserel -DSMALL_DATA -m68060 -m68881"
#	cd libb32;	$(MAK2) V="$(V)" CFLAGS="-Wall -O3 -fomit-frame-pointer -fbaserel32 -DSMALL_DATA -m68020"
#	cd libb32881;	$(MAK2) V="$(V)" CFLAGS="-Wall -O3 -fomit-frame-pointer -fbaserel32 -DSMALL_DATA -m68020 -m68881"
#	cd libb32060;	$(MAK2) V="$(V)" CFLAGS="-Wall -O3 -fomit-frame-pointer -fbaserel32 -DSMALL_DATA -m68060 -m68881"
#	cd libix;	$(MAK2) V="$(V)" CFLAGS="-Wall -O3 -fomit-frame-pointer -DIXPATHS"

$(SUBDIRS):
	mkdir $@

libamiga:
	if [ ! -d lib ] ; then mkdir lib ; else true ; fi
#	if [ ! -d libb ] ; then mkdir libb ; else true ; fi
#	if [ ! -d libb32 ] ; then mkdir libb32 ; else true ; fi
	cd sources;	$(MAK2) filelists
	cd lib; 	$(MAK2) libamiga CFLAGS="-O3 -fomit-frame-pointer"
#	cd libb;	$(MAK2) libamiga CFLAGS="-O3 -fomit-frame-pointer -fbaserel"
#	cd libb32;	$(MAK2) libamiga CFLAGS="-O3 -fomit-frame-pointer -fbaserel32 -m68020"

clean:
	cd lib; 	$(MAK2) clean
#	cd libb;	$(MAK2) clean
#	cd lib020;	$(MAK2) clean
#	cd libb020;	$(MAK2) clean
#	cd lib881;	$(MAK2) clean
#	cd libb881;	$(MAK2) clean
#	cd lib060;	$(MAK2) clean
#	cd libb060;	$(MAK2) clean
#	cd libb32;	$(MAK2) clean
#	cd libb32881;	$(MAK2) clean
#	cd libb32060;	$(MAK2) clean
#	cd libix;	$(MAK2) clean
	-rm -f sources/*/filelist sources/stubs/libbases/* sources/stubs/libnames/*

veryclean:
	cd lib; 	$(MAK2) veryclean
#	cd libb;	$(MAK2) veryclean
#	cd lib020;	$(MAK2) veryclean
#	cd libb020;	$(MAK2) veryclean
#	cd lib881;	$(MAK2) veryclean
#	cd libb881;	$(MAK2) veryclean
#	cd lib060;	$(MAK2) veryclean
#	cd libb060;	$(MAK2) veryclean
#	cd libb32;	$(MAK2) veryclean
#	cd libb32881;	$(MAK2) veryclean
#	cd libb32060;	$(MAK2) veryclean
#	cd libix;	$(MAK2) veryclean
	-rm sources/*/filelist

install:# installdirs
	cp startup/*.o /usr/local/amiga/m68k-amigaos/lib/libnix
	cp lib/*/lib*.a /usr/local/amiga/m68k-amigaos/lib/libnix
	cp lib/misc/*.o /usr/local/amiga/m68k-amigaos/lib/libnix

#	$(INSTALL) startup/*.o $(prefix)/lib/libnix
#	$(INSTALL) lib/*/lib*.a $(prefix)/lib/libnix
#	$(INSTALL) lib/misc/*.o $(prefix)/lib/libnix

#	$(INSTALL) libb/*/lib*.a $(prefix)/lib/libb/libnix
#	$(INSTALL) libb/misc/*.o $(prefix)/lib/libb/libnix
#	$(INSTALL) lib020/*/lib*.a $(prefix)/lib/libm020/libnix
#	$(INSTALL) lib020/misc/*.o $(prefix)/lib/libm020/libnix
#	$(INSTALL) libb020/*/lib*.a $(prefix)/lib/libb/libm020/libnix
#	$(INSTALL) libb020/misc/*.o $(prefix)/lib/libb/libm020/libnix
#	$(INSTALL) lib881/*/lib*.a $(prefix)/lib/libm020/libm881/libnix
#	$(INSTALL) lib881/misc/*.o $(prefix)/lib/libm020/libm881/libnix
#	$(INSTALL) libb881/*/lib*.a $(prefix)/lib/libb/libm020/libm881/libnix
#	$(INSTALL) libb881/misc/*.o $(prefix)/lib/libb/libm020/libm881/libnix
#	$(INSTALL) lib060/*/lib*.a $(prefix)/lib/libm060/libnix
#	$(INSTALL) lib060/misc/*.o $(prefix)/lib/libm060/libnix
#	$(INSTALL) libb060/*/lib*.a $(prefix)/lib/libb/libm060/libnix
#	$(INSTALL) libb060/misc/*.o $(prefix)/lib/libb/libm060/libnix
#	$(INSTALL) libb32/*/lib*.a $(prefix)/lib/libb32/libm020/libnix
#	$(INSTALL) libb32/misc/*.o $(prefix)/lib/libb32/libm020/libnix
#	$(INSTALL) libb32881/*/lib*.a $(prefix)/lib/libb32/libm020/libm881/libnix
#	$(INSTALL) libb32881/misc/*.o $(prefix)/lib/libb32/libm020/libm881/libnix
#	$(INSTALL) libb32060/*/lib*.a $(prefix)/lib/libb32/libm060/libnix
#	$(INSTALL) libb32060/misc/*.o $(prefix)/lib/libb32/libm060/libnix
#	$(INSTALL_DATA) *.info* $(infodir)
#	$(INSTALL_DATA) libnix.guide $(guidedir)/libnix.guide

installdirs: mkinstalldirs
	$(srcdir)/mkinstalldirs \
#	$(infodir) \
#	$(guidedir) \
	$(libdir) \
	$(libdir)/libnix \
#	$(libdir)/libm020 \
#	$(libdir)/libm020/libnix \
#	$(libdir)/libm020/libm881 \
#	$(libdir)/libm020/libm881/libnix \
#	$(libdir)/libb \
#	$(libdir)/libb/libnix \
#	$(libdir)/libb/libm020 \
#	$(libdir)/libb/libm020/libnix \
#	$(libdir)/libb/libm020/libm881 \
#	$(libdir)/libb/libm020/libm881/libnix \
#	$(libdir)/libb32 \
#	$(libdir)/libb32/libnix \
#	$(libdir)/libb32/libm020 \
#	$(libdir)/libb32/libm020/libnix
#	$(libdir)/libm060 \
#	$(libdir)/libm060/libnix \
#	$(libdir)/libb/libm060 \
#	$(libdir)/libb/libm060/libnix
#	$(libdir)/libb32 \
#	$(libdir)/libb32/libnix \
#	$(libdir)/libb32/libm020 \
#	$(libdir)/libb32/libm020/libnix \
#	$(libdir)/libb32/libm020/libm881 \
#	$(libdir)/libb32/libm020/libm881/libnix \
#	$(libdir)/libb32/libm060 \
#	$(libdir)/libb32/libm060/libnix

distribution:
	mkdir t:gg t:gg/lib t:gg/lib/libnix
	lha a -mraxez t:gg/libnix-sources.lha Makefile libnix.texi
	lha a -mraxez t:gg/libnix-sources.lha sources examples
#	mkdir t:gg/lib/libm020 t:gg/lib/libm020/libnix \
#	      t:gg/lib/libm020/libm881 t:gg/lib/libm020/libm881/libnix \
#	      t:gg/lib/libb t:gg/lib/libb/libnix \
#	      t:gg/lib/libb/libm020 t:gg/lib/libb/libm020/libnix \
#	      t:gg/lib/libb/libm020/libm881 t:gg/lib/libb/libm020/libm881/libnix
	cp -p startup/*.o t:gg/lib/libnix
	cp -p lib/*/*.a t:gg/lib/libnix
	cp -p lib/misc/*.o t:gg/lib/libnix
#	cp -p libb/*/*.a t:gg/lib/libb/libnix
#	cp -p libb/misc/*.o t:gg/lib/libb/libnix
#	cp -p lib020/*/*.a t:gg/lib/libm020/libnix
#	cp -p lib020/misc/*.o t:gg/lib/libm020/libnix
#	cp -p libb020/*/*.a t:gg/lib/libb/libm020/libnix
#	cp -p libb020/misc/*.o t:gg/lib/libb/libm020/libnix
#	cp -p lib881/*/*.a t:gg/lib/libm020/libm881/libnix
#	cp -p lib881/misc/*.o t:gg/lib/libm020/libm881/libnix
#	cp -p libb881/*/*.a t:gg/lib/libb/libm020/libm881/libnix
#	cp -p libb881/misc/*.o t:gg/lib/libb/libm020/libm881/libnix
#	cp -p lib060/*/*.a t:gg/lib/libm060/libnix
#	cp -p lib060/misc/*.o t:gg/lib/libm060/libnix
#	cp -p libb060/*/*.a t:gg/lib/libm060/libnix
#	cp -p libb060/misc/*.o t:gg/lib/libm060/libnix
#	cp -p libb32/*/*.a t:gg/lib/libm020/libnix
#	cp -p libb32/misc/*.o t:gg/lib/libm020/libnix
#	cp -p libb32881/*/*.a t:gg/lib/libm020/libm881/libnix
#	cp -p libb32881/misc/*.o t:gg/lib/libm020/libm881/libnix
#	cp -p libb32060/*/*.a t:gg/lib/libm060/libnix
#	cp -p libb32060/misc/*.o t:gg/lib/libm060/libnix
	-rm t:gg/lib/libnix/libglue.a t:gg/lib/libb/libnix/libglue.a
	-cp * t:gg
	rm t:gg/Makefile t:gg/libnix.texi
	cd t:gg;lha m -mraxeZ libnix.lha *
	rm -rf t:gg
