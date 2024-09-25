#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxRequest.m_Type", m_type, 0x40, 0x10, true, 0x881453819495c23e)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxRequest.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x7c1f99df75320dd9)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxRequest.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x5192de2232048513)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxRequest.m_Globals", m_globals, 0x80, 0x40, true, 0x9325a07dce1c23)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxRequest.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0xb66f8d3f5133cb8d)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxRequest.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x85b4dd264f61ea04)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxRequest.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x32604a4993ad1bf0)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxRequest.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xe5ec3cbc21d9165a)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxRequest.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x40a27eb9639e2a56)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxRequest.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0x6611348a2412f738)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxRequest.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x7632507b69e4685e)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxRequest.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0xf01e205b167f07c4)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxRequest.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x5734210dde6bfbcb)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxRequest.m_Device", m_device, 0x300, 0x40, true, 0xb70af9bb728a6f2c)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxRequest.m_NPLock", m_np_lock, 0x340, 0x80, true, 0xd903444930f1ca0a)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::csq_irp_context_t), "FxRequest.m_CsqContext", m_csq_context, 0x3c0, 0xc0, true, 0xb4309847454fd888)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxRequest.m_ListEntry", m_list_entry, 0x3c0, 0x80, true, 0xe98f80856a4602c1)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxRequest.m_DrainSingleEntry", m_drain_single_entry, 0x480, 0x40, true, 0xd670e85131658fdb)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxRequest.m_NextStackLocationFormatted", m_next_stack_location_formatted, 0x480, 0x8, true, 0x522389320ee2cb62)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::irp_t), "FxRequest.m_Irp", m_irp, 0x4c0, 0x40, true, 0x2c4bd186d88568ac)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::io_target_t*), "FxRequest.m_Target", m_target, 0x500, 0x40, true, 0x2d6cd44d7895560d)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::request_context_t*), "FxRequest.m_RequestContext", m_request_context, 0x540, 0x40, true, 0x871b000c88846800)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::request_timer_t*), "FxRequest.m_Timer", m_timer, 0x580, 0x40, true, 0x7a7fc87480ef5048)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::request_cancel_callback_t), "FxRequest.m_CancelRoutine", m_cancel_routine, 0x5c0, 0x40, true, 0x81d206bc9ab2667f)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::request_completion_callback_t), "FxRequest.m_CompletionRoutine", m_completion_routine, 0x600, 0x40, true, 0xc91c6aff6c0b6a27)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxRequest.m_TargetCompletionContext", m_target_completion_context, 0x640, 0x40, true, 0xa858f1d37ed3f05f)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxRequest.m_IrpCompletionReferenceCount", m_irp_completion_reference_count, 0x680, 0x20, true, 0x66e7c80b6a5e0c43)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxRequest.m_TargetFlags", m_target_flags, 0x6a0, 0x8, true, 0x5eac5760ea9ab6c5)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_m_target_flags_by_name_t), "FxRequest.m_TargetFlagsByName", m_target_flags_by_name, 0x6a0, 0x8, true, 0xc6e20f08875fdb61)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxRequest.m_IrpAllocation", m_irp_allocation, 0x6a8, 0x8, true, 0xa43b0960f8015f29)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxRequest.m_Completed", m_completed, 0x6b0, 0x8, true, 0xa2f3d8f67d829606)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxRequest.m_Canceled", m_canceled, 0x6b8, 0x8, true, 0xb527d705dead972f)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxRequest.m_SystemBufferOffset", m_system_buffer_offset, 0x6c0, 0x10, true, 0xa03c01d4db4d356e)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "FxRequest.m_VerifierFlags", m_verifier_flags, 0x6d0, 0x10, true, 0x5575c41bea93d69b)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequest.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0xcdd8d9eba019bf71, 1, uint16_t)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_m_verifer_flags_by_name_t), "FxRequest.m_VeriferFlagsByName", m_verifer_flags_by_name, 0x6d0, 0x10, true, 0xc499f55466bba44e)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxRequest.m_IrpReferenceCount", m_irp_reference_count, 0x6e0, 0x20, true, 0xf950ff37fc1c844a)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequest.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0xd1aeb0d411ec887f, 1, uint16_t)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::irp_queue_t*), "FxRequest.m_IrpQueue", m_irp_queue, 0x700, 0x40, true, 0xcd34a9d11c0a12c2)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxRequest.m_OutputBufferOffset", m_output_buffer_offset, 0x740, 0x10, true, 0x1c7d0e605c8d6d79)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxRequest.m_RequestBaseFlags", m_request_base_flags, 0x750, 0x8, true, 0x208940520eb74847)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_m_request_base_flags_by_name_t), "FxRequest.m_RequestBaseFlagsByName", m_request_base_flags_by_name, 0x750, 0x8, true, 0xecea27ad6cb70098)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxRequest.m_RequestBaseStaticFlags", m_request_base_static_flags, 0x758, 0x8, true, 0x6483ee2b7f59c4c3)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequest.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x93a929e6eea75393, 1, uint16_t)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u16_m_request_base_static_flags_by_name_t), "FxRequest.m_RequestBaseStaticFlagsByName", m_request_base_static_flags_by_name, 0x758, 0x8, true, 0x1f7ae3eae02a240a)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "FxRequest.m_PriorityBoost", m_priority_boost, 0x760, 0x8, true, 0xdad4c108fe83dba9)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxRequest.m_CompletionState", m_completion_state, 0x768, 0x8, true, 0xceabf92a7aaf74c5)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxRequest.m_CanComplete", m_can_complete, 0x770, 0x8, true, 0xc8a980b12c54885a)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "FxRequest.m_AllocatedMdl", m_allocated_mdl, 0x780, 0x40, true, 0xd0f29a3d4e42fbe7)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::io_queue_t*), "FxRequest.m_IoQueue", m_io_queue, 0x7c0, 0x40, true, 0xe83fb02647e628f4)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::request_system_buffer_t), "FxRequest.m_SystemBuffer", m_system_buffer, 0x800, 0x80, true, 0xc5bbfbe0043d96b3)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::request_output_buffer_t), "FxRequest.m_OutputBuffer", m_output_buffer, 0x880, 0x80, true, 0xe0e88b67c88bbe92)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxRequest.m_OwnerListEntry", m_owner_list_entry, 0x900, 0x80, true, 0x455f61b168c4683c)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxRequest.m_OwnerListEntry2", m_owner_list_entry2, 0x980, 0x80, true, 0xa4675931bda36721)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequest.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x3f7c9b7c8626dd04, 1, uint16_t)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxRequest.m_ForwardProgressList", m_forward_progress_list, 0xa00, 0x80, true, 0x10f3a799ef6b302b)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::io_queue_t*), "FxRequest.m_ForwardProgressQueue", m_forward_progress_queue, 0xa80, 0x40, true, 0xfeeeb6f9be955cea)
#define _m082 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxRequest.m_InternalContext", m_internal_context, 0xac0, 0x40, true, 0xeab0f391629134cd)
#define _m083 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxRequest.m_Presented", m_presented, 0xb00, 0x8, true, 0x617f8002b1a032f2)
#define _m084 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxRequest.m_PowerStopState", m_power_stop_state, 0xb08, 0x8, true, 0xede34d74bf2543c7)
#define _m085 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxRequest.m_Reserved", m_reserved, 0xb10, 0x8, true, 0x7d2b76422c9ef432)
#define _m086 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxRequest.m_ForwardRequestToParent", m_forward_request_to_parent, 0xb18, 0x8, true, 0xb6bde40adde2b1e4)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequest.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0xcef5c8b52a59972d, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequest.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0x5d4171501f352860, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequest.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0x7f05d0fc58a2eb43, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequest.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0xf742d57b85102f54, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequest.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0xf090db06e3a14c7a, 1, uint16_t)
#define _m37 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequest.m_TargetFlagsByName.Completed", completed, 0x0, 0x1, true, 0xa4b01c2067bb5023, 1, uint8_t)
#define _m38 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequest.m_TargetFlagsByName.FlagsPended", flags_pended, 0x1, 0x1, true, 0xe9ae12cb9f8c1f29, 1, uint8_t)
#define _m39 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequest.m_TargetFlagsByName.TimerSet", timer_set, 0x2, 0x1, true, 0x6bc2988bf4a23218, 1, uint8_t)
#define _m40 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequest.m_TargetFlagsByName.CancelledFromTimer", cancelled_from_timer, 0x3, 0x1, true, 0x38c2a67a3ff5a55d, 1, uint8_t)
#define _m41 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequest.m_TargetFlagsByName.IgnoreState", ignore_state, 0x4, 0x1, true, 0xe7810485b55eecc8, 1, uint8_t)
#define _m48 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "FxRequest.m_VeriferFlagsByName.DriverOwned", driver_owned, 0x0, 0x1, true, 0xd10abbb17b74726b, 1, uint16_t)
#define _m49 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "FxRequest.m_VeriferFlagsByName.TagRequest", tag_request, 0x1, 0x1, true, 0xba415fa90b8a14f7, 1, uint16_t)
#define _m50 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "FxRequest.m_VeriferFlagsByName.Forwarded", forwarded, 0x2, 0x1, true, 0x4e7b63dc0f9b6cbf, 1, uint16_t)
#define _m51 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "FxRequest.m_VeriferFlagsByName.DriverDispatch", driver_dispatch, 0x3, 0x1, true, 0xcfcb815c583da491, 1, uint16_t)
#define _m52 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "FxRequest.m_VeriferFlagsByName.DriverCancelable", driver_cancelable, 0x4, 0x1, true, 0xe8f3d1626ec8f82b, 1, uint16_t)
#define _m53 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "FxRequest.m_VeriferFlagsByName.DriverInprocessContext", driver_inprocess_context, 0x5, 0x1, true, 0x3f909a7e738ff112, 1, uint16_t)
#define _m54 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "FxRequest.m_VeriferFlagsByName.Cancelled", cancelled, 0x6, 0x1, true, 0x89b545f701a81d60, 1, uint16_t)
#define _m55 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "FxRequest.m_VeriferFlagsByName.Formatted", formatted, 0x7, 0x1, true, 0xc5be55b814a564b7, 1, uint16_t)
#define _m56 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "FxRequest.m_VeriferFlagsByName.SentToTarget", sent_to_target, 0x8, 0x1, true, 0x73ccbf62dc3b5dd4, 1, uint16_t)
#define _m57 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "FxRequest.m_VeriferFlagsByName.DriverInEvtIoStopContext", driver_in_evt_io_stop_context, 0x9, 0x1, true, 0xad70a6a190f8e8b5, 1, uint16_t)
#define _m63 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequest.m_RequestBaseFlagsByName.SystemMdlMapped", system_mdl_mapped, 0x0, 0x1, true, 0xf1522d0cf50726da, 1, uint8_t)
#define _m64 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequest.m_RequestBaseFlagsByName.OutputMdlMapped", output_mdl_mapped, 0x1, 0x1, true, 0x636d59f6c4bac63e, 1, uint8_t)
#define _m65 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequest.m_RequestBaseFlagsByName.SyncCleanupContext", sync_cleanup_context, 0x2, 0x1, true, 0xbf24cf652aedfc65, 1, uint8_t)
#define _m68 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequest.m_RequestBaseStaticFlagsByName.SystemBufferValid", system_buffer_valid, 0x0, 0x1, true, 0xb5f9b7e66ed135e, 1, uint8_t)
#define _m69 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxRequest.m_RequestBaseStaticFlagsByName.OutputBufferValid", output_buffer_valid, 0x1, 0x1, true, 0x79a913c234e2ecf1, 1, uint8_t)
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
#define _m075
#define _m076
#define _m077
#define _m078
#define _m079
#define _m08
#define _m080
#define _m081
#define _m082
#define _m083
#define _m084
#define _m085
#define _m086
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