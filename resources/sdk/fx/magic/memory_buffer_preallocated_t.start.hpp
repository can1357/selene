#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryBufferPreallocated.m_Type", m_type, 0x40, 0x10, true, 0xb6883bcf55bc04c8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryBufferPreallocated.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x552084ef625a7cc8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxMemoryBufferPreallocated.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x4702a7bbf2d8c22)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxMemoryBufferPreallocated.m_Globals", m_globals, 0x80, 0x40, true, 0x6fab9d45a7183b51)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryBufferPreallocated.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x1d81919aaae20c95)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferPreallocated.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x87bdf4e3f223db36, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferPreallocated.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xdd140dc021cb8011, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferPreallocated.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xd7a659fd69758411, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferPreallocated.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x2fe31244afa3c038, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferPreallocated.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x2543a0733dc5e89, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferPreallocated.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x8c4fa8ae93bd9728, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferPreallocated.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x2f688d2a8c76505c, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferPreallocated.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x46c808d6abffcb81, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxMemoryBufferPreallocated.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x5d4a4aeca711b020, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxMemoryBufferPreallocated.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0xae5e4a1645868af1)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxMemoryBufferPreallocated.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0xb7689ee14dff65a2)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxMemoryBufferPreallocated.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x52421989daec3f04)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxMemoryBufferPreallocated.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x1b24fe888000b23a)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxMemoryBufferPreallocated.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0xcfb0414fb6db4c1c)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxMemoryBufferPreallocated.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x8027c58530270d58)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxMemoryBufferPreallocated.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x9601b93c3dc32e82)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxMemoryBufferPreallocated.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x23b09f77e3b96db5)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxMemoryBufferPreallocated.m_Device", m_device, 0x300, 0x40, true, 0x6680aa3e2367a75)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxMemoryBufferPreallocated.m_BufferSize", m_buffer_size, 0x380, 0x40, true, 0x8b8cc283063faf25)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxMemoryBufferPreallocated.m_pBuffer", m_p_buffer, 0x3c0, 0x40, true, 0x1f1f49e3477d690f)
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