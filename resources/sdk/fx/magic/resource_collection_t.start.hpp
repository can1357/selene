#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxResourceCollection.m_Type", m_type, 0x40, 0x10, true, 0x8038ae12a406aa7e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxResourceCollection.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x651db36d0b1133e9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxResourceCollection.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x92c2892dcc63fabc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxResourceCollection.m_Globals", m_globals, 0x80, 0x40, true, 0xbc1aef155683f706)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxResourceCollection.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0xa1e3089a50421f97)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxResourceCollection.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x7c7dc0afc9bc49bc, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxResourceCollection.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xd1e3d0ee62953e0, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxResourceCollection.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x74628f755ee614e0, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxResourceCollection.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x85d7c8cea074b2d8, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxResourceCollection.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0xf263bf9f9a6781e1, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxResourceCollection.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0xe62c440bbafbfc55, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxResourceCollection.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x2bb5c317da746ab2, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxResourceCollection.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x2e474ffe4b11232c, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxResourceCollection.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x689384628496c887, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxResourceCollection.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0xc009dd6d6dfc089c)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxResourceCollection.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x4b0b750fc0ff65)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxResourceCollection.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x869bbb337448527b)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxResourceCollection.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0xd61af5cf82603da6)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxResourceCollection.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x904b306344e166f0)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxResourceCollection.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0xfddc68b30ed0d03c)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxResourceCollection.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x7cb882a09e15bb92)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxResourceCollection.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xe6a998e0802fedfa)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxResourceCollection.m_Device", m_device, 0x300, 0x40, true, 0x75d4c33ebc4d2216)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxResourceCollection.m_NPLock", m_np_lock, 0x340, 0x80, true, 0x498312d91811aa6d)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxResourceCollection.m_Count", m_count, 0x3c0, 0x20, true, 0xe927ddf82ac398f5)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxResourceCollection.m_ListHead", m_list_head, 0x400, 0x80, true, 0x24baecd2059c7087)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxResourceCollection.m_AccessFlags", m_access_flags, 0x480, 0x8, true, 0x2f1ea488bb91c9a7)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxResourceCollection.m_Changed", m_changed, 0x488, 0x8, true, 0x687cef8fc4d439e0)
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