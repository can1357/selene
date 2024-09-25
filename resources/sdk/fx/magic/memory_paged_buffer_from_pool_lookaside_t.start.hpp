#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryPagedBufferFromPoolLookaside.m_Type", m_type, 0x40, 0x10, true, 0x4b9bae07249bbf56)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryPagedBufferFromPoolLookaside.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x9091e66955e6c400)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxMemoryPagedBufferFromPoolLookaside.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x7751e4eb0c76eb37)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxMemoryPagedBufferFromPoolLookaside.m_Globals", m_globals, 0x80, 0x40, true, 0xe4e2ded669b7bce8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryPagedBufferFromPoolLookaside.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0xaa55a00786d1b62f)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryPagedBufferFromPoolLookaside.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0xcd6b276a731058b8, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryPagedBufferFromPoolLookaside.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x53d7bbd627130fea, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryPagedBufferFromPoolLookaside.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x92cd6a95722e84f1, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryPagedBufferFromPoolLookaside.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x4bef4375e8c9ed77, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryPagedBufferFromPoolLookaside.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0xfaade88365467852, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryPagedBufferFromPoolLookaside.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x894cd9bb0b5cbd83, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryPagedBufferFromPoolLookaside.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x2052381d3f433e89, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryPagedBufferFromPoolLookaside.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x611c70c9d18cc72c, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryPagedBufferFromPoolLookaside.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0xfb16464aa3e8d927, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxMemoryPagedBufferFromPoolLookaside.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0xac7a4cc7d9707247)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryPagedBufferFromPoolLookaside.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x8b8d1da80f165e7d)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxMemoryPagedBufferFromPoolLookaside.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x6f7db1df9bdc0206)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxMemoryPagedBufferFromPoolLookaside.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0xac17739998f5caea)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxMemoryPagedBufferFromPoolLookaside.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x1f616d924d332d0e)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxMemoryPagedBufferFromPoolLookaside.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0xd32ae4bb2174a9e8)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxMemoryPagedBufferFromPoolLookaside.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0xeeae63046175dbae)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxMemoryPagedBufferFromPoolLookaside.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x7f68f49cd1a820b0)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxMemoryPagedBufferFromPoolLookaside.m_Device", m_device, 0x300, 0x40, true, 0x272a33e5ed35f412)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxMemoryPagedBufferFromPoolLookaside.m_BufferSize", m_buffer_size, 0x380, 0x40, true, 0x9e2ba7f549ba3dcc)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::lookaside_list_t*), "FxMemoryPagedBufferFromPoolLookaside.m_pLookaside", m_p_lookaside, 0x3c0, 0x40, true, 0x129aee51935bcdf8)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxMemoryPagedBufferFromPoolLookaside.m_Pool", m_pool, 0x400, 0x40, true, 0x4ed39d0ceaa66778)
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