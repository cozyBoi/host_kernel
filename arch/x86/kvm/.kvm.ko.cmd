cmd_arch/x86/kvm/kvm.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000 -T ./scripts/module-common.lds  --build-id  -o arch/x86/kvm/kvm.ko arch/x86/kvm/kvm.o arch/x86/kvm/kvm.mod.o ;  true
