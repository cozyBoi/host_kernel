cmd_arch/x86/kvm/kvm-intel.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000 -T ./scripts/module-common.lds  --build-id  -o arch/x86/kvm/kvm-intel.ko arch/x86/kvm/kvm-intel.o arch/x86/kvm/kvm-intel.mod.o ;  true
