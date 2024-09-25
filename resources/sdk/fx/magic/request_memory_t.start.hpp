#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxRequestMemory.m_Type", m_type, 0x40, 0x10, true, 0xad2410c8b92c047d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxRequestMemory.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x6077e30323cd977)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxRequestMemory.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xd3ea144feb5f16eb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxRequestMemory.m_Globals", m_globals, 0x80, 0x40, true, 0x549cdc86a37e934a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxRequestMemory.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x9c4a7e5974c55bae)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequestMemory.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x5f453ea61256f3bd, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequestMemory.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x9963864228290c5f, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequestMemory.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xdf6dbf4c0a0847b1, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequestMemory.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x1e7a1a32bf4adfc0, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequestMemory.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x995f20d295fbcc8e, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequestMemory.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x20b86fc5b8246af1, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequestMemory.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x4184b03df7cb09ea, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequestMemory.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x793af8b41f42ad53, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequestMemory.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x26174f19a00edf18, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxRequestMemory.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0xaba2b148267fec2e)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxRequestMemory.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0xc3ac09ac71e19ac7)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxRequestMemory.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xf4c2ce204adb9e4f)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxRequestMemory.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x593c598617215767)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxRequestMemory.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0xd0f6f89b9d630569)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxRequestMemory.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x5f4cb04c121cf360)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxRequestMemory.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x933426bc67a818a2)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxRequestMemory.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x68fb8c42b700f4a2)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxRequestMemory.m_Device", m_device, 0x300, 0x40, true, 0x368c7fe836df146b)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "FxRequestMemory.m_BufferSize", m_buffer_size, 0x380, 0x40, true, 0xec935c2511cd339c)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxRequestMemory.m_pBuffer", m_p_buffer, 0x3c0, 0x40, true, 0xfc7eb46fb599bf39)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::request_t*), "FxRequestMemory.m_Request", m_request, 0x400, 0x40, true, 0x6242df988012fac1)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "FxRequestMemory.m_Mdl", m_mdl, 0x440, 0x40, true, 0x5558643e2dc3462e)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxRequestMemory.m_Flags", m_flags, 0x480, 0x10, true, 0x8a6749805cb6184d)
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