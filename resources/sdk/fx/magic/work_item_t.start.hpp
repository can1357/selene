#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxWorkItem.m_Type", m_type, 0x40, 0x10, true, 0x4e021582f00c1d2d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxWorkItem.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x18e4576192de7c61)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxWorkItem.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x3ac767bf3f794240)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxWorkItem.m_Globals", m_globals, 0x80, 0x40, true, 0xe79d3c692a8de175)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxWorkItem.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0xf36162b6abf09d80)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWorkItem.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x2def5bfb603ee18f, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWorkItem.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xe4111075fc52bbb1, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWorkItem.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xe63b3cd16adcb053, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWorkItem.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0xc64a9230e8f8968f, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWorkItem.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x2a478f1f75d212c1, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWorkItem.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0xd6335ce27619e496, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWorkItem.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x6c1a8c0efedc5eb, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWorkItem.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xc8f859789b74ba5b, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxWorkItem.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0xcd44adf0b396c4ee, 1, uint16_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxWorkItem.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x3493846e43a98565)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxWorkItem.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0xec029e403397bb9f)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxWorkItem.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x6664f75735724911)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxWorkItem.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x39f3bec07cec7378)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxWorkItem.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0xafdbe4f84c02532f)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxWorkItem.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x43cd9b9ec1f1035c)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxWorkItem.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0xf80d68797696bf96)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxWorkItem.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x9c5b6bda9c6ec21a)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxWorkItem.m_Device", m_device, 0x300, 0x40, true, 0x16b4a649dccb0287)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxWorkItem.m_NPLock", m_np_lock, 0x340, 0x80, true, 0xa1d33ea133b7768f)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::work_item_t), "FxWorkItem.m_WorkItem", m_work_item, 0x3c0, 0x40, true, 0xd53f2e4d6992e570)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxWorkItem.m_RunningDown", m_running_down, 0x400, 0x8, true, 0x364f06cbddc0bbea)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxWorkItem.m_Enqueued", m_enqueued, 0x408, 0x8, true, 0xbdaac0a0c2065c37)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxWorkItem.m_WorkItemRunningCount", m_work_item_running_count, 0x420, 0x20, true, 0x8081afaa1cf1c308)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxWorkItem.m_Object", m_object, 0x440, 0x40, true, 0xb97ded08ef215c23)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::callback_lock_t*), "FxWorkItem.m_CallbackLock", m_callback_lock, 0x480, 0x40, true, 0x37ff1c27c233e66d)
#define _m30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxWorkItem.m_CallbackLockObject", m_callback_lock_object, 0x4c0, 0x40, true, 0xc65066be6bbd45ff)
#define _m31 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfworkitem_t*)>*), "FxWorkItem.m_Callback", m_callback, 0x500, 0x40, true, 0x78eba80c30d249b9)
#define _m32 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t), "FxWorkItem.m_WorkItemCompleted", m_work_item_completed, 0x540, 0x0, true, 0x9bec3ec7b3eb20b3)
#define _m33 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "FxWorkItem.m_WorkItemThread", m_work_item_thread, 0x640, 0x40, true, 0xc81527e1c838998c)
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
#define _m33
#endif