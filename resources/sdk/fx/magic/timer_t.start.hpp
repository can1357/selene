#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxTimer.m_Type", m_type, 0x40, 0x10, true, 0x484b29d94f05810)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxTimer.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x6caa882287b70d25)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxTimer.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x19d5439c416743cf)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxTimer.m_Globals", m_globals, 0x80, 0x40, true, 0x2ce528d767bfa479)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxTimer.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x1481e72f73c3d4d2)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxTimer.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x8626f42a39830ad)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxTimer.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0xa72ea73472d79662)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxTimer.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xe5cadb3313028a53)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxTimer.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0xa47187d9198dcf11)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxTimer.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0xf67120558d006864)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxTimer.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x3f389e43db8f59e1)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxTimer.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0xf8b9fd83ea9c38b4)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxTimer.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x35c11900b0e552b3)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxTimer.m_Device", m_device, 0x300, 0x40, true, 0x54bac7098fc2bf6e)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxTimer.m_NPLock", m_np_lock, 0x340, 0x80, true, 0xff5ad6a85ecefa64)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::timer_t), "FxTimer.m_Timer", m_timer, 0x3c0, 0xc0, true, 0xf76cdf9d48ba232a)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxTimer.m_Object", m_object, 0x880, 0x40, true, 0x4271d8836c52268f)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxTimer.m_Period", m_period, 0x8c0, 0x20, true, 0x4bd9cf0da734317a)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxTimer.m_TolerableDelay", m_tolerable_delay, 0x8e0, 0x20, true, 0x9051381a8ef0a998)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxTimer.m_UseHighResolutionTimer", m_use_high_resolution_timer, 0x900, 0x8, true, 0xe90c34ebef1c303e)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::callback_lock_t*), "FxTimer.m_CallbackLock", m_callback_lock, 0x940, 0x40, true, 0x586eceedbe6ebeba)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxTimer.m_CallbackLockObject", m_callback_lock_object, 0x980, 0x40, true, 0xa9e5537dc38ebc4d)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdftimer_t*)>*), "FxTimer.m_Callback", m_callback, 0x9c0, 0x40, true, 0x98b60227425fe512)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::system_work_item_t*), "FxTimer.m_SystemWorkItem", m_system_work_item, 0xa00, 0x40, true, 0x9cdec680c4542ade)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t volatile*), "FxTimer.m_CallbackThread", m_callback_thread, 0xa40, 0x40, true, 0xb9273c1d71e36644)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "FxTimer.m_StopThread", m_stop_thread, 0xa80, 0x40, true, 0xeff9b14a2b8e2cd3)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxTimer.m_StopAgain", m_stop_again, 0xac0, 0x8, true, 0xa45b1eeaff1bac21)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxTimer.m_StartAborted", m_start_aborted, 0xac8, 0x8, true, 0x14a4a9759d9b37e0)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxTimer.m_RunningDown", m_running_down, 0xad0, 0x8, true, 0x6ea2817dfe99af)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTimer.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x7dadb269ed28aba, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTimer.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xfd72b1c2b4afabc5, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTimer.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x270bdd4551df669c, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTimer.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0xb191c180d27bd204, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTimer.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x9b3e07a3efbbc0d3, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTimer.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x3b333065fc9d1e67, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTimer.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x9163b2fbba76e19c, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTimer.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xfa7ad40bb073218e, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTimer.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x1aa0c1a436d15be8, 1, uint16_t)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#endif