#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxSyncRequest.m_Type", m_type, 0x40, 0x10, true, 0x2651f498a9cde658)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxSyncRequest.m_ObjectSize", m_object_size, 0x50, 0x10, true, 0x9ff1c360ed3d0b3)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxSyncRequest.m_Refcnt", m_refcnt, 0x60, 0x20, true, 0x3864436175b90d2d)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxSyncRequest.m_Globals", m_globals, 0x80, 0x40, true, 0x4ab6d28c094ea2f1)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxSyncRequest.m_ObjectFlags", m_object_flags, 0xc0, 0x10, true, 0x76dea73b90a219eb)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_object_flags_by_name_t), "FxSyncRequest.m_ObjectFlagsByName", m_object_flags_by_name, 0xc0, 0x10, true, 0x1b52914c7777e8d7)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxSyncRequest.m_ObjectState", m_object_state, 0xd0, 0x10, true, 0x515e8b18d7000c5e)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxSyncRequest.m_ChildListHead", m_child_list_head, 0x100, 0x80, true, 0xeec55afddb288d7b)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxSyncRequest.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0xf45cb093667eafce)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxSyncRequest.m_ParentObject", m_parent_object, 0x200, 0x40, true, 0xb0413a18c0558644)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxSyncRequest.m_ChildEntry", m_child_entry, 0x240, 0x80, true, 0x1989a0c5410e5a2f)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxSyncRequest.m_DisposeSingleEntry", m_dispose_single_entry, 0x2c0, 0x40, true, 0xad436d6ad51c0ef4)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_base_t*), "FxSyncRequest.m_DeviceBase", m_device_base, 0x300, 0x40, true, 0x515ab05824483859)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "FxSyncRequest.m_Device", m_device, 0x300, 0x40, true, 0xd1589b4a80f12b22)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxSyncRequest.m_NPLock", m_np_lock, 0x340, 0x80, true, 0xb47a36104e284701)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::csq_irp_context_t), "FxSyncRequest.m_CsqContext", m_csq_context, 0x3c0, 0xc0, true, 0x8dab5d46fe23433a)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxSyncRequest.m_ListEntry", m_list_entry, 0x3c0, 0x80, true, 0x8725931fbc6a13)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "FxSyncRequest.m_DrainSingleEntry", m_drain_single_entry, 0x480, 0x40, true, 0xd2ff8193a5a56620)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxSyncRequest.m_NextStackLocationFormatted", m_next_stack_location_formatted, 0x480, 0x8, true, 0x1e620fe5bcb05f33)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::irp_t), "FxSyncRequest.m_Irp", m_irp, 0x4c0, 0x40, true, 0xad602cca0e77ee19)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::io_target_t*), "FxSyncRequest.m_Target", m_target, 0x500, 0x40, true, 0xbe98c5a16ec17b7)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::request_context_t*), "FxSyncRequest.m_RequestContext", m_request_context, 0x540, 0x40, true, 0x167fcf8deda7b89d)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::request_timer_t*), "FxSyncRequest.m_Timer", m_timer, 0x580, 0x40, true, 0x871b67170f925434)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::request_cancel_callback_t), "FxSyncRequest.m_CancelRoutine", m_cancel_routine, 0x5c0, 0x40, true, 0xecfb5726892eec40)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::request_completion_callback_t), "FxSyncRequest.m_CompletionRoutine", m_completion_routine, 0x600, 0x40, true, 0xad8e7751c482c511)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FxSyncRequest.m_TargetCompletionContext", m_target_completion_context, 0x640, 0x40, true, 0x28c2787dd76d6664)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxSyncRequest.m_IrpCompletionReferenceCount", m_irp_completion_reference_count, 0x680, 0x20, true, 0x783c0aec641b7912)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxSyncRequest.m_TargetFlags", m_target_flags, 0x6a0, 0x8, true, 0x8933a64bd870d21b)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_m_target_flags_by_name_t), "FxSyncRequest.m_TargetFlagsByName", m_target_flags_by_name, 0x6a0, 0x8, true, 0x9d3646fbfa296666)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxSyncRequest.m_IrpAllocation", m_irp_allocation, 0x6a8, 0x8, true, 0x36c1e277f2760bbb)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxSyncRequest.m_Completed", m_completed, 0x6b0, 0x8, true, 0xfc7e2ec666fe3b02)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxSyncRequest.m_Canceled", m_canceled, 0x6b8, 0x8, true, 0x654c78149b5a6bd0)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxSyncRequest.m_SystemBufferOffset", m_system_buffer_offset, 0x6c0, 0x10, true, 0xb0d51fb883f5a74f)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "FxSyncRequest.m_VerifierFlags", m_verifier_flags, 0x6d0, 0x10, true, 0x89293fc743a5d2f5)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSyncRequest.m_ObjectFlagsByName.PassiveCallbacks", passive_callbacks, 0x0, 0x1, true, 0x939debc3f7e5be09, 1, uint16_t)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_m_verifer_flags_by_name_t), "FxSyncRequest.m_VeriferFlagsByName", m_verifer_flags_by_name, 0x6d0, 0x10, true, 0x1c73e035dfbded5c)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxSyncRequest.m_IrpReferenceCount", m_irp_reference_count, 0x6e0, 0x20, true, 0xb808951bce1a3bfc)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSyncRequest.m_ObjectFlagsByName.NoDeleteDDI", no_delete_ddi, 0x1, 0x1, true, 0x716d10543fa13ada, 1, uint16_t)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::irp_queue_t*), "FxSyncRequest.m_IrpQueue", m_irp_queue, 0x700, 0x40, true, 0x17c856c10b17c684)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxSyncRequest.m_OutputBufferOffset", m_output_buffer_offset, 0x740, 0x10, true, 0x5c29a1df47c35f83)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxSyncRequest.m_RequestBaseFlags", m_request_base_flags, 0x750, 0x8, true, 0x7367c119f0c33c06)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_m_request_base_flags_by_name_t), "FxSyncRequest.m_RequestBaseFlagsByName", m_request_base_flags_by_name, 0x750, 0x8, true, 0x95d016d53f6d1f9)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxSyncRequest.m_RequestBaseStaticFlags", m_request_base_static_flags, 0x758, 0x8, true, 0xb1d56241b1df70b6)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSyncRequest.m_ObjectFlagsByName.DeleteCalled", delete_called, 0x2, 0x1, true, 0x5aeb3e1f4e6d91ac, 1, uint16_t)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u16_m_request_base_static_flags_by_name_t), "FxSyncRequest.m_RequestBaseStaticFlagsByName", m_request_base_static_flags_by_name, 0x758, 0x8, true, 0x832d58a094cf589c)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "FxSyncRequest.m_PriorityBoost", m_priority_boost, 0x760, 0x8, true, 0x5ba6f5f311b2b02c)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxSyncRequest.m_CompletionState", m_completion_state, 0x768, 0x8, true, 0x629918ef3539b67)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxSyncRequest.m_CanComplete", m_can_complete, 0x770, 0x8, true, 0xb781a9a33d55669d)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "FxSyncRequest.m_AllocatedMdl", m_allocated_mdl, 0x780, 0x40, true, 0x86da8a86d2d3cc87)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::cr_event_t), "FxSyncRequest.m_DestroyedEvent", m_destroyed_event, 0x7c0, 0x0, true, 0x72d78571af3b538a)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::request_base_t*), "FxSyncRequest.m_TrueRequest", m_true_request, 0x8c0, 0x40, true, 0xc14ad21a90d6bd7d)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxSyncRequest.m_ClearContextOnDestroy", m_clear_context_on_destroy, 0x900, 0x8, true, 0xae176be0b4f636b2)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSyncRequest.m_ObjectFlagsByName.Committed", committed, 0x3, 0x1, true, 0x3aea0d1cfd070582, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSyncRequest.m_ObjectFlagsByName.PassiveDispose", passive_dispose, 0x4, 0x1, true, 0x38aa18de918a256b, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSyncRequest.m_ObjectFlagsByName.ForceDisposeThread", force_dispose_thread, 0x5, 0x1, true, 0xe1ef8f4621cbdbe3, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSyncRequest.m_ObjectFlagsByName.HasDebug", has_debug, 0x7, 0x1, true, 0xc9b0835f6e95e6b9, 1, uint16_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSyncRequest.m_ObjectFlagsByName.EarlyDisposedExt", early_disposed_ext, 0x8, 0x1, true, 0x7d7cf3e68375e14d, 1, uint16_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSyncRequest.m_ObjectFlagsByName.TraceState", trace_state, 0x9, 0x1, true, 0xcc78b6e7c87d4a7, 1, uint16_t)
#define _m37 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSyncRequest.m_TargetFlagsByName.Completed", completed, 0x0, 0x1, true, 0x9b7e4db738db5e2b, 1, uint8_t)
#define _m38 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSyncRequest.m_TargetFlagsByName.FlagsPended", flags_pended, 0x1, 0x1, true, 0x4570b46794e835cb, 1, uint8_t)
#define _m39 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSyncRequest.m_TargetFlagsByName.TimerSet", timer_set, 0x2, 0x1, true, 0x71ebc5453fa4932, 1, uint8_t)
#define _m40 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSyncRequest.m_TargetFlagsByName.CancelledFromTimer", cancelled_from_timer, 0x3, 0x1, true, 0xc0c18bfc335c5e5e, 1, uint8_t)
#define _m41 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSyncRequest.m_TargetFlagsByName.IgnoreState", ignore_state, 0x4, 0x1, true, 0xd6286146a05f44c, 1, uint8_t)
#define _m48 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "FxSyncRequest.m_VeriferFlagsByName.DriverOwned", driver_owned, 0x0, 0x1, true, 0x322a02de59c4a5c2, 1, uint16_t)
#define _m49 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "FxSyncRequest.m_VeriferFlagsByName.TagRequest", tag_request, 0x1, 0x1, true, 0xcebec11aa9882c7b, 1, uint16_t)
#define _m50 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "FxSyncRequest.m_VeriferFlagsByName.Forwarded", forwarded, 0x2, 0x1, true, 0xaafbd269a29bb2dc, 1, uint16_t)
#define _m51 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "FxSyncRequest.m_VeriferFlagsByName.DriverDispatch", driver_dispatch, 0x3, 0x1, true, 0xfc3edaad4d7e1e6e, 1, uint16_t)
#define _m52 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "FxSyncRequest.m_VeriferFlagsByName.DriverCancelable", driver_cancelable, 0x4, 0x1, true, 0x672013c5bc223dbd, 1, uint16_t)
#define _m53 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "FxSyncRequest.m_VeriferFlagsByName.DriverInprocessContext", driver_inprocess_context, 0x5, 0x1, true, 0x441db2869418c258, 1, uint16_t)
#define _m54 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "FxSyncRequest.m_VeriferFlagsByName.Cancelled", cancelled, 0x6, 0x1, true, 0x2ca4c6963d59aa0f, 1, uint16_t)
#define _m55 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "FxSyncRequest.m_VeriferFlagsByName.Formatted", formatted, 0x7, 0x1, true, 0x48e343be09f0a28c, 1, uint16_t)
#define _m56 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "FxSyncRequest.m_VeriferFlagsByName.SentToTarget", sent_to_target, 0x8, 0x1, true, 0xdaa88f65ca9a40f9, 1, uint16_t)
#define _m57 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "FxSyncRequest.m_VeriferFlagsByName.DriverInEvtIoStopContext", driver_in_evt_io_stop_context, 0x9, 0x1, true, 0xefab9957e2b55a0f, 1, uint16_t)
#define _m63 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSyncRequest.m_RequestBaseFlagsByName.SystemMdlMapped", system_mdl_mapped, 0x0, 0x1, true, 0x3ac06f48d5332f5a, 1, uint8_t)
#define _m64 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSyncRequest.m_RequestBaseFlagsByName.OutputMdlMapped", output_mdl_mapped, 0x1, 0x1, true, 0x521f48daed945238, 1, uint8_t)
#define _m65 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSyncRequest.m_RequestBaseFlagsByName.SyncCleanupContext", sync_cleanup_context, 0x2, 0x1, true, 0x5fc64bb1c86ed573, 1, uint8_t)
#define _m68 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSyncRequest.m_RequestBaseStaticFlagsByName.SystemBufferValid", system_buffer_valid, 0x0, 0x1, true, 0x4e8c85d8c53535ca, 1, uint8_t)
#define _m69 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxSyncRequest.m_RequestBaseStaticFlagsByName.OutputBufferValid", output_buffer_valid, 0x1, 0x1, true, 0x330a533a0c653e3d, 1, uint8_t)
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