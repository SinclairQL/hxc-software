# ADFLib Makefile for Unix platforms
# tested on Solaris 2.6 and Linux 2.0.36 (RedHat 5.2) 


# real devices routines location
NATIV_DIR = ./Generic

VER=0.7.8
LIBS=libadf.a
SHAREDLIB=libadf.so

AR=ar rc
RANLIB=ranlib
TAR=tar

DEFINES= 

CFLAGS=$(DEFINES) -I${NATIV_DIR} -I.. -I. -Wall -O2 -pedantic

CC=gcc 
DEPEND=makedepend

LDFLAGS=-L. -ladf
LDSHARED=$(CC)

OBJS=	 adf_hd.o adf_disk.o adf_raw.o adf_bitm.o adf_dump.o\
        adf_util.o adf_env.o adf_nativ.o adf_dir.o adf_file.o adf_cache.o \
        adf_link.o adf_salv.o

libadf.a: $(OBJS)
	$(AR) $@ $(OBJS)
	-@ ($(RANLIB) $@ || true) >/dev/null 2>&1

$(SHAREDLIB).$(VER): $(OBJS)
	$(LDSHARED) -o $@ $(OBJS)
	rm -f $(SHAREDLIB) $(SHAREDLIB).1
	ln -s $@ $(SHAREDLIB)
	ln -s $@ $(SHAREDLIB).1


# to define LITT_ENDIAN on little endian machines (intel)
# checks for sizeof(long)=4, sizeof(short)=2, sizeof(int)=4
defendian.h: myconf 
	myconf

adf_nativ.o: ${NATIV_DIR}/adf_nativ.c ${NATIV_DIR}/adf_nativ.h
	$(CC) ${CFLAGS} -c ${NATIV_DIR}/adf_nativ.c

clean:
	@rm $(OBJS)  $(EXE) defendian.h $(LIBS) $(SHAREDLIB)

src:
	@rm adflib.zip
	@zip -9r adflib.zip *.h *.c Makefile myconf Docs Linux Win32 Refs runtest

depend: defendian.h
	$(DEPEND) -v -- $(CFLAGS) --  *.[ch]


# DO NOT DELETE THIS LINE -- make depend depends on it.

