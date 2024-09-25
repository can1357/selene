#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxRelatedDevice.m_Type", m_type, 0x40, 0x10, true, 0x571e588ebb0483ce)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxRelatedDevice.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0xf189ea711eb3436a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxRelatedDevice.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x4662297e69d2e862)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxRelatedDevice.m_Globals", m_globals, 0x80, 0x40, true, 0x27b433c0277b5b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxRelatedDevice.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x4248770c74ec3dcd)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRelatedDevice.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0xfe07f635f2a795e5, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRelatedDevice.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xe3de4f42c4e249c2, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRelatedDevice.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xfb3079345d2480ab, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRelatedDevice.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0xaefced0f04e09a5c, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRelatedDevice.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x2deed61e2900026a, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRelatedDevice.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x727a3df914ddc155, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRelatedDevice.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x89592b90d57ec853, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRelatedDevice.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x4937c3c641ee99e4, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRelatedDevice.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x30c5b78aed6c496b, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxRelatedDevice.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x9b4c355534edb175)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxRelatedDevice.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x3cfb92550ce7b34d)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxRelatedDevice.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x81e49dea766cfbae)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxRelatedDevice.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0xaf9efe9085728390)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxRelatedDevice.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0xcffbb283d4838b04)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxRelatedDevice.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x64e3f3b12cb35b92)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxRelatedDevice.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0xb6a439bff0a791b3)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxRelatedDevice.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xd909790ab0eabb4e)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxRelatedDevice.m_Device", m_device, 0x300, 0x40, true, 0xa92879f57a86f03d)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::transactioned_entry_t), "FxRelatedDevice.m_TransactionedEntry", m_transactioned_entry, 0x340, 0x80, true, 0xa54549481a14fab3)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "FxRelatedDevice.m_DeviceObject", m_device_object, 0x4c0, 0x40, true, 0xf15e193bd24ee62d)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::related_device_state_t), "FxRelatedDevice.m_State", m_state, 0x500, 0x20, true, 0x996192af4112bba5)
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
#endif