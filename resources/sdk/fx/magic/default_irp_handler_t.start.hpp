#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDefaultIrpHandler.m_Type", m_type, 0x40, 0x10, true, 0x15c8b3b1ca7f5aa3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDefaultIrpHandler.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x33b070827d16881c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxDefaultIrpHandler.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xd189c64b38e79886)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxDefaultIrpHandler.m_Globals", m_globals, 0x80, 0x40, true, 0x9df330c399f3294b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDefaultIrpHandler.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0xbcddcaee17fc3d4f)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDefaultIrpHandler.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x3a24b03e889a514, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDefaultIrpHandler.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x54109b2e43f20f7, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDefaultIrpHandler.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x9ad7f5a46c0a7603, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDefaultIrpHandler.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x367bff558428fb97, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDefaultIrpHandler.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0xe200f183c19de1ad, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDefaultIrpHandler.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x6a73b8d7d1af4fe8, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDefaultIrpHandler.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x7a3d6c3e3327e3a2, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDefaultIrpHandler.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x37e1ddb475ba52e0, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDefaultIrpHandler.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x6d3f750055d04ad3, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxDefaultIrpHandler.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x74a91c388fca1089)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDefaultIrpHandler.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0xd44d20dbebf4558f)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxDefaultIrpHandler.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xe9c81bdf372303d1)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxDefaultIrpHandler.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x630940c34ce2bc0)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxDefaultIrpHandler.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0xbf7ad0215750c20d)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxDefaultIrpHandler.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x1dfae00af8f79eed)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxDefaultIrpHandler.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0xd90793b7541a0c06)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxDefaultIrpHandler.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x6e77406324fae181)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxDefaultIrpHandler.m_Device", m_device, 0x300, 0x40, true, 0xe8b409095caa8472)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxDefaultIrpHandler.m_NPLock", m_np_lock, 0x340, 0x80, true, 0xceccd3ecef4d357b)
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