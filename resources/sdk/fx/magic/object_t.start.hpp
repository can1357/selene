#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxObject.m_Type", m_type, 0x40, 0x10, true, 0x386a8ce439ef197f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxObject.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x9d959abbfc17b7c6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxObject.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x5b9bc0273b30ba35)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxObject.m_Globals", m_globals, 0x80, 0x40, true, 0x954967f68bb141e0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxObject.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x88186b9d2032cd1b)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxObject.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0xeba060ab751cb305, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxObject.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x21f97a310fbf83d8, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxObject.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xc524c9bd4cc65367, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxObject.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0xf191c4abb3b3a997, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxObject.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x93f72380c25af903, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxObject.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x36f9034e86e2b6ef, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxObject.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x68d478e26851b51d, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxObject.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xc714145a647d66f4, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxObject.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x7fd9a7399eec832a, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxObject.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x72775f7b3892fc01)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxObject.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x4753dfc865bca28f)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxObject.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x212d94833367a2a2)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxObject.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0xf36bb01863ef45bd)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxObject.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x5959a4a07195e401)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxObject.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0xfb75933b59476d4d)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxObject.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x8ace49b9c12a076f)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxObject.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x99d80c8c92d63302)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxObject.m_Device", m_device, 0x300, 0x40, true, 0x16459dfefdaed660)
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
#endif