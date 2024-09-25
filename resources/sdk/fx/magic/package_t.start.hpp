#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPackage.m_Type", m_type, 0x40, 0x10, true, 0xd5e3e68a2306d27c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPackage.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0xea8f0efbc4594e5d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxPackage.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xc46fed285f6bfc1b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxPackage.m_Globals", m_globals, 0x80, 0x40, true, 0x28fb60c830236dea)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPackage.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x127323b4a8b2c4e)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPackage.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0xfa080233fe2c4061, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPackage.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x327e02f85f866ca8, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPackage.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xc37852026dcddcba, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPackage.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x50a87c9bcc6ff457, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPackage.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x5003eba350c2d132, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPackage.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x1f708ab589e345a3, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPackage.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x40b3ce8e4c518842, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPackage.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xc932c5b00baff9ff, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPackage.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x312ef44d97df5737, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxPackage.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x82fdd324e307270a)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPackage.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0xf61c6183b7a04ca8)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxPackage.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x5bb256786d64188b)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxPackage.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x6c2fa93ff24def5a)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxPackage.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x5deeb06757ec80dd)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxPackage.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0xba96458f4a34d07a)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxPackage.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x99477f533a70e6fb)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxPackage.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xa9557c2899b05068)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxPackage.m_Device", m_device, 0x300, 0x40, true, 0xd6e4d50ad1b5a1b4)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxPackage.m_NPLock", m_np_lock, 0x340, 0x80, true, 0x938c704168d27bbe)
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