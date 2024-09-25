#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryPagedBufferFromPool.m_Type", m_type, 0x40, 0x10, true, 0x3e935f77e5aa9411)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryPagedBufferFromPool.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0xc3a7b42feb2829aa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxMemoryPagedBufferFromPool.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x6f408138378a287b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxMemoryPagedBufferFromPool.m_Globals", m_globals, 0x80, 0x40, true, 0x98dd46acb20cabe)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryPagedBufferFromPool.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x778cd2bee3e2f456)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryPagedBufferFromPool.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x87cc8ee409c9e2bb, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryPagedBufferFromPool.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xcdc587a32adba9e7, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryPagedBufferFromPool.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x3ffba59f18332488, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryPagedBufferFromPool.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0xfd9870278a4ca07d, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryPagedBufferFromPool.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0xbec18e485d30d2f1, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryPagedBufferFromPool.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0xca710e8f839292c, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryPagedBufferFromPool.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x34dbad7cda915091, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryPagedBufferFromPool.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x33ce867a08a159a5, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryPagedBufferFromPool.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x2f1b660e690d7e1f, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxMemoryPagedBufferFromPool.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0xcbcc2512337436df)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryPagedBufferFromPool.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0xdb31a893fc40aeaa)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxMemoryPagedBufferFromPool.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x2a7bf58a104dd954)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxMemoryPagedBufferFromPool.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x44f327761f0e5c1a)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxMemoryPagedBufferFromPool.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x6c75cf1657b22604)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxMemoryPagedBufferFromPool.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x9f47d7854cff1472)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxMemoryPagedBufferFromPool.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x938149bdc82b238e)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxMemoryPagedBufferFromPool.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xb885cb7fb086154a)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxMemoryPagedBufferFromPool.m_Device", m_device, 0x300, 0x40, true, 0xf330da396e44fe2c)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxMemoryPagedBufferFromPool.m_BufferSize", m_buffer_size, 0x380, 0x40, true, 0x38dafece5b0f158f)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxMemoryPagedBufferFromPool.m_Pool", m_pool, 0x3c0, 0x40, true, 0xeb2c5c20a27a4e3d)
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