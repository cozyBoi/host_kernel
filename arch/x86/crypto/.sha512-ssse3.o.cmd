cmd_arch/x86/crypto/sha512-ssse3.o := ld -m elf_x86_64  -z max-page-size=0x200000   -r -o arch/x86/crypto/sha512-ssse3.o arch/x86/crypto/sha512-ssse3-asm.o arch/x86/crypto/sha512-avx-asm.o arch/x86/crypto/sha512-avx2-asm.o arch/x86/crypto/sha512_ssse3_glue.o ; scripts/mod/modpost arch/x86/crypto/sha512-ssse3.o
