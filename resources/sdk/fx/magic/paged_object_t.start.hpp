#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPagedObject.m_Type", m_type, 0x40, 0x10, true, 0xe8d508d4844b26fa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPagedObject.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x90cf8c91e28fff99)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxPagedObject.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x21cc058f7ae35518)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxPagedObject.m_Globals", m_globals, 0x80, 0x40, true, 0x83d2256f03795c89)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPagedObject.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0xd3a4dc184975a72b)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPagedObject.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x8c91d51b4c065d8a, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPagedObject.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xb72d7a8fca638a6e, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPagedObject.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x7c368dab88481641, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPagedObject.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0xb71c4bb12328f721, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPagedObject.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x1a4fbf4cf29dfb27, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPagedObject.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x14dab7c0a4112e45, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPagedObject.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x4dc537508e89a460, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPagedObject.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x2b19ba1f5c60733a, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPagedObject.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0xcf4587fc9b3ab5a, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxPagedObject.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0xf51871fcd9424f32)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPagedObject.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0xccb7a478843554d3)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxPagedObject.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xde3c8a97a040ed88)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxPagedObject.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x45c3d39fb33c5879)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxPagedObject.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x6292eb4d0daa1490)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxPagedObject.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x6abc632e8a39c572)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxPagedObject.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0xe2326911de7ea474)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxPagedObject.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xf3331e2524834af8)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxPagedObject.m_Device", m_device, 0x300, 0x40, true, 0x7a0e6127fd9cb895)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::paged_lock_t*), "FxPagedObject.m_Lock", m_lock, 0x340, 0x40, true, 0xd12b36293bb2bd14)
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
#endif