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
	{ 0xe222cb8, "param_ops_int" },
	{ 0xe4bc540f, "crypto_unregister_skciphers" },
	{ 0x7c7bf6e0, "twofish_enc_blk" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xe47cc3ed, "glue_ecb_req_128bit" },
	{ 0x6be70dd6, "crypto_register_skciphers" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x97400343, "twofish_setkey" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31076b99, "glue_cbc_encrypt_req_128bit" },
	{ 0x1f491d36, "twofish_dec_blk" },
	{ 0x378e47e0, "glue_cbc_decrypt_req_128bit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=twofish-x86_64,twofish_common";


MODULE_INFO(srcversion, "FB9CA76034611085D58B504");
MODULE_INFO(rhelversion, "8.3");
