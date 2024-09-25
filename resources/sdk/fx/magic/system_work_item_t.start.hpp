#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxSystemWorkItem.m_Type", m_type, 0x40, 0x10, true, 0x92baf5680a7add44)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxSystemWorkItem.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0xfcc4cc6da18d0db2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxSystemWorkItem.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x5215a477b05660e0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxSystemWorkItem.m_Globals", m_globals, 0x80, 0x40, true, 0x4076b30696192ca3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxSystemWorkItem.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x63f55f86ce458421)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSystemWorkItem.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0xe4a33233dda0dd73, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSystemWorkItem.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xbcd832c6671a5658, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSystemWorkItem.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xc8aa8c787628b692, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSystemWorkItem.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x3f7fbbfdbc674df7, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSystemWorkItem.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x9676a289d328aa26, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSystemWorkItem.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0xfc973e1b131720a3, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSystemWorkItem.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x41ce8a9474a2fc8, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSystemWorkItem.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x682c51d4d3251c68, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSystemWorkItem.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0xb217d406dce77ae, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxSystemWorkItem.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0xde30e08bb5b5e916)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxSystemWorkItem.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x94167cfea8578b51)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxSystemWorkItem.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x2fa14ba9c5b4b523)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxSystemWorkItem.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0xdb4566b39184d32)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxSystemWorkItem.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0xce85b385ab951dc9)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxSystemWorkItem.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0xe260533967370340)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxSystemWorkItem.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x7df230a040e8d017)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxSystemWorkItem.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xb1ffdba860cfb3e5)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxSystemWorkItem.m_Device", m_device, 0x300, 0x40, true, 0xf38cc5e30aca3071)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxSystemWorkItem.m_NPLock", m_np_lock, 0x340, 0x80, true, 0x82e910f7cbd56d8b)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxSystemWorkItem.m_RunningDown", m_running_down, 0x3c0, 0x8, true, 0xcb80d90b8adca79e)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxSystemWorkItem.m_Enqueued", m_enqueued, 0x3c8, 0x8, true, 0x8b4b04342d781c7d)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::work_item_t), "FxSystemWorkItem.m_WorkItem", m_work_item, 0x400, 0x40, true, 0xe7d6fcf8cec8270b)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "FxSystemWorkItem.m_Callback", m_callback, 0x440, 0x40, true, 0x72faf17bba8ee353)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxSystemWorkItem.m_CallbackArg", m_callback_arg, 0x480, 0x40, true, 0x9dee169abe5e9369)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t), "FxSystemWorkItem.m_WorkItemCompleted", m_work_item_completed, 0x4c0, 0x0, true, 0x6a05d3bda489fc7d)
#define _m30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxSystemWorkItem.m_WorkItemRunningCount", m_work_item_running_count, 0x5c0, 0x20, true, 0x3f117228bb2ee28f)
#define _m31 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxSystemWorkItem.m_OutStandingWorkItem", m_out_standing_work_item, 0x5e0, 0x20, true, 0x7ae3b57ad03a01c3)
#define _m32 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t), "FxSystemWorkItem.m_RemoveEvent", m_remove_event, 0x600, 0x0, true, 0x2a89e7b81950207f)
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
#define _m32
#endif