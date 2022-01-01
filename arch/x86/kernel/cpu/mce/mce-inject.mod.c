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
	{ 0xf38f65fd, "pci_write_config_dword" },
	{ 0xb534c72d, "node_to_amd_nb" },
	{ 0x76d951cd, "mce_inject_log" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xc27ffb37, "generic_file_llseek" },
	{ 0x2f4ce417, "debugfs_create_dir" },
	{ 0x754d539c, "strlen" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xe0c77bb5, "mce_notify_irq" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x501d615e, "debugfs_create_file" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x91715312, "sprintf" },
	{ 0x4668b613, "debugfs_remove_recursive" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xa3eded0c, "smp_call_function_many" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8cac8c08, "free_cpumask_var" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x668b0227, "simple_attr_read" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x27e1a049, "printk" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0xd1f6c5f3, "smp_num_siblings" },
	{ 0x738fe32b, "amd_get_nodes_per_socket" },
	{ 0x5a921311, "strncmp" },
	{ 0x9ef3e60b, "debugfs_remove" },
	{ 0x9a8a0ca3, "__register_nmi_handler" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x23d1b90, "wrmsr_on_cpu" },
	{ 0xfc96318, "simple_attr_release" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0xff2ce747, "machine_check_poll" },
	{ 0x5f56663b, "rdmsrl_on_cpu" },
	{ 0x987ab0a5, "amd_get_nb_id" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x1aff3d55, "mce_register_injector_chain" },
	{ 0xc7e1cc1c, "injectm" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa7127da7, "mce_unregister_injector_chain" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd06cfeb7, "pci_read_config_dword" },
	{ 0xa022f265, "pv_cpu_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0x20ba4f3e, "rdmsr_on_cpu" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe64ad8ea, "unregister_nmi_handler" },
	{ 0xecad3b34, "do_machine_check" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xb28249bf, "apic" },
	{ 0x77bc13a0, "strim" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x183365cc, "simple_attr_open" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0xe3fea2a7, "simple_attr_write" },
	{ 0x690924ff, "alloc_cpumask_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "40584EC684801AC3D9C113D");
MODULE_INFO(rhelversion, "8.3");
