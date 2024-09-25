#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxResourceCm.m_Type", m_type, 0x40, 0x10, true, 0x1981b15aefcc5684)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxResourceCm.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x4b7c24a6ab6bbc0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxResourceCm.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xd2447d0272fafabc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxResourceCm.m_Globals", m_globals, 0x80, 0x40, true, 0x44a1dde68f050a60)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxResourceCm.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x368efb48aa21e719)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxResourceCm.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x99e5de9d0099720, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxResourceCm.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xca51df8584fc0289, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxResourceCm.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xa8f0320919bed7d1, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxResourceCm.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x5e1a4011c0fa8c6d, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxResourceCm.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x6f56d01c60ac6c76, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxResourceCm.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0xed49f776ae0fb7af, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxResourceCm.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x896fc409b56bffb6, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxResourceCm.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xcb3c7be04c88d7fd, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxResourceCm.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0xd40903e7424bb9fe, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxResourceCm.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x98f8eeac3c2505ba)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxResourceCm.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x3acbf13ae4d418df)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxResourceCm.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xf6cd9243ef7d9c0e)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxResourceCm.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x9162f9747220f33)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxResourceCm.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0xca59ac5f81d4aafe)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxResourceCm.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x9de38fbfc96eb6d7)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxResourceCm.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x55613b64d714f518)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxResourceCm.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xa4545a5f09e15600)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxResourceCm.m_Device", m_device, 0x300, 0x40, true, 0x700e9d4ad357f5a0)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t), "FxResourceCm.m_Descriptor", m_descriptor, 0x340, 0xa0, true, 0x58d55d7a05cbd5a8)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t), "FxResourceCm.m_DescriptorClone", m_descriptor_clone, 0x3e0, 0xa0, true, 0xdb6d1e45be0be53)
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
#endif