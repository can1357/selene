#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxCompanionTarget.m_Device", m_device, 0x300, 0x40, true, 0x88355373c16733ad)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxCompanionTarget.m_Type", m_type, 0x40, 0x10, true, 0x89897b0b546ab519)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxCompanionTarget.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0xa5b3476887f412dc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxCompanionTarget.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x850c0ae62c76e0a6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxCompanionTarget.m_Globals", m_globals, 0x80, 0x40, true, 0x7824f5964595effd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxCompanionTarget.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x5222cf244f3024fd)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCompanionTarget.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x9bd07108cbc2890b, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCompanionTarget.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x8cfeb920972eea6a, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCompanionTarget.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xd797b94634464502, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCompanionTarget.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x8e3ea3cf3e361c35, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCompanionTarget.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x53995fc9f5a070b6, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCompanionTarget.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x659da7e76626fc81, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCompanionTarget.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x14b4c8406f0b0cd3, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCompanionTarget.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xbb4fa0084dec4e6c, 1, uint16_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxCompanionTarget.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0xb511a436dfb2d8d4, 1, uint16_t)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxCompanionTarget.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x97180dd0bda473c7)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxCompanionTarget.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x1bd84a1776587900)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxCompanionTarget.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x39a2af5e32abc35)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxCompanionTarget.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x81fdcf2433ad8065)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxCompanionTarget.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x1614f6996ba44d4f)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxCompanionTarget.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0xfb14f6af5dc1a9c8)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxCompanionTarget.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x9ebeb35a2deaf725)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxCompanionTarget.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x281132d38546ed0b)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxCompanionTarget.m_NPLock", m_np_lock, 0x340, 0x80, true, 0x1c66def674726e28)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t*), "FxCompanionTarget.m_DisposeEvent", m_dispose_event, 0x400, 0x40, true, 0x111daee7c9d0741d)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxCompanionTarget.m_PendingTaskCount", m_pending_task_count, 0x440, 0x20, true, 0xf70ddf770325198c)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::i_device_companion_t*), "FxCompanionTarget.m_RdDeviceCompanion", m_rd_device_companion, 0x480, 0x40, true, 0x21c150a02ab4b44a)
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
#endif