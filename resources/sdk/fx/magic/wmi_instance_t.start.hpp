#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxWmiInstance.m_Type", m_type, 0x40, 0x10, true, 0x395efc3486901e01)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxWmiInstance.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0xcc15e5b3741a87d6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxWmiInstance.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x53d39191babc6ca2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxWmiInstance.m_Globals", m_globals, 0x80, 0x40, true, 0xd9e975814da44868)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxWmiInstance.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0xd6474d2f7a99e8dd)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiInstance.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x1c0c6c7cd334bed0, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiInstance.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x71f6c76db185918a, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiInstance.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x400ef58a64450dcf, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiInstance.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x81d6575dd81de7a, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiInstance.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x9496fc44f399b8dc, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiInstance.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0xf5e5982d8d508727, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiInstance.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0xd52256d0bc71b41, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiInstance.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x6acc9473ea2c5f71, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiInstance.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x6171e31e40f50aac, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxWmiInstance.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0xa30b8eeeafcf76b7)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxWmiInstance.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x6b16356256094744)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxWmiInstance.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xc7571ec641ff508c)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxWmiInstance.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x9aec523034f7ddcf)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxWmiInstance.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0xd353f9da89d40d9)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxWmiInstance.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0xd3eb9b961ae66b09)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxWmiInstance.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x17acf6cc4257540c)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxWmiInstance.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xa403279a5ead075c)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxWmiInstance.m_Device", m_device, 0x300, 0x40, true, 0x1cf907ad7d1e9ac7)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxWmiInstance.m_NPLock", m_np_lock, 0x340, 0x80, true, 0x2aa43205a712ba9b)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxWmiInstance.m_ListEntry", m_list_entry, 0x3c0, 0x80, true, 0x98af30c3f10a2db9)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::wmi_provider_t*), "FxWmiInstance.m_Provider", m_provider, 0x440, 0x40, true, 0x147de63788d0bf58)
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