#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPkgFdo.m_Type", m_type, 0x40, 0x10, true, 0x1c05745a18b4462a)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPkgFdo.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0xf4d611188426d1a7)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxPkgFdo.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xfac3c22bac6f05f5)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxPkgFdo.m_Globals", m_globals, 0x80, 0x40, true, 0x7e1c221c8c714ec7)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPkgFdo.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x1c348941de056213)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxPkgFdo.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0xbeb07147dd70776f)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPkgFdo.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x41ce2ba6b46524a3)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxPkgFdo.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xd475aa81506a050c)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxPkgFdo.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x8bb1d3cab001f42f)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxPkgFdo.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x5c768ea10ce372b5)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxPkgFdo.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x452ddddccd1baeed)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxPkgFdo.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x4359023ff525551d)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxPkgFdo.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x91c8a55febba10a9)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxPkgFdo.m_Device", m_device, 0x300, 0x40, true, 0xa68255bc5b3c4047)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxPkgFdo.m_NPLock", m_np_lock, 0x340, 0x80, true, 0xcfda62579fb6c00)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPkgFdo.m_PnpCapsAddress", m_pnp_caps_address, 0x400, 0x20, true, 0xbf45bf45d68ddbe5)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPkgFdo.m_PnpCapsUINumber", m_pnp_caps_ui_number, 0x420, 0x20, true, 0x99fa669e8e6aeff7)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::power_caps_t), "FxPkgFdo.m_PowerCaps", m_power_caps, 0x440, 0xa0, true, 0x9b7d6f6eb0061616)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgFdo.m_Failed", m_failed, 0x4e0, 0x8, true, 0x284552a1464af03)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgFdo.m_SystemPowerState", m_system_power_state, 0x4e8, 0x8, true, 0x1b48b1d95e6e5969)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgFdo.m_DevicePowerState", m_device_power_state, 0x4f0, 0x8, true, 0xd10a0242bd07386f)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgFdo.m_DevicePowerStateOld", m_device_power_state_old, 0x4f8, 0x8, true, 0x80be8a83b86da44c)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::related_device_list_t*), "FxPkgFdo.m_UsageDependentDeviceList", m_usage_dependent_device_list, 0x500, 0x40, true, 0x14a70133049ff50a)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::related_device_list_t*), "FxPkgFdo.m_RemovalDeviceList", m_removal_device_list, 0x540, 0x40, true, 0x488fd9d78ed78ccd)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::wait_lock_internal_t), "FxPkgFdo.m_QueryInterfaceLock", m_query_interface_lock, 0x580, 0x40, true, 0x38e2d3f263b564fe)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxPkgFdo.m_QueryInterfaceHead", m_query_interface_head, 0x6c0, 0x40, true, 0xd122f2757d565dd6)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::wait_lock_internal_t), "FxPkgFdo.m_DeviceInterfaceLock", m_device_interface_lock, 0x700, 0x40, true, 0x562ceef65af798a0)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxPkgFdo.m_DeviceInterfaceHead", m_device_interface_head, 0x840, 0x40, true, 0x1ae8a590959c9aa9)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgFdo.m_DeviceInterfacesCanBeEnabled", m_device_interfaces_can_be_enabled, 0x880, 0x8, true, 0x431029a0d6925885)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "FxPkgFdo.m_SpecialSupport", m_special_support, 0x888, 0x30, true, 0xfc9f6489e508a72)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<int32_t, 4>), "FxPkgFdo.m_SpecialFileCount", m_special_file_count, 0x8c0, 0xc0, true, 0x4878df69671e6031)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPkgFdo.m_DeviceStopCount", m_device_stop_count, 0x980, 0x20, true, 0xbbc3789493055d06)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::pnp_machine_t), "FxPkgFdo.m_PnpMachine", m_pnp_machine, 0x9c0, 0x40, true, 0xd5be4eaac80c09c7)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::power_machine_t), "FxPkgFdo.m_PowerMachine", m_power_machine, 0xf00, 0xc0, true, 0x76f9525d2603d257)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::power_policy_machine_t), "FxPkgFdo.m_PowerPolicyMachine", m_power_policy_machine, 0x15c0, 0x80, true, 0x77d090326bd0a31d)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::self_managed_io_machine_t*), "FxPkgFdo.m_SelfManagedIoMachine", m_self_managed_io_machine, 0x1c40, 0x40, true, 0x63407d31e0bac335)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::shared_power_data_t), "FxPkgFdo.m_SharedPower", m_shared_power, 0x1c80, 0x80, true, 0x9cad26807e2b9d94)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::d3cold_support_interface_t), "FxPkgFdo.m_D3ColdInterface", m_d3_cold_interface, 0x1d00, 0x40, true, 0x40a1d01de25530b5)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::event_t*), "FxPkgFdo.m_DeviceRemoveProcessed", m_device_remove_processed, 0x1fc0, 0x40, true, 0xa59724bfcc99d8a6)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxPkgFdo.m_PendingChildCount", m_pending_child_count, 0x2000, 0x20, true, 0xb4d4a73a76beb7be)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 5>), "FxPkgFdo.m_DeviceWake", m_device_wake, 0x2020, 0x28, true, 0x2bf1435bf61f003f)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgFdo.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0xa3606f4cf97ab047, 1, uint16_t)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgFdo.m_SystemWake", m_system_wake, 0x2048, 0x8, true, 0xc34f1d5241caa818)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgFdo.m_FailedAction", m_failed_action, 0x2050, 0x8, true, 0x76cc1c1bfa34397c)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgFdo.m_SetDeviceRemoveProcessed", m_set_device_remove_processed, 0x2058, 0x8, true, 0x9392e9ea9aadad8a)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct power::thread_interface_t), "FxPkgFdo.m_PowerThreadInterface", m_power_thread_interface, 0x2080, 0x40, true, 0x1db09f7177823e03)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::enumeration_info_t*), "FxPkgFdo.m_EnumInfo", m_enum_info, 0x21c0, 0x40, true, 0x4fa9ae8cb606db7b)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::cm_res_list_t*), "FxPkgFdo.m_Resources", m_resources, 0x2200, 0x40, true, 0x5ca3bfa891378383)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::cm_res_list_t*), "FxPkgFdo.m_ResourcesRaw", m_resources_raw, 0x2240, 0x40, true, 0xbe2f1e6b2eacbe90)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::spin_lock_transactioned_list_t*), "FxPkgFdo.m_DmaEnablerList", m_dma_enabler_list, 0x2280, 0x40, true, 0xbce00c7bef8a4fe6)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pnp::bus_information_t), "FxPkgFdo.m_BusInformation", m_bus_information, 0x22c0, 0xc0, true, 0xbdcf67f00481aaac)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgFdo.m_BusEnumRetries", m_bus_enum_retries, 0x2380, 0x8, true, 0xaeb06a1ea9ef2036)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgFdo.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xd300b95febb87238, 1, uint16_t)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgFdo.m_SystemPowerAction", m_system_power_action, 0x2388, 0x8, true, 0x9bf2ebd2184535a8)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgFdo.m_CapsQueried", m_caps_queried, 0x2390, 0x8, true, 0xfb65a15abd2e32fb)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgFdo.m_InternalFailure", m_internal_failure, 0x2398, 0x8, true, 0xc0bf2a85ac3f0941)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgFdo.m_HasPowerThread", m_has_power_thread, 0x23a0, 0x8, true, 0x5a53f800c554a33a)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgFdo.m_ReleaseHardwareAfterDescendantsOnFailure", m_release_hardware_after_descendants_on_failure, 0x23a8, 0x8, true, 0x99c068f6184ac589)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_io_connect_interrupt_ex_t ), "FxPkgFdo.m_IoConnectInterruptEx", m_io_connect_interrupt_ex, 0x23c0, 0x40, true, 0x91bb3dafecb8b534)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_io_disconnect_interrupt_ex_t ), "FxPkgFdo.m_IoDisconnectInterruptEx", m_io_disconnect_interrupt_ex, 0x2400, 0x40, true, 0xdb17f8263cd669e5)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct io::report_interrupt_active_state_parameters_t*)>*), "FxPkgFdo.m_IoReportInterruptActive", m_io_report_interrupt_active, 0x2440, 0x40, true, 0x14c6c18fafe0fdcc)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct io::report_interrupt_active_state_parameters_t*)>*), "FxPkgFdo.m_IoReportInterruptInactive", m_io_report_interrupt_inactive, 0x2480, 0x40, true, 0x135c8ab992cc9aa2)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPkgFdo.m_InterruptObjectCount", m_interrupt_object_count, 0x2500, 0x20, true, 0xc25961244d88ab68)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgFdo.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xba10f156e0961de4, 1, uint16_t)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxPkgFdo.m_InterruptListHead", m_interrupt_list_head, 0x2540, 0x80, true, 0x379be4e018078644)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPkgFdo.m_WakeInterruptCount", m_wake_interrupt_count, 0x25c0, 0x20, true, 0x9c12ca84b3b37b6c)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPkgFdo.m_WakeInterruptPendingAckCount", m_wake_interrupt_pending_ack_count, 0x25e0, 0x20, true, 0x8f8f9fb148826c4c)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgFdo.m_SystemWokenByWakeInterrupt", m_system_woken_by_wake_interrupt, 0x2600, 0x8, true, 0xcf0d5216566a7ab3)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgFdo.m_WakeInterruptsKeepConnected", m_wake_interrupts_keep_connected, 0x2608, 0x8, true, 0xed136d00496cd624)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgFdo.m_AchievedStart", m_achieved_start, 0x2610, 0x8, true, 0x4860c0c2b4646011)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::system_thread_t*), "FxPkgFdo.m_PowerThread", m_power_thread, 0x26c0, 0x40, true, 0xbda4f4467e4d221b)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxPkgFdo.m_PowerThreadInterfaceReferenceCount", m_power_thread_interface_reference_count, 0x2700, 0x20, true, 0xe0c1f9fc52cbc3df)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t*), "FxPkgFdo.m_PowerThreadEvent", m_power_thread_event, 0x2740, 0x40, true, 0x994a5e59087ecc5)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "FxPkgFdo.m_PendingPnPIrp", m_pending_pn_p_irp, 0x2780, 0x40, true, 0x790e6bb8a652b48f)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgFdo.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0xc4f2cf288034d855, 1, uint16_t)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "FxPkgFdo.m_PendingSystemPowerIrp", m_pending_system_power_irp, 0x27c0, 0x40, true, 0xbf1825008754907b)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "FxPkgFdo.m_PendingDevicePowerIrp", m_pending_device_power_irp, 0x2800, 0x40, true, 0xd2ee9630cadca9d2)
#define _m082 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::pnp_state_callback_t*), "FxPkgFdo.m_PnpStateCallbacks", m_pnp_state_callbacks, 0x2840, 0x40, true, 0x5c1d76b11da851c0)
#define _m083 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::power_state_callback_t*), "FxPkgFdo.m_PowerStateCallbacks", m_power_state_callbacks, 0x2880, 0x40, true, 0x3df9761bea29c162)
#define _m084 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::power_policy_state_callback_t*), "FxPkgFdo.m_PowerPolicyStateCallbacks", m_power_policy_state_callbacks, 0x28c0, 0x40, true, 0x40bc6b53dff3159a)
#define _m085 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_usage_notification_t), "FxPkgFdo.m_DeviceUsageNotification", m_device_usage_notification, 0x2900, 0x40, true, 0xdf77e913fbf4552e)
#define _m086 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_usage_notification_ex_t), "FxPkgFdo.m_DeviceUsageNotificationEx", m_device_usage_notification_ex, 0x2940, 0x40, true, 0x5a41a5f08fb557e1)
#define _m087 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_relations_query_t), "FxPkgFdo.m_DeviceRelationsQuery", m_device_relations_query, 0x2980, 0x40, true, 0x6a42bbeae581d631)
#define _m088 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_d0_entry_t), "FxPkgFdo.m_DeviceD0Entry", m_device_d0_entry, 0x29c0, 0x80, true, 0x86460539dec043e7)
#define _m089 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_d0_entry_post_interrupts_enabled_t), "FxPkgFdo.m_DeviceD0EntryPostInterruptsEnabled", m_device_d0_entry_post_interrupts_enabled, 0x2b40, 0x40, true, 0x7e801d6f1162aa29)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgFdo.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0xd26c2889d84645da, 1, uint16_t)
#define _m090 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_d0_exit_pre_interrupts_disabled_t), "FxPkgFdo.m_DeviceD0ExitPreInterruptsDisabled", m_device_d0_exit_pre_interrupts_disabled, 0x2b80, 0x40, true, 0xa2b3a053099a856b)
#define _m091 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_d0_exit_t), "FxPkgFdo.m_DeviceD0Exit", m_device_d0_exit, 0x2bc0, 0x80, true, 0x14792282c491e2ef)
#define _m092 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_prepare_hardware_t), "FxPkgFdo.m_DevicePrepareHardware", m_device_prepare_hardware, 0x2fc0, 0xc0, true, 0x365e651c1887f34a)
#define _m093 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_release_hardware_t), "FxPkgFdo.m_DeviceReleaseHardware", m_device_release_hardware, 0x3180, 0x80, true, 0x6773dcecdff1d26f)
#define _m094 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_query_stop_t), "FxPkgFdo.m_DeviceQueryStop", m_device_query_stop, 0x3300, 0x40, true, 0x4f9bdd4d528bc9b6)
#define _m095 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_query_remove_t), "FxPkgFdo.m_DeviceQueryRemove", m_device_query_remove, 0x3340, 0x40, true, 0xe3c7ca06d85deebb)
#define _m096 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_surprise_removal_t), "FxPkgFdo.m_DeviceSurpriseRemoval", m_device_surprise_removal, 0x3380, 0x40, true, 0x5005b88f8c35a118)
#define _m097 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::child_list_t*), "FxPkgFdo.m_DefaultDeviceList", m_default_device_list, 0x34c0, 0x40, true, 0xa363845da34fea7e)
#define _m098 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::child_list_t*), "FxPkgFdo.m_StaticDeviceList", m_static_device_list, 0x3500, 0x40, true, 0x51d68a43efda9d6c)
#define _m099 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::io_target_t*), "FxPkgFdo.m_DefaultTarget", m_default_target, 0x3540, 0x40, true, 0x3f8af89e478f4b37)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgFdo.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x3f92c03bc146338e, 1, uint16_t)
#define _m100 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::io_target_self_t*), "FxPkgFdo.m_SelfTarget", m_self_target, 0x3580, 0x40, true, 0x7e95771deee1efd8)
#define _m101 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(reenumerate_self_interface_standard_t ), "FxPkgFdo.m_SurpriseRemoveAndReenumerateSelfInterface", m_surprise_remove_and_reenumerate_self_interface, 0x35c0, 0x40, true, 0x5ebd1d7517c561b5)
#define _m102 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_filter_resource_requirements_t), "FxPkgFdo.m_DeviceFilterAddResourceRequirements", m_device_filter_add_resource_requirements, 0x3700, 0x40, true, 0x7f9020a012750050)
#define _m103 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_filter_resource_requirements_t), "FxPkgFdo.m_DeviceFilterRemoveResourceRequirements", m_device_filter_remove_resource_requirements, 0x3740, 0x40, true, 0x72c42d1345a3616c)
#define _m104 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_remove_added_resources_t), "FxPkgFdo.m_DeviceRemoveAddedResources", m_device_remove_added_resources, 0x3780, 0x40, true, 0xbc7a919afd2f5e32)
#define _m105 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgFdo.m_Filter", m_filter, 0x37c0, 0x8, true, 0x24e7bc7448967524)
#define _m106 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fx::pnp_state_t), "FxPkgFdo.m_PnpState", m_pnp_state, 0x3c0, 0x20, true, 0xfafbf91c43c62ef3)
#define _m107 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fx::pnp_caps_t), "FxPkgFdo.m_PnpCaps", m_pnp_caps, 0x3e0, 0x20, true, 0xe570cbafcbea4137)
#define _m108 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::companion_target_t*), "FxPkgFdo.m_CompanionTarget", m_companion_target, 0x1f40, 0x40, true, 0xe9784b881e93ff91)
#define _m109 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxPkgFdo.m_CompanionTargetStatus", m_companion_target_status, 0x1f80, 0x20, true, 0x8255bc5d77883b56)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgFdo.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x365daf4c5cf2dbc5, 1, uint16_t)
#define _m110 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::system_work_item_t*), "FxPkgFdo.m_SetDeviceFailedAttemptRestartWorkItem", m_set_device_failed_attempt_restart_work_item, 0x24c0, 0x40, true, 0x38c2ac3077d20f6)
#define _m111 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::sleep_study_interface_t*), "FxPkgFdo.m_SleepStudy", m_sleep_study, 0x2640, 0x40, true, 0xd68e96c4bab80c0c)
#define _m112 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "FxPkgFdo.m_SleepStudyPowerRefIoCount", m_sleep_study_power_ref_io_count, 0x2680, 0x20, true, 0xdc44e727514e88f3)
#define _m113 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPkgFdo.m_SleepStudyTrackReferences", m_sleep_study_track_references, 0x26a0, 0x8, true, 0x20abc39f4f46758a)
#define _m114 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_d0_entry_post_hw_enabled_t), "FxPkgFdo.m_DeviceD0EntryPostHardwareEnabled", m_device_d0_entry_post_hardware_enabled, 0x2d40, 0x40, true, 0xf36f5362b7a75ff1)
#define _m115 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pnp_device_d0_exit_pre_hw_disabled_t), "FxPkgFdo.m_DeviceD0ExitPreHardwareDisabled", m_device_d0_exit_pre_hardware_disabled, 0x2e80, 0x40, true, 0x896ea6711403e1ae)
#define _m116 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fx::pnp_state_and_caps_t), "FxPkgFdo.m_PnpStateAndCaps", m_pnp_state_and_caps, 0x0, 0x0, false, 0x1497c6c51be5662e)
#define _m117 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::system_work_item_t*), "FxPkgFdo.m_SurpriseRemoveAndReenumerateSelfWorkItem", m_surprise_remove_and_reenumerate_self_work_item, 0x0, 0x0, false, 0x19cffa232b311bb7)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgFdo.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xd1f7329affeed011, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPkgFdo.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x6c7c4b5b0d1ced5d, 1, uint16_t)
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
#define _m12
#define _m13
#endif