#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxResourceIo.m_Type", m_type, 0x40, 0x10, true, 0xe4cca164e678b83c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxResourceIo.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x8662911bfb894b6f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxResourceIo.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xe2251a7e015a9c7f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxResourceIo.m_Globals", m_globals, 0x80, 0x40, true, 0x45ca9717414ac54f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxResourceIo.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0xf1dcb8976b41e784)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxResourceIo.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x5136d765dc275259, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxResourceIo.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x9b5cc186bf431e91, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxResourceIo.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x64815c6a8385cb33, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxResourceIo.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0xb9be800d818c78e7, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxResourceIo.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x3d2a6265312d5209, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxResourceIo.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0xce3bf064eaad7098, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxResourceIo.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0xa281fbc2552b729b, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxResourceIo.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x31097f5adaf37cad, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxResourceIo.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0xbda87421093da52b, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxResourceIo.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0xd62c99dbbaaf3f92)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxResourceIo.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x4636b127b003beb1)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxResourceIo.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xf57da8ec5829c6b)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxResourceIo.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x48421280b41b6e)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxResourceIo.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0xc6cbfc0ce7a17708)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxResourceIo.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x793be9a47bf2bddd)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxResourceIo.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0xf597fa1cc7998c39)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxResourceIo.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xcffc3a462a10323d)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxResourceIo.m_Device", m_device, 0x300, 0x40, true, 0x4901e10f7a828256)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::resource_descriptor_t), "FxResourceIo.m_Descriptor", m_descriptor, 0x340, 0x0, true, 0x7bc95cd73a3a4ac3)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::resource_descriptor_t), "FxResourceIo.m_DescriptorClone", m_descriptor_clone, 0x440, 0x0, true, 0x987e071fcbad5b13)
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