#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxWaitLock.m_Type", m_type, 0x40, 0x10, true, 0x857817c728f6f797)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxWaitLock.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0xdcfd0cfc29e98e6e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxWaitLock.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x6d2ac82ce6b4fb4d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxWaitLock.m_Globals", m_globals, 0x80, 0x40, true, 0xc4d3914b85d6b770)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxWaitLock.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x135e8f1d0544a19f)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWaitLock.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0xb6060bf887e588ca, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWaitLock.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x6f18fc8576daaa33, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWaitLock.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xdf9f9b08d4d42a2f, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWaitLock.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0xcecf18887114110c, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWaitLock.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0xa23995cc027cb3d9, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWaitLock.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0xbcec103637931c4a, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWaitLock.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0xbc42cf1acb7651af, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWaitLock.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x2c3714205319db94, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWaitLock.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x3d0c89659718e2b1, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxWaitLock.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x79a7328f11cf8732)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxWaitLock.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x3432b751aee1dbdd)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxWaitLock.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xa89ecc738cd5f5cd)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxWaitLock.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x177c8f8cb575f568)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxWaitLock.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x62c6d9530fc06816)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxWaitLock.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0xb396bc47a3e467bb)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxWaitLock.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0xdde8b3bf99b959d4)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxWaitLock.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x58bd7cbf8df18f0a)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxWaitLock.m_Device", m_device, 0x300, 0x40, true, 0x7285e95ab7d4714f)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::event_t), "FxWaitLock.m_Event", m_event, 0x340, 0x0, true, 0x2e1de41002943e22)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "FxWaitLock.m_OwningThread", m_owning_thread, 0x440, 0x40, true, 0x86e602ef7813d371)
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