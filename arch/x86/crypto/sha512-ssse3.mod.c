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
	{ 0x27e1a049, "printk" },
	{ 0xd986dad1, "kernel_fpu_begin" },
	{ 0xcaa68533, "cpu_has_xfeatures" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xbfcb04a6, "crypto_register_shashes" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x30ceaea4, "crypto_sha512_update" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2b52024e, "crypto_sha512_finup" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0x56d52b5, "crypto_unregister_shashes" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sha512_generic";


MODULE_INFO(srcversion, "79EAA9B3ACA19B90F2692C4");
MODULE_INFO(rhelversion, "8.3");
