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
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0x7d2fa03c, "crypto_chacha20_init" },
	{ 0x63ec5e18, "crypto_chacha20_setkey" },
	{ 0xdfb91861, "skcipher_walk_done" },
	{ 0xd986dad1, "kernel_fpu_begin" },
	{ 0xcaa68533, "cpu_has_xfeatures" },
	{ 0x2092628f, "crypto_unregister_skcipher" },
	{ 0xd7f57076, "crypto_register_skcipher" },
	{ 0x6d01aca5, "skcipher_walk_virt" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0xb6b13677, "crypto_chacha20_crypt" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=chacha20_generic";


MODULE_INFO(srcversion, "DE0E6D9C15050702413406A");
MODULE_INFO(rhelversion, "8.3");
