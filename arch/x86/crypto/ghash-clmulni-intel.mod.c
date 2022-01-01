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
	{ 0x9de7d61d, "cryptd_ahash_queued" },
	{ 0x49dc2da2, "shash_ahash_digest" },
	{ 0x89da6e9b, "crypto_shash_final" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x2b3a6251, "crypto_ahash_final" },
	{ 0xd47c857d, "crypto_ahash_digest" },
	{ 0x33c55c58, "cryptd_shash_desc" },
	{ 0xd986dad1, "kernel_fpu_begin" },
	{ 0xf19751e9, "crypto_register_ahash" },
	{ 0xef21df6f, "crypto_unregister_shash" },
	{ 0xf0c7df0a, "crypto_register_shash" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xedb0528d, "crypto_unregister_ahash" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbf2a7a6f, "cryptd_ahash_child" },
	{ 0x3997a883, "crypto_ahash_setkey" },
	{ 0xadfee820, "shash_ahash_update" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0xe6957127, "cryptd_alloc_ahash" },
	{ 0x316e5421, "cryptd_free_ahash" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0x1cc83d42, "crypto_ahash_type" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0081*");

MODULE_INFO(srcversion, "A63457B79ACF8779AEE2ED3");
MODULE_INFO(rhelversion, "8.3");
