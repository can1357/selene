#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_GLOBALS.DebugFlags", debug_flags, 0x0, 0x20, true, 0xf7d4d7da2d48f25e)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_GLOBALS.TraceFlags", trace_flags, 0x40, 0x40, true, 0xa76ac1ffda004d50)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_GLOBALS.GFlags", g_flags, 0x80, 0x20, true, 0xdf049861d6418733)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_GLOBALS.RegHandle", reg_handle, 0xc0, 0x40, true, 0xb5b91571ec1883ea)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_GLOBALS.NumProcessors", num_processors, 0x100, 0x20, true, 0x3ea9966eccf76a5a)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_GLOBALS.CacheLineSize", cache_line_size, 0x120, 0x20, true, 0x8fbfea224c1eac81)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_GLOBALS.AlignedInstanceTrackingListSize", aligned_instance_tracking_list_size, 0x140, 0x20, true, 0x814c66da4a92d242)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_GLOBALS.ControlDeviceObject", control_device_object, 0x180, 0x40, true, 0x71d51c1549ac35bb)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::driver_object_t*), "_GLOBALS.DriverObject", driver_object, 0x1c0, 0x40, true, 0x52e32a1140ce19f9)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_GLOBALS.KtmTransactionManagerHandle", ktm_transaction_manager_handle, 0x200, 0x40, true, 0x6b6b981949c56441)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_GLOBALS.TxVolKtmResourceManagerHandle", tx_vol_ktm_resource_manager_handle, 0x240, 0x40, true, 0x6afe9fb08950a22e)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kresourcemanager_t*), "_GLOBALS.TxVolKtmResourceManager", tx_vol_ktm_resource_manager, 0x280, 0x40, true, 0x3952748463bb01d3)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_resource_list_head_t), "_GLOBALS.FrameList", frame_list, 0x2c0, 0x0, true, 0x5588e29ad1c1eb7d)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::fast_mutex_t), "_GLOBALS.Phase2InitLock", phase2_init_lock, 0x6c0, 0xc0, true, 0xb412aed3b8698fde)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_GLOBALS.RegistryPath", registry_path, 0x880, 0x80, true, 0x3ada2ec32edd1b19)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 160>), "_GLOBALS.RegistryPathBuffer", registry_path_buffer, 0x900, 0x0, true, 0x6c16cc95fd58428)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_cache_aware_legacy_t*), "_GLOBALS.GlobalVolumeOperationLock", global_volume_operation_lock, 0x1300, 0x40, true, 0x1b7ef98912810d62)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::object_type_t*), "_GLOBALS.FltpServerPortObjectType", fltp_server_port_object_type, 0x1340, 0x40, true, 0xf25cfcb62d02742b)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::object_type_t*), "_GLOBALS.FltpCommunicationPortObjectType", fltp_communication_port_object_type, 0x1380, 0x40, true, 0x91eb0f2470516889)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_GLOBALS.MsgDeviceObject", msg_device_object, 0x13c0, 0x40, true, 0x7706f0c26b861151)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct nt::ktimer_t, struct ex::timer_t*>), "_GLOBALS.ManualDeviceAttachTimer", manual_device_attach_timer, 0x1400, 0x40, true, 0xe135be130d9f5360)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_GLOBALS.ManualDeviceAttachWork", manual_device_attach_work, 0x1440, 0x0, true, 0xaef30877bee4bfda)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_GLOBALS.ManualDeviceAttachLimit", manual_device_attach_limit, 0x1540, 0x20, true, 0x90bc82989019c65)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_GLOBALS.ManualAttachDelayCounter", manual_attach_delay_counter, 0x1560, 0x20, true, 0x38681058de19c28e)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_GLOBALS.FastManualAttachTimerPeriod", fast_manual_attach_timer_period, 0x1580, 0x20, true, 0x1334fbd748e6802b)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_GLOBALS.ManualAttachTimerPeriod", manual_attach_timer_period, 0x15a0, 0x20, true, 0xe8e10a36f374a663)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_GLOBALS.ManualAttachDelay", manual_attach_delay, 0x15c0, 0x20, true, 0x81a1d4277ca7c83a)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_GLOBALS.ManualAttachIgnoredDevices", manual_attach_ignored_devices, 0x15e0, 0x8, true, 0x90ce14d31126a317)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_GLOBALS.ManualAttachOnlyOnceDevices", manual_attach_only_once_devices, 0x15e8, 0x8, true, 0xadd149bba3a9ae4)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_GLOBALS.ManualAttachFastAttachDevices", manual_attach_fast_attach_devices, 0x15f0, 0x8, true, 0x5a7ef9f8c6b6f629)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::npaged_lookaside_list_t), "_GLOBALS.TargetedIoCtrlLookasideList", targeted_io_ctrl_lookaside_list, 0x1600, 0x0, true, 0xe773ee31ada377e9)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::paged_lookaside_list_t), "_GLOBALS.IoDeviceHintLookasideList", io_device_hint_lookaside_list, 0x1a00, 0x0, true, 0x12eb6f21bc0bd000)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::npaged_lookaside_list_t), "_GLOBALS.StreamListCtrlLookasideList", stream_list_ctrl_lookaside_list, 0x1e00, 0x0, true, 0x6f21d8a0cd719dcb)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::npaged_lookaside_list_t), "_GLOBALS.FileListCtrlLookasideList", file_list_ctrl_lookaside_list, 0x2200, 0x0, true, 0x77f8edf089e5e461)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::npaged_lookaside_list_t), "_GLOBALS.NameCacheCreateCtrlLookasideList", name_cache_create_ctrl_lookaside_list, 0x2600, 0x0, true, 0xde81308f26c082f0)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::npaged_lookaside_list_t), "_GLOBALS.AsyncIoContextLookasideList", async_io_context_lookaside_list, 0x2a00, 0x0, true, 0x416bb7c08ef0aae1)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::npaged_lookaside_list_t), "_GLOBALS.WorkItemLookasideList", work_item_lookaside_list, 0x2e00, 0x0, true, 0xd8fd6fc44ff14fa6)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::npaged_lookaside_list_t), "_GLOBALS.NameControlLookasideList", name_control_lookaside_list, 0x3200, 0x0, true, 0xa6589cc05a99e7fe)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::npaged_lookaside_list_t), "_GLOBALS.OperationStatusCtrlLookasideList", operation_status_ctrl_lookaside_list, 0x3600, 0x0, true, 0xaf0c3f287a9df9b1)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::npaged_lookaside_list_t), "_GLOBALS.NameGenerationContextLookasideList", name_generation_context_lookaside_list, 0x3a00, 0x0, true, 0x451b40f2ea8675ff)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::paged_lookaside_list_t), "_GLOBALS.FileLockLookasideList", file_lock_lookaside_list, 0x3e00, 0x0, true, 0x3fc1f9bff50217c4)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::npaged_lookaside_list_t), "_GLOBALS.TxnParameterBlockLookasideList", txn_parameter_block_lookaside_list, 0x4200, 0x0, true, 0x1f68ee48f3ca83f7)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::npaged_lookaside_list_t), "_GLOBALS.TxCtxExtensionNPagedLookasideList", tx_ctx_extension_n_paged_lookaside_list, 0x4600, 0x0, true, 0xb99be10a37750013)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::npaged_lookaside_list_t), "_GLOBALS.TxVolCtxLookasideList", tx_vol_ctx_lookaside_list, 0x4a00, 0x0, true, 0x983f29bf9ac6616f)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::paged_lookaside_list_t), "_GLOBALS.TxVolStreamListCtrlEntryLookasideList", tx_vol_stream_list_ctrl_entry_lookaside_list, 0x4e00, 0x0, true, 0x6052c0c7621fdfc8)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::npaged_lookaside_list_t), "_GLOBALS.SectionListCtrlLookasideList", section_list_ctrl_lookaside_list, 0x5200, 0x0, true, 0x7887dd5121f1ce54)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::npaged_lookaside_list_t), "_GLOBALS.SectionCtxExtensionLookasideList", section_ctx_extension_lookaside_list, 0x5600, 0x0, true, 0xd633c1c0a12b6cac)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::paged_lookaside_list_t), "_GLOBALS.OpenReparseListLookasideList", open_reparse_list_lookaside_list, 0x5a00, 0x0, true, 0x859feccc1ad8c81b)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::paged_lookaside_list_t), "_GLOBALS.OpenReparseListEntryLookasideList", open_reparse_list_entry_lookaside_list, 0x5e00, 0x0, true, 0xe2720792864c1567)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<u0_fltp_parameter_offset_table_t, 28>), "_GLOBALS.FltpParameterOffsetTable", fltp_parameter_offset_table, 0x8600, 0x0, true, 0x9ac3d87329ab973d)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::throttled_work_item_ctrl_t), "_GLOBALS.ThrottledWorkCtrl", throttled_work_ctrl, 0x8d00, 0x80, true, 0xe91bc434f0c682ec)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_GLOBALS.LostItemDelayInSeconds", lost_item_delay_in_seconds, 0x8f80, 0x20, true, 0x15d3b8c176e30707)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_GLOBALS.VerifiedFiltersList", verified_filters_list, 0x8fc0, 0x80, true, 0x5a8bc670eee94d74)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_GLOBALS.VerifiedFiltersLock", verified_filters_lock, 0x9040, 0x40, true, 0x44e2fb7001e9fa52)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_GLOBALS.VerifiedResourceLinkFailures", verified_resource_link_failures, 0x9080, 0x20, true, 0x22b0001fc5248b23)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_GLOBALS.VerifiedResourceUnlinkFailures", verified_resource_unlink_failures, 0x90a0, 0x20, true, 0x800adf51f57c6836)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wmi::fltio_notify_routines_t*), "_GLOBALS.PerfTraceRoutines", perf_trace_routines, 0x90c0, 0x40, true, 0x67b37081c2b64644)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wmi::fltio_notify_routines_t), "_GLOBALS.DummyPerfTraceRoutines", dummy_perf_trace_routines, 0x9100, 0x80, true, 0x7050692ac3671cf6)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_GLOBALS.RenameCounter", rename_counter, 0x9280, 0x40, true, 0x36fda296d30cfbb5)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_GLOBALS.FilterSupportedFeaturesMode", filter_supported_features_mode, 0x92c0, 0x20, true, 0x7d683e321a1009cb)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_GLOBALS.InitialRundownSize", initial_rundown_size, 0x9300, 0x40, true, 0x8e8ffa17211fab2b)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::paged_lookaside_list_t), "_GLOBALS.QueryOnCreateLookasideList", query_on_create_lookaside_list, 0x6200, 0x0, true, 0xd8d72ea1ce3e7fc5)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::paged_lookaside_list_t), "_GLOBALS.NameBufferLookasideList", name_buffer_lookaside_list, 0x6600, 0x0, true, 0xdcd95471295cf86b)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::paged_lookaside_list_t, 7>), "_GLOBALS.NameCacheNodeLookasideLists", name_cache_node_lookaside_lists, 0x6a00, 0x0, true, 0xdca93e677a816fe0)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_GLOBALS.ManualDeviceAttachTimerDpc", manual_device_attach_timer_dpc, 0x0, 0x0, false, 0x24c4d30477a84687)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_GLOBALS.CallbackStackSwapThreshold", callback_stack_swap_threshold, 0x0, 0x0, false, 0x55a0a51680e8f162)
#define _m49 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::lock_operation_t), "_GLOBALS.FltpParameterOffsetTable.DesiredAccess", desired_access, 0x0, 0x20, true, 0xaeb06d6983a9c8b5)
#define _m50 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_GLOBALS.FltpParameterOffsetTable.MdlAddressOffset", mdl_address_offset, 0x20, 0x8, true, 0xf97625f0350f4f74)
#define _m51 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_GLOBALS.FltpParameterOffsetTable.BufferOffset", buffer_offset, 0x28, 0x8, true, 0x1d05f403c239fc83)
#define _m52 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_GLOBALS.FltpParameterOffsetTable.LengthOffset", length_offset, 0x30, 0x8, true, 0xe6ea9c899be3d693)
#define _m53 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_GLOBALS.FltpParameterOffsetTable.ReservedOffset", reserved_offset, 0x38, 0x8, true, 0x1e47132156a7dee9)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
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
#define _m054
#define _m055
#define _m056
#define _m057
#define _m058
#define _m059
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
#define _m070
#define _m49
#define _m50
#define _m51
#define _m52
#define _m53
#endif