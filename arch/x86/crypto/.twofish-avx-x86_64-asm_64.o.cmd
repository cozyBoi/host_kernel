cmd_arch/x86/crypto/twofish-avx-x86_64-asm_64.o := gcc -Wp,-MD,arch/x86/crypto/.twofish-avx-x86_64-asm_64.o.d  -nostdinc -isystem /usr/lib/gcc/x86_64-redhat-linux/8/include -I./arch/x86/include -I./arch/x86/include/generated   -I./include/drm-backport -I./include -I./arch/x86/include/uapi -I./arch/x86/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -D__ASSEMBLY__ -fno-PIE -DCC_HAVE_ASM_GOTO -m64 -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -DCONFIG_AS_CFI_SECTIONS=1 -DCONFIG_AS_FXSAVEQ=1 -DCONFIG_AS_SSSE3=1 -DCONFIG_AS_CRC32=1 -DCONFIG_AS_AVX=1 -DCONFIG_AS_AVX2=1 -DCONFIG_AS_AVX512=1 -DCONFIG_AS_SHA1_NI=1 -DCONFIG_AS_SHA256_NI=1 -Wa,-gdwarf-2 -DCC_USING_FENTRY -DMODULE  -c -o arch/x86/crypto/.tmp_twofish-avx-x86_64-asm_64.o arch/x86/crypto/twofish-avx-x86_64-asm_64.S

source_arch/x86/crypto/twofish-avx-x86_64-asm_64.o := arch/x86/crypto/twofish-avx-x86_64-asm_64.S

deps_arch/x86/crypto/twofish-avx-x86_64-asm_64.o := \
  include/linux/kconfig.h \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
  include/linux/linkage.h \
  include/linux/compiler_types.h \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/module/rel/crcs.h) \
    $(wildcard include/config/trim/unused/ksyms.h) \
    $(wildcard include/config/unused/symbols.h) \
  arch/x86/include/asm/linkage.h \
    $(wildcard include/config/x86/32.h) \
    $(wildcard include/config/x86/64.h) \
    $(wildcard include/config/x86/alignment/16.h) \
  arch/x86/include/asm/frame.h \
    $(wildcard include/config/frame/pointer.h) \
  arch/x86/include/asm/asm.h \
  arch/x86/crypto/glue_helper-asm-avx.S \

arch/x86/crypto/twofish-avx-x86_64-asm_64.o: $(deps_arch/x86/crypto/twofish-avx-x86_64-asm_64.o)

$(deps_arch/x86/crypto/twofish-avx-x86_64-asm_64.o):