#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPagedLookasideListFromPool.m_Type", m_type, 0x40, 0x10, true, 0x75832ce21638e388)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPagedLookasideListFromPool.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x7627bfce95f8166b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxPagedLookasideListFromPool.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x8c1bfc52e34feeee)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxPagedLookasideListFromPool.m_Globals", m_globals, 0x80, 0x40, true, 0x1dbdf4ec0f597e17)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPagedLookasideListFromPool.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x2502dee4dc2174cd)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPagedLookasideListFromPool.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x31856a56e928ba51, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPagedLookasideListFromPool.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x2ed97a483d9bc87f, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPagedLookasideListFromPool.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x764bc3bfdae1685d, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPagedLookasideListFromPool.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0xf56c1d536fe76dc1, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPagedLookasideListFromPool.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0xf554a8b3c54bf91f, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPagedLookasideListFromPool.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x4fe8fb6a40bfb23a, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPagedLookasideListFromPool.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0xe653d810b638b741, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPagedLookasideListFromPool.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x4273d6dee01ae753, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPagedLookasideListFromPool.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x92f2f7d3e055f8b6, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxPagedLookasideListFromPool.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x5785ee42a954b46c)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPagedLookasideListFromPool.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x5389393bc5aace49)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxPagedLookasideListFromPool.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x8d12c505f6f69fa4)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxPagedLookasideListFromPool.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x2bd791388440f62b)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxPagedLookasideListFromPool.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x3bfe34666ab4531b)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxPagedLookasideListFromPool.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x9f4d8c8a11d9e6c2)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxPagedLookasideListFromPool.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x1c7bbed07ba767c)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxPagedLookasideListFromPool.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xcc6199336cf4bc46)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxPagedLookasideListFromPool.m_Device", m_device, 0x300, 0x40, true, 0xdcf4b9178a84d47d)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::object_attributes_t), "FxPagedLookasideListFromPool.m_MemoryAttributes", m_memory_attributes, 0x340, 0xc0, true, 0xb5c788cb8f9d49e2)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxPagedLookasideListFromPool.m_BufferSize", m_buffer_size, 0x500, 0x40, true, 0x73e4913cf44a88b9)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxPagedLookasideListFromPool.m_MemoryObjectSize", m_memory_object_size, 0x540, 0x40, true, 0x84f944c2fafd8ec8)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPagedLookasideListFromPool.m_PoolTag", m_pool_tag, 0x580, 0x20, true, 0x73a724de9bd733d0)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxPagedLookasideListFromPool.m_RawBufferSize", m_raw_buffer_size, 0x5c0, 0x40, true, 0xff4b1db4de2feee9)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxPagedLookasideListFromPool.m_MemoryDeviceBase", m_memory_device_base, 0x600, 0x40, true, 0x953ae37b1edcbdc5)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::npaged_lookaside_list_t), "FxPagedLookasideListFromPool.m_ObjectLookaside", m_object_lookaside, 0x800, 0x0, true, 0xeb84ae0841af3c02)
#define _m30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::paged_lookaside_list_t), "FxPagedLookasideListFromPool.m_PoolLookaside", m_pool_lookaside, 0xc00, 0x0, true, 0xcefc1116d1a7fded)
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
#define _m29
#define _m30
#endif