#if !IN_PARSER
#define _m000 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int32_t), "FxIoQueue.m_Type", m_type, 0x40, 0x10, true, 0xf9b5cdc457c2c594, 0, uint16_t,uint32_t)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxIoQueue.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x9487492b612d9650)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxIoQueue.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x3836a59be981990e)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxIoQueue.m_Globals", m_globals, 0x80, 0x40, true, 0x1253d3bc430a8cdb)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxIoQueue.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x6720a599b859ec4)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxIoQueue.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x795ec039854fa113)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxIoQueue.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x77062e4f503c9316)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxIoQueue.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xf136cb87b3cf3394)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxIoQueue.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x3126595ec0b0454d)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxIoQueue.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0xf5662ebf6602a5fd)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxIoQueue.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0xd97a0fd649d81bf8)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxIoQueue.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x9b14c1faf1bb7c9d)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxIoQueue.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x886e6a97c2c8d514)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxIoQueue.m_Device", m_device, 0x300, 0x40, true, 0x73af0ffcff6b1c73)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxIoQueue.m_NPLock", m_np_lock, 0x340, 0x80, true, 0x5e426dc02839f030)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::fxio_forward_progress_context_t*), "FxIoQueue.m_FwdProgContext", m_fwd_prog_context, 0x400, 0x40, true, 0xc424d5e9885e0eb8)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoQueue.m_SupportForwardProgress", m_support_forward_progress, 0x440, 0x8, true, 0xb8dfb019f11ae0e2)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoQueue.m_Configured", m_configured, 0x448, 0x8, true, 0xe7a053238567e27)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoQueue.m_PowerManaged", m_power_managed, 0x450, 0x8, true, 0xe8bb18b21f24b8af)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint8_t), "FxIoQueue.m_PowerReferenced", m_power_referenced, 0x458, 0x8, true, 0xb54ed747749c2058)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoQueue.m_AllowZeroLengthRequests", m_allow_zero_length_requests, 0x460, 0x8, true, 0x19e7bad035762f4b)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoQueue.m_PassiveLevel", m_passive_level, 0x468, 0x8, true, 0x5b080fbdd20c511d)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint8_t), "FxIoQueue.m_Deleted", m_deleted, 0x470, 0x8, true, 0x2c65147017b94681)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint8_t), "FxIoQueue.m_Disposing", m_disposing, 0x478, 0x8, true, 0x625ce3f71c107449)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::event_t), "FxIoQueue.m_FinishDisposing", m_finish_disposing, 0x480, 0x0, true, 0xccdc921004f53b2b)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::io_queue_power_state_t), "FxIoQueue.m_PowerState", m_power_state, 0x580, 0x20, true, 0xb73ab93006de6530)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxIoQueue.m_MaxParallelQueuePresentedRequests", m_max_parallel_queue_presented_requests, 0x5c0, 0x20, true, 0x72ffc84d4c1ce428)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::io_queue_state_t), "FxIoQueue.m_QueueState", m_queue_state, 0x5e0, 0x20, true, 0x7a3fec3740833234)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::irp_queue_t), "FxIoQueue.m_Queue", m_queue, 0x600, 0x40, true, 0xbb3818622fcffaed)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::irp_queue_t), "FxIoQueue.m_DriverCancelable", m_driver_cancelable, 0x740, 0x40, true, 0xad9e42fd06f60d10)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxIoQueue.m_Cancelled", m_cancelled, 0x880, 0x80, true, 0xdc9cc9f7a66be54f)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxIoQueue.m_CanceledOnQueueList", m_canceled_on_queue_list, 0x900, 0x80, true, 0x98f3d2c3b8351d36)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxIoQueue.m_DriverOwned", m_driver_owned, 0x980, 0x80, true, 0x660065507b2b2c17)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxIoQueue.m_PowerNotify", m_power_notify, 0xa00, 0x80, true, 0x106e306f18c74247)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxIoQueue.m_PowerDriverNotified", m_power_driver_notified, 0xa80, 0x80, true, 0xaa8b0d45ca6be2b7)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::pkg_io_t*), "FxIoQueue.m_PkgIo", m_pkg_io, 0xb00, 0x40, true, 0x9d4e0ed9935e34)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cx_device_info_t*), "FxIoQueue.m_CxDeviceInfo", m_cx_device_info, 0xb40, 0x40, true, 0x7029f698a83c7532)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "FxIoQueue.m_Dispatching", m_dispatching, 0xb80, 0x20, true, 0x6f181201fb9f3218)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint8_t), "FxIoQueue.m_TransitionFromEmpty", m_transition_from_empty, 0xba0, 0x8, true, 0xe7ebdfb8765b68cb)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint8_t), "FxIoQueue.m_ForceTransitionFromEmptyWhenAddingNewRequest", m_force_transition_from_empty_when_adding_new_request, 0xba8, 0x8, true, 0x1efd4464353bd280)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint8_t), "FxIoQueue.m_CancelDispatchedRequests", m_cancel_dispatched_requests, 0xbb0, 0x8, true, 0x1def237e7f067c7d)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoQueue.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0xb7ad44f3d733518a, 1, uint16_t)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoQueue.m_IsDevicePowerPolicyOwner", m_is_device_power_policy_owner, 0xbb8, 0x8, true, 0x9c4d4251ed9767d2)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "FxIoQueue.m_DriverIoCount", m_driver_io_count, 0xbc0, 0x20, true, 0x86c43f9f65fabd75)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "FxIoQueue.m_TwoPhaseCompletions", m_two_phase_completions, 0xbe0, 0x20, true, 0xaa4846c184858e5b)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::io_queue_io_default_t), "FxIoQueue.m_IoDefault", m_io_default, 0xc00, 0x80, true, 0x2333e01e29580d15)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::io_queue_io_stop_t), "FxIoQueue.m_IoStop", m_io_stop, 0xc80, 0x80, true, 0x5d68e65376f00497)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::io_queue_io_resume_t), "FxIoQueue.m_IoResume", m_io_resume, 0xd00, 0x80, true, 0xf76e0f817e296b88)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::io_queue_io_read_t), "FxIoQueue.m_IoRead", m_io_read, 0xd80, 0x80, true, 0x2279c916c1f07a1f)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::io_queue_io_write_t), "FxIoQueue.m_IoWrite", m_io_write, 0xe00, 0x80, true, 0xc44effcf1cd9017)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::io_queue_io_device_control_t), "FxIoQueue.m_IoDeviceControl", m_io_device_control, 0xe80, 0x80, true, 0x335419d290ca4bd2)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::io_queue_io_internal_device_control_t), "FxIoQueue.m_IoInternalDeviceControl", m_io_internal_device_control, 0xf00, 0x80, true, 0x86ea247aa8f1c58)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoQueue.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x7676ae547620c996, 1, uint16_t)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::io_queue_io_canceled_on_queue_t), "FxIoQueue.m_IoCanceledOnQueue", m_io_canceled_on_queue, 0xf80, 0x80, true, 0x726f6c0b5bafc9f9)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::callback_lock_t*), "FxIoQueue.m_IoCancelCallbackLockPtr", m_io_cancel_callback_lock_ptr, 0x1000, 0x40, true, 0x9fb79e84892e1c38)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::io_queue_io_state_t), "FxIoQueue.m_IdleComplete", m_idle_complete, 0x1040, 0x80, true, 0x3e943237872ebc03)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxIoQueue.m_IdleCompleteContext", m_idle_complete_context, 0x10c0, 0x40, true, 0x2b3070f57104e3e6)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::io_queue_io_state_t), "FxIoQueue.m_PurgeComplete", m_purge_complete, 0x1100, 0x80, true, 0xe15b3207668b981f)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxIoQueue.m_PurgeCompleteContext", m_purge_complete_context, 0x1180, 0x40, true, 0x8a9330e5f2069746)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::io_queue_io_state_t), "FxIoQueue.m_ReadyNotify", m_ready_notify, 0x11c0, 0x80, true, 0x7564d0fa416975d5)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxIoQueue.m_ReadyNotifyContext", m_ready_notify_context, 0x1240, 0x40, true, 0xc683ea35e227df84)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::execution_level_t), "FxIoQueue.m_ExecutionLevel", m_execution_level, 0x1280, 0x20, true, 0x64e154ba259ee07b)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::synchronization_scope_t), "FxIoQueue.m_SynchronizationScope", m_synchronization_scope, 0x12a0, 0x20, true, 0x59aa7b03af250a47)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoQueue.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xf91bfdb575b10174, 1, uint16_t)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::callback_spin_lock_t), "FxIoQueue.m_CallbackSpinLock", m_callback_spin_lock, 0x12c0, 0x0, true, 0x22dce9df4a4d5573)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::callback_mutex_lock_t), "FxIoQueue.m_CallbackMutexLock", m_callback_mutex_lock, 0x14c0, 0x80, true, 0xc78d511e08ea08b9)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::callback_lock_t*), "FxIoQueue.m_CallbackLockPtr", m_callback_lock_ptr, 0x1840, 0x40, true, 0x17cd527aa6fad198)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxIoQueue.m_CallbackLockObjectPtr", m_callback_lock_object_ptr, 0x1880, 0x40, true, 0x4ca65a62a6408feb)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "FxIoQueue.m_Dpc", m_dpc, 0x18c0, 0x0, true, 0xacb25f1272eed83b)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::system_work_item_t*), "FxIoQueue.m_SystemWorkItem", m_system_work_item, 0x1ac0, 0x40, true, 0xfabc11f71c3bda89)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoQueue.m_DpcQueued", m_dpc_queued, 0x1b00, 0x8, true, 0xa39e6ebfcb32d0ac)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoQueue.m_WorkItemQueued", m_work_item_queued, 0x1b08, 0x8, true, 0x1362079e37825a5e)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoQueue.m_RequeueDeferredDispatcher", m_requeue_deferred_dispatcher, 0x1b10, 0x8, true, 0xd217d52d7157dda1)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::event_t), "FxIoQueue.m_PowerIdle", m_power_idle, 0x1b40, 0x0, true, 0xae632d187bfc32c0)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoQueue.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x23b5413375933746, 1, uint16_t)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::io_queue_node_t), "FxIoQueue.m_IoPkgListNode", m_io_pkg_list_node, 0x1c40, 0xc0, true, 0x40c1bd64945d14c3)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxIoQueue.m_PowerSListEntry", m_power_s_list_entry, 0x1d00, 0x40, true, 0xae63ba20a8c0a673)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoQueue.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0xeb163dbd5c7fc9d6, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoQueue.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0xd6b077be279f1d9a, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoQueue.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0xcbcd251a2b721d8d, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoQueue.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x981ebb6a760471ad, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoQueue.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0xb036779b97f24b26, 1, uint16_t)
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
#define _m038
#define _m039
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m047
#define _m048
#define _m049
#define _m05
#define _m050
#define _m051
#define _m052
#define _m053
#define _m054
#define _m055
#define _m056
#define _m057
#define _m058
#define _m059
#define _m06
#define _m060
#define _m061
#define _m062
#define _m063
#define _m064
#define _m065
#define _m066
#define _m067
#define _m068
#define _m069
#define _m07
#define _m070
#define _m071
#define _m072
#define _m073
#define _m074
#define _m075
#define _m076
#define _m077
#define _m078
#define _m079
#define _m08
#define _m080
#define _m081
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#endif