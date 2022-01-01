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
	{ 0x8200293d, "kmalloc_caches" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xebbcb3, "crypto_ahash_walk_first" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x63aacf18, "crypto_hash_walk_done" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0xe0332423, "mcryptd_free_ahash" },
	{ 0x2b3a6251, "crypto_ahash_final" },
	{ 0xd47c857d, "crypto_ahash_digest" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0x1101b00f, "crypto_ahash_finup" },
	{ 0x27e1a049, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd986dad1, "kernel_fpu_begin" },
	{ 0xf19751e9, "crypto_register_ahash" },
	{ 0x3b90a4b9, "mcryptd_flusher" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7948bbea, "mcryptd_arm_flusher" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xffed7845, "mcryptd_ahash_child" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xedb0528d, "crypto_unregister_ahash" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf86c8d03, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x7ae3c8c7, "mcryptd_alloc_ahash" },
	{ 0x1cc83d42, "crypto_ahash_type" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mcryptd";


MODULE_INFO(srcversion, "0AE7C139426E32F800482BB");
MODULE_INFO(rhelversion, "8.3");
