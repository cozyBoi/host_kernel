cmd_arch/x86/boot/compressed/mkpiggy := gcc -Wp,-MD,arch/x86/boot/compressed/.mkpiggy.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89     -I./tools/include    -o arch/x86/boot/compressed/mkpiggy arch/x86/boot/compressed/mkpiggy.c   

source_arch/x86/boot/compressed/mkpiggy := arch/x86/boot/compressed/mkpiggy.c

deps_arch/x86/boot/compressed/mkpiggy := \
  /usr/include/stdc-predef.h \
  /usr/include/stdlib.h \
  /usr/include/bits/libc-header-start.h \
  /usr/include/features.h \
  /usr/include/sys/cdefs.h \
  /usr/include/bits/wordsize.h \
  /usr/include/bits/long-double.h \
  /usr/include/gnu/stubs.h \
  /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-redhat-linux/8/include/stddef.h \
  /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h \
  /usr/include/bits/floatn.h \
  /usr/include/bits/floatn-common.h \
  /usr/include/sys/types.h \
  /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h \
  /usr/include/bits/types/clock_t.h \
  /usr/include/bits/types/clockid_t.h \
  /usr/include/bits/types/time_t.h \
  /usr/include/bits/types/timer_t.h \
  /usr/include/bits/stdint-intn.h \
  /usr/include/endian.h \
  /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/include/bits/uintn-identity.h \
  /usr/include/sys/select.h \
  /usr/include/bits/select.h \
  /usr/include/bits/types/sigset_t.h \
  /usr/include/bits/types/__sigset_t.h \
  /usr/include/bits/types/struct_timeval.h \
  /usr/include/bits/types/struct_timespec.h \
  /usr/include/bits/pthreadtypes.h \
  /usr/include/bits/thread-shared-types.h \
  /usr/include/bits/pthreadtypes-arch.h \
  /usr/include/alloca.h \
  /usr/include/bits/stdlib-bsearch.h \
  /usr/include/bits/stdlib-float.h \
  /usr/include/stdio.h \
  /usr/lib/gcc/x86_64-redhat-linux/8/include/stdarg.h \
  /usr/include/bits/types/__fpos_t.h \
  /usr/include/bits/types/__mbstate_t.h \
  /usr/include/bits/types/__fpos64_t.h \
  /usr/include/bits/types/__FILE.h \
  /usr/include/bits/types/FILE.h \
  /usr/include/bits/types/struct_FILE.h \
  /usr/include/bits/stdio_lim.h \
  /usr/include/bits/sys_errlist.h \
  /usr/include/bits/stdio.h \
  /usr/include/string.h \
  /usr/include/bits/types/locale_t.h \
  /usr/include/bits/types/__locale_t.h \
  /usr/include/strings.h \
  /usr/include/inttypes.h \
  /usr/lib/gcc/x86_64-redhat-linux/8/include/stdint.h \
  /usr/include/stdint.h \
  /usr/include/bits/wchar.h \
  /usr/include/bits/stdint-uintn.h \
  tools/include/tools/le_byteshift.h \

arch/x86/boot/compressed/mkpiggy: $(deps_arch/x86/boot/compressed/mkpiggy)

$(deps_arch/x86/boot/compressed/mkpiggy):
