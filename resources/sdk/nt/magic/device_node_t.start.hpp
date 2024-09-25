#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_node_t*), "_DEVICE_NODE.Sibling", sibling, 0x0, 0x40, true, 0x4c49dfd24845da63)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_node_t*), "_DEVICE_NODE.Child", child, 0x40, 0x40, true, 0xd69d2d4c93d20136)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_node_t*), "_DEVICE_NODE.Parent", parent, 0x80, 0x40, true, 0x889c2222ca76f03b)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_node_t*), "_DEVICE_NODE.LastChild", last_child, 0xc0, 0x40, true, 0xece8c514b3d26f35)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_DEVICE_NODE.PhysicalDeviceObject", physical_device_object, 0x100, 0x40, true, 0x521d76bdd97ba39e)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_DEVICE_NODE.InstancePath", instance_path, 0x140, 0x80, true, 0x8e1914f86dd59490)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_DEVICE_NODE.ServiceName", service_name, 0x1c0, 0x80, true, 0x4d6e09da77016ba1)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_DEVICE_NODE.PendingIrp", pending_irp, 0x240, 0x40, true, 0xfa0344de8fd155c)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_device_t*), "_DEVICE_NODE.FxDevice", fx_device, 0x280, 0x40, true, 0x5cd90c9f2e7e29a7)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_DEVICE_NODE.FxDeviceLock", fx_device_lock, 0x2c0, 0x20, true, 0x849241a88c04d3b)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_DEVICE_NODE.FxRemoveEvent", fx_remove_event, 0x300, 0xc0, true, 0x80d3ce7f3cd9ad44)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_DEVICE_NODE.FxActivationCount", fx_activation_count, 0x3c0, 0x20, true, 0x8b9fcbcfcf6c478d)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_DEVICE_NODE.FxSleepCount", fx_sleep_count, 0x3e0, 0x20, true, 0xdc5428b6f692d200)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_DEVICE_NODE.UniqueId", unique_id, 0x400, 0x80, true, 0x173cf023b78a128a)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_plugin_t*), "_DEVICE_NODE.Plugin", plugin, 0x480, 0x40, true, 0x30cd8fdcd4dbf3aa)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_NODE.Level", level, 0x4c0, 0x20, true, 0x55b6efcb8160ed29)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union power::state_t), "_DEVICE_NODE.CurrentPowerState", current_power_state, 0x4e0, 0x20, true, 0xecfe38c088edb019)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct po::device_notify_t), "_DEVICE_NODE.Notify", notify, 0x500, 0x40, true, 0x2f3031f61122cc3f)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct po::irp_manager_t), "_DEVICE_NODE.PoIrpManager", po_irp_manager, 0x840, 0x0, true, 0xc59f818177937a1a)
#define _m019 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile int32_t), "_DEVICE_NODE.PowerFlags", power_flags, 0x940, 0x20, true, 0x2b44fa030a2547ad, 32, uint32_t)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pnp::devnode_state_t), "_DEVICE_NODE.State", state, 0x960, 0x20, true, 0x8d26022e8d5a94f)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pnp::devnode_state_t), "_DEVICE_NODE.PreviousState", previous_state, 0x980, 0x20, true, 0xbc03958923a5c164)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<enum pnp::devnode_state_t, 20>), "_DEVICE_NODE.StateHistory", state_history, 0x9a0, 0x80, true, 0xea405f4e6636149e)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_NODE.StateHistoryEntry", state_history_entry, 0xc20, 0x20, true, 0x203d1f4dc002773)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_DEVICE_NODE.CompletionStatus", completion_status, 0xc40, 0x20, true, 0xa6f398c520a4e394)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_NODE.Flags", flags, 0xc60, 0x20, true, 0xc446a0c3400fc82)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_NODE.UserFlags", user_flags, 0xc80, 0x20, true, 0x3dcdee06109f64b7)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_NODE.Problem", problem, 0xca0, 0x20, true, 0x8a541f9b1128900b)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_DEVICE_NODE.ProblemStatus", problem_status, 0xcc0, 0x20, true, 0xf3377bbb6bd93cae)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::resource_list_t*), "_DEVICE_NODE.ResourceList", resource_list, 0xd00, 0x40, true, 0x512b0c438ebe6233)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::resource_list_t*), "_DEVICE_NODE.ResourceListTranslated", resource_list_translated, 0xd40, 0x40, true, 0x2e6ea0f4585e24d8)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_DEVICE_NODE.DuplicatePDO", duplicate_pdo, 0xd80, 0x40, true, 0x4b0dcdc233fa7a06)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::resource_requirements_list_t*), "_DEVICE_NODE.ResourceRequirements", resource_requirements, 0xdc0, 0x40, true, 0x9321b1703cabdf36)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::interface_type_t), "_DEVICE_NODE.InterfaceType", interface_type, 0xe00, 0x20, true, 0xf3afc6cbe943fa8f)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_NODE.BusNumber", bus_number, 0xe20, 0x20, true, 0x6c20d9600a272dae)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::interface_type_t), "_DEVICE_NODE.ChildInterfaceType", child_interface_type, 0xe40, 0x20, true, 0xfe9eda9ab812e2f7)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_NODE.ChildBusNumber", child_bus_number, 0xe60, 0x20, true, 0xef35b410e53b9a62)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DEVICE_NODE.ChildBusTypeIndex", child_bus_type_index, 0xe80, 0x10, true, 0xfbdc8f041fe39e1)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_NODE.RemovalPolicy", removal_policy, 0xe90, 0x8, true, 0x628408e77b178fc)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_NODE.HardwareRemovalPolicy", hardware_removal_policy, 0xe98, 0x8, true, 0x556cd04b50fc474f)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_DEVICE_NODE.TargetDeviceNotify", target_device_notify, 0xec0, 0x80, true, 0x92c11ead07700efc)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_DEVICE_NODE.DeviceArbiterList", device_arbiter_list, 0xf40, 0x80, true, 0xee6c53a61b7a8785)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_DEVICE_NODE.DeviceTranslatorList", device_translator_list, 0xfc0, 0x80, true, 0xa37465fbffa47e8a)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DEVICE_NODE.NoTranslatorMask", no_translator_mask, 0x1040, 0x10, true, 0xc1ec2150cbbecffb)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DEVICE_NODE.QueryTranslatorMask", query_translator_mask, 0x1050, 0x10, true, 0xa803e58b0a741834)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DEVICE_NODE.NoArbiterMask", no_arbiter_mask, 0x1060, 0x10, true, 0xcf913db19199cbec)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DEVICE_NODE.QueryArbiterMask", query_arbiter_mask, 0x1070, 0x10, true, 0x6b890dcb7894d249)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_over_used1_t), "_DEVICE_NODE.OverUsed1", over_used1, 0x1080, 0x40, true, 0xbf810f28486549c1)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_over_used2_t), "_DEVICE_NODE.OverUsed2", over_used2, 0x10c0, 0x40, true, 0x9c7bdb75965b74a6)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::resource_list_t*), "_DEVICE_NODE.BootResources", boot_resources, 0x1100, 0x40, true, 0x7630d9f81433aaa9)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::resource_list_t*), "_DEVICE_NODE.BootResourcesTranslated", boot_resources_translated, 0x1140, 0x40, true, 0x374ed4d17c518c)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_NODE.CapabilityFlags", capability_flags, 0x1180, 0x20, true, 0xfd6cebd4be918f02)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_dock_info_t), "_DEVICE_NODE.DockInfo", dock_info, 0x11c0, 0x0, true, 0x18c5bb60331be888)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_NODE.DisableableDepends", disableable_depends, 0x12c0, 0x20, true, 0x2fde4c7239462fb7)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_DEVICE_NODE.PendedSetInterfaceState", pended_set_interface_state, 0x1300, 0x80, true, 0x372366eacf92759f)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_DEVICE_NODE.LegacyBusListEntry", legacy_bus_list_entry, 0x1380, 0x80, true, 0xdb8e090f06fd6eaf)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_NODE.DriverUnloadRetryCount", driver_unload_retry_count, 0x1400, 0x20, true, 0x31ebd4fe602f3aab)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_node_t*), "_DEVICE_NODE.PreviousParent", previous_parent, 0x1440, 0x40, true, 0x91b09cdba7b2523d)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_DEVICE_NODE.DeletedChildren", deleted_children, 0x1480, 0x20, true, 0xf9727e0756a94b8a)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_NODE.NumaNodeIndex", numa_node_index, 0x14a0, 0x20, true, 0x849e2d28566f95de)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DEVICE_NODE.ContainerID", container_id, 0x14c0, 0x80, true, 0x89f431a3368fcc9f)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_NODE.OverrideFlags", override_flags, 0x1540, 0x8, true, 0x5b9074c103ab50f7)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_NODE.DeviceIdsHash", device_ids_hash, 0x1560, 0x20, true, 0x10685c368f62288)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_NODE.RequiresUnloadedDriver", requires_unloaded_driver, 0x1580, 0x8, true, 0x722917cb2d8ab53d)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::pending_relations_list_entry_t*), "_DEVICE_NODE.PendingEjectRelations", pending_eject_relations, 0x15c0, 0x40, true, 0x8450b56e83dc2bb4)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_NODE.StateFlags", state_flags, 0x1600, 0x20, true, 0x89603b14580b9014)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pnp::rebalance_trace_context_t*), "_DEVICE_NODE.RebalanceContext", rebalance_context, 0x1640, 0x40, true, 0x21527a575740336d)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_node_iommu_extension_t*), "_DEVICE_NODE.IommuExtension", iommu_extension, 0x1680, 0x40, true, 0xfcdd6883e0dc4e26)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct po::directed_drips_state_t), "_DEVICE_NODE.DirectedDripsState", directed_drips_state, 0x16c0, 0xc0, true, 0x64ecaaa48e309ee9)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct pnp::problem_code_log_entry_t, 4>), "_DEVICE_NODE.ProblemCodeLog", problem_code_log, 0x0, 0x0, false, 0xbf3dade948f8b0d7)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_NODE.ProblemCodeLogNextIndex", problem_code_log_next_index, 0x0, 0x0, false, 0xbfb7a71b7ea78149)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_DEVICE_NODE.StateTimestamp", state_timestamp, 0x0, 0x0, false, 0x5593e9529d1a9565)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_DEVICE_NODE.PreviousStateTimestamp", previous_state_timestamp, 0x0, 0x0, false, 0x1a8a94a45c1a23c4)
#define _m47 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_node_t*), "_DEVICE_NODE.OverUsed1.LegacyDeviceNode", legacy_device_node, 0x0, 0x40, true, 0xb507289a802752c2)
#define _m48 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_relations_t*), "_DEVICE_NODE.OverUsed1.PendingDeviceRelations", pending_device_relations, 0x0, 0x40, true, 0xdede2bb2929cfa69)
#define _m49 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DEVICE_NODE.OverUsed1.Information", information, 0x0, 0x40, true, 0x62f9c0ee754d4d8e)
#define _m51 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_node_t*), "_DEVICE_NODE.OverUsed2.NextResourceDeviceNode", next_resource_device_node, 0x0, 0x40, true, 0x9496ecfe850bd3ba)
#define _m56 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::profile_status_t), "_DEVICE_NODE.DockInfo.DockStatus", dock_status, 0x0, 0x20, true, 0x8b1c9ad648549418)
#define _m57 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_DEVICE_NODE.DockInfo.ListEntry", list_entry, 0x40, 0x80, true, 0xac54d0d6a4823d56)
#define _m58 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_DEVICE_NODE.DockInfo.SerialNumber", serial_number, 0xc0, 0x40, true, 0xbfe36130a298f09a)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m050
#define _m052
#define _m053
#define _m054
#define _m055
#define _m059
#define _m060
#define _m061
#define _m062
#define _m063
#define _m064
#define _m065
#define _m066
#define _m067
#define _m068
#define _m069
#define _m070
#define _m071
#define _m072
#define _m073
#define _m074
#define _m075
#define _m076
#define _m077
#define _m078
#define _m079
#define _m47
#define _m48
#define _m49
#define _m51
#define _m56
#define _m57
#define _m58
#endif