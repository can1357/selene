#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxRequestBase.m_Type", m_type, 0x40, 0x10, true, 0x9dd65c3a11a0e2f6)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxRequestBase.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x91b1ccc16c25e78)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxRequestBase.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0xaa52270ef1870cb0)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxRequestBase.m_Globals", m_globals, 0x80, 0x40, true, 0xf6aaaa26ccc27aa7)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxRequestBase.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x508607de2ca31a1f)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxRequestBase.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x7c8de511e7efd3c8)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxRequestBase.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x4a80210dc84ca7d)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxRequestBase.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0x401a8e32bf15675a)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxRequestBase.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x15f4531abd61ded5)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxRequestBase.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x4d8a5e5fa14fc50)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxRequestBase.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x762edb514682456d)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxRequestBase.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0x2627d1bcaeb24fbd)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxRequestBase.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0xdf032e781ef9187d)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxRequestBase.m_Device", m_device, 0x300, 0x40, true, 0x9e9ed2afd4d0608d)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxRequestBase.m_NPLock", m_np_lock, 0x340, 0x80, true, 0x4b9503a519256ebb)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::csq_irp_context_t), "FxRequestBase.m_CsqContext", m_csq_context, 0x3c0, 0xc0, true, 0x9e7d919d404be0bf)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxRequestBase.m_ListEntry", m_list_entry, 0x3c0, 0x80, true, 0x80bf336da9a5e593)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxRequestBase.m_DrainSingleEntry", m_drain_single_entry, 0x480, 0x40, true, 0xc4416306709c96a4)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxRequestBase.m_NextStackLocationFormatted", m_next_stack_location_formatted, 0x480, 0x8, true, 0x4e4bbb0a01d9e98a)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::irp_t), "FxRequestBase.m_Irp", m_irp, 0x4c0, 0x40, true, 0xd446828dde743c8e)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::io_target_t*), "FxRequestBase.m_Target", m_target, 0x500, 0x40, true, 0xe5ae14df1e6a9cda)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::request_context_t*), "FxRequestBase.m_RequestContext", m_request_context, 0x540, 0x40, true, 0xde0fa1b788463df4)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::request_timer_t*), "FxRequestBase.m_Timer", m_timer, 0x580, 0x40, true, 0xf192c7fada521ad5)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::request_cancel_callback_t), "FxRequestBase.m_CancelRoutine", m_cancel_routine, 0x5c0, 0x40, true, 0xb288101975de5537)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::request_completion_callback_t), "FxRequestBase.m_CompletionRoutine", m_completion_routine, 0x600, 0x40, true, 0xaebd91389d01f279)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxRequestBase.m_TargetCompletionContext", m_target_completion_context, 0x640, 0x40, true, 0x903a94cfd84a9e38)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxRequestBase.m_IrpCompletionReferenceCount", m_irp_completion_reference_count, 0x680, 0x20, true, 0xa76db4736f848d1a)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxRequestBase.m_TargetFlags", m_target_flags, 0x6a0, 0x8, true, 0xab9b01e16143ba51)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_m_target_flags_by_name_t), "FxRequestBase.m_TargetFlagsByName", m_target_flags_by_name, 0x6a0, 0x8, true, 0x644477a4d02992e6)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxRequestBase.m_IrpAllocation", m_irp_allocation, 0x6a8, 0x8, true, 0x4298f2036e56a13)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxRequestBase.m_Completed", m_completed, 0x6b0, 0x8, true, 0xb2f01291764e6f71)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxRequestBase.m_Canceled", m_canceled, 0x6b8, 0x8, true, 0x61f91d1951fff599)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxRequestBase.m_SystemBufferOffset", m_system_buffer_offset, 0x6c0, 0x10, true, 0xff95e8f629e916a4)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "FxRequestBase.m_VerifierFlags", m_verifier_flags, 0x6d0, 0x10, true, 0x5b0fdaa8286f5bcc)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequestBase.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x3e69021b79822d8b, 1, uint16_t)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_m_verifer_flags_by_name_t), "FxRequestBase.m_VeriferFlagsByName", m_verifer_flags_by_name, 0x6d0, 0x10, true, 0x386a4e3160eeca54)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxRequestBase.m_IrpReferenceCount", m_irp_reference_count, 0x6e0, 0x20, true, 0x76311cd74a8760a2)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequestBase.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x78fd08a25b8713e1, 1, uint16_t)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::irp_queue_t*), "FxRequestBase.m_IrpQueue", m_irp_queue, 0x700, 0x40, true, 0x163100d5aee5726b)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxRequestBase.m_OutputBufferOffset", m_output_buffer_offset, 0x740, 0x10, true, 0xb761264aa5c40dce)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxRequestBase.m_RequestBaseFlags", m_request_base_flags, 0x750, 0x8, true, 0xd6d2dbfbd8991086)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_m_request_base_flags_by_name_t), "FxRequestBase.m_RequestBaseFlagsByName", m_request_base_flags_by_name, 0x750, 0x8, true, 0x30a481f4d5c1c1dc)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxRequestBase.m_RequestBaseStaticFlags", m_request_base_static_flags, 0x758, 0x8, true, 0xd7c8613d19a99a2e)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequestBase.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0xa508e6ce4e5ab5e1, 1, uint16_t)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u16_m_request_base_static_flags_by_name_t), "FxRequestBase.m_RequestBaseStaticFlagsByName", m_request_base_static_flags_by_name, 0x758, 0x8, true, 0xc83e2deb036e5ced)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "FxRequestBase.m_PriorityBoost", m_priority_boost, 0x760, 0x8, true, 0x84d3da2b530b2295)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxRequestBase.m_CompletionState", m_completion_state, 0x768, 0x8, true, 0x5fcebfbc8973ff65)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxRequestBase.m_CanComplete", m_can_complete, 0x770, 0x8, true, 0x17204487e9e8c00d)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "FxRequestBase.m_AllocatedMdl", m_allocated_mdl, 0x780, 0x40, true, 0x5c0f11940f173126)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequestBase.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x39334451ac4a3cd6, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequestBase.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x81e66930d8d11e32, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequestBase.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0xdd321785ddd80a35, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequestBase.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0xdacc58358b7a4298, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequestBase.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x9e3bd25c1194c60f, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequestBase.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0x6f347fe710d7c9da, 1, uint16_t)
#define _m37 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequestBase.m_TargetFlagsByName.Completed", completed, 0x0, 0x1, true, 0x22917b19d4251828, 1, uint8_t)
#define _m38 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequestBase.m_TargetFlagsByName.FlagsPended", flags_pended, 0x1, 0x1, true, 0x32800a02063b34e3, 1, uint8_t)
#define _m39 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequestBase.m_TargetFlagsByName.TimerSet", timer_set, 0x2, 0x1, true, 0xdb78526f2ecc285d, 1, uint8_t)
#define _m40 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequestBase.m_TargetFlagsByName.CancelledFromTimer", cancelled_from_timer, 0x3, 0x1, true, 0xb62aa51298d5c006, 1, uint8_t)
#define _m41 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequestBase.m_TargetFlagsByName.IgnoreState", ignore_state, 0x4, 0x1, true, 0x4b57706946fbe5c1, 1, uint8_t)
#define _m48 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "FxRequestBase.m_VeriferFlagsByName.DriverOwned", driver_owned, 0x0, 0x1, true, 0x35bf64610919a85f, 1, uint16_t)
#define _m49 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "FxRequestBase.m_VeriferFlagsByName.TagRequest", tag_request, 0x1, 0x1, true, 0xee648cd1faaa37b9, 1, uint16_t)
#define _m50 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "FxRequestBase.m_VeriferFlagsByName.Forwarded", forwarded, 0x2, 0x1, true, 0x47563d4714f200b7, 1, uint16_t)
#define _m51 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "FxRequestBase.m_VeriferFlagsByName.DriverDispatch", driver_dispatch, 0x3, 0x1, true, 0x9b3ba63058712c39, 1, uint16_t)
#define _m52 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "FxRequestBase.m_VeriferFlagsByName.DriverCancelable", driver_cancelable, 0x4, 0x1, true, 0x29fad4fc70c506ec, 1, uint16_t)
#define _m53 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "FxRequestBase.m_VeriferFlagsByName.DriverInprocessContext", driver_inprocess_context, 0x5, 0x1, true, 0xf1c8fcc93554e4ab, 1, uint16_t)
#define _m54 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "FxRequestBase.m_VeriferFlagsByName.Cancelled", cancelled, 0x6, 0x1, true, 0x89176e8ada0185e7, 1, uint16_t)
#define _m55 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "FxRequestBase.m_VeriferFlagsByName.Formatted", formatted, 0x7, 0x1, true, 0x2771b2e9fa08076, 1, uint16_t)
#define _m56 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "FxRequestBase.m_VeriferFlagsByName.SentToTarget", sent_to_target, 0x8, 0x1, true, 0x9c6f3579bd5f5460, 1, uint16_t)
#define _m57 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "FxRequestBase.m_VeriferFlagsByName.DriverInEvtIoStopContext", driver_in_evt_io_stop_context, 0x9, 0x1, true, 0x9ea2897ab3590842, 1, uint16_t)
#define _m63 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequestBase.m_RequestBaseFlagsByName.SystemMdlMapped", system_mdl_mapped, 0x0, 0x1, true, 0xc8b7f1ddec701a09, 1, uint8_t)
#define _m64 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequestBase.m_RequestBaseFlagsByName.OutputMdlMapped", output_mdl_mapped, 0x1, 0x1, true, 0x67b6cfa0d466afe9, 1, uint8_t)
#define _m65 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequestBase.m_RequestBaseFlagsByName.SyncCleanupContext", sync_cleanup_context, 0x2, 0x1, true, 0xa8a1dddffb87ecdd, 1, uint8_t)
#define _m68 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequestBase.m_RequestBaseStaticFlagsByName.SystemBufferValid", system_buffer_valid, 0x0, 0x1, true, 0x75b9855aee91953f, 1, uint8_t)
#define _m69 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequestBase.m_RequestBaseStaticFlagsByName.OutputBufferValid", output_buffer_valid, 0x1, 0x1, true, 0xa9fe74335a86086a, 1, uint8_t)
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
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m047
#define _m05
#define _m058
#define _m059
#define _m06
#define _m060
#define _m061
#define _m062
#define _m066
#define _m067
#define _m07
#define _m070
#define _m071
#define _m072
#define _m073
#define _m074
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m37
#define _m38
#define _m39
#define _m40
#define _m41
#define _m48
#define _m49
#define _m50
#define _m51
#define _m52
#define _m53
#define _m54
#define _m55
#define _m56
#define _m57
#define _m63
#define _m64
#define _m65
#define _m68
#define _m69
#endif