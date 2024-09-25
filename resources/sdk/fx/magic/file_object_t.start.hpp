#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxFileObject.m_Type", m_type, 0x40, 0x10, true, 0x4f3ccb3ff39b165)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxFileObject.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0xb876aa0cc84a0344)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxFileObject.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xf89d65114528e760)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxFileObject.m_Globals", m_globals, 0x80, 0x40, true, 0xd1733ac8f9571800)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxFileObject.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x18996d0fac880b99)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxFileObject.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0xbb5b3e74a56249ea, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxFileObject.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xa094c3c4f2866fab, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxFileObject.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x45cd5ed9d4326f7c, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxFileObject.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x2f931ecfb617a79, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxFileObject.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x45cb2d72b7b74b2a, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxFileObject.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x69238d01a1d07e63, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxFileObject.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0xbe741957e5537bd, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxFileObject.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xd28ffb927a502b5b, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxFileObject.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0xaf805a059ea2ab7a, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxFileObject.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0xceea4df76ffa192e)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxFileObject.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x2ddc6d126816d1dc)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxFileObject.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xf255ccf3342cca0b)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxFileObject.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0xac74381e2ffded14)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxFileObject.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x2448b34869cb27fa)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxFileObject.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x32501f66cb519267)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxFileObject.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x6c29dc9fbd05f6c3)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxFileObject.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x82c8b769a5968c24)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxFileObject.m_Device", m_device, 0x300, 0x40, true, 0x9f7c179a9a570b2e)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxFileObject.m_NPLock", m_np_lock, 0x340, 0x80, true, 0xef923ccca745e011)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::file_object_t), "FxFileObject.m_FileObject", m_file_object, 0x400, 0x40, true, 0x6a884cbecb914170)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxFileObject.m_PkgContext", m_pkg_context, 0x440, 0x40, true, 0x2812f52af638534b)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxFileObject.m_Link", m_link, 0x480, 0x80, true, 0x27416d39991f0082)
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