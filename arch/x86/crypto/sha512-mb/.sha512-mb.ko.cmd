cmd_arch/x86/crypto/sha512-mb/sha512-mb.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000 -T ./scripts/module-common.lds  --build-id  -o arch/x86/crypto/sha512-mb/sha512-mb.ko arch/x86/crypto/sha512-mb/sha512-mb.o arch/x86/crypto/sha512-mb/sha512-mb.mod.o ;  true
