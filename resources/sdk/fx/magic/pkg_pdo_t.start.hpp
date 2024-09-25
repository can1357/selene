#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPkgPdo.m_Type", m_type, 0x40, 0x10, true, 0x61add6f1b71ce51c)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPkgPdo.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x38980392f03f90ff)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxPkgPdo.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x3e6c406009a6ca5e)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxPkgPdo.m_Globals", m_globals, 0x80, 0x40, true, 0xe13e1f849e5e334)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPkgPdo.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x6a0beff51a879bb2)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxPkgPdo.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x889f03452bff4bfe)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPkgPdo.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0xc944cae4d7b36368)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxPkgPdo.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xf8478bd2b32d1ad5)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxPkgPdo.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0xb9f5a85f7798d2d7)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxPkgPdo.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x9677140aa7e0afe6)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxPkgPdo.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x8a49cb36d3d7edf0)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxPkgPdo.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x3e6ea4f3a6af078f)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxPkgPdo.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xfbb80cd4e68aecc8)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxPkgPdo.m_Device", m_device, 0x300, 0x40, true, 0x8c96dbe6b50be484)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxPkgPdo.m_NPLock", m_np_lock, 0x340, 0x80, true, 0xc27365d56bac62a1)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPkgPdo.m_PnpCapsAddress", m_pnp_caps_address, 0x400, 0x20, true, 0xdda9a150d93f352e)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPkgPdo.m_PnpCapsUINumber", m_pnp_caps_ui_number, 0x420, 0x20, true, 0x2a2c9b3cedf2bdfc)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::power_caps_t), "FxPkgPdo.m_PowerCaps", m_power_caps, 0x440, 0xa0, true, 0x6bab93ef6b4c252c)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPdo.m_Failed", m_failed, 0x4e0, 0x8, true, 0xa4a3a26b7d90b898)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPdo.m_SystemPowerState", m_system_power_state, 0x4e8, 0x8, true, 0x264931fae08cf6c3)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPdo.m_DevicePowerState", m_device_power_state, 0x4f0, 0x8, true, 0x355a01be4aa1072a)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPdo.m_DevicePowerStateOld", m_device_power_state_old, 0x4f8, 0x8, true, 0x9706b32aa1631240)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::related_device_list_t*), "FxPkgPdo.m_UsageDependentDeviceList", m_usage_dependent_device_list, 0x500, 0x40, true, 0x9ecf6b4f476237d8)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::related_device_list_t*), "FxPkgPdo.m_RemovalDeviceList", m_removal_device_list, 0x540, 0x40, true, 0x27efdedfb1c5a186)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::wait_lock_internal_t), "FxPkgPdo.m_QueryInterfaceLock", m_query_interface_lock, 0x580, 0x40, true, 0xc63694f85eb07d9d)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxPkgPdo.m_QueryInterfaceHead", m_query_interface_head, 0x6c0, 0x40, true, 0x83b1f70d663a7df4)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::wait_lock_internal_t), "FxPkgPdo.m_DeviceInterfaceLock", m_device_interface_lock, 0x700, 0x40, true, 0xe96bc1c77a40b501)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxPkgPdo.m_DeviceInterfaceHead", m_device_interface_head, 0x840, 0x40, true, 0x57ce1964f898aaf)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPdo.m_DeviceInterfacesCanBeEnabled", m_device_interfaces_can_be_enabled, 0x880, 0x8, true, 0x161dbc04e5cb4860)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "FxPkgPdo.m_SpecialSupport", m_special_support, 0x888, 0x30, true, 0xae3147886103697b)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<int32_t, 4>), "FxPkgPdo.m_SpecialFileCount", m_special_file_count, 0x8c0, 0xc0, true, 0xa7b27e2ce55a8e63)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPkgPdo.m_DeviceStopCount", m_device_stop_count, 0x980, 0x20, true, 0xd4c56cab89816e7f)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::pnp_machine_t), "FxPkgPdo.m_PnpMachine", m_pnp_machine, 0x9c0, 0x40, true, 0x8e0e77ed38ca2069)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::power_machine_t), "FxPkgPdo.m_PowerMachine", m_power_machine, 0xf00, 0xc0, true, 0x97c9425f09610f89)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::power_policy_machine_t), "FxPkgPdo.m_PowerPolicyMachine", m_power_policy_machine, 0x15c0, 0x80, true, 0x22bac8501d6126c6)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::self_managed_io_machine_t*), "FxPkgPdo.m_SelfManagedIoMachine", m_self_managed_io_machine, 0x1c40, 0x40, true, 0xe87cb3f03c5468b1)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::shared_power_data_t), "FxPkgPdo.m_SharedPower", m_shared_power, 0x1c80, 0x80, true, 0x9599bf8645913ab9)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::d3cold_support_interface_t), "FxPkgPdo.m_D3ColdInterface", m_d3_cold_interface, 0x1d00, 0x40, true, 0xeb5f65e1bce762d0)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::event_t*), "FxPkgPdo.m_DeviceRemoveProcessed", m_device_remove_processed, 0x1fc0, 0x40, true, 0xfad3b75368fd06f9)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxPkgPdo.m_PendingChildCount", m_pending_child_count, 0x2000, 0x20, true, 0x22da259a156d1785)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 5>), "FxPkgPdo.m_DeviceWake", m_device_wake, 0x2020, 0x28, true, 0x13bfded7a0c44448)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgPdo.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x6e438b2c5e115f63, 1, uint16_t)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPdo.m_SystemWake", m_system_wake, 0x2048, 0x8, true, 0xae221034b90a57bb)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPdo.m_FailedAction", m_failed_action, 0x2050, 0x8, true, 0x47ff6f66295e4bb4)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPdo.m_SetDeviceRemoveProcessed", m_set_device_remove_processed, 0x2058, 0x8, true, 0x5e4bae08d82c89b6)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct power::thread_interface_t), "FxPkgPdo.m_PowerThreadInterface", m_power_thread_interface, 0x2080, 0x40, true, 0x539971e57355887b)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::enumeration_info_t*), "FxPkgPdo.m_EnumInfo", m_enum_info, 0x21c0, 0x40, true, 0x9ecf328188b8ab2e)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::cm_res_list_t*), "FxPkgPdo.m_Resources", m_resources, 0x2200, 0x40, true, 0xcb1024cf959a2e28)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::cm_res_list_t*), "FxPkgPdo.m_ResourcesRaw", m_resources_raw, 0x2240, 0x40, true, 0xf012a7048dca00b9)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::spin_lock_transactioned_list_t*), "FxPkgPdo.m_DmaEnablerList", m_dma_enabler_list, 0x2280, 0x40, true, 0x47ac1258381e489a)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pnp::bus_information_t), "FxPkgPdo.m_BusInformation", m_bus_information, 0x22c0, 0xc0, true, 0xafa78270a507aa39)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPdo.m_BusEnumRetries", m_bus_enum_retries, 0x2380, 0x8, true, 0x2686fdaa617dc7f6)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgPdo.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x65f742aea6f14799, 1, uint16_t)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPdo.m_SystemPowerAction", m_system_power_action, 0x2388, 0x8, true, 0x17eabf89f5bc3e11)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPdo.m_CapsQueried", m_caps_queried, 0x2390, 0x8, true, 0x6dac95893f70ed7)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPdo.m_InternalFailure", m_internal_failure, 0x2398, 0x8, true, 0x548bfd0d84a7463b)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPdo.m_HasPowerThread", m_has_power_thread, 0x23a0, 0x8, true, 0x1c895021da67cd46)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPdo.m_ReleaseHardwareAfterDescendantsOnFailure", m_release_hardware_after_descendants_on_failure, 0x23a8, 0x8, true, 0x186908b02c0e28fc)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_io_connect_interrupt_ex_t ), "FxPkgPdo.m_IoConnectInterruptEx", m_io_connect_interrupt_ex, 0x23c0, 0x40, true, 0x751cebc6af2f2a41)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_io_disconnect_interrupt_ex_t ), "FxPkgPdo.m_IoDisconnectInterruptEx", m_io_disconnect_interrupt_ex, 0x2400, 0x40, true, 0xb2abd710c1f4c2e9)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct io::report_interrupt_active_state_parameters_t*)>*), "FxPkgPdo.m_IoReportInterruptActive", m_io_report_interrupt_active, 0x2440, 0x40, true, 0xb37ca5075030b447)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct io::report_interrupt_active_state_parameters_t*)>*), "FxPkgPdo.m_IoReportInterruptInactive", m_io_report_interrupt_inactive, 0x2480, 0x40, true, 0xca1f27a31c9408af)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPkgPdo.m_InterruptObjectCount", m_interrupt_object_count, 0x2500, 0x20, true, 0x71b5ad60ed752ce8)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgPdo.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x13026091c21e697e, 1, uint16_t)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxPkgPdo.m_InterruptListHead", m_interrupt_list_head, 0x2540, 0x80, true, 0x629529d9464505c7)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPkgPdo.m_WakeInterruptCount", m_wake_interrupt_count, 0x25c0, 0x20, true, 0xf7f072f46faeac2f)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPkgPdo.m_WakeInterruptPendingAckCount", m_wake_interrupt_pending_ack_count, 0x25e0, 0x20, true, 0x4014454712757ed1)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPdo.m_SystemWokenByWakeInterrupt", m_system_woken_by_wake_interrupt, 0x2600, 0x8, true, 0x20870ae24adf7953)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPdo.m_WakeInterruptsKeepConnected", m_wake_interrupts_keep_connected, 0x2608, 0x8, true, 0x902662eb8908c0f4)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPdo.m_AchievedStart", m_achieved_start, 0x2610, 0x8, true, 0xdb6986a697fc395a)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::system_thread_t*), "FxPkgPdo.m_PowerThread", m_power_thread, 0x26c0, 0x40, true, 0x82393f995feb74e)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxPkgPdo.m_PowerThreadInterfaceReferenceCount", m_power_thread_interface_reference_count, 0x2700, 0x20, true, 0xc3c58674d98ff85a)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t*), "FxPkgPdo.m_PowerThreadEvent", m_power_thread_event, 0x2740, 0x40, true, 0x37614f9a6cf0d714)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "FxPkgPdo.m_PendingPnPIrp", m_pending_pn_p_irp, 0x2780, 0x40, true, 0xe360181a5575cd58)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgPdo.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0xc99b25cfc715a3f9, 1, uint16_t)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "FxPkgPdo.m_PendingSystemPowerIrp", m_pending_system_power_irp, 0x27c0, 0x40, true, 0xba80879ee0323706)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "FxPkgPdo.m_PendingDevicePowerIrp", m_pending_device_power_irp, 0x2800, 0x40, true, 0xe9cb0243a80618ea)
#define _m082 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::pnp_state_callback_t*), "FxPkgPdo.m_PnpStateCallbacks", m_pnp_state_callbacks, 0x2840, 0x40, true, 0x9b9f7d3216db3778)
#define _m083 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::power_state_callback_t*), "FxPkgPdo.m_PowerStateCallbacks", m_power_state_callbacks, 0x2880, 0x40, true, 0xe52156c126a5472d)
#define _m084 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::power_policy_state_callback_t*), "FxPkgPdo.m_PowerPolicyStateCallbacks", m_power_policy_state_callbacks, 0x28c0, 0x40, true, 0x13306340045c601a)
#define _m085 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_usage_notification_t), "FxPkgPdo.m_DeviceUsageNotification", m_device_usage_notification, 0x2900, 0x40, true, 0x391eac671e372fa2)
#define _m086 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_usage_notification_ex_t), "FxPkgPdo.m_DeviceUsageNotificationEx", m_device_usage_notification_ex, 0x2940, 0x40, true, 0xf4e13d5aab70fa73)
#define _m087 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_relations_query_t), "FxPkgPdo.m_DeviceRelationsQuery", m_device_relations_query, 0x2980, 0x40, true, 0xd115d64637ea487a)
#define _m088 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_d0_entry_t), "FxPkgPdo.m_DeviceD0Entry", m_device_d0_entry, 0x29c0, 0x80, true, 0xe631052847b0fa00)
#define _m089 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_d0_entry_post_interrupts_enabled_t), "FxPkgPdo.m_DeviceD0EntryPostInterruptsEnabled", m_device_d0_entry_post_interrupts_enabled, 0x2b40, 0x40, true, 0x29e1b91360fbe15c)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgPdo.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0xa08b924a59c1f467, 1, uint16_t)
#define _m090 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_d0_exit_pre_interrupts_disabled_t), "FxPkgPdo.m_DeviceD0ExitPreInterruptsDisabled", m_device_d0_exit_pre_interrupts_disabled, 0x2b80, 0x40, true, 0x89fd8d504e0926f9)
#define _m091 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_d0_exit_t), "FxPkgPdo.m_DeviceD0Exit", m_device_d0_exit, 0x2bc0, 0x80, true, 0x144c27b118d7737e)
#define _m092 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_prepare_hardware_t), "FxPkgPdo.m_DevicePrepareHardware", m_device_prepare_hardware, 0x2fc0, 0xc0, true, 0x1d057004de44b435)
#define _m093 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_release_hardware_t), "FxPkgPdo.m_DeviceReleaseHardware", m_device_release_hardware, 0x3180, 0x80, true, 0xbee4b047b466e86f)
#define _m094 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_query_stop_t), "FxPkgPdo.m_DeviceQueryStop", m_device_query_stop, 0x3300, 0x40, true, 0xa1aadba2f33958df)
#define _m095 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_query_remove_t), "FxPkgPdo.m_DeviceQueryRemove", m_device_query_remove, 0x3340, 0x40, true, 0x2aa80c2f1cf275f6)
#define _m096 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_surprise_removal_t), "FxPkgPdo.m_DeviceSurpriseRemoval", m_device_surprise_removal, 0x3380, 0x40, true, 0x62c418328cec490d)
#define _m097 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxPkgPdo.m_DeviceTextHead", m_device_text_head, 0x34c0, 0x40, true, 0xf74cbf3575963aec)
#define _m098 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPkgPdo.m_DefaultLocale", m_default_locale, 0x3500, 0x20, true, 0xeab8aa9ee1b3332c)
#define _m099 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::device_description_entry_t*), "FxPkgPdo.m_Description", m_description, 0x3540, 0x40, true, 0x925d1645ce35e9b2)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgPdo.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0xcd64da3334155eef, 1, uint16_t)
#define _m100 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::child_list_t*), "FxPkgPdo.m_OwningChildList", m_owning_child_list, 0x3580, 0x40, true, 0x33701f33c33d64b4)
#define _m101 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_resources_query_t), "FxPkgPdo.m_DeviceResourcesQuery", m_device_resources_query, 0x35c0, 0x40, true, 0xced4d95c5addc46d)
#define _m102 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_resource_requirements_query_t), "FxPkgPdo.m_DeviceResourceRequirementsQuery", m_device_resource_requirements_query, 0x3600, 0x40, true, 0x72036a07d6b593fe)
#define _m103 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_eject_t), "FxPkgPdo.m_DeviceEject", m_device_eject, 0x3640, 0x40, true, 0xa6166f2b5139178c)
#define _m104 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_set_lock_t), "FxPkgPdo.m_DeviceSetLock", m_device_set_lock, 0x3680, 0x40, true, 0x8226289d0521fd88)
#define _m105 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::power_device_enable_wake_at_bus_t), "FxPkgPdo.m_DeviceEnableWakeAtBus", m_device_enable_wake_at_bus, 0x36c0, 0x40, true, 0x642d927d9636f48a)
#define _m106 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::power_device_disable_wake_at_bus_t), "FxPkgPdo.m_DeviceDisableWakeAtBus", m_device_disable_wake_at_bus, 0x3700, 0x40, true, 0x994e27b71ee1270a)
#define _m107 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_reported_missing_t), "FxPkgPdo.m_DeviceReportedMissing", m_device_reported_missing, 0x3740, 0x40, true, 0x86ad8d377617110c)
#define _m108 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPdo.m_RawOK", m_raw_ok, 0x3780, 0x8, true, 0xe9e0e749d5b2b387)
#define _m109 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPdo.m_Static", m_static, 0x3788, 0x8, true, 0x8304d5f558a0243d)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgPdo.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x373ad4c32985af08, 1, uint16_t)
#define _m110 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPdo.m_AddedToStaticList", m_added_to_static_list, 0x3790, 0x8, true, 0xe45f60111ab0492a)
#define _m111 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPdo.m_AllowForwardRequestToParent", m_allow_forward_request_to_parent, 0x3798, 0x8, true, 0xcb033a6a1a6bda5d)
#define _m112 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "FxPkgPdo.m_DeviceID", m_device_id, 0x37c0, 0x40, true, 0xa75b8e60c2aa83b6)
#define _m113 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "FxPkgPdo.m_InstanceID", m_instance_id, 0x3800, 0x40, true, 0xb71d71b8886df8b5)
#define _m114 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "FxPkgPdo.m_HardwareIDs", m_hardware_i_ds, 0x3840, 0x40, true, 0x81332cc51ed1f91b)
#define _m115 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "FxPkgPdo.m_CompatibleIDs", m_compatible_i_ds, 0x3880, 0x40, true, 0x8b1a79407a7da6fb)
#define _m116 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "FxPkgPdo.m_ContainerID", m_container_id, 0x38c0, 0x40, true, 0x7b4188bb75638fbf)
#define _m117 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "FxPkgPdo.m_IDsAllocation", m_i_ds_allocation, 0x3900, 0x40, true, 0x69fcf5a0206c3f3)
#define _m118 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::related_device_list_t*), "FxPkgPdo.m_EjectionDeviceList", m_ejection_device_list, 0x3940, 0x40, true, 0xcd9de9e50b4c906f)
#define _m119 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::event_t*), "FxPkgPdo.m_DeviceEjectProcessed", m_device_eject_processed, 0x3980, 0x40, true, 0x5a3adb438d3c9c72)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgPdo.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x83126c024485bcb6, 1, uint16_t)
#define _m120 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPdo.m_CanBeDeleted", m_can_be_deleted, 0x39c0, 0x8, true, 0xd1ab579a1f23684d)
#define _m121 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPdo.m_EnableWakeAtBusInvoked", m_enable_wake_at_bus_invoked, 0x39c8, 0x8, true, 0x73051995b67f81fe)
#define _m122 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fx::pnp_state_t), "FxPkgPdo.m_PnpState", m_pnp_state, 0x3c0, 0x20, true, 0x34db26f8e7ac9388)
#define _m123 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fx::pnp_caps_t), "FxPkgPdo.m_PnpCaps", m_pnp_caps, 0x3e0, 0x20, true, 0x5fbacb8b4d0f592d)
#define _m124 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::companion_target_t*), "FxPkgPdo.m_CompanionTarget", m_companion_target, 0x1f40, 0x40, true, 0x711b1d4281ab9af1)
#define _m125 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxPkgPdo.m_CompanionTargetStatus", m_companion_target_status, 0x1f80, 0x20, true, 0xa72037552c412606)
#define _m126 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::system_work_item_t*), "FxPkgPdo.m_SetDeviceFailedAttemptRestartWorkItem", m_set_device_failed_attempt_restart_work_item, 0x24c0, 0x40, true, 0x39f53965d000333c)
#define _m127 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::sleep_study_interface_t*), "FxPkgPdo.m_SleepStudy", m_sleep_study, 0x2640, 0x40, true, 0xca722b23fc07df28)
#define _m128 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "FxPkgPdo.m_SleepStudyPowerRefIoCount", m_sleep_study_power_ref_io_count, 0x2680, 0x20, true, 0x1cf5fc0409c228aa)
#define _m129 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPdo.m_SleepStudyTrackReferences", m_sleep_study_track_references, 0x26a0, 0x8, true, 0x464959d144022e5d)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgPdo.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0xab9ab4323c015743, 1, uint16_t)
#define _m130 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_d0_entry_post_hw_enabled_t), "FxPkgPdo.m_DeviceD0EntryPostHardwareEnabled", m_device_d0_entry_post_hardware_enabled, 0x2d40, 0x40, true, 0x24a2923bbf5e0abe)
#define _m131 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_d0_exit_pre_hw_disabled_t), "FxPkgPdo.m_DeviceD0ExitPreHardwareDisabled", m_device_d0_exit_pre_hardware_disabled, 0x2e80, 0x40, true, 0x94a74f1009baf7cc)
#define _m132 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgPdo.m_HasPowerDependencyOnParent", m_has_power_dependency_on_parent, 0x37a0, 0x8, true, 0x5c13725219d54d2d)
#define _m133 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fx::pnp_state_and_caps_t), "FxPkgPdo.m_PnpStateAndCaps", m_pnp_state_and_caps, 0x0, 0x0, false, 0x609fc4986bd9d76a)
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
#define _m108
#define _m109
#define _m11
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
#define _m12
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
#define _m13
#define _m130
#define _m131
#define _m132
#define _m133
#endif