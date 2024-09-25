#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryBufferFromPoolLookaside.m_Type", m_type, 0x40, 0x10, true, 0x2a49cab96ec53ffd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryBufferFromPoolLookaside.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0xc91e96b25df19626)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxMemoryBufferFromPoolLookaside.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xd68299af760fb78)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxMemoryBufferFromPoolLookaside.m_Globals", m_globals, 0x80, 0x40, true, 0x3a62b5dfc87cf29c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryBufferFromPoolLookaside.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x975b4da39c11fa2)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferFromPoolLookaside.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x8f5373eaf8db0ab3, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferFromPoolLookaside.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x919d1643ae6d4b39, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferFromPoolLookaside.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x6637f713821920b6, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferFromPoolLookaside.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0xa6ac7b894cea677c, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferFromPoolLookaside.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x50acf788ca3fbfe2, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferFromPoolLookaside.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x62f285b58b6e8ed1, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferFromPoolLookaside.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x433adcf40f721144, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferFromPoolLookaside.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xcb87f88d6c777fef, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferFromPoolLookaside.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0xe010450b50fbc991, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxMemoryBufferFromPoolLookaside.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x69008f4cc22ff151)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryBufferFromPoolLookaside.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x39603ec2627cb7a)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxMemoryBufferFromPoolLookaside.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x9be644cf7a0c6f04)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxMemoryBufferFromPoolLookaside.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x26f9436ffea24850)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxMemoryBufferFromPoolLookaside.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x7fd570c8da1f9a58)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxMemoryBufferFromPoolLookaside.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x620d6d75a7acef75)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxMemoryBufferFromPoolLookaside.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x36aa8fd9947975ed)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxMemoryBufferFromPoolLookaside.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x56817aecacc184b7)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxMemoryBufferFromPoolLookaside.m_Device", m_device, 0x300, 0x40, true, 0x686ba540c7d46f59)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxMemoryBufferFromPoolLookaside.m_BufferSize", m_buffer_size, 0x380, 0x40, true, 0xf8253e64cf9153a3)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::lookaside_list_t*), "FxMemoryBufferFromPoolLookaside.m_pLookaside", m_p_lookaside, 0x3c0, 0x40, true, 0xab0e7392b45641be)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxMemoryBufferFromPoolLookaside.m_Pool", m_pool, 0x400, 0x40, true, 0x583da02c4d68a0de)
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