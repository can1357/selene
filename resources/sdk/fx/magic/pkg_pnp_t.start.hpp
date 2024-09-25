#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPkgPnp.m_Type", m_type, 0x40, 0x10, true, 0x8848a695077d124a)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPkgPnp.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0xd970e5590c40df)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxPkgPnp.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x73083f1947a7bfaf)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxPkgPnp.m_Globals", m_globals, 0x80, 0x40, true, 0x6fbb72ebd554b86c)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPkgPnp.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0xf36f75163f53e9d4)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxPkgPnp.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x8e36e6adb6f28b2c)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPkgPnp.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x998c1c56c01fdb8a)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxPkgPnp.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xe2155794bf9e19eb)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxPkgPnp.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0xfb1dcc5c035fd67e)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxPkgPnp.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x99745c0215fff508)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxPkgPnp.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x7db2cc2d969ba492)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxPkgPnp.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x7e52c490a4b9476f)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxPkgPnp.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x1da9bae6ed1b62d4)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxPkgPnp.m_Device", m_device, 0x300, 0x40, true, 0x632900e1651770c8)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxPkgPnp.m_NPLock", m_np_lock, 0x340, 0x80, true, 0xed7e093dbd063e35)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPkgPnp.m_PnpCapsAddress", m_pnp_caps_address, 0x400, 0x20, true, 0xc07537da5be83adb)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPkgPnp.m_PnpCapsUINumber", m_pnp_caps_ui_number, 0x420, 0x20, true, 0x71a2fd5d21055cbd)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::power_caps_t), "FxPkgPnp.m_PowerCaps", m_power_caps, 0x440, 0xa0, true, 0xb108a65ba9c41b2e)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPnp.m_Failed", m_failed, 0x4e0, 0x8, true, 0xab204d13776c63e0)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPnp.m_SystemPowerState", m_system_power_state, 0x4e8, 0x8, true, 0xf32ae0faf7357ce7)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPnp.m_DevicePowerState", m_device_power_state, 0x4f0, 0x8, true, 0xb8d992b0102ec12)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPnp.m_DevicePowerStateOld", m_device_power_state_old, 0x4f8, 0x8, true, 0x4d4946b5cb28b41b)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::related_device_list_t*), "FxPkgPnp.m_UsageDependentDeviceList", m_usage_dependent_device_list, 0x500, 0x40, true, 0xb74819dec3955d71)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::related_device_list_t*), "FxPkgPnp.m_RemovalDeviceList", m_removal_device_list, 0x540, 0x40, true, 0xb33f05db3dd18382)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::wait_lock_internal_t), "FxPkgPnp.m_QueryInterfaceLock", m_query_interface_lock, 0x580, 0x40, true, 0xc67edcde0153be41)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxPkgPnp.m_QueryInterfaceHead", m_query_interface_head, 0x6c0, 0x40, true, 0x3e8e60fa76110ed)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::wait_lock_internal_t), "FxPkgPnp.m_DeviceInterfaceLock", m_device_interface_lock, 0x700, 0x40, true, 0x3f40392229d9307)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxPkgPnp.m_DeviceInterfaceHead", m_device_interface_head, 0x840, 0x40, true, 0xf0c97217ecba5425)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPnp.m_DeviceInterfacesCanBeEnabled", m_device_interfaces_can_be_enabled, 0x880, 0x8, true, 0x35067b0cb0298022)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "FxPkgPnp.m_SpecialSupport", m_special_support, 0x888, 0x30, true, 0x40ca267e781ca3e4)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<int32_t, 4>), "FxPkgPnp.m_SpecialFileCount", m_special_file_count, 0x8c0, 0xc0, true, 0x1e13bdb51c5fc94e)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPkgPnp.m_DeviceStopCount", m_device_stop_count, 0x980, 0x20, true, 0x55484c3e75ba0043)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::pnp_machine_t), "FxPkgPnp.m_PnpMachine", m_pnp_machine, 0x9c0, 0x40, true, 0x7502078adb90f41f)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::power_machine_t), "FxPkgPnp.m_PowerMachine", m_power_machine, 0xf00, 0xc0, true, 0xfe454819474c3469)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::power_policy_machine_t), "FxPkgPnp.m_PowerPolicyMachine", m_power_policy_machine, 0x15c0, 0x80, true, 0x1869d1ad02e3a057)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::self_managed_io_machine_t*), "FxPkgPnp.m_SelfManagedIoMachine", m_self_managed_io_machine, 0x1c40, 0x40, true, 0x7336c50933aa406b)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::shared_power_data_t), "FxPkgPnp.m_SharedPower", m_shared_power, 0x1c80, 0x80, true, 0xcdfb7393c6dd1dd4)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::d3cold_support_interface_t), "FxPkgPnp.m_D3ColdInterface", m_d3_cold_interface, 0x1d00, 0x40, true, 0x18257c601b149237)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::event_t*), "FxPkgPnp.m_DeviceRemoveProcessed", m_device_remove_processed, 0x1fc0, 0x40, true, 0x3d8851f14091ae61)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxPkgPnp.m_PendingChildCount", m_pending_child_count, 0x2000, 0x20, true, 0x18be27827b2e32a4)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 5>), "FxPkgPnp.m_DeviceWake", m_device_wake, 0x2020, 0x28, true, 0xe988e8f6fc2668dc)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgPnp.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0xc4d89dc78d0fb2bb, 1, uint16_t)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPnp.m_SystemWake", m_system_wake, 0x2048, 0x8, true, 0x81cd8d53a9939ce2)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPnp.m_FailedAction", m_failed_action, 0x2050, 0x8, true, 0xac0b905b2e258275)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPnp.m_SetDeviceRemoveProcessed", m_set_device_remove_processed, 0x2058, 0x8, true, 0x421d122023a9572)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct power::thread_interface_t), "FxPkgPnp.m_PowerThreadInterface", m_power_thread_interface, 0x2080, 0x40, true, 0xedb77fe8ed286e5b)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::enumeration_info_t*), "FxPkgPnp.m_EnumInfo", m_enum_info, 0x21c0, 0x40, true, 0xf50608d01f239d7f)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::cm_res_list_t*), "FxPkgPnp.m_Resources", m_resources, 0x2200, 0x40, true, 0xae9dd33fe0e7649a)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::cm_res_list_t*), "FxPkgPnp.m_ResourcesRaw", m_resources_raw, 0x2240, 0x40, true, 0xed6da0c183690e12)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::spin_lock_transactioned_list_t*), "FxPkgPnp.m_DmaEnablerList", m_dma_enabler_list, 0x2280, 0x40, true, 0x6657e39f6918dae3)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pnp::bus_information_t), "FxPkgPnp.m_BusInformation", m_bus_information, 0x22c0, 0xc0, true, 0x514db745df4d7c83)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPnp.m_BusEnumRetries", m_bus_enum_retries, 0x2380, 0x8, true, 0x91cc1e5ed06f0e77)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgPnp.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xcd08a441d924e744, 1, uint16_t)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPnp.m_SystemPowerAction", m_system_power_action, 0x2388, 0x8, true, 0xfd0a82de7c8fb6ee)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPnp.m_CapsQueried", m_caps_queried, 0x2390, 0x8, true, 0x9e534db6527e8427)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPnp.m_InternalFailure", m_internal_failure, 0x2398, 0x8, true, 0xafc515fe43a5b430)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPnp.m_HasPowerThread", m_has_power_thread, 0x23a0, 0x8, true, 0x695bd01e9ac9efbf)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPnp.m_ReleaseHardwareAfterDescendantsOnFailure", m_release_hardware_after_descendants_on_failure, 0x23a8, 0x8, true, 0xeca7da48b55c00a1)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_io_connect_interrupt_ex_t ), "FxPkgPnp.m_IoConnectInterruptEx", m_io_connect_interrupt_ex, 0x23c0, 0x40, true, 0x44c296995997f15c)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_io_disconnect_interrupt_ex_t ), "FxPkgPnp.m_IoDisconnectInterruptEx", m_io_disconnect_interrupt_ex, 0x2400, 0x40, true, 0xd889666219b78c59)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct io::report_interrupt_active_state_parameters_t*)>*), "FxPkgPnp.m_IoReportInterruptActive", m_io_report_interrupt_active, 0x2440, 0x40, true, 0x36dfe141e91ebcb3)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct io::report_interrupt_active_state_parameters_t*)>*), "FxPkgPnp.m_IoReportInterruptInactive", m_io_report_interrupt_inactive, 0x2480, 0x40, true, 0xfeaa713bd41a3a8d)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPkgPnp.m_InterruptObjectCount", m_interrupt_object_count, 0x2500, 0x20, true, 0x7e5b8af7f9d0771f)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgPnp.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x3647cde4f558f41d, 1, uint16_t)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxPkgPnp.m_InterruptListHead", m_interrupt_list_head, 0x2540, 0x80, true, 0x7fd8190a65261fb4)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPkgPnp.m_WakeInterruptCount", m_wake_interrupt_count, 0x25c0, 0x20, true, 0x2e6eb684aa06d98a)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPkgPnp.m_WakeInterruptPendingAckCount", m_wake_interrupt_pending_ack_count, 0x25e0, 0x20, true, 0xb2dd001053e1821d)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPnp.m_SystemWokenByWakeInterrupt", m_system_woken_by_wake_interrupt, 0x2600, 0x8, true, 0x873529a2a1b41517)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPnp.m_WakeInterruptsKeepConnected", m_wake_interrupts_keep_connected, 0x2608, 0x8, true, 0x739e154d38278ffa)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPnp.m_AchievedStart", m_achieved_start, 0x2610, 0x8, true, 0x875dc92f966cdd7)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::system_thread_t*), "FxPkgPnp.m_PowerThread", m_power_thread, 0x26c0, 0x40, true, 0x3388ec5edbc7652b)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxPkgPnp.m_PowerThreadInterfaceReferenceCount", m_power_thread_interface_reference_count, 0x2700, 0x20, true, 0xdc464cf43722e3dc)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t*), "FxPkgPnp.m_PowerThreadEvent", m_power_thread_event, 0x2740, 0x40, true, 0x773ac3663effa1a)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "FxPkgPnp.m_PendingPnPIrp", m_pending_pn_p_irp, 0x2780, 0x40, true, 0xefbcc3828b05053f)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgPnp.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0xb265d4e11fd064b7, 1, uint16_t)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "FxPkgPnp.m_PendingSystemPowerIrp", m_pending_system_power_irp, 0x27c0, 0x40, true, 0xf828ddb972ce5e5d)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "FxPkgPnp.m_PendingDevicePowerIrp", m_pending_device_power_irp, 0x2800, 0x40, true, 0xb9e50a58ade85da6)
#define _m082 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::pnp_state_callback_t*), "FxPkgPnp.m_PnpStateCallbacks", m_pnp_state_callbacks, 0x2840, 0x40, true, 0x4a00d8c26ec9de6f)
#define _m083 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::power_state_callback_t*), "FxPkgPnp.m_PowerStateCallbacks", m_power_state_callbacks, 0x2880, 0x40, true, 0xe9eb9267393421f7)
#define _m084 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::power_policy_state_callback_t*), "FxPkgPnp.m_PowerPolicyStateCallbacks", m_power_policy_state_callbacks, 0x28c0, 0x40, true, 0xb3bcd2f8b213c3fa)
#define _m085 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_usage_notification_t), "FxPkgPnp.m_DeviceUsageNotification", m_device_usage_notification, 0x2900, 0x40, true, 0x7103f8d714136f9f)
#define _m086 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_usage_notification_ex_t), "FxPkgPnp.m_DeviceUsageNotificationEx", m_device_usage_notification_ex, 0x2940, 0x40, true, 0xc0e4dd37319c61f5)
#define _m087 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_relations_query_t), "FxPkgPnp.m_DeviceRelationsQuery", m_device_relations_query, 0x2980, 0x40, true, 0x425a78ed3c03378d)
#define _m088 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_d0_entry_t), "FxPkgPnp.m_DeviceD0Entry", m_device_d0_entry, 0x29c0, 0x80, true, 0x36acc98b5c1e9236)
#define _m089 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_d0_entry_post_interrupts_enabled_t), "FxPkgPnp.m_DeviceD0EntryPostInterruptsEnabled", m_device_d0_entry_post_interrupts_enabled, 0x2b40, 0x40, true, 0x4cc11f56398faa81)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgPnp.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0xaf4b34b362aea97c, 1, uint16_t)
#define _m090 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_d0_exit_pre_interrupts_disabled_t), "FxPkgPnp.m_DeviceD0ExitPreInterruptsDisabled", m_device_d0_exit_pre_interrupts_disabled, 0x2b80, 0x40, true, 0xb6eb5b2ecca9b233)
#define _m091 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_d0_exit_t), "FxPkgPnp.m_DeviceD0Exit", m_device_d0_exit, 0x2bc0, 0x80, true, 0x460c3617967d8611)
#define _m092 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_prepare_hardware_t), "FxPkgPnp.m_DevicePrepareHardware", m_device_prepare_hardware, 0x2fc0, 0xc0, true, 0xe1b38ebd4e0dc464)
#define _m093 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_release_hardware_t), "FxPkgPnp.m_DeviceReleaseHardware", m_device_release_hardware, 0x3180, 0x80, true, 0x6ec422ece47fff60)
#define _m094 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_query_stop_t), "FxPkgPnp.m_DeviceQueryStop", m_device_query_stop, 0x3300, 0x40, true, 0x384d2e2d9e4a460b)
#define _m095 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_query_remove_t), "FxPkgPnp.m_DeviceQueryRemove", m_device_query_remove, 0x3340, 0x40, true, 0x80c5b501ef584e1e)
#define _m096 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_surprise_removal_t), "FxPkgPnp.m_DeviceSurpriseRemoval", m_device_surprise_removal, 0x3380, 0x40, true, 0xe85f5fb2409a2301)
#define _m097 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fx::pnp_state_t), "FxPkgPnp.m_PnpState", m_pnp_state, 0x3c0, 0x20, true, 0xc309db607fe63d5a)
#define _m098 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fx::pnp_caps_t), "FxPkgPnp.m_PnpCaps", m_pnp_caps, 0x3e0, 0x20, true, 0xb273e699e5923f76)
#define _m099 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::companion_target_t*), "FxPkgPnp.m_CompanionTarget", m_companion_target, 0x1f40, 0x40, true, 0x62e9cd6ee9f381d2)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgPnp.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0xf81f689a9b2f16d0, 1, uint16_t)
#define _m100 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxPkgPnp.m_CompanionTargetStatus", m_companion_target_status, 0x1f80, 0x20, true, 0xf45f2e5ad8523a9a)
#define _m101 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::system_work_item_t*), "FxPkgPnp.m_SetDeviceFailedAttemptRestartWorkItem", m_set_device_failed_attempt_restart_work_item, 0x24c0, 0x40, true, 0x2a962df4d823c3f6)
#define _m102 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::sleep_study_interface_t*), "FxPkgPnp.m_SleepStudy", m_sleep_study, 0x2640, 0x40, true, 0x87a75b9a8c027283)
#define _m103 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "FxPkgPnp.m_SleepStudyPowerRefIoCount", m_sleep_study_power_ref_io_count, 0x2680, 0x20, true, 0x1202d938fb8b30c0)
#define _m104 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPnp.m_SleepStudyTrackReferences", m_sleep_study_track_references, 0x26a0, 0x8, true, 0xe132414946e98313)
#define _m105 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_d0_entry_post_hw_enabled_t), "FxPkgPnp.m_DeviceD0EntryPostHardwareEnabled", m_device_d0_entry_post_hardware_enabled, 0x2d40, 0x40, true, 0x9b8e8a2a0aca6f29)
#define _m106 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_d0_exit_pre_hw_disabled_t), "FxPkgPnp.m_DeviceD0ExitPreHardwareDisabled", m_device_d0_exit_pre_hardware_disabled, 0x2e80, 0x40, true, 0x94e26a91110825e7)
#define _m107 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fx::pnp_state_and_caps_t), "FxPkgPnp.m_PnpStateAndCaps", m_pnp_state_and_caps, 0x0, 0x0, false, 0x64fdbd0241fa0fb7)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgPnp.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x5fbae49f953e816e, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgPnp.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x953b0d72828fa8a8, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgPnp.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x2a433a575c914d02, 1, uint16_t)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
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
#define _m05
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
#define _m06
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
#define _m07
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
#define _m08
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
#define _m09
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
#define _m10
#define _m100
#define _m101
#define _m102
#define _m103
#define _m104
#define _m105
#define _m106
#define _m107
#define _m11
#define _m12
#define _m13
#endif