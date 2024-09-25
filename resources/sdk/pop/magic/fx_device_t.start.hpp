#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_POP_FX_DEVICE.Link", link, 0x0, 0x80, true, 0xb764ffb2d04522f9)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_POP_FX_DEVICE.Irp", irp, 0x80, 0x40, true, 0x307390dbd35ca7fd)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::irp_data_t*), "_POP_FX_DEVICE.IrpData", irp_data, 0xc0, 0x40, true, 0x48545ba29381df68)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile union pop::fx_device_status_t), "_POP_FX_DEVICE.Status", status, 0x100, 0x20, true, 0x4044c1bd8c43e2e4)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_POP_FX_DEVICE.PowerReqCall", power_req_call, 0x120, 0x20, true, 0xee55b9c0a9b28601)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_POP_FX_DEVICE.PowerNotReqCall", power_not_req_call, 0x140, 0x20, true, 0x8a7e8bb6de1321aa)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_node_t*), "_POP_FX_DEVICE.DevNode", dev_node, 0x180, 0x40, true, 0x5e26258672a61fd3)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::pephandle_t*), "_POP_FX_DEVICE.DpmContext", dpm_context, 0x1c0, 0x40, true, 0x89dbfa2623e4ec80)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_plugin_t*), "_POP_FX_DEVICE.Plugin", plugin, 0x200, 0x40, true, 0x4aae8b8b515adb5b)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::pephandle_t*), "_POP_FX_DEVICE.PluginHandle", plugin_handle, 0x240, 0x40, true, 0x9e5ef4a7f94a141a)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_plugin_t*), "_POP_FX_DEVICE.AcpiPlugin", acpi_plugin, 0x280, 0x40, true, 0xa9b487460493643e)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::pephandle_t*), "_POP_FX_DEVICE.AcpiPluginHandle", acpi_plugin_handle, 0x2c0, 0x40, true, 0x2b0d9cf08468476a)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_POP_FX_DEVICE.DeviceObject", device_object, 0x300, 0x40, true, 0xca337dd603009ec7)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_POP_FX_DEVICE.TargetDevice", target_device, 0x340, 0x40, true, 0x155e437af7c64c7b)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_driver_callbacks_t), "_POP_FX_DEVICE.Callbacks", callbacks, 0x380, 0x80, true, 0x757ec7e9440964fd)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_POP_FX_DEVICE.DriverContext", driver_context, 0x600, 0x40, true, 0xe7ba0ef89525c182)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_POP_FX_DEVICE.AcpiLink", acpi_link, 0x640, 0x80, true, 0x5018a5cedb33b2c5)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_POP_FX_DEVICE.DeviceId", device_id, 0x6c0, 0x80, true, 0xd337897511eb3b57)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::remove_lock_t), "_POP_FX_DEVICE.RemoveLock", remove_lock, 0x740, 0x0, true, 0x445582fe67aeb7a)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::remove_lock_t), "_POP_FX_DEVICE.AcpiRemoveLock", acpi_remove_lock, 0x840, 0x0, true, 0x2e1a4f0a3751254e)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_work_order_t), "_POP_FX_DEVICE.WorkOrder", work_order, 0x940, 0xc0, true, 0x4e20121642f515d7)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_FX_DEVICE.IdleLock", idle_lock, 0xb00, 0x40, true, 0x4b86925e28150b77)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_POP_FX_DEVICE.IdleTimer", idle_timer, 0xb40, 0x0, true, 0x29ab657a38f074)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_POP_FX_DEVICE.IdleDpc", idle_dpc, 0xd40, 0x0, true, 0x8b5dab0617b88e0a)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_FX_DEVICE.IdleTimeout", idle_timeout, 0xf40, 0x40, true, 0x8c9d1d4a5d408a47)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_FX_DEVICE.IdleStamp", idle_stamp, 0xf80, 0x40, true, 0x40093a2d94e10d73)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::device_object_t*, 2>), "_POP_FX_DEVICE.NextIrpDeviceObject", next_irp_device_object, 0xfc0, 0x80, true, 0xd6acefce4b3cf209)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<union power::state_t, 2>), "_POP_FX_DEVICE.NextIrpPowerState", next_irp_power_state, 0x1040, 0x40, true, 0xd4e057601a819c20)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::function<void(struct nt::device_object_t*, uint8_t, union power::state_t, void*, struct io::status_block_t*)>*, 2>), "_POP_FX_DEVICE.NextIrpCallerCompletion", next_irp_caller_completion, 0x1080, 0x80, true, 0x92c754de5596b04b)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 2>), "_POP_FX_DEVICE.NextIrpCallerContext", next_irp_caller_context, 0x1100, 0x80, true, 0xdc7c39d8d700334c)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_POP_FX_DEVICE.IrpCompleteEvent", irp_complete_event, 0x1180, 0xc0, true, 0xc9fb40f2b83154de)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct pep::crashdump_information_t*)>*), "_POP_FX_DEVICE.PowerOnDumpDeviceCallback", power_on_dump_device_callback, 0x1240, 0x40, true, 0xe4f73d63d834f72e)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_accounting_t), "_POP_FX_DEVICE.Accounting", accounting, 0x1280, 0x0, true, 0x5f2bbb0d68a2b230)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_POP_FX_DEVICE.Flags", flags, 0x1980, 0x20, true, 0x79a2117d757d4abe)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_FX_DEVICE.ComponentCount", component_count, 0x19a0, 0x20, true, 0x8241468dc6d2fad1)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_component_t**), "_POP_FX_DEVICE.Components", components, 0x19c0, 0x40, true, 0x31d8803eb7c14c24)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_FX_DEVICE.LogEntries", log_entries, 0x1a00, 0x20, true, 0x143e1e9ed62ba943)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_log_entry_t*), "_POP_FX_DEVICE.Log", log, 0x1a40, 0x40, true, 0xf1174aa23412fb76)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_POP_FX_DEVICE.LogIndex", log_index, 0x1a80, 0x20, true, 0xf7c73166340511b6)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::driver_object_t*), "_POP_FX_DEVICE.DripsWatchdogDriverObject", drips_watchdog_driver_object, 0x1ac0, 0x40, true, 0x646ff97dfc42f30e)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_drips_watchdog_context_t), "_POP_FX_DEVICE.DripsWatchdogContext", drips_watchdog_context, 0x1b00, 0x40, true, 0xb42857b459e8f85e)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_FX_DEVICE.DirectedTimeout", directed_timeout, 0x1c40, 0x20, true, 0xad56a3ca8b44e72c)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_work_order_t), "_POP_FX_DEVICE.DirectedWorkOrder", directed_work_order, 0x1c80, 0xc0, true, 0x1d500d302673ec8f)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_work_order_watchdog_info_t), "_POP_FX_DEVICE.DirectedWorkWatchdogInfo", directed_work_watchdog_info, 0x1e40, 0x80, true, 0xff99178ecd30fa3f)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_FX_DEVICE.DirectedLock", directed_lock, 0x23c0, 0x40, true, 0x5503b57ead54ba5f)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_POP_FX_DEVICE.DirectedTransitionCallCount", directed_transition_call_count, 0x2400, 0x20, true, 0xb1592829e2c7f389)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_device_directed_transition_state_t), "_POP_FX_DEVICE.DirectedTransitionState", directed_transition_state, 0x2440, 0x80, true, 0x7246b4312a2ccde3)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::device_power_profile_t*), "_POP_FX_DEVICE.PowerProfile", power_profile, 0x24c0, 0x40, true, 0x32a4ddef67dc9713)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_POP_FX_DEVICE.FriendlyName", friendly_name, 0x2500, 0x80, true, 0xffa16de37ae2fde5)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_POP_FX_DEVICE.CommonReferenceFlags", common_reference_flags, 0x0, 0x0, false, 0x27c8f8e7e5e1650e)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_POP_FX_DEVICE.ReportDevicePoweredOnPassiveWorkItem", report_device_powered_on_passive_work_item, 0x0, 0x0, false, 0x5388f1b2b3030017)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_FX_DEVICE.RelationsLock", relations_lock, 0x0, 0x0, false, 0x6ddd113f9e15fcd9)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_FX_DEVICE.IdleProviderCount", idle_provider_count, 0x0, 0x0, false, 0x67c188764f53ef68)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_POP_FX_DEVICE.PendingDevicePowerIrp", pending_device_power_irp, 0x0, 0x0, false, 0x3fa3788d04e3a296)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_POP_FX_DEVICE.ExternalDependencies", external_dependencies, 0x0, 0x0, false, 0x3186a1e0a2da64df)
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
#endif