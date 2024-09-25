#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxLookasideListFromPool.m_Type", m_type, 0x40, 0x10, true, 0xdad4b739d243ede7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxLookasideListFromPool.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x2f8e3e171ae6b0f9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxLookasideListFromPool.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xf626d41d4e897446)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxLookasideListFromPool.m_Globals", m_globals, 0x80, 0x40, true, 0x6ea60af33a48c5a4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxLookasideListFromPool.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x3ba5f2522c009db3)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxLookasideListFromPool.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0xab54bd0362896f4a, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxLookasideListFromPool.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xcc75477ba274d887, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxLookasideListFromPool.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x1b9c6a69f4250c5a, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxLookasideListFromPool.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0xdae2861972b65e58, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxLookasideListFromPool.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x75a082f183999bed, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxLookasideListFromPool.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0xee8dcdc45a32b032, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxLookasideListFromPool.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0xc3847e5bf9e5c079, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxLookasideListFromPool.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x9a4359b2c8edf3c5, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxLookasideListFromPool.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0xc0718356d72926d8, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxLookasideListFromPool.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0xa51b6443f164cd4)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxLookasideListFromPool.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x90472850fd9e551)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxLookasideListFromPool.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x3ab223451cf5a73d)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxLookasideListFromPool.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x4559156ca67f9121)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxLookasideListFromPool.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0xd31c25228b94875e)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxLookasideListFromPool.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x6c9f77f2f6b514e1)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxLookasideListFromPool.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0xf6c39dc9a1c0c1ca)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxLookasideListFromPool.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xfc5abd04f901ce3c)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxLookasideListFromPool.m_Device", m_device, 0x300, 0x40, true, 0xb1de7fdfb5dbdc2b)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::object_attributes_t), "FxLookasideListFromPool.m_MemoryAttributes", m_memory_attributes, 0x340, 0xc0, true, 0xcb8251be9a2ce75d)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxLookasideListFromPool.m_BufferSize", m_buffer_size, 0x500, 0x40, true, 0x935af90040a5c971)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxLookasideListFromPool.m_MemoryObjectSize", m_memory_object_size, 0x540, 0x40, true, 0x33db880b8bb951b0)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxLookasideListFromPool.m_PoolTag", m_pool_tag, 0x580, 0x20, true, 0xc5e4dd42d419f702)
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
#define _m26
#endif