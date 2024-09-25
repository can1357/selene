#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryBufferFromPool.m_Type", m_type, 0x40, 0x10, true, 0x3dce946b645dee37)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryBufferFromPool.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x72a4ef055bc7e1ca)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxMemoryBufferFromPool.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xa25543e0d0c6fcb0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxMemoryBufferFromPool.m_Globals", m_globals, 0x80, 0x40, true, 0x43e89cbbffb3ce7d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryBufferFromPool.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0xcd2965f15687f8dd)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferFromPool.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x3009738b7987e298, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferFromPool.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x751ef630d22cdeec, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferFromPool.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xa49dae20f35948d2, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferFromPool.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x840843528fb02e1d, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferFromPool.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0xc111535d2a6e02b9, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferFromPool.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x81fe05690fe08f7a, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferFromPool.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x57d4c19223d6eef8, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferFromPool.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xce79349098e88bdc, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferFromPool.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x30a2d9d384aeb991, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxMemoryBufferFromPool.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0xdec6c46e9fb630ab)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryBufferFromPool.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x17e6c4eb022d64a3)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxMemoryBufferFromPool.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x4878f5e472d02ae2)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxMemoryBufferFromPool.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0xfe65c16c0d083b1)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxMemoryBufferFromPool.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x69016760b5006910)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxMemoryBufferFromPool.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0xf7d11cd2c583cab4)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxMemoryBufferFromPool.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0xfd039f05104fd047)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxMemoryBufferFromPool.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x56658301b28e0a74)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxMemoryBufferFromPool.m_Device", m_device, 0x300, 0x40, true, 0x50829c43c6d4f67)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxMemoryBufferFromPool.m_BufferSize", m_buffer_size, 0x380, 0x40, true, 0x3cfc7bc4ef0fab99)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxMemoryBufferFromPool.m_Pool", m_pool, 0x3c0, 0x40, true, 0x4dd0e3bc6fb30c5c)
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