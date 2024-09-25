#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxIoTargetSelf.m_Type", m_type, 0x40, 0x10, true, 0xd24169674d84235f)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxIoTargetSelf.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x61c652d00538fe7f)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxIoTargetSelf.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xa44354f2819606eb)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxIoTargetSelf.m_Globals", m_globals, 0x80, 0x40, true, 0x1d826f851b3aa441)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxIoTargetSelf.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x876da6128acc2427)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxIoTargetSelf.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0xbf6f5bc653a7a5e5)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxIoTargetSelf.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0xb8204be2da79d012)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxIoTargetSelf.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x3142ec8700def29f)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxIoTargetSelf.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0xf6f91d4519d3059e)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxIoTargetSelf.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0xcc7886b73bf054b5)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxIoTargetSelf.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x53d87c28c32294a2)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxIoTargetSelf.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0xc1679cafa1f5fa25)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxIoTargetSelf.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x545291a4168ead93)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxIoTargetSelf.m_Device", m_device, 0x300, 0x40, true, 0x78e8da416a4ac311)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxIoTargetSelf.m_NPLock", m_np_lock, 0x340, 0x80, true, 0x22e0d289a498e1bf)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::transactioned_entry_t), "FxIoTargetSelf.m_TransactionedEntry", m_transactioned_entry, 0x3c0, 0x80, true, 0x8b51fa0fc0af8b1e)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoTargetSelf.m_InStack", m_in_stack, 0x540, 0x8, true, 0x8e646a31951efe5)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoTargetSelf.m_AddedToDeviceList", m_added_to_device_list, 0x548, 0x8, true, 0x2312a86b59974775)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxIoTargetSelf.m_SentIoListHead", m_sent_io_list_head, 0x580, 0x80, true, 0x6b9c0575a3fe3cee)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxIoTargetSelf.m_IgnoredIoListHead", m_ignored_io_list_head, 0x600, 0x80, true, 0x2b434113a2d819cb)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t), "FxIoTargetSelf.m_SentIoEvent", m_sent_io_event, 0x680, 0x0, true, 0x3220571f0e588722)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t*), "FxIoTargetSelf.m_DisposeEvent", m_dispose_event, 0x780, 0x40, true, 0x2b96f7ee3f1e076a)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::irp_queue_t), "FxIoTargetSelf.m_PendedQueue", m_pended_queue, 0x7c0, 0x40, true, 0x7c8b7c2d8300b0d4)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::driver_t*), "FxIoTargetSelf.m_Driver", m_driver, 0x900, 0x40, true, 0xb0d5fe68087f6a14)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "FxIoTargetSelf.m_InStackDevice", m_in_stack_device, 0x940, 0x40, true, 0x203596d62b756c29)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "FxIoTargetSelf.m_TargetDevice", m_target_device, 0x980, 0x40, true, 0xfd84677b37fe8034)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "FxIoTargetSelf.m_TargetPdo", m_target_pdo, 0x9c0, 0x40, true, 0x44eae81904637bd0)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "FxIoTargetSelf.m_TargetFileObject", m_target_file_object, 0xa00, 0x40, true, 0x5167a9bb4bdfbb53)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::io_target_state_t), "FxIoTargetSelf.m_State", m_state, 0xa40, 0x20, true, 0x4bdb0237cc46b38a)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxIoTargetSelf.m_IoCount", m_io_count, 0xa60, 0x20, true, 0x1884ddfd46626034)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "FxIoTargetSelf.m_TargetStackSize", m_target_stack_size, 0xa80, 0x8, true, 0xe513bb5e0de37845)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoTargetSelf.m_TargetIoType", m_target_io_type, 0xa88, 0x8, true, 0xb3e01ed336398687)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoTargetSelf.m_WaitingForSentIo", m_waiting_for_sent_io, 0xa90, 0x8, true, 0xbe008b86959f764a)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoTargetSelf.m_Removing", m_removing, 0xa98, 0x8, true, 0xbff93af86807cef9)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::io_queue_t*), "FxIoTargetSelf.m_DispatchQueue", m_dispatch_queue, 0xac0, 0x40, true, 0xb06e6d83bee30548)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoTargetSelf.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x52b933fc94c5418d, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoTargetSelf.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x40d3cdc90948ae06, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoTargetSelf.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xece7e493b032321d, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoTargetSelf.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0xd9b4d3da4223f69e, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoTargetSelf.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0xecb37f9ee2b1a1f9, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoTargetSelf.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x8015a0dbf6e77d50, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoTargetSelf.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x62df09fb5fa42ef6, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoTargetSelf.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xb6453fe4068ed4a2, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoTargetSelf.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0xc3675c24f34448a8, 1, uint16_t)
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