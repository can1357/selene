#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxLookasideList.m_Type", m_type, 0x40, 0x10, true, 0x9168eea3aa613875)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxLookasideList.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x9a587ff3c40652f4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxLookasideList.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x863d545c0458e800)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxLookasideList.m_Globals", m_globals, 0x80, 0x40, true, 0x5993ff77e44203a7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxLookasideList.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0xa3069e69901b6055)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxLookasideList.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x3eb87b389cf2a95a, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxLookasideList.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xd9ed6b96784cbedf, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxLookasideList.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x64a0e5134cdf2ee7, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxLookasideList.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x736f518d8828c35a, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxLookasideList.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0xe9d4f0e19fe3fee0, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxLookasideList.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x929f19698ed63786, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxLookasideList.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x852c0599a7a11b54, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxLookasideList.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x29f7bc9e8268db6e, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxLookasideList.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0xc66d142e8a7b572f, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxLookasideList.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x8d38cd4ecc0bad42)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxLookasideList.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x5bfdd541080331ba)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxLookasideList.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x867867eadc88d72f)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxLookasideList.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x334ae2d2f5e9c85d)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxLookasideList.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0xcf68aea0d7428873)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxLookasideList.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x7aeaeaa21ce9c424)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxLookasideList.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x5f744f89e1afd00)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxLookasideList.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xea2208d77ece4228)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxLookasideList.m_Device", m_device, 0x300, 0x40, true, 0x612eb21fd56c6487)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::object_attributes_t), "FxLookasideList.m_MemoryAttributes", m_memory_attributes, 0x340, 0xc0, true, 0x8f2003f8f33f08ab)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxLookasideList.m_BufferSize", m_buffer_size, 0x500, 0x40, true, 0xeaf27bb75bcb09a)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxLookasideList.m_MemoryObjectSize", m_memory_object_size, 0x540, 0x40, true, 0x3f7412409fe76441)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxLookasideList.m_PoolTag", m_pool_tag, 0x580, 0x20, true, 0x4aa1a71f7a7b2ed4)
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