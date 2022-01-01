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
	{ 0xdb2c1e0e, "crypto_poly1305_init" },
	{ 0x18435765, "crypto_poly1305_update" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xd986dad1, "kernel_fpu_begin" },
	{ 0xcaa68533, "cpu_has_xfeatures" },
	{ 0xef21df6f, "crypto_unregister_shash" },
	{ 0x50493a53, "crypto_poly1305_final" },
	{ 0xf0c7df0a, "crypto_register_shash" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8356269f, "crypto_poly1305_setdesckey" },
	{ 0x69acdf38, "memcpy" },
	{ 0x73dd54eb, "irq_fpu_usable" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=poly1305_generic";


MODULE_INFO(srcversion, "7976904642F749D080817FC");
MODULE_INFO(rhelversion, "8.3");