adf_bitm.o: /usr/include/stdlib.h
# /usr/include/stdlib.h includes:
#	features.h
#	stddef.h
#	sys/types.h
#	alloca.h
adf_bitm.o: /usr/include/features.h
# /usr/include/features.h includes:
#	sys/cdefs.h
#	gnu/stubs.h
adf_bitm.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
adf_bitm.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h
adf_bitm.o: /usr/include/sys/types.h
# /usr/include/sys/types.h includes:
#	features.h
#	bits/types.h
#	time.h
#	stddef.h
#	endian.h
#	sys/select.h
#	sys/sysmacros.h
adf_bitm.o: /usr/include/bits/types.h
# /usr/include/bits/types.h includes:
#	features.h
#	stddef.h
adf_bitm.o: /usr/include/time.h
# /usr/include/time.h includes:
#	bits/types.h
adf_bitm.o: /usr/include/endian.h
# /usr/include/endian.h includes:
#	features.h
#	bits/endian.h
adf_bitm.o: /usr/include/bits/endian.h /usr/include/sys/select.h
# /usr/include/sys/select.h includes:
#	features.h
#	bits/types.h
#	bits/select.h
#	bits/sigset.h
#	time.h
adf_bitm.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
adf_bitm.o: /usr/include/sys/sysmacros.h
# /usr/include/sys/sysmacros.h includes:
#	endian.h
adf_bitm.o: /usr/include/alloca.h
# /usr/include/alloca.h includes:
#	features.h
#	stddef.h
adf_bitm.o: /usr/include/string.h
# /usr/include/string.h includes:
#	features.h
#	stddef.h
adf_bitm.o: adf_raw.h
# adf_raw.h includes:
#	adf_str.h
adf_bitm.o: adf_str.h
# adf_str.h includes:
#	stdio.h
#	adf_defs.h
#	adf_blk.h
#	adf_err.h
adf_bitm.o: /usr/include/stdio.h
# /usr/include/stdio.h includes:
#	features.h
#	stddef.h
#	stdarg.h
#	bits/types.h
#	libio.h
#	bits/stdio_lim.h
adf_bitm.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stdarg.h
adf_bitm.o: /usr/include/libio.h
# /usr/include/libio.h includes:
#	_G_config.h
#	stdarg.h
adf_bitm.o: /usr/include/_G_config.h
# /usr/include/_G_config.h includes:
#	bits/types.h
#	stddef.h
adf_bitm.o: /usr/include/bits/stdio_lim.h adf_defs.h adf_blk.h adf_err.h
adf_bitm.o: adf_bitm.h
# adf_bitm.h includes:
#	adf_str.h
#	prefix.h
adf_bitm.o: prefix.h adf_disk.h
# adf_disk.h includes:
#	prefix.h
#	adf_str.h
#	adf_defs.h
adf_bitm.o: adf_util.h
# adf_util.h includes:
#	prefix.h
#	adf_str.h
adf_bitm.o: defendian.h
adf_bitm.o: adf_str.h /usr/include/stdio.h /usr/include/features.h
adf_bitm.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
adf_bitm.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h
adf_bitm.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stdarg.h
adf_bitm.o: /usr/include/bits/types.h /usr/include/libio.h
adf_bitm.o: /usr/include/_G_config.h /usr/include/bits/stdio_lim.h adf_defs.h
adf_bitm.o: adf_blk.h adf_err.h prefix.h
adf_cache.o: /usr/include/stdlib.h /usr/include/features.h
adf_cache.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
adf_cache.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h
adf_cache.o: /usr/include/sys/types.h /usr/include/bits/types.h
adf_cache.o: /usr/include/time.h /usr/include/endian.h
adf_cache.o: /usr/include/bits/endian.h /usr/include/sys/select.h
adf_cache.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
adf_cache.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
adf_cache.o: /usr/include/string.h adf_defs.h adf_str.h /usr/include/stdio.h
adf_cache.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stdarg.h
adf_cache.o: /usr/include/libio.h /usr/include/_G_config.h
adf_cache.o: /usr/include/bits/stdio_lim.h adf_blk.h adf_err.h defendian.h
adf_cache.o: adf_cache.h
# adf_cache.h includes:
#	adf_str.h
adf_cache.o: adf_raw.h adf_disk.h prefix.h adf_bitm.h adf_util.h adf_dir.h
# adf_dir.h includes:
#	adf_str.h
#	adf_err.h
#	adf_defs.h
#	prefix.h
adf_cache.o: adf_str.h /usr/include/stdio.h /usr/include/features.h
adf_cache.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
adf_cache.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h
adf_cache.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stdarg.h
adf_cache.o: /usr/include/bits/types.h /usr/include/libio.h
adf_cache.o: /usr/include/_G_config.h /usr/include/bits/stdio_lim.h
adf_cache.o: adf_defs.h adf_blk.h adf_err.h
adf_dir.o: /usr/include/stdlib.h /usr/include/features.h
adf_dir.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
adf_dir.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h
adf_dir.o: /usr/include/sys/types.h /usr/include/bits/types.h
adf_dir.o: /usr/include/time.h /usr/include/endian.h
adf_dir.o: /usr/include/bits/endian.h /usr/include/sys/select.h
adf_dir.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
adf_dir.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
adf_dir.o: /usr/include/string.h /usr/include/ctype.h
# /usr/include/ctype.h includes:
#	features.h
#	bits/types.h
#	endian.h
adf_dir.o: adf_dir.h adf_str.h /usr/include/stdio.h
adf_dir.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stdarg.h
adf_dir.o: /usr/include/libio.h /usr/include/_G_config.h
adf_dir.o: /usr/include/bits/stdio_lim.h adf_defs.h adf_blk.h adf_err.h
adf_dir.o: prefix.h adf_util.h defendian.h adf_raw.h adf_disk.h adf_bitm.h
adf_dir.o: adf_file.h
# adf_file.h includes:
#	prefix.h
#	adf_str.h
adf_dir.o: adf_cache.h
adf_dir.o: adf_str.h /usr/include/stdio.h /usr/include/features.h
adf_dir.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
adf_dir.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h
adf_dir.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stdarg.h
adf_dir.o: /usr/include/bits/types.h /usr/include/libio.h
adf_dir.o: /usr/include/_G_config.h /usr/include/bits/stdio_lim.h adf_defs.h
adf_dir.o: adf_blk.h adf_err.h prefix.h
adf_disk.o: /usr/include/limits.h
# /usr/include/limits.h includes:
#	features.h
#	bits/posix1_lim.h
#	bits/posix2_lim.h
#	limits.h
adf_disk.o: /usr/include/features.h /usr/include/sys/cdefs.h
adf_disk.o: /usr/include/gnu/stubs.h /usr/include/bits/posix1_lim.h
# /usr/include/bits/posix1_lim.h includes:
#	bits/local_lim.h
adf_disk.o: /usr/include/bits/local_lim.h
# /usr/include/bits/local_lim.h includes:
#	linux/limits.h
adf_disk.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
adf_disk.o: /usr/include/stdlib.h
adf_disk.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h
adf_disk.o: /usr/include/sys/types.h /usr/include/bits/types.h
adf_disk.o: /usr/include/time.h /usr/include/endian.h
adf_disk.o: /usr/include/bits/endian.h /usr/include/sys/select.h
adf_disk.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
adf_disk.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
adf_disk.o: /usr/include/string.h adf_str.h /usr/include/stdio.h
adf_disk.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stdarg.h
adf_disk.o: /usr/include/libio.h /usr/include/_G_config.h
adf_disk.o: /usr/include/bits/stdio_lim.h adf_defs.h adf_blk.h adf_err.h
adf_disk.o: adf_disk.h prefix.h adf_raw.h adf_hd.h
# adf_hd.h includes:
#	prefix.h
#	adf_str.h
#	hd_blk.h
#	adf_err.h
adf_disk.o: hd_blk.h
# hd_blk.h includes:
#	adf_str.h
adf_disk.o: adf_bitm.h adf_util.h ./Generic/adf_nativ.h
# ./Generic/adf_nativ.h includes:
#	stdio.h
#	adf_str.h
adf_disk.o: adf_dump.h adf_cache.h
adf_disk.o: prefix.h adf_str.h /usr/include/stdio.h /usr/include/features.h
adf_disk.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
adf_disk.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h
adf_disk.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stdarg.h
adf_disk.o: /usr/include/bits/types.h /usr/include/libio.h
adf_disk.o: /usr/include/_G_config.h /usr/include/bits/stdio_lim.h adf_defs.h
adf_disk.o: adf_blk.h adf_err.h
adf_dump.o: /usr/include/stdio.h /usr/include/features.h
adf_dump.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
adf_dump.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h
adf_dump.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stdarg.h
adf_dump.o: /usr/include/bits/types.h /usr/include/libio.h
adf_dump.o: /usr/include/_G_config.h /usr/include/bits/stdio_lim.h
adf_dump.o: /usr/include/stdlib.h /usr/include/sys/types.h
adf_dump.o: /usr/include/time.h /usr/include/endian.h
adf_dump.o: /usr/include/bits/endian.h /usr/include/sys/select.h
adf_dump.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
adf_dump.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
adf_dump.o: /usr/include/errno.h
# /usr/include/errno.h includes:
#	features.h
#	bits/errno.h
adf_dump.o: /usr/include/bits/errno.h
# /usr/include/bits/errno.h includes:
#	linux/errno.h
adf_dump.o: /usr/include/linux/errno.h
# /usr/include/linux/errno.h includes:
#	asm/errno.h
adf_dump.o: /usr/include/asm/errno.h adf_defs.h adf_str.h adf_blk.h adf_err.h
adf_dump.o: adf_disk.h prefix.h ./Generic/adf_nativ.h
adf_env.o: /usr/include/stdio.h /usr/include/features.h
adf_env.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
adf_env.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h
adf_env.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stdarg.h
adf_env.o: /usr/include/bits/types.h /usr/include/libio.h
adf_env.o: /usr/include/_G_config.h /usr/include/bits/stdio_lim.h
adf_env.o: /usr/include/stdlib.h /usr/include/sys/types.h /usr/include/time.h
adf_env.o: /usr/include/endian.h /usr/include/bits/endian.h
adf_env.o: /usr/include/sys/select.h /usr/include/bits/select.h
adf_env.o: /usr/include/bits/sigset.h /usr/include/sys/sysmacros.h
adf_env.o: /usr/include/alloca.h adf_defs.h adf_str.h adf_blk.h adf_err.h
adf_env.o: ./Generic/adf_nativ.h adf_env.h
# adf_env.h includes:
#	prefix.h
adf_env.o: prefix.h defendian.h
adf_env.o: prefix.h
adf_file.o: /usr/include/stdlib.h /usr/include/features.h
adf_file.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
adf_file.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h
adf_file.o: /usr/include/sys/types.h /usr/include/bits/types.h
adf_file.o: /usr/include/time.h /usr/include/endian.h
adf_file.o: /usr/include/bits/endian.h /usr/include/sys/select.h
adf_file.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
adf_file.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
adf_file.o: /usr/include/string.h adf_util.h prefix.h adf_str.h
adf_file.o: /usr/include/stdio.h
adf_file.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stdarg.h
adf_file.o: /usr/include/libio.h /usr/include/_G_config.h
adf_file.o: /usr/include/bits/stdio_lim.h adf_defs.h adf_blk.h adf_err.h
adf_file.o: adf_file.h defendian.h adf_raw.h adf_disk.h adf_dir.h adf_bitm.h
adf_file.o: adf_cache.h
adf_file.o: prefix.h adf_str.h /usr/include/stdio.h /usr/include/features.h
adf_file.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
adf_file.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h
adf_file.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stdarg.h
adf_file.o: /usr/include/bits/types.h /usr/include/libio.h
adf_file.o: /usr/include/_G_config.h /usr/include/bits/stdio_lim.h adf_defs.h
adf_file.o: adf_blk.h adf_err.h
adf_hd.o: /usr/include/stdio.h /usr/include/features.h
adf_hd.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
adf_hd.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h
adf_hd.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stdarg.h
adf_hd.o: /usr/include/bits/types.h /usr/include/libio.h
adf_hd.o: /usr/include/_G_config.h /usr/include/bits/stdio_lim.h
adf_hd.o: /usr/include/stdlib.h /usr/include/sys/types.h /usr/include/time.h
adf_hd.o: /usr/include/endian.h /usr/include/bits/endian.h
adf_hd.o: /usr/include/sys/select.h /usr/include/bits/select.h
adf_hd.o: /usr/include/bits/sigset.h /usr/include/sys/sysmacros.h
adf_hd.o: /usr/include/alloca.h /usr/include/string.h adf_str.h adf_defs.h
adf_hd.o: adf_blk.h adf_err.h hd_blk.h adf_raw.h adf_hd.h prefix.h adf_util.h
adf_hd.o: adf_disk.h ./Generic/adf_nativ.h adf_dump.h defendian.h
adf_hd.o: prefix.h adf_str.h /usr/include/stdio.h /usr/include/features.h
adf_hd.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
adf_hd.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h
adf_hd.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stdarg.h
adf_hd.o: /usr/include/bits/types.h /usr/include/libio.h
adf_hd.o: /usr/include/_G_config.h /usr/include/bits/stdio_lim.h adf_defs.h
adf_hd.o: adf_blk.h adf_err.h hd_blk.h
adf_link.o: /usr/include/string.h /usr/include/features.h
adf_link.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
adf_link.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h
adf_link.o: adf_defs.h adf_str.h /usr/include/stdio.h
adf_link.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stdarg.h
adf_link.o: /usr/include/bits/types.h /usr/include/libio.h
adf_link.o: /usr/include/_G_config.h /usr/include/bits/stdio_lim.h adf_blk.h
adf_link.o: adf_err.h adf_link.h
# adf_link.h includes:
#	prefix.h
adf_link.o: prefix.h adf_dir.h
adf_link.o: prefix.h
adf_raw.o: /usr/include/limits.h /usr/include/features.h
adf_raw.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
adf_raw.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
adf_raw.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
adf_raw.o: /usr/include/stdlib.h
adf_raw.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h
adf_raw.o: /usr/include/sys/types.h /usr/include/bits/types.h
adf_raw.o: /usr/include/time.h /usr/include/endian.h
adf_raw.o: /usr/include/bits/endian.h /usr/include/sys/select.h
adf_raw.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
adf_raw.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h
adf_raw.o: /usr/include/string.h adf_str.h /usr/include/stdio.h
adf_raw.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stdarg.h
adf_raw.o: /usr/include/libio.h /usr/include/_G_config.h
adf_raw.o: /usr/include/bits/stdio_lim.h adf_defs.h adf_blk.h adf_err.h
adf_raw.o: adf_raw.h adf_disk.h prefix.h adf_util.h defendian.h
adf_raw.o: adf_str.h /usr/include/stdio.h /usr/include/features.h
adf_raw.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
adf_raw.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h
adf_raw.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stdarg.h
adf_raw.o: /usr/include/bits/types.h /usr/include/libio.h
adf_raw.o: /usr/include/_G_config.h /usr/include/bits/stdio_lim.h adf_defs.h
adf_raw.o: adf_blk.h adf_err.h
adf_salv.o: /usr/include/string.h /usr/include/features.h
adf_salv.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
adf_salv.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h
adf_salv.o: /usr/include/stdlib.h /usr/include/sys/types.h
adf_salv.o: /usr/include/bits/types.h /usr/include/time.h
adf_salv.o: /usr/include/endian.h /usr/include/bits/endian.h
adf_salv.o: /usr/include/sys/select.h /usr/include/bits/select.h
adf_salv.o: /usr/include/bits/sigset.h /usr/include/sys/sysmacros.h
adf_salv.o: /usr/include/alloca.h adf_salv.h
# adf_salv.h includes:
#	prefix.h
#	adf_str.h
adf_salv.o: prefix.h adf_str.h /usr/include/stdio.h
adf_salv.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stdarg.h
adf_salv.o: /usr/include/libio.h /usr/include/_G_config.h
adf_salv.o: /usr/include/bits/stdio_lim.h adf_defs.h adf_blk.h adf_err.h
adf_salv.o: adf_bitm.h adf_util.h adf_disk.h adf_dir.h adf_file.h adf_cache.h
adf_salv.o: prefix.h adf_str.h /usr/include/stdio.h /usr/include/features.h
adf_salv.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
adf_salv.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h
adf_salv.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stdarg.h
adf_salv.o: /usr/include/bits/types.h /usr/include/libio.h
adf_salv.o: /usr/include/_G_config.h /usr/include/bits/stdio_lim.h adf_defs.h
adf_salv.o: adf_blk.h adf_err.h
adf_str.o: /usr/include/stdio.h /usr/include/features.h
adf_str.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
adf_str.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h
adf_str.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stdarg.h
adf_str.o: /usr/include/bits/types.h /usr/include/libio.h
adf_str.o: /usr/include/_G_config.h /usr/include/bits/stdio_lim.h adf_defs.h
adf_str.o: adf_blk.h adf_err.h
adf_util.o: /usr/include/stdlib.h /usr/include/features.h
adf_util.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
adf_util.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h
adf_util.o: /usr/include/sys/types.h /usr/include/bits/types.h
adf_util.o: /usr/include/time.h /usr/include/endian.h
adf_util.o: /usr/include/bits/endian.h /usr/include/sys/select.h
adf_util.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
adf_util.o: /usr/include/sys/sysmacros.h /usr/include/alloca.h adf_util.h
adf_util.o: prefix.h adf_str.h /usr/include/stdio.h
adf_util.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stdarg.h
adf_util.o: /usr/include/libio.h /usr/include/_G_config.h
adf_util.o: /usr/include/bits/stdio_lim.h adf_defs.h adf_blk.h adf_err.h
adf_util.o: adf_disk.h
adf_util.o: prefix.h adf_str.h /usr/include/stdio.h /usr/include/features.h
adf_util.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
adf_util.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h
adf_util.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stdarg.h
adf_util.o: /usr/include/bits/types.h /usr/include/libio.h
adf_util.o: /usr/include/_G_config.h /usr/include/bits/stdio_lim.h adf_defs.h
adf_util.o: adf_blk.h adf_err.h
adflib.o: adf_defs.h adf_str.h /usr/include/stdio.h /usr/include/features.h
adflib.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
adflib.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h
adflib.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stdarg.h
adflib.o: /usr/include/bits/types.h /usr/include/libio.h
adflib.o: /usr/include/_G_config.h /usr/include/bits/stdio_lim.h adf_blk.h
adflib.o: adf_err.h
hd_blk.o: adf_str.h /usr/include/stdio.h /usr/include/features.h
hd_blk.o: /usr/include/sys/cdefs.h /usr/include/gnu/stubs.h
hd_blk.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h
hd_blk.o: /usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stdarg.h
hd_blk.o: /usr/include/bits/types.h /usr/include/libio.h
hd_blk.o: /usr/include/_G_config.h /usr/include/bits/stdio_lim.h adf_defs.h
hd_blk.o: adf_blk.h adf_err.h
