cmd_arch/x86/lib/retpoline.o := gcc -Wp,-MD,arch/x86/lib/.retpoline.o.d  -nostdinc -isystem /usr/lib/gcc/x86_64-redhat-linux/8/include -I./arch/x86/include -I./arch/x86/include/generated   -I./include/drm-backport -I./include -I./arch/x86/include/uapi -I./arch/x86/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -D__ASSEMBLY__ -fno-PIE -DCC_HAVE_ASM_GOTO -m64 -DCONFIG_AS_CFI=1 -DCONFIG_AS_CFI_SIGNAL_FRAME=1 -DCONFIG_AS_CFI_SECTIONS=1 -DCONFIG_AS_FXSAVEQ=1 -DCONFIG_AS_SSSE3=1 -DCONFIG_AS_CRC32=1 -DCONFIG_AS_AVX=1 -DCONFIG_AS_AVX2=1 -DCONFIG_AS_AVX512=1 -DCONFIG_AS_SHA1_NI=1 -DCONFIG_AS_SHA256_NI=1 -Wa,-gdwarf-2 -DCC_USING_FENTRY   -c -o arch/x86/lib/.tmp_retpoline.o arch/x86/lib/retpoline.S

source_arch/x86/lib/retpoline.o := arch/x86/lib/retpoline.S

deps_arch/x86/lib/retpoline.o := \
    $(wildcard include/config/64bit.h) \
  include/linux/kconfig.h \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
  include/linux/stringify.h \
  include/linux/linkage.h \
  include/linux/compiler_types.h \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
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
  arch/x86/include/asm/dwarf2.h \
    $(wildcard include/config/as/cfi.h) \
    $(wildcard include/config/as/cfi/signal/frame.h) \
    $(wildcard include/config/as/cfi/sections.h) \
  arch/x86/include/asm/cpufeatures.h \
  arch/x86/include/asm/required-features.h \
    $(wildcard include/config/x86/minimum/cpu/family.h) \
    $(wildcard include/config/math/emulation.h) \
    $(wildcard include/config/x86/pae.h) \
    $(wildcard include/config/x86/cmpxchg64.h) \
    $(wildcard include/config/x86/cmov.h) \
    $(wildcard include/config/x86/use/3dnow.h) \
    $(wildcard include/config/x86/p6/nop.h) \
    $(wildcard include/config/matom.h) \
    $(wildcard include/config/paravirt.h) \
  arch/x86/include/asm/disabled-features.h \
    $(wildcard include/config/x86/intel/mpx.h) \
    $(wildcard include/config/x86/intel/umip.h) \
    $(wildcard include/config/x86/intel/memory/protection/keys.h) \
    $(wildcard include/config/x86/5level.h) \
    $(wildcard include/config/page/table/isolation.h) \
  arch/x86/include/asm/alternative-asm.h \
    $(wildcard include/config/smp.h) \
  arch/x86/include/asm/asm.h \
  arch/x86/include/asm/export.h \
  include/asm-generic/export.h \
  arch/x86/include/asm/nospec-branch.h \
    $(wildcard include/config/retpoline.h) \
  include/linux/static_key.h \
  include/linux/jump_label.h \
    $(wildcard include/config/jump/label.h) \
    $(wildcard include/config/have/arch/jump/label/relative.h) \
  arch/x86/include/asm/jump_label.h \
  arch/x86/include/asm/nops.h \
    $(wildcard include/config/mk7.h) \
  arch/x86/include/asm/alternative.h \
  arch/x86/include/asm/msr-index.h \
  include/linux/bits.h \
  arch/x86/include/uapi/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \

arch/x86/lib/retpoline.o: $(deps_arch/x86/lib/retpoline.o)

$(deps_arch/x86/lib/retpoline.o):