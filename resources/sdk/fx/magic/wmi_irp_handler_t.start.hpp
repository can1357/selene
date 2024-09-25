#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxWmiIrpHandler.m_Type", m_type, 0x40, 0x10, true, 0xaf40d4df0bef3282)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxWmiIrpHandler.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0xe2a0f97176bd1e9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxWmiIrpHandler.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xe764b9e1e741e669)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxWmiIrpHandler.m_Globals", m_globals, 0x80, 0x40, true, 0xae7b201330d15ca8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxWmiIrpHandler.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x540399418b8ea8a9)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiIrpHandler.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0xad3a62022b484389, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiIrpHandler.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x7083e85b53dba327, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiIrpHandler.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xd782af80d9848865, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiIrpHandler.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0xe95fcaa436a3a058, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiIrpHandler.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x7ff60596576b79e, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiIrpHandler.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0xec2eee1caeb2a730, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiIrpHandler.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x87c3ae3fe6c7748b, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiIrpHandler.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xdbdf4f43e682151e, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWmiIrpHandler.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x9a02d4f395688952, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxWmiIrpHandler.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x628fe13f3fdea68)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxWmiIrpHandler.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x6999b0ff57c84ad5)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxWmiIrpHandler.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xc7ad0bdc3ccfd47e)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxWmiIrpHandler.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0xc629e9de2755852)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxWmiIrpHandler.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x80b373507cd22bd8)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxWmiIrpHandler.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x9120cd76928561c4)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxWmiIrpHandler.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0xdbbf804441011a47)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxWmiIrpHandler.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x6cec64bcba6f20b)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxWmiIrpHandler.m_Device", m_device, 0x300, 0x40, true, 0xf7d9c4c44e19f369)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxWmiIrpHandler.m_NPLock", m_np_lock, 0x340, 0x80, true, 0xe2b7d9d516d013f4)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxWmiIrpHandler.m_ProvidersListHead", m_providers_list_head, 0x3c0, 0x80, true, 0xbf0ff2e89a856938)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxWmiIrpHandler.m_NumProviders", m_num_providers, 0x440, 0x20, true, 0x4187b1319c21a662)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::workitem_t*), "FxWmiIrpHandler.m_WorkItem", m_work_item, 0x480, 0x40, true, 0xaad06f2995040d39)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxWmiIrpHandler.m_UpdateCount", m_update_count, 0x4c0, 0x20, true, 0x44c88b3e7256499d)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t), "FxWmiIrpHandler.m_UpdateEvent", m_update_event, 0x500, 0x0, true, 0xf9fec2c2d73a60bf)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "FxWmiIrpHandler.m_WorkItemEvent", m_work_item_event, 0x600, 0x40, true, 0xa3f794743b55733e)
#define _m30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxWmiIrpHandler.m_WorkItemQueued", m_work_item_queued, 0x640, 0x8, true, 0x6413f54a4a444ef6)
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
#endif