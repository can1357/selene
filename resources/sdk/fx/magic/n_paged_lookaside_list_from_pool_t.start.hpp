#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxNPagedLookasideListFromPool.m_Type", m_type, 0x40, 0x10, true, 0x36ed68150df51545)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxNPagedLookasideListFromPool.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0xca1e7c3bc9175a0c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxNPagedLookasideListFromPool.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xc4c831ec0b5398b9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxNPagedLookasideListFromPool.m_Globals", m_globals, 0x80, 0x40, true, 0xc81a55805ca8f996)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxNPagedLookasideListFromPool.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x6957bab65ab258e7)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxNPagedLookasideListFromPool.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0xf0e30008f11299d6, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxNPagedLookasideListFromPool.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xf13ef3f998b82876, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxNPagedLookasideListFromPool.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x225cb07f7c2c661a, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxNPagedLookasideListFromPool.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x47adc2a54122bb7b, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxNPagedLookasideListFromPool.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x6d6506a2cd59b7aa, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxNPagedLookasideListFromPool.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x24f2344149767f16, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxNPagedLookasideListFromPool.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x24443346cf5eee04, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxNPagedLookasideListFromPool.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x12a8adc244ea05eb, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxNPagedLookasideListFromPool.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x71a9313cee5b61e7, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxNPagedLookasideListFromPool.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x652b6f2beb370246)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxNPagedLookasideListFromPool.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x9f090c20b3b9367a)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxNPagedLookasideListFromPool.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x91246f155b43b601)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxNPagedLookasideListFromPool.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0xafbc266041cdf6b3)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxNPagedLookasideListFromPool.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0xe0e5b2770f1c0ea5)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxNPagedLookasideListFromPool.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0xb4c15cad4043622a)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxNPagedLookasideListFromPool.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x4e354706c7ddc5fe)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxNPagedLookasideListFromPool.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xd434ae15b953669b)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxNPagedLookasideListFromPool.m_Device", m_device, 0x300, 0x40, true, 0xa47d5764274db3c)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::object_attributes_t), "FxNPagedLookasideListFromPool.m_MemoryAttributes", m_memory_attributes, 0x340, 0xc0, true, 0xdcb10a6694cb21fd)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxNPagedLookasideListFromPool.m_BufferSize", m_buffer_size, 0x500, 0x40, true, 0xb036b9e2f5f76971)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxNPagedLookasideListFromPool.m_MemoryObjectSize", m_memory_object_size, 0x540, 0x40, true, 0xbad10d82e3198269)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxNPagedLookasideListFromPool.m_PoolTag", m_pool_tag, 0x580, 0x20, true, 0x2d275000aeddae27)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::npaged_lookaside_list_t), "FxNPagedLookasideListFromPool.m_ObjectLookaside", m_object_lookaside, 0x600, 0x0, true, 0xe187744a78b92cf3)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::npaged_lookaside_list_t), "FxNPagedLookasideListFromPool.m_PoolLookaside", m_pool_lookaside, 0xa00, 0x0, true, 0xcbe235a62daec4f8)
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
#define _m28
#endif