#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xf8cdd757, "module_layout" },
	{ 0x36389d2e, "serpent_cbc_dec_8way_avx" },
	{ 0xdab879b9, "glue_ctr_req_128bit" },
	{ 0xb2dcc1fa, "serpent_ecb_enc_8way_avx" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xe01bd023, "__serpent_encrypt" },
	{ 0xfc724b15, "simd_unregister_skciphers" },
	{ 0xc59d1a0a, "serpent_xts_dec_8way_avx" },
	{ 0xe809ca7f, "serpent_xts_dec" },
	{ 0xe47cc3ed, "glue_ecb_req_128bit" },
	{ 0x25852edd, "xts_serpent_setkey" },
	{ 0x281073c7, "__serpent_decrypt" },
	{ 0x27e1a049, "printk" },
	{ 0xcaa68533, "cpu_has_xfeatures" },
	{ 0x92dded8c, "serpent_xts_enc" },
	{ 0xf43d8320, "simd_register_skciphers_compat" },
	{ 0x17f1c548, "glue_xts_req_128bit" },
	{ 0xc9c39aed, "serpent_ctr_8way_avx" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3f20a4a9, "serpent_ecb_dec_8way_avx" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd4c9681a, "__serpent_setkey" },
	{ 0x20a243c, "serpent_xts_enc_8way_avx" },
	{ 0x31076b99, "glue_cbc_encrypt_req_128bit" },
	{ 0x1c871146, "__serpent_crypt_ctr" },
	{ 0x378e47e0, "glue_cbc_decrypt_req_128bit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=serpent-avx-x86_64,serpent_generic";


MODULE_INFO(srcversion, "48D503A88202D52C9629486");
MODULE_INFO(rhelversion, "8.3");
