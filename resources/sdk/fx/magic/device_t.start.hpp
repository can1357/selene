#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDevice.m_Type", m_type, 0x40, 0x10, true, 0x99bc26779e865036)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDevice.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x1d2514bacf38be4c)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxDevice.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xbaa2c8f8a034d732)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxDevice.m_Globals", m_globals, 0x80, 0x40, true, 0x8eff59a9731b9323)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDevice.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x804e26e0268249ef)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxDevice.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x50a75605233065d1)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDevice.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x1f55ce53d3437535)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxDevice.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x3e2c50ca5cfc0fd7)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxDevice.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x96df59623bab4f8a)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxDevice.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0xb346d81c5f4dbfa6)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxDevice.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x24e56288e2622156)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxDevice.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x5522b64b0e195a80)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxDevice.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x66572c78a8969a42)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxDevice.m_Device", m_device, 0x300, 0x40, true, 0x140a5e3268033f91)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxDevice.m_NPLock", m_np_lock, 0x340, 0x80, true, 0xc5b53f3780f4295d)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::dispose_list_t*), "FxDevice.m_DisposeList", m_dispose_list, 0x400, 0x40, true, 0x3aacf7b5c3827a60)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::driver_t*), "FxDevice.m_Driver", m_driver, 0x440, 0x40, true, 0xa49163df2db9097d)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::device_object_t), "FxDevice.m_DeviceObject", m_device_object, 0x480, 0x40, true, 0xbf9e11362047680e)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::device_object_t), "FxDevice.m_AttachedDevice", m_attached_device, 0x4c0, 0x40, true, 0x67e37105742827b9)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::device_object_t), "FxDevice.m_PhysicalDevice", m_physical_device, 0x500, 0x40, true, 0x39f9cefd4a9bef47)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::callback_lock_t*), "FxDevice.m_CallbackLockPtr", m_callback_lock_ptr, 0x540, 0x40, true, 0x12ce4d0172a5a535)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxDevice.m_CallbackLockObjectPtr", m_callback_lock_object_ptr, 0x580, 0x40, true, 0x5724b2a7503b52c4)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::execution_level_t), "FxDevice.m_ExecutionLevel", m_execution_level, 0x5c0, 0x20, true, 0xe2c1d0527563b0b4)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::synchronization_scope_t), "FxDevice.m_SynchronizationScope", m_synchronization_scope, 0x5e0, 0x20, true, 0x51da24f32d4596f4)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxDevice.m_DmaPacketTransactionStatus", m_dma_packet_transaction_status, 0x600, 0x20, true, 0x35f39eaa2f1cc393)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_pnp_state_t), "FxDevice.m_CurrentPnpState", m_current_pnp_state, 0x640, 0x20, true, 0xee4626322a227d9f)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "FxDevice.m_CurrentPowerState", m_current_power_state, 0x660, 0x20, true, 0x966b9c09c9c80eaf)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_policy_state_t), "FxDevice.m_CurrentPowerPolicyState", m_current_power_policy_state, 0x680, 0x20, true, 0xa69a1d0d66409f50)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_io_type_t), "FxDevice.m_ReadWriteIoType", m_read_write_io_type, 0x6a0, 0x20, true, 0x28ebaac7a3d57f47)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDevice.m_CallbackFlags", m_callback_flags, 0x6c0, 0x8, true, 0xe3574d696607a9da)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDevice.m_Filter", m_filter, 0x6c8, 0x8, true, 0xfc6199ec484514d3)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDevice.m_PowerPageableCapable", m_power_pageable_capable, 0x6d0, 0x8, true, 0x3127bf32ad813322)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDevice.m_ParentWaitingOnChild", m_parent_waiting_on_child, 0x6d8, 0x8, true, 0x31d102fbc2e51a40)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDevice.m_Exclusive", m_exclusive, 0x6e0, 0x8, true, 0x146e6aae73e457dd)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDevice.m_Legacy", m_legacy, 0x6e8, 0x8, true, 0xc9f1e1e2ac131d35)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDevice.m_DeviceObjectDeleted", m_device_object_deleted, 0x6f0, 0x8, true, 0xea5af88008b52fb6)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "FxDevice.m_DefaultPriorityBoost", m_default_priority_boost, 0x6f8, 0x8, true, 0xfa83e36527aaeda9)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxDevice.m_ParentDevice", m_parent_device, 0x700, 0x40, true, 0xdb3cc31616ff062e)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "FxDevice.m_DeviceName", m_device_name, 0x740, 0x80, true, 0xfe21b5f78b179238)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "FxDevice.m_SymbolicLinkName", m_symbolic_link_name, 0x7c0, 0x80, true, 0x2c22cd6d14c3b508)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "FxDevice.m_MofResourceName", m_mof_resource_name, 0x840, 0x80, true, 0x5bed439980895028)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDevice.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0xf4de14f154864c89, 1, uint16_t)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDevice.m_PdoKnown", m_pdo_known, 0x8c0, 0x8, true, 0xefde48d84b69010d)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDevice.m_AutoForwardCleanupClose", m_auto_forward_cleanup_close, 0x8c8, 0x8, true, 0xa0ec6deb23d76e6e)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDevice.m_SelfIoTargetNeeded", m_self_io_target_needed, 0x8d0, 0x8, true, 0x51f8803441aa5780)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDevice.m_DeviceTelemetryInfoFlags", m_device_telemetry_info_flags, 0x8e0, 0x10, true, 0x9ce5069169c904c8)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::fileobject_class_t), "FxDevice.m_FileObjectClass", m_file_object_class, 0x900, 0x20, true, 0x71390d209e1b784b)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::spin_lock_transactioned_list_t), "FxDevice.m_IoTargetsList", m_io_targets_list, 0x940, 0x40, true, 0x4578441707ec66dd)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxDevice.m_PreprocessInfoListHead", m_preprocess_info_list_head, 0xb80, 0x80, true, 0x954ccc4215bb5452)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxDevice.m_CxDeviceInfoListHead", m_cx_device_info_list_head, 0xc00, 0x80, true, 0x10113b4ad1317dce)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxDevice.m_FileObjectListHead", m_file_object_list_head, 0xc80, 0x80, true, 0x43a90e07ef0ab2c1)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::npaged_lookaside_list_t), "FxDevice.m_RequestLookasideList", m_request_lookaside_list, 0xe00, 0x0, true, 0x2cf6bd402e3c79f0)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDevice.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x76c39721ce3f04aa, 1, uint16_t)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxDevice.m_RequestLookasideListElementSize", m_request_lookaside_list_element_size, 0x1200, 0x40, true, 0x65bd25e7c8cd3528)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::object_attributes_t), "FxDevice.m_RequestAttributes", m_request_attributes, 0x1240, 0xc0, true, 0xef1632804acaf7b3)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_io_t*), "FxDevice.m_PkgIo", m_pkg_io, 0x1400, 0x40, true, 0x396b9ecc38a1479f)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_pnp_t*), "FxDevice.m_PkgPnp", m_pkg_pnp, 0x1440, 0x40, true, 0x3f9cb6695194550d)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_general_t*), "FxDevice.m_PkgGeneral", m_pkg_general, 0x1480, 0x40, true, 0x6aa13d3fb22c18ea)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::wmi_irp_handler_t*), "FxDevice.m_PkgWmi", m_pkg_wmi, 0x14c0, 0x40, true, 0x1f402fb4c30ae0df)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::default_irp_handler_t*), "FxDevice.m_PkgDefault", m_pkg_default, 0x1500, 0x40, true, 0xacc59aa12fc8009b)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDevice.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xaecb4bc8878def69, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDevice.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0xb9ef221020acd3f5, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDevice.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0xffbf5692ce9b6fb5, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDevice.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0xa65601517fc4ab9e, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDevice.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x200a9f3431006927, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDevice.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x8efb153502a98f75, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDevice.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x1008bd91e672a00a, 1, uint16_t)
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
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#endif