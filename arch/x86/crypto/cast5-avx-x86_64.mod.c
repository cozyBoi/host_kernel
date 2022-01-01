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
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x5b17be06, "cast_s4" },
	{ 0xbd3e7542, "cast_s1" },
	{ 0xfc724b15, "simd_unregister_skciphers" },
	{ 0xef81a4af, "__cast5_encrypt" },
	{ 0x5609ce41, "cast_s2" },
	{ 0xdfb91861, "skcipher_walk_done" },
	{ 0x27e1a049, "printk" },
	{ 0xa3be984a, "cast5_setkey" },
	{ 0xd986dad1, "kernel_fpu_begin" },
	{ 0xcaa68533, "cpu_has_xfeatures" },
	{ 0x188d9d26, "__cast5_decrypt" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xf43d8320, "simd_register_skciphers_compat" },
	{ 0x6d01aca5, "skcipher_walk_virt" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x95efe19a, "skcipher_walk_atomise" },
	{ 0x3ef051c8, "crypto_inc" },
	{ 0xb9cba57f, "cast_s3" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cast_common,cast5_generic";


MODULE_INFO(srcversion, "B994A3CA8A638EE1DDB9866");
MODULE_INFO(rhelversion, "8.3");
