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

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xf8cdd757, "module_layout" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa55c9a60, "netdev_info" },
	{ 0xe5fe3f91, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xc1b39492, "ethtool_op_get_ts_info" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x862258db, "timecounter_init" },
	{ 0x73f2d350, "__pm_runtime_idle" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x1eaff9ed, "skb_clone_tx_timestamp" },
	{ 0xe942fa11, "__put_devmap_managed_page" },
	{ 0x4d89ab10, "pci_write_config_word" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xe222cb8, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x7c5f4d10, "napi_disable" },
	{ 0x82048e48, "pci_read_config_byte" },
	{ 0xad0cc62f, "napi_schedule_prep" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x5fdebff5, "dma_set_mask" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xb32a9970, "pci_disable_device" },
	{ 0x760bc265, "pci_disable_msix" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x2c6e8018, "netif_carrier_on" },
	{ 0xb2f6ee2a, "pm_qos_add_request" },
	{ 0x808a2189, "pm_qos_remove_request" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xa1b52f28, "netif_carrier_off" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xf62f28ee, "dma_direct_sync_single_for_cpu" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xed567f0c, "pci_write_config_byte" },
	{ 0x90a9fe8, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x3312f9d0, "pcie_capability_clear_and_set_word" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xbf14112b, "__pm_runtime_resume" },
	{ 0x28d857b3, "pci_enable_wake" },
	{ 0x999e8297, "vfree" },
	{ 0x83e0ea3f, "dma_free_attrs" },
	{ 0x92764f6, "pci_disable_link_state_locked" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x8ab32967, "__alloc_pages_nodemask" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x8057466b, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5b966233, "__dynamic_netdev_dbg" },
	{ 0xab9c4857, "skb_trim" },
	{ 0x696246f, "__netdev_alloc_skb" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xd6025ada, "__pskb_pull_tail" },
	{ 0x4597dd6c, "ptp_clock_unregister" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x17aba2d6, "pci_set_master" },
	{ 0xb2ccb3e8, "netif_schedule_queue" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x2311397c, "pci_enable_pcie_error_reporting" },
	{ 0x6b8283be, "convert_art_to_tsc" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x60af0d5b, "netif_tx_wake_queue" },
	{ 0x172d2074, "pci_restore_state" },
	{ 0xa8bd80f, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9202ba1c, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0x34b84315, "ethtool_op_get_link" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xef045c19, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6aee3d4e, "register_netdev" },
	{ 0xb4499755, "pci_read_config_word" },
	{ 0xf3fca22, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd97655d6, "dma_alloc_attrs" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x2aa19f05, "__dev_kfree_skb_irq" },
	{ 0x28985b9f, "mod_timer" },
	{ 0xb9964ceb, "netif_napi_add" },
	{ 0xc638ba4c, "ptp_clock_register" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xc616b50b, "device_wakeup_enable" },
	{ 0x5675e190, "pci_enable_msi" },
	{ 0xd5717e79, "pci_clear_master" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0x447129fe, "pci_find_capability" },
	{ 0x2c4d21de, "dev_notice" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xad3d3002, "pci_select_bars" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xe8624fbd, "dma_direct_unmap_page" },
	{ 0xb8212341, "timecounter_cyc2time" },
	{ 0x2e035935, "netif_device_attach" },
	{ 0xc29d929c, "napi_gro_receive" },
	{ 0xaedd3d2c, "_dev_info" },
	{ 0x697512e8, "kmem_cache_alloc_node_trace" },
	{ 0xfe52376c, "pci_disable_link_state" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0x49b0eba8, "netif_device_detach" },
	{ 0x3c5dfeb0, "__alloc_skb" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb8687b43, "pci_enable_msix_range" },
	{ 0x8a3ab7ed, "__napi_schedule" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x49975d00, "pci_cleanup_aer_uncorrect_error_status" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa7d74244, "pm_schedule_suspend" },
	{ 0xf6e44440, "passthru_features_check" },
	{ 0x8d340b10, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x1030cd3d, "eth_type_trans" },
	{ 0x3557b982, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf71c2ffa, "netdev_err" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0x3c6947f4, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xf99d347e, "node_states" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2ae63510, "netdev_warn" },
	{ 0x6c86ffa7, "eth_validate_addr" },
	{ 0x93d47613, "pci_disable_pcie_error_reporting" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcc9d6473, "___pskb_trim" },
	{ 0x109bf554, "param_array_ops" },
	{ 0x984efe45, "ptp_clock_index" },
	{ 0x271aa840, "pci_disable_msi" },
	{ 0x914622b7, "dev_trans_start" },
	{ 0xe25eeeb9, "get_device_system_crosststamp" },
	{ 0xedc03953, "iounmap" },
	{ 0xacaf790e, "pci_prepare_to_sleep" },
	{ 0xedb4f1c7, "pci_dev_run_wake" },
	{ 0x56d193b, "dma_direct_sync_single_for_device" },
	{ 0x31eefbfe, "__pci_register_driver" },
	{ 0xb89c3d70, "pm_qos_update_request" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x4b2747e8, "dev_warn" },
	{ 0x51adffd1, "unregister_netdev" },
	{ 0x121da905, "queue_work_on" },
	{ 0x9e0c711d, "vzalloc_node" },
	{ 0x28318305, "snprintf" },
	{ 0xd471b997, "consume_skb" },
	{ 0x708d198e, "pci_enable_device_mem" },
	{ 0x9154a2f8, "__napi_alloc_skb" },
	{ 0x5bf30f5e, "skb_tstamp_tx" },
	{ 0x5bce0a2a, "skb_put" },
	{ 0x20193921, "pci_release_selected_regions" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xdb792a1b, "param_ops_uint" },
	{ 0x838e5a24, "pcie_capability_write_word" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x7a647762, "dma_ops" },
	{ 0x888fe0fb, "pci_request_selected_regions_exclusive" },
	{ 0xd52cffda, "__put_page" },
	{ 0x815c70e2, "__skb_pad" },
	{ 0x1a0d8d60, "pcie_capability_read_word" },
	{ 0xb4a3726b, "dev_get_stats" },
	{ 0xe586eb21, "device_set_wakeup_enable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbef6693c, "pci_save_state" },
	{ 0xf1e63929, "devmap_managed_key" },
	{ 0x513ad534, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d0000105Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000105Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000108Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000108Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000109Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001096sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001098sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001049sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001501sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000294Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001525sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010EFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001503sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000153Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000153Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000155Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001559sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000156Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001570sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015B7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015D7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015D6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015BDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015BEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015BBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015BCsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0DC3F4E066D7F6CDA1D8B8B");
MODULE_INFO(rhelversion, "8.0");
