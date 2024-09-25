#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxIoTarget.m_Type", m_type, 0x40, 0x10, true, 0xcc9899cb422e4571)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxIoTarget.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0xb9ef0e28a970cf31)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxIoTarget.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xb5a22e9a52c04111)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxIoTarget.m_Globals", m_globals, 0x80, 0x40, true, 0x9b1144e86b603464)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxIoTarget.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0xbc5c74f7f117460)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxIoTarget.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x25e65ad6c49283de)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxIoTarget.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x81d428ce18972a13)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxIoTarget.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xfd19ed6ed2ce30d0)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxIoTarget.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x301bb824ff187156)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxIoTarget.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x2c68467d4206c1a0)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxIoTarget.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0xeb9d099590782532)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxIoTarget.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x7f59fc1385285cb4)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxIoTarget.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x9f52aa02754f5b7f)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxIoTarget.m_Device", m_device, 0x300, 0x40, true, 0xdba14209bfaf7bde)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxIoTarget.m_NPLock", m_np_lock, 0x340, 0x80, true, 0x55f19790292c02a8)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::transactioned_entry_t), "FxIoTarget.m_TransactionedEntry", m_transactioned_entry, 0x3c0, 0x80, true, 0x2c16b5e78d251319)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoTarget.m_InStack", m_in_stack, 0x540, 0x8, true, 0x7331f11f6715ed77)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoTarget.m_AddedToDeviceList", m_added_to_device_list, 0x548, 0x8, true, 0x5b3117a04aef87fd)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxIoTarget.m_SentIoListHead", m_sent_io_list_head, 0x580, 0x80, true, 0xdb77d717e920cee1)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxIoTarget.m_IgnoredIoListHead", m_ignored_io_list_head, 0x600, 0x80, true, 0xec7f02694379bf0)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t), "FxIoTarget.m_SentIoEvent", m_sent_io_event, 0x680, 0x0, true, 0xcf310ded1dcfd242)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t*), "FxIoTarget.m_DisposeEvent", m_dispose_event, 0x780, 0x40, true, 0x75886cf087454ca4)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::irp_queue_t), "FxIoTarget.m_PendedQueue", m_pended_queue, 0x7c0, 0x40, true, 0xa89221af0ddb5672)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::driver_t*), "FxIoTarget.m_Driver", m_driver, 0x900, 0x40, true, 0x348263944f8c44b6)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "FxIoTarget.m_InStackDevice", m_in_stack_device, 0x940, 0x40, true, 0x74fba2d6cfc63a5a)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "FxIoTarget.m_TargetDevice", m_target_device, 0x980, 0x40, true, 0x265a1bf0b51efd53)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "FxIoTarget.m_TargetPdo", m_target_pdo, 0x9c0, 0x40, true, 0x2a63c4abacb0d011)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "FxIoTarget.m_TargetFileObject", m_target_file_object, 0xa00, 0x40, true, 0xd91e6e7a97a6f0f1)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::io_target_state_t), "FxIoTarget.m_State", m_state, 0xa40, 0x20, true, 0xd38cb0ce364af563)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxIoTarget.m_IoCount", m_io_count, 0xa60, 0x20, true, 0x3825c19d9d14e56f)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "FxIoTarget.m_TargetStackSize", m_target_stack_size, 0xa80, 0x8, true, 0xe1161959ea6367e2)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoTarget.m_TargetIoType", m_target_io_type, 0xa88, 0x8, true, 0x5b189d0fdb1e531c)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoTarget.m_WaitingForSentIo", m_waiting_for_sent_io, 0xa90, 0x8, true, 0xe890ec848ac7dcd5)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoTarget.m_Removing", m_removing, 0xa98, 0x8, true, 0x369d1d9d303bddd9)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoTarget.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x62299ec9379b97e7, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoTarget.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x46c0f31e6e1d2801, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoTarget.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xabf6406f27ff68b7, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoTarget.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x464a19cff1b54c5d, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoTarget.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0xf2cc6f3b27fc10f6, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoTarget.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x471eb2e31ee4a577, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoTarget.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x5ba218e037bb43c8, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoTarget.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x4aa62203cd3a9c78, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoTarget.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x15fdd07d2631d520, 1, uint16_t)
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
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#endif