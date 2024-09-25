#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxUserObject.m_Type", m_type, 0x40, 0x10, true, 0x6572357a3cb4006a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxUserObject.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x8216e883dd34fcdd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxUserObject.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x23966f9b3b969b31)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxUserObject.m_Globals", m_globals, 0x80, 0x40, true, 0x8adef2f7b848edcf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxUserObject.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x2786be1e9dfc9d1f)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUserObject.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x9df0ab6df564b0f1, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUserObject.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x6920a941cd74280a, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUserObject.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xb74e288da1c279b3, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUserObject.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0xf903be00c0232913, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUserObject.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x84535b444e26758, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUserObject.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x6f6320a1c36be71a, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUserObject.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x594c85644a11dc89, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUserObject.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x67c81c51c87810c1, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxUserObject.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x39349e5c73d48d78, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxUserObject.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x19c4b22a54564278)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxUserObject.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x80a81f7cbfdf65fd)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxUserObject.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xf1e3d39b63296e6d)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxUserObject.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x636b510d05a6a851)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxUserObject.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x9aa90b7232525a37)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxUserObject.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x29f9893cd87121fe)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxUserObject.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0xa8cf16d81594355c)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxUserObject.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x21c8f9af515b5653)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxUserObject.m_Device", m_device, 0x300, 0x40, true, 0xb764bb425ee80e59)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxUserObject.m_NPLock", m_np_lock, 0x340, 0x80, true, 0xd348a0f9f744104b)
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