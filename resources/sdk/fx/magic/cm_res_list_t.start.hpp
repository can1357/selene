#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxCmResList.m_Type", m_type, 0x40, 0x10, true, 0x9f16a37a0d050826)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxCmResList.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x541c43ec9659275a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxCmResList.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x3c02e6b7a59721b5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxCmResList.m_Globals", m_globals, 0x80, 0x40, true, 0xba1866bb0effa805)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxCmResList.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x95e6e665daa3ed7e)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCmResList.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x8196cc42ffc12bf0, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCmResList.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xffc27b5abd87593f, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCmResList.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xf546b6d1b82b5d0, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCmResList.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x45459b459cd7792d, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCmResList.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x41710af4b6a39f1d, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCmResList.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x33e5927afe981270, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCmResList.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x73ab0c0cc0c83bea, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCmResList.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x74d248539645d378, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCmResList.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x829c013b7ec17279, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxCmResList.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x7aa14056a2d88c4e)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxCmResList.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x25a0843bd9bacdee)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxCmResList.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x982d26c386a797ea)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxCmResList.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x64897067152df3ec)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxCmResList.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x8f3804d10af361e0)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxCmResList.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x513dca535ec61a1e)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxCmResList.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x5fc8e0d9af1beb28)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxCmResList.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xdd017d6b2e5ec6f)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxCmResList.m_Device", m_device, 0x300, 0x40, true, 0xe624d93897dc7e52)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxCmResList.m_NPLock", m_np_lock, 0x340, 0x80, true, 0xe6c385f3596cb97b)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxCmResList.m_Count", m_count, 0x3c0, 0x20, true, 0x74bcb284f01caacc)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxCmResList.m_ListHead", m_list_head, 0x400, 0x80, true, 0xe9d1f5b522c94e5b)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxCmResList.m_AccessFlags", m_access_flags, 0x480, 0x8, true, 0x5878bcd1317f2431)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxCmResList.m_Changed", m_changed, 0x488, 0x8, true, 0x249fc8b17ac8c426)
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