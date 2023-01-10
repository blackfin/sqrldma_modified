#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf704969, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1516d8, "dma_map_sg_attrs" },
	{ 0x4b4af741, "kmem_cache_destroy" },
	{ 0xc946dda0, "cdev_del" },
	{ 0xd731cdd9, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2d725fd4, "cdev_init" },
	{ 0x1b45a596, "put_devmap_managed_page" },
	{ 0x95d9e1d1, "pci_write_config_word" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x45f8ff37, "pci_read_config_byte" },
	{ 0x46cf10eb, "cachemode2protval" },
	{ 0x7e7528ac, "dma_unmap_sg_attrs" },
	{ 0xe9c2ad91, "dma_set_mask" },
	{ 0x35c64e5d, "pcie_set_readrq" },
	{ 0xa92ec74, "boot_cpu_data" },
	{ 0x8de7b894, "pci_disable_device" },
	{ 0xfec78051, "pci_disable_msix" },
	{ 0xc5ddd176, "set_page_dirty_lock" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x82e7bb9c, "device_destroy" },
	{ 0x15a66331, "kobject_set_name" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x87b8798d, "sg_next" },
	{ 0xfbc3773, "pci_release_regions" },
	{ 0x782ce0d0, "pcie_capability_clear_and_set_word" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x999e8297, "vfree" },
	{ 0x659ccd2f, "dma_free_attrs" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4c55f5ef, "pv_ops" },
	{ 0x1f87d038, "dma_set_coherent_mask" },
	{ 0x519dd77a, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x771d2911, "kthread_bind" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x303004cd, "pci_set_master" },
	{ 0xf1ecb4f8, "pci_alloc_irq_vectors_affinity" },
	{ 0xfb578fc5, "memset" },
	{ 0xdf2a2797, "pci_restore_state" },
	{ 0x6535b752, "pci_iounmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x2aa20293, "kthread_stop" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x559af85b, "pci_aer_clear_nonfatal_status" },
	{ 0xb3c9b55c, "pci_read_config_word" },
	{ 0x78048de3, "dma_alloc_attrs" },
	{ 0x63474cf, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa8392ae1, "finish_swait" },
	{ 0xefc94da8, "device_create" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xb7a8a9e6, "pci_enable_msi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7eb2bdfa, "pci_find_capability" },
	{ 0xc378cea7, "cdev_add" },
	{ 0x800473f, "__cond_resched" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xfef62dc5, "kmem_cache_alloc" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x3854b7ea, "prepare_to_swait_event" },
	{ 0x92997ed8, "_printk" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xc5e7d3f3, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8754a2ac, "pci_unregister_driver" },
	{ 0x7c797b6, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa8b5e7f0, "kmem_cache_create" },
	{ 0xcee60703, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x6943d575, "remap_pfn_range" },
	{ 0xe3623b5c, "pci_request_regions" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0xcd2f8f17, "pci_disable_msi" },
	{ 0x76c2092d, "__pci_register_driver" },
	{ 0x933c4a18, "class_destroy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdf6ddad, "pci_iomap" },
	{ 0x27fd16f1, "pci_enable_device_mem" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe9b2e30d, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x51e08620, "param_ops_uint" },
	{ 0x325cb5cb, "__class_create" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x55aead74, "__put_page" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xbcac9c8c, "get_user_pages_fast" },
	{ 0xc80ab559, "swake_up_one" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa3171885, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010EEd00009048sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00009044sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00009042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00009041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd0000903Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00009038sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00009028sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00009018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00009034sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00009024sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00009014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00009032sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00009022sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00009012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00009031sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00009021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00009011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00008011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00008012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00008014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00008018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00008021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00008022sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00008024sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00008028sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00008031sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00008032sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00008034sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00008038sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00007011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00007012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00007014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00007018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00007021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00007022sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00007024sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00007028sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00007031sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00007032sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00007034sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00007038sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00006828sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00006830sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00006928sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00006930sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00006A28sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00006A30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00006D30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00004808sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00004828sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00004908sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00004A28sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00004B28sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00002808sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D0Fd0000F000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D0Fd0000F001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C49C31CE18C3897CFC3D332");
