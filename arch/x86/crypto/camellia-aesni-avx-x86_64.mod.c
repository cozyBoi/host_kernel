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
	{ 0xb53cc66b, "__camellia_enc_blk" },
	{ 0xdab879b9, "glue_ctr_req_128bit" },
	{ 0xc1f8bbfe, "glue_xts_crypt_128bit_one" },
	{ 0xc5e3cec8, "__camellia_setkey" },
	{ 0x69211153, "camellia_dec_blk_2way" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0x76da75a, "camellia_crypt_ctr_2way" },
	{ 0xfc724b15, "simd_unregister_skciphers" },
	{ 0x17d1814f, "camellia_crypt_ctr" },
	{ 0xdc3c41a8, "__crypto_memneq" },
	{ 0xe47cc3ed, "glue_ecb_req_128bit" },
	{ 0x27e1a049, "printk" },
	{ 0xcaa68533, "cpu_has_xfeatures" },
	{ 0xf43d8320, "simd_register_skciphers_compat" },
	{ 0x17f1c548, "glue_xts_req_128bit" },
	{ 0xb0aa812e, "fips_enabled" },
	{ 0x62cbf7ba, "__camellia_enc_blk_2way" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7a1d58de, "camellia_decrypt_cbc_2way" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31076b99, "glue_cbc_encrypt_req_128bit" },
	{ 0x410e0fb4, "camellia_dec_blk" },
	{ 0x378e47e0, "glue_cbc_decrypt_req_128bit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=camellia-x86_64";


MODULE_INFO(srcversion, "2C4003AD901F52916A0D6A9");
MODULE_INFO(rhelversion, "8.3");
