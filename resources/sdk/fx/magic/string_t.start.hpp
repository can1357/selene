#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxString.m_Type", m_type, 0x40, 0x10, true, 0x1bf1798ed3db0538)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxString.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x15a04f39050c572a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxString.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xdf6636caffd3fe95)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxString.m_Globals", m_globals, 0x80, 0x40, true, 0xc84a75069a1c3297)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxString.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x73d18e1d00197146)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxString.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x76ae6dc232e44713, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxString.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xda089c8cca43d002, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxString.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xe9a899f16be590a6, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxString.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x9fc57f3a75708231, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxString.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x83ab20a2b701eb5a, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxString.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x61f1aab665e9876e, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxString.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x804b5abaa9e4f93, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxString.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x2667fcdebe9b314a, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxString.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0xc07bbe8e3a98a03a, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxString.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x50c5b0b351b51c60)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxString.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0xb58c614ba6b0a4cd)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxString.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x2fc27ef18920db31)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxString.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x94467175fbe2f014)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxString.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x36aec617516660e2)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxString.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0xcaf36db46254f935)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxString.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x8fb5d9a4ace7a009)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxString.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xad0e1b39d45817ad)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxString.m_Device", m_device, 0x300, 0x40, true, 0xc9a42c03e717cc7f)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "FxString.m_UnicodeString", m_unicode_string, 0x340, 0x80, true, 0xae13936a4699b68d)
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