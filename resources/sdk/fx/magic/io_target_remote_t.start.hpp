#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxIoTargetRemote.m_Type", m_type, 0x40, 0x10, true, 0xc2d764acca5998bf)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxIoTargetRemote.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x8110e53fc871ceab)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxIoTargetRemote.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x6a975aaf20f239e)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxIoTargetRemote.m_Globals", m_globals, 0x80, 0x40, true, 0xb4d3072432f1a7f3)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxIoTargetRemote.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x197827fa664a107a)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxIoTargetRemote.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x45e41948391865f4)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxIoTargetRemote.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x6eef775825c59eb5)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxIoTargetRemote.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xc771e94d57d4714)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxIoTargetRemote.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0xac288ad8953f5f64)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxIoTargetRemote.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x713f261ae9aebcee)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxIoTargetRemote.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x4ad2c0e87dc7c4c8)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxIoTargetRemote.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0xa6d76e4ce7754c39)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxIoTargetRemote.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xb9b90bc47f257f83)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxIoTargetRemote.m_Device", m_device, 0x300, 0x40, true, 0x80b880d430878ac9)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxIoTargetRemote.m_NPLock", m_np_lock, 0x340, 0x80, true, 0x2e00be6a5c31299a)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::transactioned_entry_t), "FxIoTargetRemote.m_TransactionedEntry", m_transactioned_entry, 0x3c0, 0x80, true, 0xb5c1453c233def48)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoTargetRemote.m_InStack", m_in_stack, 0x540, 0x8, true, 0x6c9bdb70f041b67c)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoTargetRemote.m_AddedToDeviceList", m_added_to_device_list, 0x548, 0x8, true, 0x8770e2e975068d81)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxIoTargetRemote.m_SentIoListHead", m_sent_io_list_head, 0x580, 0x80, true, 0xeefe233d268f721c)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxIoTargetRemote.m_IgnoredIoListHead", m_ignored_io_list_head, 0x600, 0x80, true, 0xe564f29db7b0bbbc)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t), "FxIoTargetRemote.m_SentIoEvent", m_sent_io_event, 0x680, 0x0, true, 0xc2da0e0b12f16ee6)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t*), "FxIoTargetRemote.m_DisposeEvent", m_dispose_event, 0x780, 0x40, true, 0xd1bb39c259715a72)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::irp_queue_t), "FxIoTargetRemote.m_PendedQueue", m_pended_queue, 0x7c0, 0x40, true, 0x9e17d5f518c119f1)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::driver_t*), "FxIoTargetRemote.m_Driver", m_driver, 0x900, 0x40, true, 0xae51cde38849d596)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "FxIoTargetRemote.m_InStackDevice", m_in_stack_device, 0x940, 0x40, true, 0x6305799ab948f24f)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "FxIoTargetRemote.m_TargetDevice", m_target_device, 0x980, 0x40, true, 0x5557084335f7348e)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "FxIoTargetRemote.m_TargetPdo", m_target_pdo, 0x9c0, 0x40, true, 0x151820745ca1ef27)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "FxIoTargetRemote.m_TargetFileObject", m_target_file_object, 0xa00, 0x40, true, 0xe0d4dfb3f2c04526)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::io_target_state_t), "FxIoTargetRemote.m_State", m_state, 0xa40, 0x20, true, 0xe0a8c99eb8d345b)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxIoTargetRemote.m_IoCount", m_io_count, 0xa60, 0x20, true, 0x7b66e47c42f871e5)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "FxIoTargetRemote.m_TargetStackSize", m_target_stack_size, 0xa80, 0x8, true, 0x3f13d5039b38fc11)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoTargetRemote.m_TargetIoType", m_target_io_type, 0xa88, 0x8, true, 0x40c2dc54373223ed)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoTargetRemote.m_WaitingForSentIo", m_waiting_for_sent_io, 0xa90, 0x8, true, 0xc25fd37414302cb)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoTargetRemote.m_Removing", m_removing, 0xa98, 0x8, true, 0x964d50671fe5726f)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxIoTargetRemote.m_TargetHandle", m_target_handle, 0xac0, 0x40, true, 0x8095f8eafc897a10)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxIoTargetRemote.m_TargetNotifyHandle", m_target_notify_handle, 0xb00, 0x40, true, 0x9818df314f811aa6)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::io_target_query_remove_t), "FxIoTargetRemote.m_EvtQueryRemove", m_evt_query_remove, 0xb40, 0x40, true, 0x7a09673793323e14)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::io_target_remove_canceled_t), "FxIoTargetRemote.m_EvtRemoveCanceled", m_evt_remove_canceled, 0xb80, 0x40, true, 0xc4e425f55230f4c1)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::io_target_remove_complete_t), "FxIoTargetRemote.m_EvtRemoveComplete", m_evt_remove_complete, 0xbc0, 0x40, true, 0x7335907b0a6fcf8e)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t), "FxIoTargetRemote.m_OpenedEvent", m_opened_event, 0xc00, 0x0, true, 0x37e8bb7bea177ebc)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::io_target_cleared_pointers_t*), "FxIoTargetRemote.m_ClearedPointers", m_cleared_pointers, 0xd00, 0x40, true, 0xb1e61dd6c80cb9e4)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoTargetRemote.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x4bc6f3678f8f8744, 1, uint16_t)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxIoTargetRemote.m_OpenState", m_open_state, 0xd40, 0x8, true, 0xc4039e6e08f126e6)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::io_target_remove_open_params_t), "FxIoTargetRemote.m_OpenParams", m_open_params, 0xd80, 0x40, true, 0x341cb17fb38800b4)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoTargetRemote.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xa541cbb31c806bed, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoTargetRemote.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xe613ce01605d318a, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoTargetRemote.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x9daf942cd0abe91c, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoTargetRemote.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x517fbca88366779b, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoTargetRemote.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x9e0ae3d681324bb6, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoTargetRemote.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x90117c1a81f15e03, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoTargetRemote.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xfeb525476af6dee7, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxIoTargetRemote.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x28333a20de9a586e, 1, uint16_t)
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
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#endif