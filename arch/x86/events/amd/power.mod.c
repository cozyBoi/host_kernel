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
	{ 0x89f82eb0, "events_sysfs_show" },
	{ 0xe4b8b53, "perf_pmu_unregister" },
	{ 0xe4ba049, "__cpuhp_remove_state" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x58397f49, "perf_pmu_register" },
	{ 0xf66a486e, "__cpuhp_setup_state" },
	{ 0x27e1a049, "printk" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0xec4afad7, "perf_pmu_migrate_context" },
	{ 0x2069847b, "cpumask_any_but" },
	{ 0x40cf6820, "cpu_sibling_map" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xf474c21c, "bitmap_print_to_pagebuf" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa022f265, "pv_cpu_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2E9C61A2E78524B13F1F966");
MODULE_INFO(rhelversion, "8.3");
