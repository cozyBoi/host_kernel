cmd_arch/x86/crypto/crct10dif-pclmul.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000 -T ./scripts/module-common.lds  --build-id  -o arch/x86/crypto/crct10dif-pclmul.ko arch/x86/crypto/crct10dif-pclmul.o arch/x86/crypto/crct10dif-pclmul.mod.o ;  true
