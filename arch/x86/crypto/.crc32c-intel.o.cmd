cmd_arch/x86/crypto/crc32c-intel.o := ld -m elf_x86_64  -z max-page-size=0x200000   -r -o arch/x86/crypto/crc32c-intel.o arch/x86/crypto/crc32c-intel_glue.o arch/x86/crypto/crc32c-pcl-intel-asm_64.o ; scripts/mod/modpost arch/x86/crypto/crc32c-intel.o