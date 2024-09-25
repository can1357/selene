#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::raid_object_type_t), "_RAID_UNIT_EXTENSION.ObjectType", object_type, 0x0, 0x20, true, 0x7fcb733af76fd15e)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_RAID_UNIT_EXTENSION.DeviceObject", device_object, 0x40, 0x40, true, 0x28c56185dcc201d0)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RAID_UNIT_EXTENSION.UnitExtension", unit_extension, 0x80, 0x40, true, 0x1e211b34513a9ea2)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_adapter_extension_t*), "_RAID_UNIT_EXTENSION.Adapter", adapter, 0xc0, 0x40, true, 0xbea15b8b2fdd331b)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.SlowLock", slow_lock, 0x140, 0x40, true, 0x1728082750caf860)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::device_state_t), "_RAID_UNIT_EXTENSION.DeviceState", device_state, 0x180, 0x20, true, 0x8616ec43197469b1)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_RAID_UNIT_EXTENSION.NextUnit", next_unit, 0x1c0, 0x80, true, 0x1bbb2aa491052bde)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_RAID_UNIT_EXTENSION.UnitTableLink", unit_table_link, 0x240, 0x80, true, 0xdbb3bd90bf61c6ff)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::stor_addr_btl8_t), "_RAID_UNIT_EXTENSION.StorAddressBTL8", stor_address_btl8, 0x2c0, 0x80, true, 0xccf897353a75c952)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RAID_UNIT_EXTENSION.AddressType", address_type, 0x2c0, 0x10, true, 0x307d23b0751e6ed2)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RAID_UNIT_EXTENSION.AddressPort", address_port, 0x2d0, 0x10, true, 0x7c9a675212a75e5c)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.AddressLength", address_length, 0x2e0, 0x20, true, 0xa8dc712b58f263b5)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct stor::port::stor_scsi_address_t, union stor::port::raid_address_t>), "_RAID_UNIT_EXTENSION.Address", address, 0x300, 0x20, true, 0x1adc6dc67694e03e)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct stor::port::stor_scsi_identity_t, struct stor::port::stor_identity_t>), "_RAID_UNIT_EXTENSION.Identity", identity, 0x340, 0xc0, true, 0x7c9db59cb2bcccf6)
#define _m014 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.DeviceClaimed", device_claimed, 0x0, 0x1, true, 0x4c7015ce31130ab1, 1, uint8_t)
#define _m015 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.Enumerated", enumerated, 0x1, 0x1, true, 0xdea0774671e7e531, 1, uint8_t)
#define _m016 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.Present", present, 0x2, 0x1, true, 0xb3462bb80fe6f4f, 1, uint8_t)
#define _m017 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.Temporary", temporary, 0x3, 0x1, true, 0xb2f525825c13c451, 1, uint8_t)
#define _m018 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.WmiInitialized", wmi_initialized, 0x4, 0x1, true, 0x3a250b5ba51a9f6d, 1, uint8_t)
#define _m019 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.Zombie", zombie, 0x5, 0x1, true, 0x8c7d57e91729d912, 1, uint8_t)
#define _m020 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.RescanNeeded", rescan_needed, 0x6, 0x1, true, 0x58868076474232d7, 1, uint8_t)
#define _m021 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.PoweringUp", powering_up, 0x7, 0x1, true, 0x4397e1284d0fa456, 1, uint8_t)
#define _m022 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.PoweringDown", powering_down, 0x8, 0x1, true, 0xc0216d21ed291d86, 1, uint8_t)
#define _m023 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.D3ColdSupported", d3_cold_supported, 0x9, 0x1, true, 0x6915ea6656aa072, 1, uint8_t)
#define _m024 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.D3ColdEnabled", d3_cold_enabled, 0xa, 0x1, true, 0x3609772cb26d428b, 1, uint8_t)
#define _m025 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.DeviceInitialized", device_initialized, 0xc, 0x1, true, 0x64295832b65298d8, 1, uint8_t)
#define _m026 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.DisabledPendingTimer", disabled_pending_timer, 0xd, 0x1, true, 0xfae95c543ae88bc3, 1, uint8_t)
#define _m027 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.DumpActiveNotCapable", dump_active_not_capable, 0xe, 0x1, true, 0xb3669846209c4be8, 1, uint8_t)
#define _m028 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.RegisteredForPoFx", registered_for_po_fx, 0xf, 0x1, true, 0x843a91156b286dcc, 1, uint8_t)
#define _m029 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.BootUnit", boot_unit, 0x10, 0x1, true, 0x2ea820ca36c5247d, 1, uint8_t)
#define _m030 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.Unresponsive", unresponsive, 0x11, 0x1, true, 0x4c44a2180dd38b7e, 1, uint8_t)
#define _m031 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.DumpAlwaysPowerOn", dump_always_power_on, 0x12, 0x1, true, 0xe650b4039bce092d, 1, uint8_t)
#define _m032 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.ActiveReferenceOnAdapter", active_reference_on_adapter, 0xb, 0x1, true, 0x5cccb01c15855de, 1, uint8_t)
#define _m033 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.VmLunInterfaceState", vm_lun_interface_state, 0x13, 0x1, true, 0xf8b56a4f483e5334, 1, uint8_t)
#define _m034 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.SupportsAtaInformation", supports_ata_information, 0x14, 0x1, true, 0xbf0b20f899835401, 1, uint8_t)
#define _m035 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.DeviceFailed", device_failed, 0x15, 0x1, true, 0xdb9aef29018a2ea, 1, uint8_t)
#define _m036 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.Removable", removable, 0x16, 0x1, true, 0x3c1fc6389338b0f3, 1, uint8_t)
#define _m037 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.SurpriseRemovalOK", surprise_removal_ok, 0x17, 0x1, true, 0x9255338f4b2177b9, 1, uint8_t)
#define _m038 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.SMRResourceFailed", smr_resource_failed, 0x18, 0x1, true, 0x212c71558b7dfb81, 1, uint8_t)
#define _m039 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.DFxPowerDownActive", d_fx_power_down_active, 0x19, 0x1, true, 0x793ce3628ad9478f, 1, uint8_t)
#define _m040 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.DFxPoNotifiedAdaptiveD3Engaged", d_fx_po_notified_adaptive_d3_engaged, 0x1a, 0x1, true, 0x977e402fd9366489, 1, uint8_t)
#define _m041 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.DeviceFailureReportedToWHEA", device_failure_reported_to_whea, 0x1b, 0x1, true, 0x67d1b7769e7f83d4, 1, uint8_t)
#define _m042 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.UnusedBit", unused_bit, 0x0, 0x0, false, 0xb2d08f46bf8479c5, 1, uint8_t)
#define _m043 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.IoSizeDistributionEnabled", io_size_distribution_enabled, 0x0, 0x0, false, 0x3106a7f0c6cddb7e, 1, uint8_t)
#define _m044 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.Flags.DisableRuntimePowerBypassPoFx", disable_runtime_power_bypass_po_fx, 0x0, 0x0, false, 0x342b27ec11713e72, 1, uint8_t)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.Flags.AsUlong", as_ulong, 0x0, 0x0, false, 0x17024ed389cbd0b8)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<u0_flags_t, u0_flags_t>), "_RAID_UNIT_EXTENSION.Flags", flags, 0xe00, 0x40, true, 0x22c86ec9e54a5e1f)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_interlocked_flags_t), "_RAID_UNIT_EXTENSION.InterlockedFlags", interlocked_flags, 0xe40, 0x20, true, 0xe85232752599fbec)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_RAID_UNIT_EXTENSION.ZeroOutstandingEvent", zero_outstanding_event, 0xe80, 0xc0, true, 0x7735208f2cbb271e)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_power_state_t), "_RAID_UNIT_EXTENSION.Power", power, 0xf40, 0x80, true, 0x9c9019f37f834201)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::stor_event_queue_t*), "_RAID_UNIT_EXTENSION.PendingQueue", pending_queue, 0xfc0, 0x40, true, 0xb89e77a4f210b1c2)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::queue_tag_list_t), "_RAID_UNIT_EXTENSION.TagList", tag_list, 0x1000, 0x0, true, 0x2dddd25ba2034d15)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::queue_t), "_RAID_UNIT_EXTENSION.IoQueue", io_queue, 0x1400, 0x40, true, 0xb398c3adf06deaa)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.MaxQueueDepth", max_queue_depth, 0x1940, 0x20, true, 0x1e425f7de661d874)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::storage_powerup_reason_type_t), "_RAID_UNIT_EXTENSION.PowerupReason", powerup_reason, 0x1980, 0x20, true, 0x31064e7a00c653cd)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct acpi::interface_standard2_t), "_RAID_UNIT_EXTENSION.AcpiInterface", acpi_interface, 0x19c0, 0xc0, true, 0xbee9a1f15cd84c56)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_RAID_UNIT_EXTENSION.OutstandingCount", outstanding_count, 0x1c80, 0x20, true, 0x5b260403ece62465)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.PagingPathCount", paging_path_count, 0x1ca0, 0x20, true, 0xadbaac15bb316358)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.CrashDumpPathCount", crash_dump_path_count, 0x1cc0, 0x20, true, 0xdb3cd8a7a713be6a)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.HiberPathCount", hiber_path_count, 0x1ce0, 0x20, true, 0xd3c74433abab3eb2)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_RAID_UNIT_EXTENSION.PendingTimer", pending_timer, 0x1d00, 0x0, true, 0x2679c2678d43a8f5)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_RAID_UNIT_EXTENSION.PendingDpc", pending_dpc, 0x1f00, 0x0, true, 0xa287af481c9199d5)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_RAID_UNIT_EXTENSION.PauseTimer", pause_timer, 0x2100, 0x0, true, 0xaf415c66b96eeed3)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_RAID_UNIT_EXTENSION.PauseTimerDpc", pause_timer_dpc, 0x2300, 0x0, true, 0x8d48d21d2e1da6bd)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_RAID_UNIT_EXTENSION.RestartDpc", restart_dpc, 0x2500, 0x0, true, 0x21d0b37374ddfb3a)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_memory_region_t*), "_RAID_UNIT_EXTENSION.CommonBufferVAs", common_buffer_v_as, 0x2700, 0x40, true, 0xa370867a156de54b)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.CommonBufferSize", common_buffer_size, 0x2740, 0x20, true, 0x31ba2a0ede37a2)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.CommonBufferBlocks", common_buffer_blocks, 0x2760, 0x20, true, 0x5076e7eff01b5211)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.DefaultTimeout", default_timeout, 0x2780, 0x20, true, 0x19e0e3b7cfe4d6be)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.LastHierarchicalResetEndTime", last_hierarchical_reset_end_time, 0x2800, 0x40, true, 0x1aac07499a6522bc)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_deferred_list_t), "_RAID_UNIT_EXTENSION.DeferredList", deferred_list, 0x2880, 0x80, true, 0x75a92ec70063c4ea)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_io_resources_t), "_RAID_UNIT_EXTENSION.ResetResources", reset_resources, 0x3500, 0x0, true, 0x7e08bf851c09fa14)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_RAID_UNIT_EXTENSION.ResetResourcesAcquired", reset_resources_acquired, 0x3600, 0x20, true, 0xb4357d2b5412cd6a)
#define _m082 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_UNIT_EXTENSION.SenseInfoSize", sense_info_size, 0x3620, 0x8, true, 0x671ab0f147e59ac1)
#define _m083 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_UNIT_EXTENSION.CallFreeDumpPtrSRB", call_free_dump_ptr_srb, 0x3628, 0x8, true, 0x44e8e392fce50c0a)
#define _m084 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_UNIT_EXTENSION.DumpPowerReady", dump_power_ready, 0x3630, 0x8, true, 0x984c56ed5c5eb753)
#define _m085 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_UNIT_EXTENSION.StackDumpPowerReady", stack_dump_power_ready, 0x3638, 0x8, true, 0x6e828d70d9c76ea2)
#define _m086 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::rundown_ref_cache_aware_t*), "_RAID_UNIT_EXTENSION.PoFxRundownProtection", po_fx_rundown_protection, 0x3640, 0x40, true, 0xd3d62c2b623f02a3)
#define _m087 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_unit_pofx_t*), "_RAID_UNIT_EXTENSION.PoFx", po_fx, 0x3680, 0x40, true, 0xcef9ed37f89865ed)
#define _m088 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::d3cold_support_interface_t*), "_RAID_UNIT_EXTENSION.D3ColdInterface", d3_cold_interface, 0x36c0, 0x40, true, 0xaf580ca30b9b28d4)
#define _m089 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_RAID_UNIT_EXTENSION.PowerUpRequired", power_up_required, 0x3700, 0x20, true, 0xcaf56133cfe89f30)
#define _m090 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_RAID_UNIT_EXTENSION.PowerDownRequired", power_down_required, 0x3720, 0x20, true, 0x145ea205e46ca4a7)
#define _m091 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::workitem_t*), "_RAID_UNIT_EXTENSION.HierarchicalResetWorkItem", hierarchical_reset_work_item, 0x3740, 0x40, true, 0xc2132d601d157c20)
#define _m092 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_RAID_UNIT_EXTENSION.HierarchicalResetWorkItemTimeoutCountdown", hierarchical_reset_work_item_timeout_countdown, 0x3780, 0x20, true, 0x3ac993ce858a9707)
#define _m093 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_RAID_UNIT_EXTENSION.HierarchicalResetSrbTimeoutCountdown", hierarchical_reset_srb_timeout_countdown, 0x37a0, 0x20, true, 0xfabe97fa1fdb8b0f)
#define _m094 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.HierarchicalResetAbortCount", hierarchical_reset_abort_count, 0x37c0, 0x20, true, 0xbc5906408e72ba29)
#define _m095 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.HierarchicalResetWorkItemSpinLock", hierarchical_reset_work_item_spin_lock, 0x3800, 0x40, true, 0x289eeaf855690e3c)
#define _m096 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_unit_registry_parameters_t), "_RAID_UNIT_EXTENSION.RegistryParameters", registry_parameters, 0x3840, 0xc0, true, 0xef8122493d415107)
#define _m097 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_unit_attributes_t), "_RAID_UNIT_EXTENSION.UnitAttributes", unit_attributes, 0x3900, 0x20, true, 0xaad033b2848bb014)
#define _m098 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_RAID_UNIT_EXTENSION.VmLunPnpInterfaceName", vm_lun_pnp_interface_name, 0x3940, 0x80, true, 0x1f3257b3596fe312)
#define _m099 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_work_item_context_t), "_RAID_UNIT_EXTENSION.QuiesceDeviceWorkItem", quiesce_device_work_item, 0x39c0, 0x80, true, 0x91affd966b3467ad)
#define _m100 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::stor_async_notify_context_t), "_RAID_UNIT_EXTENSION.StorAsyncNotify", stor_async_notify, 0x3a40, 0xc0, true, 0x71b87546a162fb13)
#define _m101 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_shared_work_item_context_t), "_RAID_UNIT_EXTENSION.PowerWorkItem", power_work_item, 0x3b00, 0xc0, true, 0x99966a0c0e0a69c9)
#define _m106 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_pending_power_up_context_t), "_RAID_UNIT_EXTENSION.PendingPowerUpContext", pending_power_up_context, 0x3bc0, 0x80, true, 0x95157aab5750537f)
#define _m107 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::slist_entry_t), "_RAID_UNIT_EXTENSION.PendingPowerUpListEntry", pending_power_up_list_entry, 0x3c80, 0x80, true, 0x29959c7d33a68aa8)
#define _m108 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_RAID_UNIT_EXTENSION.SesPnpInterfaceName", ses_pnp_interface_name, 0x3d00, 0x80, true, 0xd5c53dcfb3113a39)
#define _m109 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.IoCountDelayedByLatencyCap", io_count_delayed_by_latency_cap, 0x3d80, 0x40, true, 0xe65367bf4ba2b964)
#define _m110 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_RAID_UNIT_EXTENSION.DeviceGuid", device_guid, 0x3dc0, 0x80, true, 0xb8be962edf983e6a)
#define _m111 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::telemetry_unit_extension_t), "_RAID_UNIT_EXTENSION.TelemetryExtension", telemetry_extension, 0x3e40, 0x40, true, 0x240c213c7733ad2d)
#define _m112 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.FirstDPNRTimeAfterCS", first_dpnr_time_after_cs, 0x3e80, 0x40, true, 0x5b1c3a5767101594)
#define _m113 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.LastF1StartTime", last_f1_start_time, 0x3ec0, 0x40, true, 0x1e8f4b86a3b2ad2f)
#define _m114 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.F1DurationInCS", f1_duration_in_cs, 0x3f00, 0x40, true, 0x98b3663c7f154490)
#define _m115 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.LastDPNRStartTime", last_dpnr_start_time, 0x3f40, 0x40, true, 0xefead54653a136fd)
#define _m116 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.DPNRDurationInCS", dpnr_duration_in_cs, 0x3f80, 0x40, true, 0xa3543c872110c8bb)
#define _m117 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.ActiveReferencesInCS", active_references_in_cs, 0x3fc0, 0x40, true, 0x854ee4732a3af975)
#define _m118 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.ActiveReferencesInCoalescing", active_references_in_coalescing, 0x4000, 0x40, true, 0xb25d4cf8fd262ba9)
#define _m119 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.UnitTimeoutsInCS", unit_timeouts_in_cs, 0x4040, 0x20, true, 0x3b34b71b0eaa7103)
#define _m120 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.F0TransitionsSinceCSStateChange", f0_transitions_since_cs_state_change, 0x4060, 0x20, true, 0x6696ba1fee705db7)
#define _m121 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.D0TransitionsSinceCSStateChange", d0_transitions_since_cs_state_change, 0x4080, 0x20, true, 0x7297e353faf308a5)
#define _m122 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.F0TransitionsLongSinceCSStateChange", f0_transitions_long_since_cs_state_change, 0x40a0, 0x20, true, 0x54d69ca738bf35dc)
#define _m123 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.D0TransitionsLongSinceCSStateChange", d0_transitions_long_since_cs_state_change, 0x40c0, 0x20, true, 0x8ade58676f503489)
#define _m124 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.UnresponsiveRequests", unresponsive_requests, 0x41c0, 0x40, true, 0x6ef4bbd856d229a6)
#define _m125 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.QosGuaranteeFailures", qos_guarantee_failures, 0x4200, 0x40, true, 0x8aff67c292885a)
#define _m126 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.TimeoutsInGateway", timeouts_in_gateway, 0x4240, 0x40, true, 0x85445eb9e54edab8)
#define _m127 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.TimeoutsInLunQueue", timeouts_in_lun_queue, 0x4280, 0x40, true, 0x997513a7d69290e8)
#define _m128 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.TimeoutsInMiniport", timeouts_in_miniport, 0x42c0, 0x20, true, 0x51c21e6d4802287a)
#define _m129 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.PeriodicMaxDeviceCountAtSwTimeout", periodic_max_device_count_at_sw_timeout, 0x42e0, 0x20, true, 0x94aa0686b71c1cdd)
#define _m130 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.PauseDeviceCount", pause_device_count, 0x4300, 0x20, true, 0x766c3158b52e3a8d)
#define _m131 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.DeviceBusyCount", device_busy_count, 0x4320, 0x20, true, 0x37d9b65b2dbb60a6)
#define _m132 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.BusyCompletionCount", busy_completion_count, 0x4340, 0x20, true, 0x789ca1bf108af34a)
#define _m133 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.StorpTraceLoggingPerformanceEnabled", storp_trace_logging_performance_enabled, 0x4620, 0x20, true, 0xc281150a6ac3edeb)
#define _m134 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_RAID_UNIT_EXTENSION.TelemetryLastPerfCollectionTimeStamp", telemetry_last_perf_collection_time_stamp, 0x4680, 0x40, true, 0xba5b0db1fe15c13a)
#define _m135 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.TelemetryLock", telemetry_lock, 0x4880, 0x40, true, 0x9379f23ac551d6e2)
#define _m136 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_telemetry_sampled_error_log_t), "_RAID_UNIT_EXTENSION.TelemetrySampledErrorLog", telemetry_sampled_error_log, 0x48c0, 0x40, true, 0x33fccf234089f4b0)
#define _m137 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_telemetry_unique_error_log_t), "_RAID_UNIT_EXTENSION.TelemetryUniqueErrorLog", telemetry_unique_error_log, 0x5700, 0x80, true, 0x10cd611eed032241)
#define _m138 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.PowerCycleCount", power_cycle_count, 0x6400, 0x20, true, 0x7378d99ea1d79309)
#define _m139 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_RAID_UNIT_EXTENSION.InitialTimestamp", initial_timestamp, 0x6440, 0x40, true, 0xe9abb2aaf3e8bc15)
#define _m140 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_unit_qos_t), "_RAID_UNIT_EXTENSION.Qos", qos, 0x6480, 0x80, true, 0x177cca742cd8a447)
#define _m141 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_unit_extension_per_processor_t*), "_RAID_UNIT_EXTENSION.PerProcessorData", per_processor_data, 0x100, 0x40, true, 0x512bfe64da9ce354)
#define _m142 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 9>), "_RAID_UNIT_EXTENSION.VendorId", vendor_id, 0x500, 0x48, true, 0xa5e5d57fe3280d11)
#define _m143 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 17>), "_RAID_UNIT_EXTENSION.ProductId", product_id, 0x548, 0x88, true, 0x59ff54221b2eb609)
#define _m144 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 256>), "_RAID_UNIT_EXTENSION.SerialNumber", serial_number, 0x5d0, 0x0, true, 0x21589d9e75b84ca0)
#define _m145 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 5>), "_RAID_UNIT_EXTENSION.ProductRevision", product_revision, 0xdd0, 0x28, true, 0x4f97dc1e69d02264)
#define _m146 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.LogicalSectorSize", logical_sector_size, 0x1960, 0x20, true, 0xf8a1d3e48ab8b1e9)
#define _m147 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_RAID_UNIT_EXTENSION.OutstandingResetCount", outstanding_reset_count, 0x27a0, 0x20, true, 0x301fb9e5f2fb51b3)
#define _m148 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.HierarchicalResetSuccessCount", hierarchical_reset_success_count, 0x27c0, 0x20, true, 0x9d2098be54c8b62e)
#define _m149 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.FirstDFxPowerDownTimeAfterCS", first_d_fx_power_down_time_after_cs, 0x4100, 0x40, true, 0x44d0d85bedf05ae2)
#define _m150 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.LastDFxPowerDownStartTime", last_d_fx_power_down_start_time, 0x4140, 0x40, true, 0x8e357c6ec71c3fd8)
#define _m151 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.DFxPowerDownDurationInCS", d_fx_power_down_duration_in_cs, 0x4180, 0x40, true, 0xf5be50057b053015)
#define _m152 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.ZoneDeviceWriteErrors", zone_device_write_errors, 0x4360, 0x20, true, 0xd29b82f2fc91bf1)
#define _m153 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.ZoneWriteOverflowEntries", zone_write_overflow_entries, 0x4380, 0x20, true, 0x9c162e897bb8d0c8)
#define _m154 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.TotalDeviceQueueIoCount", total_device_queue_io_count, 0x43c0, 0x40, true, 0x82e37c3fab7288a2)
#define _m155 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.TotalDeviceQueueIoWaitDuration", total_device_queue_io_wait_duration, 0x4400, 0x40, true, 0x89698b8421eb86bd)
#define _m156 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.MaxDeviceQueueIoWaitDuration", max_device_queue_io_wait_duration, 0x4440, 0x40, true, 0xd3890b65b323b947)
#define _m157 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.DeviceQueueIoWaitExceededTimeoutCount", device_queue_io_wait_exceeded_timeout_count, 0x4480, 0x40, true, 0x3ae9ba10470bad4)
#define _m158 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.DeviceQueueIoBusyCount", device_queue_io_busy_count, 0x44c0, 0x40, true, 0xa3929e6f7ff2ac5)
#define _m159 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.DeviceQueueIoPausedCount", device_queue_io_paused_count, 0x4500, 0x40, true, 0xc902c5f1cd3c8b06)
#define _m160 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.DeviceQueueIoUntaggedCommandOutstandingCount", device_queue_io_untagged_command_outstanding_count, 0x4540, 0x40, true, 0x40f8a24c44aeb9a)
#define _m161 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.DeviceQueueIoPausedForUntaggedCount", device_queue_io_paused_for_untagged_count, 0x4580, 0x40, true, 0x210ad3f96bf44a11)
#define _m162 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.DeviceQueueIoExceededThresholdCount", device_queue_io_exceeded_threshold_count, 0x45c0, 0x40, true, 0x1d75b24aa0a9bd50)
#define _m163 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.HighLatencyIoCount", high_latency_io_count, 0x4600, 0x20, true, 0xb49874f3f20f11cd)
#define _m164 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_telemetry_node_counters_t*), "_RAID_UNIT_EXTENSION.TelemetryCountersPerNumaNode", telemetry_counters_per_numa_node, 0x4700, 0x40, true, 0xb5b001754b3ba40)
#define _m165 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_telemetry_node_counters_t), "_RAID_UNIT_EXTENSION.TelemetryPerfPreviousNodeCounters", telemetry_perf_previous_node_counters, 0x4740, 0xc0, true, 0xbea58cdcd3154344)
#define _m166 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.TelemetryMaxFlushLatency", telemetry_max_flush_latency, 0x4800, 0x40, true, 0x4213174b147eb36e)
#define _m167 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.TelemetryMaxUnmapLatency", telemetry_max_unmap_latency, 0x4840, 0x40, true, 0x7802eaf378d0bcbb)
#define _m168 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.TelemetryBytesWritten", telemetry_bytes_written, 0x6380, 0x40, true, 0xdb78c7396a9a7620)
#define _m169 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.TelemetryStreamBytesWritten", telemetry_stream_bytes_written, 0x63c0, 0x40, true, 0x91d1bb2c98d58515)
#define _m170 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.ZoneSize", zone_size, 0x6600, 0x40, true, 0x7bb847f8b2431bc)
#define _m171 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_RAID_UNIT_EXTENSION.CachedSmartData", cached_smart_data, 0x6640, 0x40, true, 0xd80aec901d24bcb8)
#define _m172 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::storage_bus_type_t), "_RAID_UNIT_EXTENSION.BusType", bus_type, 0x6680, 0x20, true, 0xa82fcac69c3035fd)
#define _m173 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_RAID_UNIT_EXTENSION.ZonePendingIoTable", zone_pending_io_table, 0x66c0, 0x40, true, 0xb1de9edf4b24e178)
#define _m174 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_RAID_UNIT_EXTENSION.ZoneIoBitMap", zone_io_bit_map, 0x6700, 0x80, true, 0x8d2ab883c524694d)
#define _m175 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_RAID_UNIT_EXTENSION.LastLogicalBlockAddress", last_logical_block_address, 0x6780, 0x40, true, 0xb826b98929be62f2)
#define _m179 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u16_d_fx_queue_t), "_RAID_UNIT_EXTENSION.DFxQueue", d_fx_queue, 0x67c0, 0x0, true, 0x33d8131f4f647f33)
#define _m180 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(enum stor::port::storage_dump_event_t, void*)>*), "_RAID_UNIT_EXTENSION.CrashdumpNotifyRoutine", crashdump_notify_routine, 0x68c0, 0x40, true, 0x78c8da24e5d535c4)
#define _m181 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_telemetry_perf_bucket_t*), "_RAID_UNIT_EXTENSION.TelemetryPerfBuckets", telemetry_perf_buckets, 0x4640, 0x40, true, 0xed10cd6c9e6f29fc)
#define _m182 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_telemetry_perf_bucket_t*), "_RAID_UNIT_EXTENSION.TelemetryPerfPreviousCounters", telemetry_perf_previous_counters, 0x46c0, 0x40, true, 0x89f0369a0cd8904b)
#define _m183 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.OscData", osc_data, 0x0, 0x0, false, 0xe4edac94730d6570)
#define _m184 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_RAID_UNIT_EXTENSION.ResetCount", reset_count, 0x0, 0x0, false, 0x97a54a3570d96268)
#define _m185 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_RAID_UNIT_EXTENSION.TelemetryMaxReadWriteLatencyPerNumaNode", telemetry_max_read_write_latency_per_numa_node, 0x0, 0x0, false, 0xdadd71f04f5c2882)
#define _m186 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_telemetry_latency_bucket_t*), "_RAID_UNIT_EXTENSION.TelemetryLatencyBuckets", telemetry_latency_buckets, 0x0, 0x0, false, 0xeb85155d0bc4d513)
#define _m187 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_telemetry_io_size_bucket_t*), "_RAID_UNIT_EXTENSION.TelemetryIoSizeBuckets", telemetry_io_size_buckets, 0x0, 0x0, false, 0xd1f67f7fd197d4a0)
#define _m188 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_telemetry_latency_bucket_t*), "_RAID_UNIT_EXTENSION.TelemetryPreviousLatencyBuckets", telemetry_previous_latency_buckets, 0x0, 0x0, false, 0x6ab368d7daa718ba)
#define _m189 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_telemetry_io_size_bucket_t*), "_RAID_UNIT_EXTENSION.TelemetryPreviousIoSizeBuckets", telemetry_previous_io_size_buckets, 0x0, 0x0, false, 0x637bd630f8c77463)
#define _m190 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 3>), "_RAID_UNIT_EXTENSION.EventCount", event_count, 0x0, 0x0, false, 0x1bdaf2e55918348f)
#define _m191 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_RAID_UNIT_EXTENSION.ZnsPnpInterfaceName", zns_pnp_interface_name, 0x0, 0x0, false, 0x58f9005da7d7ba67)
#define _m192 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::nvme_identify_namespace_data_t*), "_RAID_UNIT_EXTENSION.IdentifyNamespaceData", identify_namespace_data, 0x0, 0x0, false, 0xda093bfcda06e83b)
#define _m193 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::nvme_identify_specific_namespace_io_command_set_t*), "_RAID_UNIT_EXTENSION.IdentifyNamespaceIoCommandSet", identify_namespace_io_command_set, 0x0, 0x0, false, 0x19edea0be6d4dfdd)
#define _m194 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.ActiveReferenceOnAdapter", active_reference_on_adapter, 0x0, 0x0, false, 0x7c2b12651abade4b)
#define _m47 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.InterlockedFlags.PoFxRegistrationPending", po_fx_registration_pending, 0x0, 0x1, true, 0xe3edbc9736af2cd5, 1, uint32_t)
#define _m48 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.InterlockedFlags.PowerCycleCountSavePending", power_cycle_count_save_pending, 0x1, 0x1, true, 0xf29d2bc14636d395, 1, uint32_t)
#define _m49 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.InterlockedFlags.AsUlong", as_ulong, 0x0, 0x20, true, 0xce1ee22e2c703694)
#define _m50 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_EXTENSION.InterlockedFlags.PendingTimerEnabled", pending_timer_enabled, 0x2, 0x1, true, 0x6cf26411c2edfdf8, 1, uint32_t)
#define _m74 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_deferred_element_t), "_RAID_UNIT_EXTENSION.DeferredList.PauseDevice", pause_device, 0x0, 0x80, true, 0x1cbc5e3647db36e1)
#define _m75 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_deferred_element_t), "_RAID_UNIT_EXTENSION.DeferredList.ResumeDevice", resume_device, 0x280, 0x80, true, 0x570ee624ee720710)
#define _m76 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_deferred_element_t), "_RAID_UNIT_EXTENSION.DeferredList.DeviceBusy", device_busy, 0x500, 0x80, true, 0xd2531fe75329f2a1)
#define _m77 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_deferred_element_t), "_RAID_UNIT_EXTENSION.DeferredList.DeviceReady", device_ready, 0x780, 0x80, true, 0x798e8f5d9f2ccf23)
#define _m78 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_deferred_element_t), "_RAID_UNIT_EXTENSION.DeferredList.AsyncNotification", async_notification, 0xa00, 0x80, true, 0x1ab93100882016ba)
#define _n02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_UNIT_EXTENSION.PendingPowerUpContext.FStateTransition", f_state_transition, 0x0, 0x8, true, 0x5ecf74d0aa14761e)
#define _n03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_UNIT_EXTENSION.PendingPowerUpContext.DStateTransition", d_state_transition, 0x8, 0x8, true, 0xc03f96a0f77684f6)
#define _n04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.PendingPowerUpContext.FState", f_state, 0x20, 0x20, true, 0x85410133b41304ab)
#define _n05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_RAID_UNIT_EXTENSION.PendingPowerUpContext.PowerIrp", power_irp, 0x40, 0x40, true, 0x6ab92896aacbbbf3)
#define _n76 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_RAID_UNIT_EXTENSION.DFxQueue.List", list, 0x0, 0x80, true, 0xfcb96153f5193846)
#define _n77 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_UNIT_EXTENSION.DFxQueue.Count", count, 0x80, 0x20, true, 0x87366ddd8b89d89f)
#define _n78 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_UNIT_EXTENSION.DFxQueue.Lock", lock, 0xc0, 0x40, true, 0xff6ab65f4df657f2)
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
#define _m051
#define _m052
#define _m053
#define _m054
#define _m055
#define _m056
#define _m057
#define _m058
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
#define _m079
#define _m080
#define _m081
#define _m082
#define _m083
#define _m084
#define _m085
#define _m086
#define _m087
#define _m088
#define _m089
#define _m090
#define _m091
#define _m092
#define _m093
#define _m094
#define _m095
#define _m096
#define _m097
#define _m098
#define _m099
#define _m100
#define _m101
#define _m106
#define _m107
#define _m108
#define _m109
#define _m110
#define _m111
#define _m112
#define _m113
#define _m114
#define _m115
#define _m116
#define _m117
#define _m118
#define _m119
#define _m120
#define _m121
#define _m122
#define _m123
#define _m124
#define _m125
#define _m126
#define _m127
#define _m128
#define _m129
#define _m130
#define _m131
#define _m132
#define _m133
#define _m134
#define _m135
#define _m136
#define _m137
#define _m138
#define _m139
#define _m140
#define _m141
#define _m142
#define _m143
#define _m144
#define _m145
#define _m146
#define _m147
#define _m148
#define _m149
#define _m150
#define _m151
#define _m152
#define _m153
#define _m154
#define _m155
#define _m156
#define _m157
#define _m158
#define _m159
#define _m160
#define _m161
#define _m162
#define _m163
#define _m164
#define _m165
#define _m166
#define _m167
#define _m168
#define _m169
#define _m170
#define _m171
#define _m172
#define _m173
#define _m174
#define _m175
#define _m179
#define _m180
#define _m181
#define _m182
#define _m183
#define _m184
#define _m185
#define _m186
#define _m187
#define _m188
#define _m189
#define _m190
#define _m191
#define _m192
#define _m193
#define _m194
#define _m47
#define _m48
#define _m49
#define _m50
#define _m74
#define _m75
#define _m76
#define _m77
#define _m78
#define _n02
#define _n03
#define _n04
#define _n05
#define _n76
#define _n77
#define _n78
#endif