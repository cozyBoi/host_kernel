cmd_arch/x86/crypto/sha1-mb/sha1-mb.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000 -T ./scripts/module-common.lds  --build-id  -o arch/x86/crypto/sha1-mb/sha1-mb.ko arch/x86/crypto/sha1-mb/sha1-mb.o arch/x86/crypto/sha1-mb/sha1-mb.mod.o ;  true