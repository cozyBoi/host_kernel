cmd_arch/x86/crypto/sha1-mb/sha1-mb.o := ld -m elf_x86_64  -z max-page-size=0x200000   -r -o arch/x86/crypto/sha1-mb/sha1-mb.o arch/x86/crypto/sha1-mb/sha1_mb.o arch/x86/crypto/sha1-mb/sha1_mb_mgr_flush_avx2.o arch/x86/crypto/sha1-mb/sha1_mb_mgr_init_avx2.o arch/x86/crypto/sha1-mb/sha1_mb_mgr_submit_avx2.o arch/x86/crypto/sha1-mb/sha1_x8_avx2.o ; scripts/mod/modpost arch/x86/crypto/sha1-mb/sha1-mb.o
