cmd_arch/x86/realmode/rm/realmode.elf := ld -m elf_x86_64  -z max-page-size=0x200000   --emit-relocs -T arch/x86/realmode/rm/realmode.lds arch/x86/realmode/rm/header.o arch/x86/realmode/rm/trampoline_64.o arch/x86/realmode/rm/stack.o arch/x86/realmode/rm/reboot.o arch/x86/realmode/rm/wakeup_asm.o arch/x86/realmode/rm/wakemain.o arch/x86/realmode/rm/video-mode.o arch/x86/realmode/rm/copy.o arch/x86/realmode/rm/bioscall.o arch/x86/realmode/rm/regs.o arch/x86/realmode/rm/video-vga.o arch/x86/realmode/rm/video-vesa.o arch/x86/realmode/rm/video-bios.o -o arch/x86/realmode/rm/realmode.elf
