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
	{ 0xdab879b9, "glue_ctr_req_128bit" },
	{ 0xc1f8bbfe, "glue_xts_crypt_128bit_one" },
	{ 0x7c7bf6e0, "twofish_enc_blk" },
	{ 0xfc724b15, "simd_unregister_skciphers" },
	{ 0x9dfb11d8, "twofish_enc_blk_ctr" },
	{ 0xdc3c41a8, "__crypto_memneq" },
	{ 0xe47cc3ed, "glue_ecb_req_128bit" },
	{ 0x27e1a049, "printk" },
	{ 0xcaa68533, "cpu_has_xfeatures" },
	{ 0xf43d8320, "simd_register_skciphers_compat" },
	{ 0x17f1c548, "glue_xts_req_128bit" },
	{ 0xb1e70801, "__twofish_setkey" },
	{ 0x4c995a89, "__twofish_enc_blk_3way" },
	{ 0xb0aa812e, "fips_enabled" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd859828c, "twofish_enc_blk_ctr_3way" },
	{ 0x97400343, "twofish_setkey" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe3784eb9, "twofish_dec_blk_cbc_3way" },
	{ 0x8cccec5b, "twofish_dec_blk_3way" },
	{ 0x31076b99, "glue_cbc_encrypt_req_128bit" },
	{ 0x1f491d36, "twofish_dec_blk" },
	{ 0x378e47e0, "glue_cbc_decrypt_req_128bit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=twofish-x86_64,twofish-x86_64-3way,twofish_common";


MODULE_INFO(srcversion, "E8F6BB64630301F1088B69F");
MODULE_INFO(rhelversion, "8.3");
