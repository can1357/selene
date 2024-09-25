#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxRegKey.m_Globals", m_globals, 0x80, 0x40, true, 0x7e75a6d9a897d6bd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxRegKey.m_Type", m_type, 0x40, 0x10, true, 0x2e04eded8e02e290)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxRegKey.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x42ec20cb14eacb99)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxRegKey.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xe88ae41d3b66b99c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxRegKey.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0xae0fe45f91dff9e)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRegKey.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0xc166e5735ce9337c, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRegKey.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xfa09bb8b111d446f, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRegKey.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x39839faba1aaa19e, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRegKey.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x6edf4d8b1e31c073, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRegKey.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x96f875e9ef818246, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRegKey.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x79956747e01d7d14, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRegKey.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x99781d07a1a41bfd, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRegKey.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xaa0b431273090eea, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRegKey.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x6e3a4560a722825a, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxRegKey.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x9e2ce3e68a2ac471)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxRegKey.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x45d22bf9045faeca)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxRegKey.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xa20cf0085fa718fe)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxRegKey.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0xf1d4170403190a5b)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxRegKey.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0xc653851c28c1bec5)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxRegKey.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0xd47f7baac6943194)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxRegKey.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0xbd6180ac0a54afa3)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxRegKey.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x49f364f4e1d315d0)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxRegKey.m_Device", m_device, 0x300, 0x40, true, 0x9169ceb6a84b4261)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::paged_lock_t*), "FxRegKey.m_Lock", m_lock, 0x340, 0x40, true, 0xaea0b6a5b312db6)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxRegKey.m_Key", m_key, 0x380, 0x40, true, 0x7dbd9bd3ab5808bb)
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