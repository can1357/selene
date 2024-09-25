#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDpc.m_Type", m_type, 0x40, 0x10, true, 0x3cf3f23ca464f1c2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDpc.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0xa1a8f17137de8279)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxDpc.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x55c45a39cb5d45b3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxDpc.m_Globals", m_globals, 0x80, 0x40, true, 0xd74a21ca0f2dd485)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDpc.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0xadb9040b6c707270)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDpc.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0xf009811473d0afc3, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDpc.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x7ca8fb90bee05ead, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDpc.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x77a2db2e4c996ce8, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDpc.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x98c8f0a3308294dc, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDpc.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x2dcc91a264d51cee, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDpc.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x79fe556691643489, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDpc.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x343ce33c658a9f78, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDpc.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x5f60a9cb0590a3d8, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxDpc.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x52f4f6d0835394a8, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxDpc.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x765f58393b493e34)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxDpc.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0xc1d8a089dda45048)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxDpc.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xb4dec46beb3ebede)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxDpc.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0xffd19dbf92984896)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxDpc.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x6abe21ba62ba93c5)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxDpc.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0xbf65eaf823825125)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxDpc.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x1aab8c9d31480671)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxDpc.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x9d3b960a7528e877)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxDpc.m_Device", m_device, 0x300, 0x40, true, 0xca12ccd74c313817)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxDpc.m_NPLock", m_np_lock, 0x340, 0x80, true, 0x5121911bb3495c5a)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "FxDpc.m_Dpc", m_dpc, 0x3c0, 0x0, true, 0xa0f7cc317807388e)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxDpc.m_Object", m_object, 0x5c0, 0x40, true, 0xc86ed78620708a2a)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::callback_lock_t*), "FxDpc.m_CallbackLock", m_callback_lock, 0x600, 0x40, true, 0xb2682881828ac440)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxDpc.m_CallbackLockObject", m_callback_lock_object, 0x640, 0x40, true, 0xe5c813840f3172eb)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdpc_t*)>*), "FxDpc.m_Callback", m_callback, 0x680, 0x40, true, 0xe1c050ddd0e72d25)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxDpc.m_RunningDown", m_running_down, 0x6c0, 0x8, true, 0x32ba7fb13a2a55fc)
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
#define _m28
#define _m29
#endif