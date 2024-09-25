#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::raid_object_type_t), "_RAID_ADAPTER_EXTENSION.ObjectType", object_type, 0x0, 0x20, true, 0x9ed9fb21e20214a4)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_RAID_ADAPTER_EXTENSION.DeviceObject", device_object, 0x40, 0x40, true, 0x15a2dc8674130eb)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_driver_extension_t*), "_RAID_ADAPTER_EXTENSION.Driver", driver, 0x80, 0x40, true, 0x36c885da5b49df33)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_RAID_ADAPTER_EXTENSION.LowerDeviceObject", lower_device_object, 0xc0, 0x40, true, 0x577ec25a26eb541f)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_RAID_ADAPTER_EXTENSION.PhysicalDeviceObject", physical_device_object, 0x100, 0x40, true, 0x2c413d69fe7b70a0)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_RAID_ADAPTER_EXTENSION.DeviceName", device_name, 0x140, 0x80, true, 0x5729357c7e59315)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.PortNumber", port_number, 0x1c0, 0x20, true, 0x47f617685f2ed2de)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_RAID_ADAPTER_EXTENSION.NextAdapter", next_adapter, 0x200, 0x80, true, 0xf94ef200ae621f83)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_EXTENSION.SlowLock", slow_lock, 0x280, 0x40, true, 0x7edeb2f62cc465b0)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::device_state_t), "_RAID_ADAPTER_EXTENSION.DeviceState", device_state, 0x2c0, 0x20, true, 0xf85d2da81d49910c)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.PagingPathCount", paging_path_count, 0x2e0, 0x20, true, 0x6ffd4e35d3e8a2ca)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.CrashDumpPathCount", crash_dump_path_count, 0x300, 0x20, true, 0x455d8e56bd932a97)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.HiberPathCount", hiber_path_count, 0x320, 0x20, true, 0xe39a9a5badb4a1ae)
#define _m013 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.InitializedMiniport", initialized_miniport, 0x0, 0x1, true, 0xa2f85730d794e3e1, 1, uint8_t)
#define _m014 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.WmiMiniPortInitialized", wmi_mini_port_initialized, 0x1, 0x1, true, 0x392d5edfe7ac6162, 1, uint8_t)
#define _m015 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.WmiInitialized", wmi_initialized, 0x2, 0x1, true, 0x9cde1d6c5aa74f85, 1, uint8_t)
#define _m016 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.BusInterfaceInternal", bus_interface_internal, 0x3, 0x1, true, 0x19b8429722d567c8, 1, uint8_t)
#define _m017 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.InHwInitialize", in_hw_initialize, 0x4, 0x1, true, 0x351084573350c2f2, 1, uint8_t)
#define _m018 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.IdlePowerManagementEnabled", idle_power_management_enabled, 0x5, 0x1, true, 0xca3fdf40d2afdeff, 1, uint8_t)
#define _m019 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.TargetedRescan", targeted_rescan, 0x6, 0x1, true, 0x231f88c78c86d292, 1, uint8_t)
#define _m020 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.BootAdapter", boot_adapter, 0x7, 0x1, true, 0xeff4924f215c60e7, 1, uint8_t)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_ADAPTER_EXTENSION.Flags.InvalidateBusRelations", invalidate_bus_relations, 0x8, 0x8, true, 0x1f94d95a3cde5abe)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_ADAPTER_EXTENSION.Flags.RescanBus", rescan_bus, 0x10, 0x8, true, 0x8983a38df1765576)
#define _m023 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_RAID_ADAPTER_EXTENSION.Flags.InterruptsEnabled", interrupts_enabled, 0x18, 0x8, true, 0x75518338daec2ce2, 0, uint8_t)
#define _m024 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.PoweringUp", powering_up, 0x20, 0x1, true, 0x6a8c76dd0795804c, 1, uint8_t)
#define _m025 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.PoweringDown", powering_down, 0x21, 0x1, true, 0x94a3a668c3f8fd42, 1, uint8_t)
#define _m026 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.D3ColdAllowed", d3_cold_allowed, 0x22, 0x1, true, 0x922763218cddb5b, 1, uint8_t)
#define _m027 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.D3ColdEnabled", d3_cold_enabled, 0x23, 0x1, true, 0xbdee25ff1f377db1, 1, uint8_t)
#define _m028 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.DisableRuntimePowerManagement", disable_runtime_power_management, 0x24, 0x1, true, 0x44f45d584ed96d6f, 1, uint8_t)
#define _m029 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.DumpActiveNotCapable", dump_active_not_capable, 0x25, 0x1, true, 0xe5cae5cc98e3eebe, 1, uint8_t)
#define _m030 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.D3IdleTimeoutUserOverride", d3_idle_timeout_user_override, 0x26, 0x1, true, 0xb5cf1dba96c1bbfe, 1, uint8_t)
#define _m031 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.SystemInLPE", system_in_lpe, 0x27, 0x1, true, 0x7ace0d40720407d0, 1, uint8_t)
#define _m032 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.SystemCoalescingOn", system_coalescing_on, 0x28, 0x1, true, 0x437591473fd0c616, 1, uint8_t)
#define _m033 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.UseDMAv3", use_dm_av3, 0x29, 0x1, true, 0x96ea8827ff8cf608, 1, uint8_t)
#define _m034 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.NoUnitPoFxRegistration", no_unit_po_fx_registration, 0x2a, 0x1, true, 0x239ad7cf94df226a, 1, uint8_t)
#define _m035 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.CoolingInterfaceExposed", cooling_interface_exposed, 0x2b, 0x1, true, 0x8a0f2e503fc5fd99, 1, uint8_t)
#define _m036 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.ProtocolCommandEffectsPendingUpdate", protocol_command_effects_pending_update, 0x2c, 0x1, true, 0xee3bc5c240514631, 1, uint8_t)
#define _m037 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.FindAdapterCalled", find_adapter_called, 0x2d, 0x1, true, 0x7ac347da3937eeeb, 1, uint8_t)
#define _m038 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.DumpAlwaysPowerOn", dump_always_power_on, 0x2e, 0x1, true, 0x482a564f9feace80, 1, uint8_t)
#define _m039 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.DisableInterruptsOnD3", disable_interrupts_on_d3, 0x2f, 0x1, true, 0x9850eab245e4ac5c, 1, uint8_t)
#define _m040 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.EtwEnabled", etw_enabled, 0x30, 0x1, true, 0xe5f2a1dcf1558aad, 1, uint8_t)
#define _m041 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.AdapterInterfaceTypeInitialized", adapter_interface_type_initialized, 0x31, 0x1, true, 0xa1e524c8f912e459, 1, uint8_t)
#define _m042 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.AdapterFailed", adapter_failed, 0x32, 0x1, true, 0xbd728fa01496300d, 1, uint8_t)
#define _m043 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.DsmLedSupportedFunctionCached", dsm_led_supported_function_cached, 0x33, 0x1, true, 0xad1e9e50ae6b0053, 1, uint8_t)
#define _m044 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.DsmLedSupportedStateCached", dsm_led_supported_state_cached, 0x34, 0x1, true, 0xcc6995f593233ab, 1, uint8_t)
#define _m045 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.DFxPowerDownActive", d_fx_power_down_active, 0x35, 0x1, true, 0x3ef24c3fe9da1261, 1, uint8_t)
#define _m046 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.AdapterFailureReportedToWHEA", adapter_failure_reported_to_whea, 0x36, 0x1, true, 0xde4491f3f2341218, 1, uint8_t)
#define _m047 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.DeviceLedStateCached", device_led_state_cached, 0x0, 0x0, false, 0x1aa6fdedf48000be, 1, uint8_t)
#define _m048 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.FirmwareShared", firmware_shared, 0x0, 0x0, false, 0x332b356c1b19e155, 1, uint8_t)
#define _m049 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.DisableRuntimePowerBypassPoFx", disable_runtime_power_bypass_po_fx, 0x0, 0x0, false, 0xc3daa3541fb4120c, 1, uint8_t)
#define _m050 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.OperationalEventsEnabled", operational_events_enabled, 0x0, 0x0, false, 0x1b11e3b43623eecc, 1, uint8_t)
#define _m051 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.HealthEventsEnabled", health_events_enabled, 0x0, 0x0, false, 0xb9bcf95a347eab46, 1, uint8_t)
#define _m052 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.DiagnosticEventsEnabled", diagnostic_events_enabled, 0x0, 0x0, false, 0x532fbb26c8c14b00, 1, uint8_t)
#define _m053 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.PoFxPlaceHolderModeEnabled", po_fx_place_holder_mode_enabled, 0x0, 0x0, false, 0x68d7378e3ed96e54, 1, uint8_t)
#define _m054 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.AdapterRestart", adapter_restart, 0x0, 0x0, false, 0x90f90f8415fc3b76, 1, uint8_t)
#define _m055 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.MFNDSupported", mfnd_supported, 0x0, 0x0, false, 0x3b4955708cccb222, 1, uint8_t)
#define _m056 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.MFNDOperationInfoCached", mfnd_operation_info_cached, 0x0, 0x0, false, 0x183f399420b10af6, 1, uint8_t)
#define _m057 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.Flags.PdcIdleResiliencyEngaged", pdc_idle_resiliency_engaged, 0x0, 0x0, false, 0x8b5a4f06ba959beb, 1, uint8_t)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_EXTENSION.Flags.AsUlonglong", as_ulonglong, 0x0, 0x0, false, 0x3a875e6e537e6849)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<u0_flags_t, u0_flags_t>), "_RAID_ADAPTER_EXTENSION.Flags", flags, 0x340, 0x38, true, 0x7303b9b5feed23a6)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::stor_locked_list_t), "_RAID_ADAPTER_EXTENSION.UnitList", unit_list, 0x380, 0x0, true, 0x5f52f7c0ca0a7885)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::stor_dictionary_t), "_RAID_ADAPTER_EXTENSION.UnitDictionary", unit_dictionary, 0x480, 0x80, true, 0x8f741b77ce1b1ae8)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::stor_locked_list_t), "_RAID_ADAPTER_EXTENSION.ZombieList", zombie_list, 0x600, 0x0, true, 0x5e8d3430480eb4c6)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_RAID_ADAPTER_EXTENSION.CompletedList", completed_list, 0x700, 0x80, true, 0x3567ab0ebce2c38c)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::slist_entry_t*), "_RAID_ADAPTER_EXTENSION.SavedXrbList", saved_xrb_list, 0x780, 0x40, true, 0x3c610c57f1bcae6e)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_RAID_ADAPTER_EXTENSION.AdapterDpcRoutineLock", adapter_dpc_routine_lock, 0x7c0, 0x20, true, 0x3d1c60ad4eb91165)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_RAID_ADAPTER_EXTENSION.AdapterResetBusLock", adapter_reset_bus_lock, 0x7e0, 0x20, true, 0x2fe5ccb428ec51df)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::rundown_ref_cache_aware_t*), "_RAID_ADAPTER_EXTENSION.RemoveLock", remove_lock, 0x840, 0x40, true, 0xc750e7ab971f1009)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_power_state_t), "_RAID_ADAPTER_EXTENSION.Power", power, 0x880, 0x80, true, 0x4e0efaaa4939be3a)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_resource_list_t), "_RAID_ADAPTER_EXTENSION.ResourceList", resource_list, 0x900, 0x80, true, 0xa9e0c792ca6569b1)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_miniport_t), "_RAID_ADAPTER_EXTENSION.Miniport", miniport, 0x980, 0x80, true, 0xfb07deb4aeb3cdbe)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_bus_interface_t), "_RAID_ADAPTER_EXTENSION.Bus", bus, 0x1300, 0x40, true, 0x4bf9a45bd242d505)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kinterrupt_t*), "_RAID_ADAPTER_EXTENSION.Interrupt", interrupt, 0x1540, 0x40, true, 0xd89071f5d34bd543)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.InterruptIrql", interrupt_irql, 0x1580, 0x20, true, 0xe32c6d658d3457a)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.InterruptVersion", interrupt_version, 0x15a0, 0x20, true, 0x78fe295acc98f44f)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_EXTENSION.StartIoLock", start_io_lock, 0x15c0, 0x40, true, 0x439b55af71662c8)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::stor_synchronization_model_t), "_RAID_ADAPTER_EXTENSION.IoModel", io_model, 0x1600, 0x20, true, 0x51b74cc447ff534a)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_dma_adapter_t), "_RAID_ADAPTER_EXTENSION.Dma", dma, 0x1640, 0x0, true, 0x4029d90116772012)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_memory_region_t), "_RAID_ADAPTER_EXTENSION.UncachedExtension", uncached_extension, 0x1740, 0xc0, true, 0xac7560342418d68f)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.BusNumber", bus_number, 0x1800, 0x20, true, 0x39fe6e59214cfc09)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.SlotNumber", slot_number, 0x1820, 0x20, true, 0xc5a10bda33b98145)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::mapped_address_t*), "_RAID_ADAPTER_EXTENSION.MappedAddressList", mapped_address_list, 0x1840, 0x40, true, 0xdda7dd7b094301ca)
#define _m082 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct stor::port::stor_io_gateway_t, struct stor::port::stor_io_gateway_t*>), "_RAID_ADAPTER_EXTENSION.Gateway", gateway, 0x1a00, 0x0, true, 0x5d27230e79b6dc82)
#define _m083 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_deferred_queue_t), "_RAID_ADAPTER_EXTENSION.DeferredQueue", deferred_queue, 0x2400, 0x0, true, 0x310bf9daf92b0cb9)
#define _m085 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_deferred_list_t), "_RAID_ADAPTER_EXTENSION.DeferredList", deferred_list, 0x2800, 0x80, true, 0xb031a488fdfa2136)
#define _m090 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_deferred_pause_resume_context_t), "_RAID_ADAPTER_EXTENSION.DeferredPauseResumeContext", deferred_pause_resume_context, 0x2a80, 0x80, true, 0xaa5e58fadaac653e)
#define _m091 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_deferred_queue_t), "_RAID_ADAPTER_EXTENSION.WmiDeferredQueue", wmi_deferred_queue, 0x3000, 0x0, true, 0xe8a9f2e74edcde14)
#define _m092 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_RAID_ADAPTER_EXTENSION.TimerDpc", timer_dpc, 0x3400, 0x0, true, 0xc3f1bded4204993f)
#define _m093 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_RAID_ADAPTER_EXTENSION.Timer", timer, 0x3600, 0x0, true, 0xe4539bcc73d87222)
#define _m094 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_RAID_ADAPTER_EXTENSION.PauseTimerDpc", pause_timer_dpc, 0x3800, 0x0, true, 0xad55888c77f07404)
#define _m095 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_RAID_ADAPTER_EXTENSION.RestartDpc", restart_dpc, 0x3a00, 0x0, true, 0xc29921d8af6e0f4e)
#define _m096 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_RAID_ADAPTER_EXTENSION.PauseTimer", pause_timer, 0x3c00, 0x0, true, 0xcb122a78e72e3d9c)
#define _m097 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_RAID_ADAPTER_EXTENSION.HwTimerRoutine", hw_timer_routine, 0x3e00, 0x40, true, 0x9e6e47a82a6009fe)
#define _m098 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_RAID_ADAPTER_EXTENSION.CompletionDpc", completion_dpc, 0x3e40, 0x0, true, 0x261e54109c7ed6c3)
#define _m099 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_RAID_ADAPTER_EXTENSION.BusChangeDpc", bus_change_dpc, 0x4040, 0x0, true, 0x6db94c1ccad2d1c9)
#define _m100 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_RAID_ADAPTER_EXTENSION.PnpInterfaceName", pnp_interface_name, 0x4240, 0x80, true, 0x37a4988d09c36400)
#define _m101 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.AdapterNumber", adapter_number, 0x42c0, 0x20, true, 0x3d9b11bb6e8afe4a)
#define _m102 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RAID_ADAPTER_EXTENSION.DriverParameters", driver_parameters, 0x4300, 0x40, true, 0xf927c5c67d411721)
#define _m103 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::port_registry_info_t), "_RAID_ADAPTER_EXTENSION.RegistryInfo", registry_info, 0x4340, 0x0, true, 0x4f3f163ebb9aec7c)
#define _m104 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.LinkDownTimeoutValue", link_down_timeout_value, 0x4540, 0x20, true, 0x5788a835eae2e4fd)
#define _m105 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.LinkUp", link_up, 0x4560, 0x20, true, 0xeca1b61f0ecc76bc)
#define _m106 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 255>), "_RAID_ADAPTER_EXTENSION.BusKeyArray", bus_key_array, 0x4580, 0xc0, true, 0x2c98c8f598a5ae48)
#define _m107 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_RAID_ADAPTER_EXTENSION.ProcessingDeferredItems", processing_deferred_items, 0x8540, 0x20, true, 0x506e5fb8db047258)
#define _m108 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.DefaultTimeout", default_timeout, 0x8560, 0x20, true, 0x22a81a35fa268c97)
#define _m109 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.AdditionalTimers", additional_timers, 0x8580, 0x20, true, 0xc2b099eab146674)
#define _m110 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_RAID_ADAPTER_EXTENSION.ResetHoldTimer", reset_hold_timer, 0x85c0, 0x0, true, 0xe0f81ddd0386d68f)
#define _m111 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_RAID_ADAPTER_EXTENSION.ResetHoldDpc", reset_hold_dpc, 0x87c0, 0x0, true, 0x6f9da236e330277c)
#define _m112 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_RAID_ADAPTER_EXTENSION.LastScanTime", last_scan_time, 0x89c0, 0x40, true, 0x6737fbdd4b904b09)
#define _m113 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_adapter_parameters_t), "_RAID_ADAPTER_EXTENSION.Parameters", parameters, 0x8a00, 0xc0, true, 0x9e45253021c4b381)
#define _m114 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "_RAID_ADAPTER_EXTENSION.HwPassiveInitRoutine", hw_passive_init_routine, 0x8bc0, 0x40, true, 0x3a5c11c5cd67b932)
#define _m115 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::interrupt_synchronization_mode_t), "_RAID_ADAPTER_EXTENSION.MsiMode", msi_mode, 0x8c00, 0x20, true, 0x2304b735921d6ad8)
#define _m116 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_EXTENSION.MSIInterruptLock", msi_interrupt_lock, 0x8c40, 0x40, true, 0x12cbc568d8dea250)
#define _m117 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::interrupt_message_info_t*), "_RAID_ADAPTER_EXTENSION.MSIMessageInfo", msi_message_info, 0x8c80, 0x40, true, 0xb4982646715d0a27)
#define _m118 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::group_affinity_t*), "_RAID_ADAPTER_EXTENSION.MSIMessageGroupAffinity", msi_message_group_affinity, 0x8cc0, 0x40, true, 0xb5df7527e01e3a27)
#define _m119 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_ADAPTER_EXTENSION.MSISupported", msi_supported, 0x8d00, 0x8, true, 0xa82e41c3e414932e)
#define _m120 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_ADAPTER_EXTENSION.MSIEnabled", msi_enabled, 0x8d08, 0x8, true, 0xe2a705c2b061364a)
#define _m121 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_ADAPTER_EXTENSION.Contiguous", contiguous, 0x8d10, 0x8, true, 0xe5f4d893c09399e4)
#define _m127 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_perf_opt_flags_t), "_RAID_ADAPTER_EXTENSION.PerfOptFlags", perf_opt_flags, 0x8d18, 0x8, true, 0x186672eb9dc7f5c9)
#define _m128 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_relations_t*), "_RAID_ADAPTER_EXTENSION.DeviceRelations", device_relations, 0x8d40, 0x40, true, 0x8f8b8dcf54935d8e)
#define _m129 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_power_context_t), "_RAID_ADAPTER_EXTENSION.PowerContext", power_context, 0x8d80, 0xc0, true, 0xf6055f8af848601a)
#define _m130 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::storport_extended_functions_t), "_RAID_ADAPTER_EXTENSION.ExtendedFunctions", extended_functions, 0x9340, 0xc0, true, 0xa0a485fd97b510d5)
#define _m131 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.DeviceNode", device_node, 0x9600, 0x20, true, 0x34f0a5909e3b6d2c)
#define _m132 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::raid_redirection_support_t), "_RAID_ADAPTER_EXTENSION.RedirectionSupport", redirection_support, 0x9620, 0x10, true, 0xb39909a6142fb8ca)
#define _m133 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RAID_ADAPTER_EXTENSION.InterruptRedirectionGroups", interrupt_redirection_groups, 0x9630, 0x10, true, 0xbb9411edd5aec774)
#define _m134 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_RAID_ADAPTER_EXTENSION.ConcurrentChannels", concurrent_channels, 0x9640, 0x20, true, 0xd6330aa651627cfd)
#define _m135 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_concurrent_channel_token_list_t*), "_RAID_ADAPTER_EXTENSION.ConcurrentChannelTokens", concurrent_channel_tokens, 0x9680, 0x40, true, 0xecdbe693c39982bc)
#define _m136 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_RAID_ADAPTER_EXTENSION.InterruptRedirectionTable", interrupt_redirection_table, 0x96c0, 0x40, true, 0x981dfbe687726d60)
#define _m137 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::common_header_t), "_RAID_ADAPTER_EXTENSION.PciConfiguration", pci_configuration, 0x9880, 0x0, true, 0x53201e8cce2be24e)
#define _m138 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::stor_power_setting_notification_t), "_RAID_ADAPTER_EXTENSION.PowerSettingNotification", power_setting_notification, 0x9a80, 0xc0, true, 0x3dfe2ee09dec7642)
#define _m139 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_RAID_ADAPTER_EXTENSION.StateChangeInProgress", state_change_in_progress, 0x9b40, 0x20, true, 0xe36eb4f328035b0b)
#define _m140 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.StateChangedEntity", state_changed_entity, 0x9b60, 0x20, true, 0x98d45fe0f6638bf7)
#define _m141 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.StateChangeEntityAttributes", state_change_entity_attributes, 0x9b80, 0x20, true, 0xef2fe9ee740ee0f8)
#define _m142 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::stor_address_t*), "_RAID_ADAPTER_EXTENSION.StateChangeAddress", state_change_address, 0x9bc0, 0x40, true, 0xbd8809bc3a1e2f28)
#define _m143 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, int16_t, void*, uint32_t)>*), "_RAID_ADAPTER_EXTENSION.HwStateChange", hw_state_change, 0x9c00, 0x40, true, 0xa9550d6d3952e372)
#define _m144 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RAID_ADAPTER_EXTENSION.StateChangeContext", state_change_context, 0x9c40, 0x40, true, 0x21b05fef988b46ba)
#define _m145 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_RAID_ADAPTER_EXTENSION.BusesWithVmLunsBitmap", buses_with_vm_luns_bitmap, 0x9c80, 0x80, true, 0x996dd8476478936b)
#define _m146 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_RAID_ADAPTER_EXTENSION.BusesWithVmLunsBitmapBuffer", buses_with_vm_luns_bitmap_buffer, 0x9d00, 0x40, true, 0x7c8b3ed194e73ea4)
#define _m147 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.NumWorkItems", num_work_items, 0x9d40, 0x20, true, 0x3cfc5bd1d8fb1319)
#define _m148 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_ADAPTER_EXTENSION.DefaultSenseByteCount", default_sense_byte_count, 0x9d60, 0x8, true, 0x8f6ed150a41a2883)
#define _m149 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_ADAPTER_EXTENSION.DumpPowerReady", dump_power_ready, 0x9d68, 0x8, true, 0xd6f679d68a768c94)
#define _m150 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_ADAPTER_EXTENSION.MaxDumpLevelEnabled", max_dump_level_enabled, 0x9d70, 0x8, true, 0x8b5ee7fa8ca7ff48)
#define _m151 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_ADAPTER_EXTENSION.VendorSpecificLogPageAddress", vendor_specific_log_page_address, 0x9d78, 0x8, true, 0x7658c85c0cb7e0a9)
#define _m152 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.MaxDeviceDumpSize", max_device_dump_size, 0x9d80, 0x20, true, 0x3d7a11aa2500a904)
#define _m153 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_EXTENSION.IoLatencyCap", io_latency_cap, 0x9dc0, 0x40, true, 0x94534f26da77f6cd)
#define _m154 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.RaidLogListIndex", raid_log_list_index, 0x9e00, 0x20, true, 0xee17e5af7845f89b)
#define _m155 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.RaidLogListSize", raid_log_list_size, 0x9e20, 0x20, true, 0x4be38f7d3103c6fb)
#define _m156 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_log_entry_t*), "_RAID_ADAPTER_EXTENSION.RaidLogList", raid_log_list, 0x9e40, 0x40, true, 0x3331d412e98b399d)
#define _m157 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_RAID_ADAPTER_EXTENSION.UnitsPendingPowerUpList", units_pending_power_up_list, 0x9e80, 0x80, true, 0x15caa1e4519e8f0f)
#define _m158 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_adapter_pofx_t*), "_RAID_ADAPTER_EXTENSION.PoFx", po_fx, 0x9f00, 0x40, true, 0xb8866e02113404a9)
#define _m159 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RAID_ADAPTER_EXTENSION.LowPowerEpochHandle", low_power_epoch_handle, 0x9f40, 0x40, true, 0x1ca3de1e72337cd7)
#define _m160 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.D3IdleTimeout", d3_idle_timeout, 0x9f80, 0x20, true, 0xc88cd480a4a76c8d)
#define _m161 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RAID_ADAPTER_EXTENSION.CoalescingRegistration", coalescing_registration, 0x9fc0, 0x40, true, 0xec5f9e61336a4b1f)
#define _m162 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RAID_ADAPTER_EXTENSION.MaxPowerHandle", max_power_handle, 0xa000, 0x40, true, 0x2273d9c738848aa6)
#define _m163 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_RAID_ADAPTER_EXTENSION.CoolingInterfaceSymlink", cooling_interface_symlink, 0xa040, 0x80, true, 0x6d4a0419c1a73cc7)
#define _m164 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_unit_extension_t*), "_RAID_ADAPTER_EXTENSION.CrashDumpUnit", crash_dump_unit, 0xa0c0, 0x40, true, 0x897fdf1e4d251b0e)
#define _m165 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::crashdump_functions_interface_t), "_RAID_ADAPTER_EXTENSION.ParentCrashdumpInterface", parent_crashdump_interface, 0xa100, 0x40, true, 0x6516443dc87f680b)
#define _m166 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_RAID_ADAPTER_EXTENSION.AdapterGuid", adapter_guid, 0xa240, 0x80, true, 0x9e4ae36d58807da2)
#define _m167 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.CompletionsDuringReset", completions_during_reset, 0xa300, 0x20, true, 0x297b77616d1aee81)
#define _m171 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<u16_telemetry_hierarchical_reset_lun_bucket_t, 5>), "_RAID_ADAPTER_EXTENSION.TelemetryHierarchicalResetLunBucket", telemetry_hierarchical_reset_lun_bucket, 0xa320, 0xe0, true, 0x950ac9d33431b21b)
#define _m175 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<u16_telemetry_hierarchical_reset_lun_bucket_t, 5>), "_RAID_ADAPTER_EXTENSION.TelemetryHierarchicalResetTargetBucket", telemetry_hierarchical_reset_target_bucket, 0xa500, 0xe0, true, 0xda47a1093dbadc98)
#define _m176 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_EXTENSION.LastCSStateChange", last_cs_state_change, 0xa700, 0x40, true, 0xaf5951894a50721c)
#define _m177 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_EXTENSION.LastIOCoalescingOnStartTime", last_io_coalescing_on_start_time, 0xa740, 0x40, true, 0x18aea7ac075958c3)
#define _m178 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_EXTENSION.IOCoalescingOnDuration", io_coalescing_on_duration, 0xa780, 0x40, true, 0xd98aa1667fb28b01)
#define _m179 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_EXTENSION.FirstDPNRTimeAfterCS", first_dpnr_time_after_cs, 0xa7c0, 0x40, true, 0x2e13e7a5487137c9)
#define _m180 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_EXTENSION.LastDPNRStartTime", last_dpnr_start_time, 0xa800, 0x40, true, 0x33f779d8d7052cd8)
#define _m181 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_EXTENSION.DPNRDurationInCS", dpnr_duration_in_cs, 0xa840, 0x40, true, 0xa4d10a24a791f975)
#define _m182 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_EXTENSION.LastF1StartTime", last_f1_start_time, 0xa880, 0x40, true, 0x496f9af54250e4a8)
#define _m183 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_EXTENSION.F1DurationInCS", f1_duration_in_cs, 0xa8c0, 0x40, true, 0x7656ced1065184a6)
#define _m184 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_EXTENSION.ActiveReferencesInCS", active_references_in_cs, 0xa900, 0x40, true, 0xac820e8b3cc7c180)
#define _m185 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_EXTENSION.ActiveReferencesInCoalescing", active_references_in_coalescing, 0xa940, 0x40, true, 0x4a8d2473902f8c4)
#define _m186 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.UnitTimeoutsInCS", unit_timeouts_in_cs, 0xa980, 0x20, true, 0x567922f17559b355)
#define _m187 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.F0TransitionsSinceCSStateChange", f0_transitions_since_cs_state_change, 0xa9a0, 0x20, true, 0x56643b96e0d1af0e)
#define _m188 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.D0TransitionsSinceCSStateChange", d0_transitions_since_cs_state_change, 0xa9c0, 0x20, true, 0x10aff46ff3b71edd)
#define _m189 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.F0TransitionsLongSinceCSStateChange", f0_transitions_long_since_cs_state_change, 0xa9e0, 0x20, true, 0x8f468f00f10dffd0)
#define _m190 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.D0TransitionsLongSinceCSStateChange", d0_transitions_long_since_cs_state_change, 0xaa00, 0x20, true, 0xe93bc69293ab8e3f)
#define _m191 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_ADAPTER_EXTENSION.TopologyInfoLogged", topology_info_logged, 0xab00, 0x8, true, 0xad6a90251e0b1640)
#define _m192 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.PeriodicMaxGatewayQueueDepthAtSwTimeout", periodic_max_gateway_queue_depth_at_sw_timeout, 0xab20, 0x20, true, 0x3757e85a8f662d53)
#define _m193 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.PauseCount", pause_count, 0xab40, 0x20, true, 0x55cef4bf28f161a1)
#define _m194 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.BusyCount", busy_count, 0xab60, 0x20, true, 0xa7c33c6209115e8c)
#define _m195 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_ADAPTER_EXTENSION.DisableTelemetryDeviceHealth", disable_telemetry_device_health, 0xab80, 0x8, true, 0x37ff2e279d7b2bde)
#define _m196 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.MiniportFirmwareDataStructureVersion", miniport_firmware_data_structure_version, 0xaba0, 0x20, true, 0x9e677fb7cecd39d0)
#define _m197 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::d3cold_support_interface_t*), "_RAID_ADAPTER_EXTENSION.D3ColdInterface", d3_cold_interface, 0xabc0, 0x40, true, 0x728cfccb63a27c5c)
#define _m198 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RAID_ADAPTER_EXTENSION.ProtocolCommandEffects", protocol_command_effects, 0xac40, 0x40, true, 0x6ee285ae320c1692)
#define _m199 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_RAID_ADAPTER_EXTENSION.QueueWaitCheckTimer", queue_wait_check_timer, 0xac80, 0x0, true, 0xff320211aebbec85)
#define _m200 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_RAID_ADAPTER_EXTENSION.QueueWaitCheckDpc", queue_wait_check_dpc, 0xae80, 0x0, true, 0xfbcc4a80e935c265)
#define _m201 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_EXTENSION.QosLock", qos_lock, 0xb080, 0x40, true, 0xe19273c549dcc950)
#define _m202 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.QosUnitCountForWaitTimeout", qos_unit_count_for_wait_timeout, 0xb0c0, 0x20, true, 0xb0a27ce4ba2805c4)
#define _m203 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_rpmb_capabilities_t), "_RAID_ADAPTER_EXTENSION.Rpmb", rpmb, 0xb100, 0xc0, true, 0xca5b2cd9320ae4a5)
#define _m204 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.PowerSrbTimeout", power_srb_timeout, 0xb300, 0x20, true, 0xc7b8e59c05a940a)
#define _m205 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_RAID_ADAPTER_EXTENSION.AdapterDeviceResetLock", adapter_device_reset_lock, 0x800, 0x20, true, 0x67cb09dfcebc50a0)
#define _m206 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.HierarchicalResetSucceededAtBus", hierarchical_reset_succeeded_at_bus, 0x9700, 0x20, true, 0xf3b421a37fdf3f4a)
#define _m207 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.HierarchicalResetSucceededAtTarget", hierarchical_reset_succeeded_at_target, 0x9720, 0x20, true, 0x290828ada506f56b)
#define _m208 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.HierarchicalResetSucceededAtLun", hierarchical_reset_succeeded_at_lun, 0x9740, 0x20, true, 0x7fbcac36dc5b8970)
#define _m209 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.HierarchicalResetCountInternal", hierarchical_reset_count_internal, 0x9760, 0x20, true, 0x83ffe2ea8ba42590)
#define _m210 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.HierarchicalResetCountApp", hierarchical_reset_count_app, 0x9780, 0x20, true, 0xdf09a281455feb1b)
#define _m211 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.MaxDpcCompletionCount", max_dpc_completion_count, 0x97a0, 0x20, true, 0x9b3775d48ab9cbc)
#define _m212 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.MaxDpcCompletionTimeTicks", max_dpc_completion_time_ticks, 0x97c0, 0x20, true, 0xe79c192faa43d984)
#define _m213 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.CompletionsForLongestDpc", completions_for_longest_dpc, 0x97e0, 0x20, true, 0x6d4790ac6edd228)
#define _m214 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_RAID_ADAPTER_EXTENSION.MiniportName", miniport_name, 0x9800, 0x40, true, 0x4ebc6b8ffcba438b)
#define _m215 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_RAID_ADAPTER_EXTENSION.AdapterId", adapter_id, 0x9840, 0x40, true, 0x90d4d8cd49528dd2)
#define _m216 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_RAID_ADAPTER_EXTENSION.AdapterSerialNumber", adapter_serial_number, 0xa2c0, 0x40, true, 0xf60f560fc9dd2b1d)
#define _m217 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_EXTENSION.FirstDFxPowerDownTimeAfterCS", first_d_fx_power_down_time_after_cs, 0xaa40, 0x40, true, 0x815946dc921810a5)
#define _m218 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_EXTENSION.LastDFxPowerDownStartTime", last_d_fx_power_down_start_time, 0xaa80, 0x40, true, 0xf6d01944d7bb6dae)
#define _m219 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_EXTENSION.DFxPowerDownDurationInCS", d_fx_power_down_duration_in_cs, 0xaac0, 0x40, true, 0x9423522a17a549f1)
#define _m220 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::device_reset_interface_standard_t*), "_RAID_ADAPTER_EXTENSION.ResetInterface", reset_interface, 0xac00, 0x40, true, 0x7f0675d733bd883e)
#define _m221 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::stor_hmb_range_t*), "_RAID_ADAPTER_EXTENSION.HmbRangeList", hmb_range_list, 0xb2c0, 0x40, true, 0x581d1ba0a73732ae)
#define _m222 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::stor_crypto_capabilities_data_t*), "_RAID_ADAPTER_EXTENSION.CryptoCapabilities", crypto_capabilities, 0xb340, 0x40, true, 0x11509e7fea4ddbe)
#define _m223 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_crypto_key_table_t), "_RAID_ADAPTER_EXTENSION.CryptoKeyTable", crypto_key_table, 0xb380, 0xc0, true, 0xf1504c6451ff4e21)
#define _m224 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.ZoneDeviceWriteErrors", zone_device_write_errors, 0xb440, 0x20, true, 0x63426ea624deaf20)
#define _m225 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.ZoneDeviceErrors", zone_device_errors, 0xb460, 0x20, true, 0x9337e7b0356732cb)
#define _m226 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.ZoneWriteOverflowEntries", zone_write_overflow_entries, 0xb480, 0x20, true, 0x1e9388da6e5f4dc)
#define _m227 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.BusyRetryCount", busy_retry_count, 0xb4a0, 0x20, true, 0x5ca0bb57e3ba0215)
#define _m228 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.BusyPauseTimeInMs", busy_pause_time_in_ms, 0xb4c0, 0x20, true, 0x9e9c75d23e07f770)
#define _m229 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_shared_work_item_context_t), "_RAID_ADAPTER_EXTENSION.PowerWorkItem", power_work_item, 0xb500, 0xc0, true, 0xfc937e13f9bb68a9)
#define _m230 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::npem_control_interface_t*), "_RAID_ADAPTER_EXTENSION.NpemControlInterface", npem_control_interface, 0xb5c0, 0x40, true, 0x5a2b45643df41242)
#define _m231 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.DsmLedSupportedFunction", dsm_led_supported_function, 0xb6c0, 0x20, true, 0x68c0267be9f9fb)
#define _m232 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::dsm_pci_ssd_led_state_t), "_RAID_ADAPTER_EXTENSION.DsmLedSupportedStates", dsm_led_supported_states, 0xb6e0, 0x20, true, 0x9b57158e07b3b1f4)
#define _m233 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_RAID_ADAPTER_EXTENSION.NonPoFxMiniportInterfaceName", non_po_fx_miniport_interface_name, 0xb700, 0x80, true, 0xcedbc364bb0be19b)
#define _m237 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u20_d_fx_queue_t), "_RAID_ADAPTER_EXTENSION.DFxQueue", d_fx_queue, 0xb780, 0x0, true, 0x5dfea20d8e9b792)
#define _m238 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_shared_work_item_context_t), "_RAID_ADAPTER_EXTENSION.IoResourceWorkItem", io_resource_work_item, 0xb600, 0xc0, true, 0x42e474d6f6defb2d)
#define _m239 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.Device", device, 0x0, 0x0, false, 0xef261bf9d33ef48)
#define _m240 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.Function", function, 0x0, 0x0, false, 0xa0ebe3ddd372196c)
#define _m241 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.InUseGatewayCount", in_use_gateway_count, 0x0, 0x0, false, 0x5690dd2539df8051)
#define _m242 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.AllocatedGatewayCount", allocated_gateway_count, 0x0, 0x0, false, 0xab4d799ba111379b)
#define _m243 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.ProcessorCountPerGateway", processor_count_per_gateway, 0x0, 0x0, false, 0xe859e014372233b9)
#define _m244 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.IoResourceReclaimTolerancePeriodLimit", io_resource_reclaim_tolerance_period_limit, 0x0, 0x0, false, 0xcd9fcd87cdd81b41)
#define _m245 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.LowWaterMarkForAdapter", low_water_mark_for_adapter, 0x0, 0x0, false, 0xa76387d2e61beb10)
#define _m246 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.AdapterPauseCount", adapter_pause_count, 0x0, 0x0, false, 0xfa23eaa2813f1f85)
#define _m247 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.AdapterBusyCount", adapter_busy_count, 0x0, 0x0, false, 0x9cd73bf7a8f53cbd)
#define _m248 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.AdapterSlowPathCount", adapter_slow_path_count, 0x0, 0x0, false, 0x3f13eb227bf0dc88)
#define _m249 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::storage_indicator_state_t), "_RAID_ADAPTER_EXTENSION.LedState", led_state, 0x0, 0x0, false, 0x5b3e8e438985897c)
#define _m250 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.PciDeviceType", pci_device_type, 0x0, 0x0, false, 0xe446a83a11f0eb62)
#define _m251 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_RAID_ADAPTER_EXTENSION.DeferredUpdateAssociatedUnitsIdentityItems", deferred_update_associated_units_identity_items, 0x0, 0x0, false, 0xbc8e0b6163b574a8)
#define _m252 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_RAID_ADAPTER_EXTENSION.IoResourceReclaimTimer", io_resource_reclaim_timer, 0x0, 0x0, false, 0x7c18437d5e83843e)
#define _m253 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_RAID_ADAPTER_EXTENSION.IoResourceReclaimTimerDpc", io_resource_reclaim_timer_dpc, 0x0, 0x0, false, 0x8888bbf9cd3b8733)
#define _m254 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::msix_table_config_interface_t), "_RAID_ADAPTER_EXTENSION.MSIXTableConfigInterface", msix_table_config_interface, 0x0, 0x0, false, 0xe1c2b4de9dec2e66)
#define _m255 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 3>), "_RAID_ADAPTER_EXTENSION.EventCount", event_count, 0x0, 0x0, false, 0x1fafb0c251fa5e65)
#define _m256 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::nvme_identify_controller_data_t*), "_RAID_ADAPTER_EXTENSION.IdentifyControllerData", identify_controller_data, 0x0, 0x0, false, 0xdb3a5c7b5d92a736)
#define _m257 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_miniport_system_thread_context_t), "_RAID_ADAPTER_EXTENSION.MiniportSystemThreadContext", miniport_system_thread_context, 0x0, 0x0, false, 0x4f6086b9178def98)
#define _m258 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.PoFxPlaceHolderD3IdleTimeout", po_fx_place_holder_d3_idle_timeout, 0x0, 0x0, false, 0x49649fa4ac4ce0e3)
#define _m259 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_RAID_ADAPTER_EXTENSION.MFNDInterfaceName", mfnd_interface_name, 0x0, 0x0, false, 0x6b7713dd01a9b67e)
#define _m260 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::mfnd_operation_privilege_t), "_RAID_ADAPTER_EXTENSION.MFNDOperationPrivilege", mfnd_operation_privilege, 0x0, 0x0, false, 0xdc41a2445302b3)
#define _m261 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::mfnd_operation_mode_t), "_RAID_ADAPTER_EXTENSION.MFNDOperationMode", mfnd_operation_mode, 0x0, 0x0, false, 0xa23acef594dcb5a2)
#define _m262 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::identify_mfnd_capability_information_t*), "_RAID_ADAPTER_EXTENSION.MFNDCapabilities", mfnd_capabilities, 0x0, 0x0, false, 0x4a4b50517c02d123)
#define _m263 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.PoweredDownUnitCount", powered_down_unit_count, 0x0, 0x0, false, 0x3c352487eec8130)
#define _m264 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RAID_ADAPTER_EXTENSION.PdcIdleResiliencyEngagedHandle", pdc_idle_resiliency_engaged_handle, 0x0, 0x0, false, 0x91e0c88b03e7a7e8)
#define _m265 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.SqmHierarchicalResetSucceededAtBus", sqm_hierarchical_reset_succeeded_at_bus, 0x0, 0x0, false, 0x886934b472c1f0ad)
#define _m266 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.SqmHierarchicalResetSucceededAtTarget", sqm_hierarchical_reset_succeeded_at_target, 0x0, 0x0, false, 0x980abef2b38a775a)
#define _m267 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.SqmHierarchicalResetSucceededAtLun", sqm_hierarchical_reset_succeeded_at_lun, 0x0, 0x0, false, 0x8c075d470ae88526)
#define _m268 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.SqmHierarchicalResetCountInternal", sqm_hierarchical_reset_count_internal, 0x0, 0x0, false, 0xa088781ddbd6a1e5)
#define _m269 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.SqmHierarchicalResetCountApp", sqm_hierarchical_reset_count_app, 0x0, 0x0, false, 0x5c1cd11032dac6db)
#define _m270 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.SqmMaxDpcCompletionCount", sqm_max_dpc_completion_count, 0x0, 0x0, false, 0x611ea691879869f0)
#define _m271 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.SqmMaxDpcCompletionTimeTicks", sqm_max_dpc_completion_time_ticks, 0x0, 0x0, false, 0x70eade36947be96a)
#define _m272 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.SqmCompletionsForLongestDpc", sqm_completions_for_longest_dpc, 0x0, 0x0, false, 0xc0a612be13415d21)
#define _m273 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_RAID_ADAPTER_EXTENSION.SqmMiniportName", sqm_miniport_name, 0x0, 0x0, false, 0x4b3b44acf1ff8d69)
#define _m274 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_RAID_ADAPTER_EXTENSION.SqmAdapterId", sqm_adapter_id, 0x0, 0x0, false, 0xfea5b9583c00f267)
#define _m275 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.SqmRandomId", sqm_random_id, 0x0, 0x0, false, 0xe723e19c2c7167f5)
#define _m276 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.SqmSaveTotalResourceAllocFailuresLogged", sqm_save_total_resource_alloc_failures_logged, 0x0, 0x0, false, 0x49a077e66a8d8235)
#define _m277 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.SqmSaveHighestOutstandingMaxLogged", sqm_save_highest_outstanding_max_logged, 0x0, 0x0, false, 0xf43aac6c7b36f783)
#define _m278 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_RAID_ADAPTER_EXTENSION.HmbMdlList", hmb_mdl_list, 0x0, 0x0, false, 0x439d401a1613bac3)
#define _m84 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_deferred_element_t), "_RAID_ADAPTER_EXTENSION.DeferredList.Timer", timer, 0x0, 0x80, true, 0x3307c9109c46330a)
#define _m86 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_deferred_element_t), "_RAID_ADAPTER_EXTENSION.DeferredPauseResumeContext.AdapterGatewayPause", adapter_gateway_pause, 0x0, 0x80, true, 0xfbf32594bbb3123e)
#define _m87 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_deferred_element_t), "_RAID_ADAPTER_EXTENSION.DeferredPauseResumeContext.AdapterGatewayResume", adapter_gateway_resume, 0x280, 0x80, true, 0xaaa6f3164bba9b6)
#define _m88 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.DeferredPauseResumeContext.LatestAdapterGatewayPauseTimeoutValue", latest_adapter_gateway_pause_timeout_value, 0x500, 0x20, true, 0xccb86640ad8d91c8)
#define _m89 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_RAID_ADAPTER_EXTENSION.DeferredPauseResumeContext.EndResultPauseDesired", end_result_pause_desired, 0x520, 0x20, true, 0xc0de77760eb3453c)
#define _n22 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.PerfOptFlags.OptimizeForCompletionDuringStartIo", optimize_for_completion_during_start_io, 0x0, 0x1, true, 0xd6b6fcda1e7db4ef, 1, uint8_t)
#define _n23 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.PerfOptFlags.DpcUseCurrentCpu", dpc_use_current_cpu, 0x1, 0x1, true, 0x6a634a68230d3d3e, 1, uint8_t)
#define _n24 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_RAID_ADAPTER_EXTENSION.PerfOptFlags.UnusedFlags", unused_flags, 0x3, 0x5, true, 0xbf69836bc4a5174, 0, uint8_t)
#define _n25 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.PerfOptFlags.BypassSgl", bypass_sgl, 0x2, 0x1, true, 0xb505f84e0e70c2d9, 1, uint8_t)
#define _n26 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_EXTENSION.PerfOptFlags.SoftNumaOptIn", soft_numa_opt_in, 0x0, 0x0, false, 0x839740205055ceb1, 1, uint8_t)
#define _n68 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.TelemetryHierarchicalResetLunBucket.Count", count, 0x0, 0x20, true, 0xa500be2942a06054)
#define _n69 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.TelemetryHierarchicalResetLunBucket.Successes", successes, 0x20, 0x20, true, 0xbd5c088f173197e2)
#define _n70 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_ADAPTER_EXTENSION.TelemetryHierarchicalResetLunBucket.LastErrorSrbStatus", last_error_srb_status, 0x40, 0x8, true, 0x6d3d1df676ba7031)
#define _n72 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.TelemetryHierarchicalResetTargetBucket.Count", count, 0x0, 0x20, true, 0x909914fcee368b8a)
#define _n73 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.TelemetryHierarchicalResetTargetBucket.Successes", successes, 0x20, 0x20, true, 0xc42410a63e000682)
#define _n74 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_ADAPTER_EXTENSION.TelemetryHierarchicalResetTargetBucket.LastErrorSrbStatus", last_error_srb_status, 0x40, 0x8, true, 0x42d67a55e4ecb1e3)
#define _o34 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_RAID_ADAPTER_EXTENSION.DFxQueue.List", list, 0x0, 0x80, true, 0x3d4d8bdc1f8a4589)
#define _o35 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_EXTENSION.DFxQueue.Count", count, 0x80, 0x20, true, 0xfc382ff53f26220d)
#define _o36 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_EXTENSION.DFxQueue.Lock", lock, 0xc0, 0x40, true, 0x1050b9202909a8ce)
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
#define _m047
#define _m048
#define _m049
#define _m050
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
#define _m074
#define _m075
#define _m076
#define _m077
#define _m078
#define _m079
#define _m080
#define _m081
#define _m082
#define _m083
#define _m085
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
#define _m102
#define _m103
#define _m104
#define _m105
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
#define _m171
#define _m175
#define _m176
#define _m177
#define _m178
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
#define _m195
#define _m196
#define _m197
#define _m198
#define _m199
#define _m200
#define _m201
#define _m202
#define _m203
#define _m204
#define _m205
#define _m206
#define _m207
#define _m208
#define _m209
#define _m210
#define _m211
#define _m212
#define _m213
#define _m214
#define _m215
#define _m216
#define _m217
#define _m218
#define _m219
#define _m220
#define _m221
#define _m222
#define _m223
#define _m224
#define _m225
#define _m226
#define _m227
#define _m228
#define _m229
#define _m230
#define _m231
#define _m232
#define _m233
#define _m237
#define _m238
#define _m239
#define _m240
#define _m241
#define _m242
#define _m243
#define _m244
#define _m245
#define _m246
#define _m247
#define _m248
#define _m249
#define _m250
#define _m251
#define _m252
#define _m253
#define _m254
#define _m255
#define _m256
#define _m257
#define _m258
#define _m259
#define _m260
#define _m261
#define _m262
#define _m263
#define _m264
#define _m265
#define _m266
#define _m267
#define _m268
#define _m269
#define _m270
#define _m271
#define _m272
#define _m273
#define _m274
#define _m275
#define _m276
#define _m277
#define _m278
#define _m84
#define _m86
#define _m87
#define _m88
#define _m89
#define _n22
#define _n23
#define _n24
#define _n25
#define _n26
#define _n68
#define _n69
#define _n70
#define _n72
#define _n73
#define _n74
#define _o34
#define _o35
#define _o36
#endif