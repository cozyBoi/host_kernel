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
	{ 0x27e1a049, "printk" },
	{ 0xd986dad1, "kernel_fpu_begin" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0xef21df6f, "crypto_unregister_shash" },
	{ 0xf0c7df0a, "crypto_register_shash" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0xbec30d05, "x86_match_cpu" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0081*");

MODULE_INFO(srcversion, "9B50B6C8D281F399CE2347B");
MODULE_INFO(rhelversion, "8.3");
