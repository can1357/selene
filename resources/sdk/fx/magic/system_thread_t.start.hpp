#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxSystemThread.m_Type", m_type, 0x40, 0x10, true, 0xfa94650286c6c93e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxSystemThread.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x4fde0bc7f3e488c3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxSystemThread.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x3ac69bdedc239e9b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxSystemThread.m_Globals", m_globals, 0x80, 0x40, true, 0x2c721c469daddde8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxSystemThread.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0xa1d92e1c0102f9d8)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSystemThread.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x8a68d9ca9c5e2ee7, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSystemThread.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x2481892e37ce0a7f, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSystemThread.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xccb63b9d38e7da89, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSystemThread.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x2c9c29380be6f97, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSystemThread.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x2800174fd09bd6f0, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSystemThread.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0xefc4642e8d40885c, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSystemThread.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0xc2a16dbd37cd4a29, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSystemThread.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xe2f7bb5bf208d1f2, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSystemThread.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0xee72f005b3243f70, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxSystemThread.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x20fc83a8855e7d34)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxSystemThread.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x6a8140a0a6ef5dea)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxSystemThread.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x65b6e70904685ddb)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxSystemThread.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0xc4c9ce14d7215254)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxSystemThread.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0xc3c9844bd6e404df)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxSystemThread.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x3c01e189685bacc5)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxSystemThread.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0xec0e28bd25552109)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxSystemThread.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x37cdf740fe91b5e0)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxSystemThread.m_Device", m_device, 0x300, 0x40, true, 0xc4f0c57e3e79119c)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxSystemThread.m_NPLock", m_np_lock, 0x340, 0x80, true, 0xf3823ce1906aa8b7)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::event_t), "FxSystemThread.m_InitEvent", m_init_event, 0x3c0, 0x0, true, 0x9fe9c53eb76d9d20)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::event_t), "FxSystemThread.m_WorkEvent", m_work_event, 0x4c0, 0x0, true, 0xf7f401766fb600f2)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxSystemThread.m_WorkList", m_work_list, 0x5c0, 0x80, true, 0x144368e5dedd973e)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxSystemThread.m_ThreadPtr", m_thread_ptr, 0x640, 0x40, true, 0x746bf4d52b9ecf5)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "FxSystemThread.m_PEThread", m_pe_thread, 0x680, 0x40, true, 0x9003d9abba1d4018)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "FxSystemThread.m_Reaper", m_reaper, 0x6c0, 0x0, true, 0xdb700742aa4adcf9)
#define _m30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxSystemThread.m_Exit", m_exit, 0x7c0, 0x8, true, 0xa50e0eb6a8bac311)
#define _m31 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxSystemThread.m_Initialized", m_initialized, 0x7c8, 0x8, true, 0xcabb4a469c4f2b3f)
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
#define _m30
#define _m31
#endif