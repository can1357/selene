#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxCollection.m_Type", m_type, 0x40, 0x10, true, 0x63e6c932f2c22dee)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxCollection.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0xb0b5d95c889c7ca7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxCollection.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xe0366aa52945b5a9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxCollection.m_Globals", m_globals, 0x80, 0x40, true, 0xa8e97d344e5182f8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxCollection.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0xdf6d66f1b91ad266)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCollection.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0xfd3111d18efc3af8, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCollection.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x454825403db774db, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCollection.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x782dc8710d81c1b1, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCollection.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x7d2a9a4ababff245, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCollection.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0xc1fcb059b9f37be1, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCollection.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0xe4e67e5c61aec3c, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCollection.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0xf810c3e4b71b87db, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCollection.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x442716e71aa3e5f3, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCollection.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x69b4aaa532567604, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxCollection.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x328ae98f91e4d8de)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxCollection.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x69079e9284230ea0)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxCollection.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x7495edf39b0302b1)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxCollection.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x2883199ebffe35a9)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxCollection.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0xe6803da4c73a08a)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxCollection.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x4a7c48cb37a76b2c)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxCollection.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0xd35c7e5b435a563e)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxCollection.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xb86031bd390abe7d)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxCollection.m_Device", m_device, 0x300, 0x40, true, 0xd5c4d596713e6b38)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxCollection.m_NPLock", m_np_lock, 0x340, 0x80, true, 0x12f7b44fc0ab43e3)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxCollection.m_Count", m_count, 0x3c0, 0x20, true, 0xf507a82a1ca05dab)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxCollection.m_ListHead", m_list_head, 0x400, 0x80, true, 0xf17ce4f0ac3db170)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#define _m25
#endif