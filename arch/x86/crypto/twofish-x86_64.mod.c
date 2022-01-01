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
	{ 0x97400343, "twofish_setkey" },
	{ 0x8fe251de, "crypto_register_alg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x84dd1577, "crypto_unregister_alg" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=twofish_common";


MODULE_INFO(srcversion, "BD021088918F5FD859C1CB8");
MODULE_INFO(rhelversion, "8.3");
