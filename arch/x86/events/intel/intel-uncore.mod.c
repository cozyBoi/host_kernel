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
	{ 0xf38f65fd, "pci_write_config_dword" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xe4ba049, "__cpuhp_remove_state" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xae909197, "hrtimer_forward" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xf97d1a04, "hrtimer_cancel" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x32bbe944, "perf_assign_events" },
	{ 0x177847e, "cpu_info" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x91715312, "sprintf" },
	{ 0xdb16b170, "topology_phys_to_logical_pkg" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9181e45, "hrtimer_start_range_ns" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe4b8b53, "perf_pmu_unregister" },
	{ 0xf66a486e, "__cpuhp_setup_state" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe018f483, "cpu_die_map" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x1389619c, "__max_die_per_package" },
	{ 0x58397f49, "perf_pmu_register" },
	{ 0xec4afad7, "perf_pmu_migrate_context" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd06cfeb7, "pci_read_config_dword" },
	{ 0xa022f265, "pv_cpu_ops" },
	{ 0x9877db88, "cpumask_next_and" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4883cfc3, "pci_unregister_driver" },
	{ 0xf86c8d03, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x39081193, "__max_logical_packages" },
	{ 0xdf243169, "hrtimer_init" },
	{ 0xedc03953, "iounmap" },
	{ 0x2069847b, "cpumask_any_but" },
	{ 0xe85eaefe, "__pci_register_driver" },
	{ 0xf474c21c, "bitmap_print_to_pagebuf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xc643e9c6, "pci_get_device" },
	{ 0x55f5019b, "__kmalloc_node" },
	{ 0xd67d34fe, "pci_dev_put" },
	{ 0xbec30d05, "x86_match_cpu" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod001A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod001E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0025:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod002C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod002A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0045:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0046:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0047:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod002D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod002E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod002F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod003F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod004F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0056:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0057:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0085:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod004E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0055:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod009E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod007E:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod009D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod007D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod006C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod006A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod008D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod0086:feature:*");

MODULE_INFO(srcversion, "7B8B64E80DAE42C241E0C3B");
MODULE_INFO(rhelversion, "8.3");
