#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxNPagedLookasideList.m_Type", m_type, 0x40, 0x10, true, 0x553543159cd21277)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxNPagedLookasideList.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x603766f68283226d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxNPagedLookasideList.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x8103a6546b292dd3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxNPagedLookasideList.m_Globals", m_globals, 0x80, 0x40, true, 0x135a36fee930ccd1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxNPagedLookasideList.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x891d5c60cee95290)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxNPagedLookasideList.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0xbfaab36c4fe240c9, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxNPagedLookasideList.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xa931fc52fbda2810, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxNPagedLookasideList.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x46ff8f013b207d3d, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxNPagedLookasideList.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x34e5259b5fe33552, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxNPagedLookasideList.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x7898b9d8325ebf02, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxNPagedLookasideList.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x6ac5adb90d58847, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxNPagedLookasideList.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x20fffa6a9d8155c4, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxNPagedLookasideList.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xbe062aa656d4c628, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxNPagedLookasideList.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0xdaa54307103dcc6b, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxNPagedLookasideList.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x2998b6245523e7a8)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxNPagedLookasideList.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0xb71275210939af26)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxNPagedLookasideList.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x112c1f18e32971d8)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxNPagedLookasideList.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x5a68285ce0698de5)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxNPagedLookasideList.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0xc877f5e020fe11be)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxNPagedLookasideList.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x137411b2bce2cd35)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxNPagedLookasideList.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x3b27183794538f8e)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxNPagedLookasideList.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x20eef08a6f6b6e98)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxNPagedLookasideList.m_Device", m_device, 0x300, 0x40, true, 0x28e1c14834d9739)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::object_attributes_t), "FxNPagedLookasideList.m_MemoryAttributes", m_memory_attributes, 0x340, 0xc0, true, 0x3a5584d28aafbbdf)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxNPagedLookasideList.m_BufferSize", m_buffer_size, 0x500, 0x40, true, 0xc25bb44d2c7f554e)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxNPagedLookasideList.m_MemoryObjectSize", m_memory_object_size, 0x540, 0x40, true, 0xa3b25a7047b4699a)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxNPagedLookasideList.m_PoolTag", m_pool_tag, 0x580, 0x20, true, 0x4d6575588e2b0a77)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::npaged_lookaside_list_t), "FxNPagedLookasideList.m_ObjectLookaside", m_object_lookaside, 0x600, 0x0, true, 0x59da524485ee907f)
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
#define _m27
#endif