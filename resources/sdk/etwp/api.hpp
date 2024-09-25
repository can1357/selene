#pragma once
#include <sdkgen/support_library.hpp>
#include "../etw/logger_handle_t.hpp"
#include "../etw/silodriverstate_t.hpp"

#include "magic/api.start.hpp"
namespace etwp
{
    // [EtwpActiveSystemLoggers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe ALMOSTRO:0x3ab2c4, 0x32828 bytes
    //
    _m00(sdk::unknown_ptr) active_system_loggers;
    
    // [EtwpAddProviderToSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x50914c, 0x32828 bytes
    //
    _m01(sdk::unknown_ptr) add_provider_to_session;
    
    // [EtwpAddWinRtProviderToSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6ac238, 0x32828 bytes
    //
    _m02(sdk::unknown_ptr) add_win_rt_provider_to_session;
    
    // [EtwpAllocateLevelKwFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9e8778, 0x1fd000 bytes
    //
    _m03(sdk::unknown_ptr) allocate_level_kw_filter;
    
    // [EtwpAllocatePidFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9e8894, 0x1fd000 bytes
    //
    _m04(sdk::unknown_ptr) allocate_pid_filter;
    
    // [EtwpAllocateSchematizedFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9e8924, 0x1fd000 bytes
    //
    _m05(sdk::unknown_ptr) allocate_schematized_filter;
    
    // [EtwpAllocateStackwalkApcPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9dc380, 0x1fd000 bytes
    //
    _m06(sdk::unknown_ptr) allocate_stackwalk_apc_pool;
    
    // [EtwpAllocateTimeStampIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x50f75c, 0x32828 bytes
    //
    _m07(sdk::unknown_ptr) allocate_time_stamp_index;
    
    // [EtwpApplyStackWalkFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x2292c8, 0x32828 bytes
    //
    _m08(sdk::unknown_ptr) apply_stack_walk_filter;
    
    // [EtwpBootDeferredGroupMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe ALMOSTRO:0xd1e3e8, 0x1fd000 bytes
    //
    _m09(sdk::unknown_ptr) boot_deferred_group_mask;
    
    // [EtwpBootPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc317d8, 0x1fd000 bytes
    //
    _m10(sdk::unknown_ptr) boot_phase;
    
    // [EtwpCancelPendingStackWalkApcs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x346a2c, 0x1fd000 bytes
    //
    _m11(sdk::unknown_ptr) cancel_pending_stack_walk_apcs;
    
    // [EtwpCleanupSiloState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9d6db4, 0x1fd000 bytes
    //
    _m12(sdk::unknown_ptr) cleanup_silo_state;
    
    // [EtwpContainerStateWnfCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5e7350, 0x1fd000 bytes
    //
    _m13(sdk::unknown_ptr) container_state_wnf_callback;
    
    // [EtwpCopyMetaProviderGuids]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x469378, 0x1fd000 bytes
    //
    _m14(sdk::unknown_ptr) copy_meta_provider_guids;
    
    // [EtwpCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x2fe7a0, 0x32828 bytes
    //
    _m15(sdk::unknown_ptr) counters;
    
    // [EtwpCovSampCaptureQueueRebalance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5eeac8, 0x1fd000 bytes
    //
    _m16(sdk::unknown_ptr) cov_samp_capture_queue_rebalance;
    
    // [EtwpCpuStarvationProvEnableCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3e1bb0, 0x1fd000 bytes
    //
    _m17(sdk::unknown_ptr) cpu_starvation_prov_enable_callback;
    
    // [EtwpDriverDataDosPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xd16d10, 0x1fd000 bytes
    //
    _m18(sdk::unknown_ptr) driver_data_dos_path;
    
    // [EtwpEnableAutoLoggerProviders]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x556494, 0x32828 bytes
    //
    _m19(sdk::unknown_ptr) enable_auto_logger_providers;
    
    // [EtwpEnableBootLoggerRegistryProviders]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb832e0, 0x1fd000 bytes
    //
    _m20(sdk::unknown_ptr) enable_boot_logger_registry_providers;
    
    // [EtwpEnableMetaProviderGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2f2658, 0x1fd000 bytes
    //
    _m21(sdk::unknown_ptr) enable_meta_provider_guid;
    
    // [EtwpEventWriteCaptureState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9d6e68, 0x1fd000 bytes
    //
    _m22(sdk::unknown_ptr) event_write_capture_state;
    
    // [EtwpEventWriteDebugLookupFailed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9d6f24, 0x1fd000 bytes
    //
    _m23(sdk::unknown_ptr) event_write_debug_lookup_failed;
    
    // [EtwpEventWriteProviderAccessCheckStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9d7180, 0x1fd000 bytes
    //
    _m24(sdk::unknown_ptr) event_write_provider_access_check_status;
    
    // [EtwpFileModeCompress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3dacac, 0x1fd000 bytes
    //
    _m25(sdk::unknown_ptr) file_mode_compress;
    
    // [EtwpFindOrCreateGuidEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7053c0, 0x1fd000 bytes
    //
    _m26(sdk::unknown_ptr) find_or_create_guid_entry;
    
    // [EtwpFixBootLoggers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb541dc, 0x1fd000 bytes
    //
    _m27(sdk::unknown_ptr) fix_boot_loggers;
    
    // [EtwpFixBootSystemTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb8320c, 0x1fd000 bytes
    //
    _m28(sdk::unknown_ptr) fix_boot_system_time;
    
    // [EtwpFreeStackWalkApcs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x346474, 0x1fd000 bytes
    //
    _m29(sdk::unknown_ptr) free_stack_walk_apcs;
    
    // [EtwpFreeSystemLoggerIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x477928, 0x32828 bytes
    //
    _m30(sdk::unknown_ptr) free_system_logger_index;
    
    // [EtwpGetCrimsonStackKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5ed01c, 0x1fd000 bytes
    //
    _m31(sdk::unknown_ptr) get_crimson_stack_key;
    
    // [EtwpGetCurrentSiloMaxLoggers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3e7918, 0x1fd000 bytes
    //
    _m32(sdk::unknown_ptr) get_current_silo_max_loggers;
    
    // [EtwpGetCycleCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x4e7bc, 0x32828 bytes
    //
    _m33(sdk::unknown_ptr) get_cycle_count;
    
    // [EtwpGetDriverDataDosPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3df7c8, 0x1fd000 bytes
    //
    _m34(sdk::unknown_ptr) get_driver_data_dos_path;
    
    // [EtwpGetEnableInfoIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2f29c0, 0x1fd000 bytes
    //
    _m35(sdk::unknown_ptr) get_enable_info_index;
    
    // [EtwpGetGuidList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x893846, 0x1fd000 bytes
    //
    _m36(sdk::unknown_ptr) get_guid_list;
    
    // [EtwpGetMaxDebugIdBufferSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x511d18, 0x32828 bytes
    //
    _m37(sdk::unknown_ptr) get_max_debug_id_buffer_size;
    
    // [EtwpGetMetaProviderContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2f26d4, 0x1fd000 bytes
    //
    _m38(sdk::unknown_ptr) get_meta_provider_context;
    
    // [EtwpGetPerfCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x9d42c, 0x32828 bytes
    //
    _m39(sdk::unknown_ptr) get_perf_counter;
    
    // [EtwpGetPmcOwnership]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5e73cc, 0x1fd000 bytes
    //
    _m40(sdk::unknown_ptr) get_pmc_ownership;
    
    // [EtwpGetPmcProfileSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9d9a94, 0x1fd000 bytes
    //
    _m41(sdk::unknown_ptr) get_pmc_profile_source;
    
    // [EtwpGetPmcSessions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5e7574, 0x1fd000 bytes
    //
    _m42(sdk::unknown_ptr) get_pmc_sessions;
    
    // [EtwpGetProviderGroupFromTraits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4a610c, 0x32828 bytes
    //
    _m43(sdk::unknown_ptr) get_provider_group_from_traits;
    
    // [EtwpGetStackCaptureSettings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x466cc4, 0x1fd000 bytes
    //
    _m44(sdk::unknown_ptr) get_stack_capture_settings;
    
    // [EtwpGetSystemTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x99f20, 0x32828 bytes
    //
    _m45(sdk::unknown_ptr) get_system_time;
    
    // [EtwpGroupMasks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x2fe520, 0x32828 bytes
    //
    _m46(sdk::unknown_ptr) group_masks;
    
    // [EtwpInitializeBootTimeStamps]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb5f3a4, 0x1fd000 bytes
    //
    _m47(sdk::unknown_ptr) initialize_boot_time_stamps;
    
    // [EtwpInitializeClassicStackTracing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9dc420, 0x1fd000 bytes
    //
    _m48(sdk::unknown_ptr) initialize_classic_stack_tracing;
    
    // [EtwpInitializeRegEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x705290, 0x1fd000 bytes
    //
    _m49(sdk::unknown_ptr) initialize_reg_entry;
    
    // [EtwpInitializeSiloState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x848dc4, 0x1fd000 bytes
    //
    _m50(sdk::unknown_ptr) initialize_silo_state;
    
    // [EtwpIsCaptureStateAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x51ecc8, 0x32828 bytes
    //
    _m51(sdk::unknown_ptr) is_capture_state_allowed;
    
    // [EtwpLoggerSaveEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74afd8, 0x32828 bytes
    //
    _m52(sdk::unknown_ptr) logger_save_event;
    
    // [EtwpLoggerSaveInProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGEDATA:0x74ab12, 0x32828 bytes
    //
    _m53(sdk::unknown_ptr) logger_save_in_progress;
    
    // [EtwpMapMetaProviderKeywords]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4693b8, 0x1fd000 bytes
    //
    _m54(sdk::unknown_ptr) map_meta_provider_keywords;
    
    // [EtwpMetaProviderCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x469402, 0x1fd000 bytes
    //
    _m55(sdk::unknown_ptr) meta_provider_count;
    
    // [EtwpNotifyDisallowedGuidChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9dafc0, 0x1fd000 bytes
    //
    _m56(sdk::unknown_ptr) notify_disallowed_guid_change;
    
    // [EtwpPopFreeApcEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x466db0, 0x1fd000 bytes
    //
    _m57(sdk::unknown_ptr) pop_free_apc_entry;
    
    // [EtwpPreInitializeSiloState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x85238c, 0x1fd000 bytes
    //
    _m58(sdk::unknown_ptr) pre_initialize_silo_state;
    
    // [EtwpQueryMaximumFileSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x10ae6c, 0x32828 bytes
    //
    _m59(sdk::unknown_ptr) query_maximum_file_size;
    
    // [EtwpQuerySiloRegistrySettings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3cf320, 0x1fd000 bytes
    //
    _m60(sdk::unknown_ptr) query_silo_registry_settings;
    
    // [EtwpRegisterKMProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7a14f4, 0x1fd000 bytes
    //
    _m61(sdk::unknown_ptr) register_km_provider;
    
    // [EtwpRegisterUMProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x704ee0, 0x1fd000 bytes
    //
    _m62(sdk::unknown_ptr) register_um_provider;
    
    // [EtwpSetProviderTraitsCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4a6164, 0x32828 bytes
    //
    _m63(sdk::unknown_ptr) set_provider_traits_common;
    
    // [EtwpShutdownConsumers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x477844, 0x32828 bytes
    //
    _m64(sdk::unknown_ptr) shutdown_consumers;
    
    // [EtwpStartBootLogger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb833f0, 0x1fd000 bytes
    //
    _m65(sdk::unknown_ptr) start_boot_logger;
    
    // [EtwpStartLoggerThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x37fbb8, 0x1fd000 bytes
    //
    _m66(sdk::unknown_ptr) start_logger_thread;
    
    // [EtwpStartTraceMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x2fe4a0, 0x32828 bytes
    //
    _m67(sdk::unknown_ptr) start_trace_mutex;
    
    // [EtwpSystemLogger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x2fe3a0, 0x32828 bytes
    //
    _m68(sdk::unknown_ptr) system_logger;
    
    // [EtwpSystemTimeStamp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x2f3318, 0x32828 bytes
    //
    _m69(sdk::unknown_ptr) system_time_stamp;
    
    // [EtwpTiFillZeroVad]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x378198, 0x1fd000 bytes
    //
    _m70(sdk::unknown_ptr) ti_fill_zero_vad;
    
    // [EtwpTimeProfileStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9da63c, 0x1fd000 bytes
    //
    _m71(sdk::unknown_ptr) time_profile_start;
    
    // [EtwpTimeStampStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x2fe1bc, 0x32828 bytes
    //
    _m72(sdk::unknown_ptr) time_stamp_status;
    
    // [EtwpTraceLostSystemEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5e7abc, 0x1fd000 bytes
    //
    _m73(sdk::unknown_ptr) trace_lost_system_event;
    
    // [EtwpTraceLostWppEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5e7b74, 0x1fd000 bytes
    //
    _m74(sdk::unknown_ptr) trace_lost_wpp_event;
    
    // [EtwpTransitionToRealtime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5ea9b8, 0x1fd000 bytes
    //
    _m75(sdk::unknown_ptr) transition_to_realtime;
    
    // [EtwpUnsubscribeContainerStateWnf]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5e7c40, 0x1fd000 bytes
    //
    _m76(sdk::unknown_ptr) unsubscribe_container_state_wnf;
    
    // [EtwpUpdateEventFilterAndFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9e90c8, 0x1fd000 bytes
    //
    _m77(sdk::unknown_ptr) update_event_filter_and_free;
    
    // [EtwpUpdateEventNameFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6abd0c, 0x32828 bytes
    //
    _m78(sdk::unknown_ptr) update_event_name_filter;
    
    // [EtwpUpdateGuidFilterData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7007bc, 0x1fd000 bytes
    //
    _m79(sdk::unknown_ptr) update_guid_filter_data;
    
    // [EtwpUpdateKernelGroupMasks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x514f14, 0x32828 bytes
    //
    _m80(sdk::unknown_ptr) update_kernel_group_masks;
    
    // [EtwpUpdatePayloadFilterData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6abd0c, 0x32828 bytes
    //
    _m81(sdk::unknown_ptr) update_payload_filter_data;
    
    // [EtwpUpdatePerfectHashFunction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6abd0c, 0x32828 bytes
    //
    _m82(sdk::unknown_ptr) update_perfect_hash_function;
    
    // [EtwpUpdateRegEntryEnableMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x507740, 0x32828 bytes
    //
    _m83(sdk::unknown_ptr) update_reg_entry_enable_mask;
    
    // [EtwpUpdateSelectedGroupMasks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3c2bf0, 0x1fd000 bytes
    //
    _m84(sdk::unknown_ptr) update_selected_group_masks;
    
    // [EtwpCancelPendingStackwalkApcs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x238b4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33ff50, 0x1fe000 bytes
    //
    _m85(sdk::unknown_ptr) cancel_pending_stackwalk_apcs;
    
    // [EtwpCheckCurrentUserGuidAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93e368, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93cc38, 0x1fe000 bytes
    //
    _m86(sdk::unknown_ptr) check_current_user_guid_access;
    
    // [EtwpCheckSecurityLoggerAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5ea360, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x676d70, 0x1fe000 bytes
    //
    _m87(sdk::unknown_ptr) check_security_logger_access;
    
    // [EtwpCheckSiloGroupMasks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a46a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a4524, 0x1fe000 bytes
    //
    _m88(sdk::unknown_ptr) check_silo_group_masks;
    
    // [EtwpContainerResumeWnfCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a4700, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a4580, 0x1fe000 bytes
    //
    _m89(sdk::unknown_ptr) container_resume_wnf_callback;
    
    // [EtwpGetCurrentSiloState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a4754, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a45d4, 0x1fe000 bytes
    //
    _m90(sdk::unknown_ptr) get_current_silo_state;
    
    // [EtwpGetPidDemuxList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93bf60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93a830, 0x1fe000 bytes
    //
    _m91(sdk::unknown_ptr) get_pid_demux_list;
    
    // [EtwpInitializeSiloAllowedGroupMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x78fec8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7842b4, 0x1fe000 bytes
    //
    _m92(sdk::unknown_ptr) initialize_silo_allowed_group_mask;
    
    // [EtwpReadPerSiloConfigParameters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b7ef4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bc490, 0x1fe000 bytes
    //
    _m93(sdk::unknown_ptr) read_per_silo_config_parameters;
    
    // [EtwpUpdateEventFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b4274, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bbe44, 0x1fe000 bytes
    //
    _m94(sdk::unknown_ptr) update_event_filter;
    
    // [EtwpUpdateLevelKwFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93da20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93c2f0, 0x1fe000 bytes
    //
    _m95(sdk::unknown_ptr) update_level_kw_filter;
    
    // [EtwpAddLastDroppedEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a574c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ec424, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a55cc, 0x1fe000 bytes
    //
    _m96(sdk::unknown_ptr) add_last_dropped_event;
    
    // [EtwpAddMicroarchitecturalPmcToPmcGroup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x935f80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d6778, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x934850, 0x1fe000 bytes
    //
    _m97(sdk::unknown_ptr) add_microarchitectural_pmc_to_pmc_group;
    
    // [EtwpAddMicroarchitecturalPmcToRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9362a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d6aa8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x934b70, 0x1fe000 bytes
    //
    _m98(sdk::unknown_ptr) add_microarchitectural_pmc_to_registry;
    
    // [EtwpAdjustSiloTraceBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x27dd94, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f2870, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x241960, 0x1fe000 bytes
    //
    _m99(sdk::unknown_ptr) adjust_silo_trace_buffers;
    
    // [EtwpAllocateFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x799a68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c894c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a1014, 0x1fe000 bytes
    //
    _n00(sdk::unknown_ptr) allocate_filter;
    
    // [EtwpAllocateKeyNameEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c05d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d7530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c13e0, 0x1fe000 bytes
    //
    _n01(sdk::unknown_ptr) allocate_key_name_entry;
    
    // [EtwpAllocateLbrData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x944f10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e4254, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9437e0, 0x1fe000 bytes
    //
    _n02(sdk::unknown_ptr) allocate_lbr_data;
    
    // [EtwpAllocatePartitionMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5aa5a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ec6f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5aa428, 0x1fe000 bytes
    //
    _n03(sdk::unknown_ptr) allocate_partition_memory;
    
    // [EtwpAllocateTraceBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x23cc44, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38ff28, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2deebc, 0x1fe000 bytes
    //
    _n04(sdk::unknown_ptr) allocate_trace_buffer;
    
    // [EtwpApplyContainerFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93d524, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e8b28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93bdf4, 0x1fe000 bytes
    //
    _n05(sdk::unknown_ptr) apply_container_filter;
    
    // [EtwpApplyLevelKwFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a5fd8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x468fd2, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a5e58, 0x1fe000 bytes
    //
    _n06(sdk::unknown_ptr) apply_level_kw_filter;
    
    // [EtwpApplyStackWalkIdFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a6030, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ef670, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a5eb0, 0x1fe000 bytes
    //
    _n07(sdk::unknown_ptr) apply_stack_walk_id_filter;
    
    // [EtwpApplyTransientFilters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x679900, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e8f48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ecc10, 0x1fe000 bytes
    //
    _n08(sdk::unknown_ptr) apply_transient_filters;
    
    // [EtwpAvlCompareKeyNames]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b7a90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cb3e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b8960, 0x1fe000 bytes
    //
    _n09(sdk::unknown_ptr) avl_compare_key_names;
    
    // [EtwpBuffersFlushRequired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x27db60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37ab5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x318870, 0x1fe000 bytes
    //
    _n10(sdk::unknown_ptr) buffers_flush_required;
    
    // [EtwpCancelStackWalkApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a0bc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5eaf50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a0a40, 0x1fe000 bytes
    //
    _n11(sdk::unknown_ptr) cancel_stack_walk_apc;
    
    // [EtwpCancelTraceImageUnloadApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a2480, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e8d90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a2300, 0x1fe000 bytes
    //
    _n12(sdk::unknown_ptr) cancel_trace_image_unload_apc;
    
    // [EtwpCCSwapInitializeProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x790068, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8322f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x786080, 0x1fe000 bytes
    //
    _n13(sdk::unknown_ptr) cc_swap_initialize_processor;
    
    // [EtwpCheckCurrentUserProcessAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93e380, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9dfda0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93cc50, 0x1fe000 bytes
    //
    _n14(sdk::unknown_ptr) check_current_user_process_access;
    
    // [EtwpCheckDebugInfoEqual]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a8370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ee188, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a81f0, 0x1fe000 bytes
    //
    _n15(sdk::unknown_ptr) check_debug_info_equal;
    
    // [EtwpCheckNotificationAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5fd33c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ff9cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67ea34, 0x1fe000 bytes
    //
    _n16(sdk::unknown_ptr) check_notification_access;
    
    // [EtwpClearPartitionContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x238a64, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34603c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33fe68, 0x1fe000 bytes
    //
    _n17(sdk::unknown_ptr) clear_partition_context;
    
    // [EtwpComparePfn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a46e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e7330, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a4560, 0x1fe000 bytes
    //
    _n18(sdk::unknown_ptr) compare_pfn;
    
    // [EtwpConstructIptData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x945144, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e447c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x943a14, 0x1fe000 bytes
    //
    _n19(sdk::unknown_ptr) construct_ipt_data;
    
    // [EtwpCovSampAcquireSamplerRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93ed34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8949dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93d604, 0x1fe000 bytes
    //
    _n20(sdk::unknown_ptr) cov_samp_acquire_sampler_rundown;
    
    // [EtwpCovSampApplyBounds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93ed84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e4628, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93d654, 0x1fe000 bytes
    //
    _n21(sdk::unknown_ptr) cov_samp_apply_bounds;
    
    // [EtwpCovSampCaptureAllocateApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93edc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e4660, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93d690, 0x1fe000 bytes
    //
    _n22(sdk::unknown_ptr) cov_samp_capture_allocate_apc;
    
    // [EtwpCovSampCaptureAllocateCaptureBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93ee20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e46c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93d6f0, 0x1fe000 bytes
    //
    _n23(sdk::unknown_ptr) cov_samp_capture_allocate_capture_buffer;
    
    // [EtwpCovSampCaptureAllocateSampleBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93eea0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e4740, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93d770, 0x1fe000 bytes
    //
    _n24(sdk::unknown_ptr) cov_samp_capture_allocate_sample_buffer;
    
    // [EtwpCovSampCaptureApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a83c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x468130, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a8240, 0x1fe000 bytes
    //
    _n25(sdk::unknown_ptr) cov_samp_capture_apc;
    
    // [EtwpCovSampCaptureApcRelease]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a84ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ee1d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a836c, 0x1fe000 bytes
    //
    _n26(sdk::unknown_ptr) cov_samp_capture_apc_release;
    
    // [EtwpCovSampCaptureApcRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93ef00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e47a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93d7d0, 0x1fe000 bytes
    //
    _n27(sdk::unknown_ptr) cov_samp_capture_apc_rundown;
    
    // [EtwpCovSampCaptureBufferAddIP]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a8538, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x468264, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a83b8, 0x1fe000 bytes
    //
    _n28(sdk::unknown_ptr) cov_samp_capture_buffer_add_ip;
    
    // [EtwpCovSampCaptureBufferGet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a8570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x46829c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a83f0, 0x1fe000 bytes
    //
    _n29(sdk::unknown_ptr) cov_samp_capture_buffer_get;
    
    // [EtwpCovSampCaptureBufferIsEmpty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a8608, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x468332, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a8488, 0x1fe000 bytes
    //
    _n30(sdk::unknown_ptr) cov_samp_capture_buffer_is_empty;
    
    // [EtwpCovSampCaptureBufferMapAddressesAndQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93ef1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x894a2c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93d7ec, 0x1fe000 bytes
    //
    _n31(sdk::unknown_ptr) cov_samp_capture_buffer_map_addresses_and_queue;
    
    // [EtwpCovSampCaptureBufferOptimizeIP]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a861c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x468344, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a849c, 0x1fe000 bytes
    //
    _n32(sdk::unknown_ptr) cov_samp_capture_buffer_optimize_ip;
    
    // [EtwpCovSampCaptureBufferProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93f030, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x894b44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93d900, 0x1fe000 bytes
    //
    _n33(sdk::unknown_ptr) cov_samp_capture_buffer_process;
    
    // [EtwpCovSampCaptureBufferQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a8684, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4683ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a8504, 0x1fe000 bytes
    //
    _n34(sdk::unknown_ptr) cov_samp_capture_buffer_queue;
    
    // [EtwpCovSampCaptureBufferRelease]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a8748, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x423618, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a85c8, 0x1fe000 bytes
    //
    _n35(sdk::unknown_ptr) cov_samp_capture_buffer_release;
    
    // [EtwpCovSampCaptureCancelApcs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a8764, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ee220, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a85e4, 0x1fe000 bytes
    //
    _n36(sdk::unknown_ptr) cov_samp_capture_cancel_apcs;
    
    // [EtwpCovSampCaptureCleanupDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a88b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ee370, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a8730, 0x1fe000 bytes
    //
    _n37(sdk::unknown_ptr) cov_samp_capture_cleanup_dpc;
    
    // [EtwpCovSampCaptureCleanupLookasides]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a88c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ee388, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a8748, 0x1fe000 bytes
    //
    _n38(sdk::unknown_ptr) cov_samp_capture_cleanup_lookasides;
    
    // [EtwpCovSampCaptureContextSetPaused]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93f0e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e47bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93d9b8, 0x1fe000 bytes
    //
    _n39(sdk::unknown_ptr) cov_samp_capture_context_set_paused;
    
    // [EtwpCovSampCaptureContextStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93f158, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e482c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93da28, 0x1fe000 bytes
    //
    _n40(sdk::unknown_ptr) cov_samp_capture_context_start;
    
    // [EtwpCovSampCaptureContextStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a89fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ee4b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a887c, 0x1fe000 bytes
    //
    _n41(sdk::unknown_ptr) cov_samp_capture_context_stop;
    
    // [EtwpCovSampCaptureFlush]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93f670, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e4d40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93df40, 0x1fe000 bytes
    //
    _n42(sdk::unknown_ptr) cov_samp_capture_flush;
    
    // [EtwpCovSampCaptureFlushSampleBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a8bd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ee690, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a8a50, 0x1fe000 bytes
    //
    _n43(sdk::unknown_ptr) cov_samp_capture_flush_sample_buffers;
    
    // [EtwpCovSampCaptureFlushStats]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93f6e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x894bfc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93dfb8, 0x1fe000 bytes
    //
    _n44(sdk::unknown_ptr) cov_samp_capture_flush_stats;
    
    // [EtwpCovSampCaptureFreeLookasides]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93f7a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e4dc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93e078, 0x1fe000 bytes
    //
    _n45(sdk::unknown_ptr) cov_samp_capture_free_lookasides;
    
    // [EtwpCovSampCaptureKernelStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a8d18, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ee7d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a8b98, 0x1fe000 bytes
    //
    _n46(sdk::unknown_ptr) cov_samp_capture_kernel_stack;
    
    // [EtwpCovSampCaptureQueueApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a8de0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ee8a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a8c60, 0x1fe000 bytes
    //
    _n47(sdk::unknown_ptr) cov_samp_capture_queue_apc;
    
    // [EtwpCovSampCaptureQueueBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a9008, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x468478, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a8e88, 0x1fe000 bytes
    //
    _n48(sdk::unknown_ptr) cov_samp_capture_queue_buffer;
    
    // [EtwpCovSampCaptureQueueDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a9070, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4684f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a8ef0, 0x1fe000 bytes
    //
    _n49(sdk::unknown_ptr) cov_samp_capture_queue_dpc;
    
    // [EtwpCovSampCaptureRebalanceDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a90d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5eeb10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a8f50, 0x1fe000 bytes
    //
    _n50(sdk::unknown_ptr) cov_samp_capture_rebalance_dpc;
    
    // [EtwpCovSampCaptureReleaseToLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a9100, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x46854a, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a8f80, 0x1fe000 bytes
    //
    _n51(sdk::unknown_ptr) cov_samp_capture_release_to_lookaside;
    
    // [EtwpCovSampCaptureSample]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a9178, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5eeb40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a8ff8, 0x1fe000 bytes
    //
    _n52(sdk::unknown_ptr) cov_samp_capture_sample;
    
    // [EtwpCovSampCaptureUserAddresses]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93f85c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x894cbc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93e12c, 0x1fe000 bytes
    //
    _n53(sdk::unknown_ptr) cov_samp_capture_user_addresses;
    
    // [EtwpCovSampCaptureUserStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93f8c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x894d26, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93e198, 0x1fe000 bytes
    //
    _n54(sdk::unknown_ptr) cov_samp_capture_user_stack;
    
    // [EtwpCovSampCaptureWorkerThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93f960, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x894db0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93e230, 0x1fe000 bytes
    //
    _n55(sdk::unknown_ptr) cov_samp_capture_worker_thread;
    
    // [EtwpCovSampCheckForSegments]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93fac4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x894f1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93e394, 0x1fe000 bytes
    //
    _n56(sdk::unknown_ptr) cov_samp_check_for_segments;
    
    // [EtwpCovSampContextAddAddresses]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93fb90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x894fe6, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93e460, 0x1fe000 bytes
    //
    _n57(sdk::unknown_ptr) cov_samp_context_add_addresses;
    
    // [EtwpCovSampContextAddSamples]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93fc8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8950e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93e55c, 0x1fe000 bytes
    //
    _n58(sdk::unknown_ptr) cov_samp_context_add_samples;
    
    // [EtwpCovSampContextCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93ff14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e4e74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93e7e4, 0x1fe000 bytes
    //
    _n59(sdk::unknown_ptr) cov_samp_context_cleanup;
    
    // [EtwpCovSampContextFastFindModule]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x940174, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x895368, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93ea44, 0x1fe000 bytes
    //
    _n60(sdk::unknown_ptr) cov_samp_context_fast_find_module;
    
    // [EtwpCovSampContextGetModule]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9402c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e50bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93eb90, 0x1fe000 bytes
    //
    _n61(sdk::unknown_ptr) cov_samp_context_get_module;
    
    // [EtwpCovSampContextPruneModules]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x941174, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8954b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93fa44, 0x1fe000 bytes
    //
    _n62(sdk::unknown_ptr) cov_samp_context_prune_modules;
    
    // [EtwpCovSampContextRemoveAndFreeModule]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x941684, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e5f44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93ff54, 0x1fe000 bytes
    //
    _n63(sdk::unknown_ptr) cov_samp_context_remove_and_free_module;
    
    // [EtwpCovSampEnumerateDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9418c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e6180, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x940190, 0x1fe000 bytes
    //
    _n64(sdk::unknown_ptr) cov_samp_enumerate_driver;
    
    // [EtwpCovSampEnumerateProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x941920, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e61e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9401f0, 0x1fe000 bytes
    //
    _n65(sdk::unknown_ptr) cov_samp_enumerate_process;
    
    // [EtwpCovSampGlobals]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc197a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31740, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19800, 0x1fe000 bytes
    //
    _n66(sdk::unknown_ptr) cov_samp_globals;
    
    // [EtwpCovSampHashLookupInTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x941b00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8959c2, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9403d0, 0x1fe000 bytes
    //
    _n67(sdk::unknown_ptr) cov_samp_hash_lookup_in_table;
    
    // [EtwpCovSampHashMakeRoomAndAcquireLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x941be0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x895a8a, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9404b0, 0x1fe000 bytes
    //
    _n68(sdk::unknown_ptr) cov_samp_hash_make_room_and_acquire_lock;
    
    // [EtwpCovSampImageNotify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x941ef0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x895d90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9407c0, 0x1fe000 bytes
    //
    _n69(sdk::unknown_ptr) cov_samp_image_notify;
    
    // [EtwpCovSampLookasideControlInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x942000, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e63c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9408d0, 0x1fe000 bytes
    //
    _n70(sdk::unknown_ptr) cov_samp_lookaside_control_initialize;
    
    // [EtwpCovSampLookasideFlushFreeListToCleanupList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a930c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5eecd8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a918c, 0x1fe000 bytes
    //
    _n71(sdk::unknown_ptr) cov_samp_lookaside_flush_free_list_to_cleanup_list;
    
    // [EtwpCovSampLookasideGrow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a935c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5eed28, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a91dc, 0x1fe000 bytes
    //
    _n72(sdk::unknown_ptr) cov_samp_lookaside_grow;
    
    // [EtwpCovSampLookasideInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x942094, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e6454, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x940964, 0x1fe000 bytes
    //
    _n73(sdk::unknown_ptr) cov_samp_lookaside_initialize;
    
    // [EtwpCovSampLookasidePop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a94ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4685c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a932c, 0x1fe000 bytes
    //
    _n74(sdk::unknown_ptr) cov_samp_lookaside_pop;
    
    // [EtwpCovSampModuleCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x942118, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e64d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9409e8, 0x1fe000 bytes
    //
    _n75(sdk::unknown_ptr) cov_samp_module_cleanup;
    
    // [EtwpCovSampModuleDereference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x942168, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x895ea0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x940a38, 0x1fe000 bytes
    //
    _n76(sdk::unknown_ptr) cov_samp_module_dereference;
    
    // [EtwpCovSampModuleGetName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9421ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e6528, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x940a7c, 0x1fe000 bytes
    //
    _n77(sdk::unknown_ptr) cov_samp_module_get_name;
    
    // [EtwpCovSampModuleNameInfoCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9422b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e6634, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x940b88, 0x1fe000 bytes
    //
    _n78(sdk::unknown_ptr) cov_samp_module_name_info_cleanup;
    
    // [EtwpCovSampModuleReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x942318, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x895ee2, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x940be8, 0x1fe000 bytes
    //
    _n79(sdk::unknown_ptr) cov_samp_module_reference;
    
    // [EtwpCovSampProcessAddModule]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x942358, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e6694, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x940c28, 0x1fe000 bytes
    //
    _n80(sdk::unknown_ptr) cov_samp_process_add_module;
    
    // [EtwpCovSampProcessCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9425a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e68d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x940e70, 0x1fe000 bytes
    //
    _n81(sdk::unknown_ptr) cov_samp_process_cleanup;
    
    // [EtwpCovSampProcessEnsureContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x942640, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x895f20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x940f10, 0x1fe000 bytes
    //
    _n82(sdk::unknown_ptr) cov_samp_process_ensure_context;
    
    // [EtwpCovSampProcessMapAddresses]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9426e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x895fc2, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x940fb0, 0x1fe000 bytes
    //
    _n83(sdk::unknown_ptr) cov_samp_process_map_addresses;
    
    // [EtwpCovSampProcessRemoveModule]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9428ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8961dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9411bc, 0x1fe000 bytes
    //
    _n84(sdk::unknown_ptr) cov_samp_process_remove_module;
    
    // [EtwpCovSampProcessUpperBoundModule]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x942994, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x89627e, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x941264, 0x1fe000 bytes
    //
    _n85(sdk::unknown_ptr) cov_samp_process_upper_bound_module;
    
    // [EtwpCovSampProfileInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a9560, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5eee80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a93e0, 0x1fe000 bytes
    //
    _n86(sdk::unknown_ptr) cov_samp_profile_interrupt;
    
    // [EtwpCovSampPushListSList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a9730, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x46863e, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a95b0, 0x1fe000 bytes
    //
    _n87(sdk::unknown_ptr) cov_samp_push_list_s_list;
    
    // [EtwpCovSampSafeForUserAddressCapture]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a977c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x468688, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a95fc, 0x1fe000 bytes
    //
    _n88(sdk::unknown_ptr) cov_samp_safe_for_user_address_capture;
    
    // [EtwpCovSampSampleBufferDecRef]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a9810, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ef040, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a9690, 0x1fe000 bytes
    //
    _n89(sdk::unknown_ptr) cov_samp_sample_buffer_dec_ref;
    
    // [EtwpCovSampSampleBufferProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9429e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e6974, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9412b4, 0x1fe000 bytes
    //
    _n90(sdk::unknown_ptr) cov_samp_sample_buffer_process;
    
    // [EtwpCovSampSampleBufferReserve]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a984c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x468726, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a96cc, 0x1fe000 bytes
    //
    _n91(sdk::unknown_ptr) cov_samp_sample_buffer_reserve;
    
    // [EtwpCovSampSplitSegments]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x942b18, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e6aa8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9413e8, 0x1fe000 bytes
    //
    _n92(sdk::unknown_ptr) cov_samp_split_segments;
    
    // [EtwpCovSampStackHashCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x942bb4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8962cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x941484, 0x1fe000 bytes
    //
    _n93(sdk::unknown_ptr) cov_samp_stack_hash_check;
    
    // [EtwpCovSampStackHashLookup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x942df0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e6b44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9416c0, 0x1fe000 bytes
    //
    _n94(sdk::unknown_ptr) cov_samp_stack_hash_lookup;
    
    // [EtwpCovSampStackHashTableAlloc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x942e64, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e6bac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x941734, 0x1fe000 bytes
    //
    _n95(sdk::unknown_ptr) cov_samp_stack_hash_table_alloc;
    
    // [EtwpCovSampStrideSamplerInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x942efc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e6c44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9417cc, 0x1fe000 bytes
    //
    _n96(sdk::unknown_ptr) cov_samp_stride_sampler_initialize;
    
    // [EtwpCovSampTryAcquireBufferLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a9bd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x468aa8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a9a50, 0x1fe000 bytes
    //
    _n97(sdk::unknown_ptr) cov_samp_try_acquire_buffer_lock;
    
    // [EtwpCoverageAddToStringBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x267fb8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3754d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x318ec8, 0x1fe000 bytes
    //
    _n98(sdk::unknown_ptr) coverage_add_to_string_buffer;
    
    // [EtwpCoverageCheckCP]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x931d7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9dbc68, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93064c, 0x1fe000 bytes
    //
    _n99(sdk::unknown_ptr) coverage_check_cp;
    
    // [EtwpCoverageContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc54540, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70c30, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc54510, 0x1fe000 bytes
    //
    _o00(sdk::unknown_ptr) coverage_context;
    
    // [EtwpCoverageCoreTracingEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf4b70, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70c28, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4b70, 0x1fe000 bytes
    //
    _o01(sdk::unknown_ptr) coverage_core_tracing_enabled;
    
    // [EtwpCoverageEnsureContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7abe3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85f29c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b37bc, 0x1fe000 bytes
    //
    _o02(sdk::unknown_ptr) coverage_ensure_context;
    
    // [EtwpCoverageEnsureStringBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7ac22c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85f6a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b3bac, 0x1fe000 bytes
    //
    _o03(sdk::unknown_ptr) coverage_ensure_string_buffer;
    
    // [EtwpCoverageEnsureUserModeView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x754cf4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cdf04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75c5b4, 0x1fe000 bytes
    //
    _o04(sdk::unknown_ptr) coverage_ensure_user_mode_view;
    
    // [EtwpCoverageEntryCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc10d00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0b4a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc10d64, 0x1fe000 bytes
    //
    _o05(sdk::unknown_ptr) coverage_entry_count;
    
    // [EtwpCoverageFlushPending]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6781f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e7c34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6eb630, 0x1fe000 bytes
    //
    _o06(sdk::unknown_ptr) coverage_flush_pending;
    
    // [EtwpCoverageFlushPeriod]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc10d04, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0b49c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc10d5c, 0x1fe000 bytes
    //
    _o07(sdk::unknown_ptr) coverage_flush_period;
    
    // [EtwpCoverageFlushTimerCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x271530, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3859a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3230c0, 0x1fe000 bytes
    //
    _o08(sdk::unknown_ptr) coverage_flush_timer_callback;
    
    // [EtwpCoverageFlushWorkItemCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x678120, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e7b60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6eb560, 0x1fe000 bytes
    //
    _o09(sdk::unknown_ptr) coverage_flush_work_item_callback;
    
    // [EtwpCoverageFreeStringBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x931e74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9dbd60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x930744, 0x1fe000 bytes
    //
    _o10(sdk::unknown_ptr) coverage_free_string_buffers;
    
    // [EtwpCoverageHighIrqlCPWorkItemCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a0830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5eabc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a06b0, 0x1fe000 bytes
    //
    _o11(sdk::unknown_ptr) coverage_high_irql_cp_work_item_callback;
    
    // [EtwpCoverageInitializeStringBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x271714, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x385b08, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3232a4, 0x1fe000 bytes
    //
    _o12(sdk::unknown_ptr) coverage_initialize_string_buffer;
    
    // [EtwpCoverageLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc19840, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31770, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc198a0, 0x1fe000 bytes
    //
    _o13(sdk::unknown_ptr) coverage_lock;
    
    // [EtwpCoverageLockOwner]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc503b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a100, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc503b0, 0x1fe000 bytes
    //
    _o14(sdk::unknown_ptr) coverage_lock_owner;
    
    // [EtwpCoverageNonPagedContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc54548, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70c20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc54518, 0x1fe000 bytes
    //
    _o15(sdk::unknown_ptr) coverage_non_paged_context;
    
    // [EtwpCoverageProvEnableCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x931f20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86c030, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9307f0, 0x1fe000 bytes
    //
    _o16(sdk::unknown_ptr) coverage_prov_enable_callback;
    
    // [EtwpCoverageRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66d9b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ce0dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e0c84, 0x1fe000 bytes
    //
    _o17(sdk::unknown_ptr) coverage_record;
    
    // [EtwpCoverageRecordAtHighIrql]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a0a24, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5eadb4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a08a4, 0x1fe000 bytes
    //
    _o18(sdk::unknown_ptr) coverage_record_at_high_irql;
    
    // [EtwpCoverageReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x932084, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9dbe0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x930954, 0x1fe000 bytes
    //
    _o19(sdk::unknown_ptr) coverage_reset;
    
    // [EtwpCoverageResetCP]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x932264, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9dbff0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x930b34, 0x1fe000 bytes
    //
    _o20(sdk::unknown_ptr) coverage_reset_cp;
    
    // [EtwpCoverageResetPeriod]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc10cfc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0b4a4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc10d60, 0x1fe000 bytes
    //
    _o21(sdk::unknown_ptr) coverage_reset_period;
    
    // [EtwpCoverageResetTimerCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a0b90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5eaf20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a0a10, 0x1fe000 bytes
    //
    _o22(sdk::unknown_ptr) coverage_reset_timer_callback;
    
    // [EtwpCoverageResetWorkItemCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x932540, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9dc2c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x930e10, 0x1fe000 bytes
    //
    _o23(sdk::unknown_ptr) coverage_reset_work_item_callback;
    
    // [EtwpCoverageSamplerAllocateTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x942fa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e6cec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x941870, 0x1fe000 bytes
    //
    _o24(sdk::unknown_ptr) coverage_sampler_allocate_table;
    
    // [EtwpCoverageSamplerCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x943034, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e6d84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x941904, 0x1fe000 bytes
    //
    _o25(sdk::unknown_ptr) coverage_sampler_cleanup;
    
    // [EtwpCoverageSamplerClose]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9430f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e6e50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9419c0, 0x1fe000 bytes
    //
    _o26(sdk::unknown_ptr) coverage_sampler_close;
    
    // [EtwpCoverageSamplerContextSwap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a9c5c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ef074, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a9adc, 0x1fe000 bytes
    //
    _o27(sdk::unknown_ptr) coverage_sampler_context_swap;
    
    // [EtwpCoverageSamplerDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9431c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e6f20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x941a90, 0x1fe000 bytes
    //
    _o28(sdk::unknown_ptr) coverage_sampler_delete;
    
    // [EtwpCoverageSamplerFreeTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9431d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e6f38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x941aa8, 0x1fe000 bytes
    //
    _o29(sdk::unknown_ptr) coverage_sampler_free_table;
    
    // [EtwpCoverageSamplerInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x943214, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e6f74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x941ae4, 0x1fe000 bytes
    //
    _o30(sdk::unknown_ptr) coverage_sampler_initialize;
    
    // [EtwpCoverageSamplerPageFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a9e24, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ef234, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a9ca4, 0x1fe000 bytes
    //
    _o31(sdk::unknown_ptr) coverage_sampler_page_fault;
    
    // [EtwpCoverageSamplerQuery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9432c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x896508, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x941b94, 0x1fe000 bytes
    //
    _o32(sdk::unknown_ptr) coverage_sampler_query;
    
    // [EtwpCoverageSamplerQueryStatusInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x943e78, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e7024, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x942748, 0x1fe000 bytes
    //
    _o33(sdk::unknown_ptr) coverage_sampler_query_status_information;
    
    // [EtwpCoverageSamplerReadyThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5aa034, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ef450, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a9eb4, 0x1fe000 bytes
    //
    _o34(sdk::unknown_ptr) coverage_sampler_ready_thread;
    
    // [EtwpCoverageSamplerSetBloomFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x943e90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e703c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x942760, 0x1fe000 bytes
    //
    _o35(sdk::unknown_ptr) coverage_sampler_set_bloom_filter;
    
    // [EtwpCoverageSamplerStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x944038, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e7208, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x942908, 0x1fe000 bytes
    //
    _o36(sdk::unknown_ptr) coverage_sampler_start;
    
    // [EtwpCoverageSamplerStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x944304, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e74f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x942bd4, 0x1fe000 bytes
    //
    _o37(sdk::unknown_ptr) coverage_sampler_stop;
    
    // [EtwpCoverageSamplerUnloadImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x94459c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e77bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x942e6c, 0x1fe000 bytes
    //
    _o38(sdk::unknown_ptr) coverage_sampler_unload_image;
    
    // [EtwpCoverageUserIsAdmin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x932568, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x817434, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x930e38, 0x1fe000 bytes
    //
    _o39(sdk::unknown_ptr) coverage_user_is_admin;
    
    // [EtwpCoverageValidateCP]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x267eb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37556c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x318dc0, 0x1fe000 bytes
    //
    _o40(sdk::unknown_ptr) coverage_validate_cp;
    
    // [EtwpCreateKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a5a18, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ec584, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a5898, 0x1fe000 bytes
    //
    _o41(sdk::unknown_ptr) create_key;
    
    // [EtwpCreateKeyTreeForPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a5abc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ec628, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a593c, 0x1fe000 bytes
    //
    _o42(sdk::unknown_ptr) create_key_tree_for_path;
    
    // [EtwpCrimsonStackWalkApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2249dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x59fc70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x59faf0, 0x1fe000 bytes
    //
    _o43(sdk::unknown_ptr) crimson_stack_walk_apc;
    
    // [EtwpDeleteSessionDemuxObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93bd70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9dfef0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93a640, 0x1fe000 bytes
    //
    _o44(sdk::unknown_ptr) delete_session_demux_object;
    
    // [EtwpDemuxPrivateTraceHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93be3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9dffc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93a70c, 0x1fe000 bytes
    //
    _o45(sdk::unknown_ptr) demux_private_trace_handle;
    
    // [EtwpDisableStackWalkApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x270d60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x384dc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x322520, 0x1fe000 bytes
    //
    _o46(sdk::unknown_ptr) disable_stack_walk_apc;
    
    // [EtwpDisallowedGuidAddition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56346c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x930a74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x92f344, 0x1fe000 bytes
    //
    _o47(sdk::unknown_ptr) disallowed_guid_addition;
    
    // [EtwpDisallowedGuidRemoval]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a42dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x930d5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x92f62c, 0x1fe000 bytes
    //
    _o48(sdk::unknown_ptr) disallowed_guid_removal;
    
    // [EtwpEnableAutoLoggerProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x77589c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81feb4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77cc10, 0x1fe000 bytes
    //
    _o49(sdk::unknown_ptr) enable_auto_logger_provider;
    
    // [EtwpEnumerateAutologgerPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7924a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8497a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79f73c, 0x1fe000 bytes
    //
    _o50(sdk::unknown_ptr) enumerate_autologger_path;
    
    // [EtwpEnumerateKeyProviders]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x775740, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x81fd54, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77cab4, 0x1fe000 bytes
    //
    _o51(sdk::unknown_ptr) enumerate_key_providers;
    
    // [EtwpEventWriteEnableInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9365c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d7008, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x934e94, 0x1fe000 bytes
    //
    _o52(sdk::unknown_ptr) event_write_enable_info;
    
    // [EtwpEventWriteGuidEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9366bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d7100, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x934f8c, 0x1fe000 bytes
    //
    _o53(sdk::unknown_ptr) event_write_guid_entry;
    
    // [EtwpEventWriteRegEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x936808, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d7330, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9350d8, 0x1fe000 bytes
    //
    _o54(sdk::unknown_ptr) event_write_reg_entry;
    
    // [EtwpEventWriteRegistrationStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9368f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d7420, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9351c8, 0x1fe000 bytes
    //
    _o55(sdk::unknown_ptr) event_write_registration_status;
    
    // [EtwpFileSystemReady]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a0b0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b0b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b0b8, 0x1fe000 bytes
    //
    _o56(sdk::unknown_ptr) file_system_ready;
    
    // [EtwpFinalizePendingApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a0bdc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x466c54, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a0a5c, 0x1fe000 bytes
    //
    _o57(sdk::unknown_ptr) finalize_pending_apc;
    
    // [EtwpFindMatchingPmcRegistryGroup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x936f70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d7918, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x935840, 0x1fe000 bytes
    //
    _o58(sdk::unknown_ptr) find_matching_pmc_registry_group;
    
    // [EtwpFlushCoverage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x758014, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9dc2e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75fa60, 0x1fe000 bytes
    //
    _o59(sdk::unknown_ptr) flush_coverage;
    
    // [EtwpFreeKeyNameEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c05b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d7510, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c13c0, 0x1fe000 bytes
    //
    _o60(sdk::unknown_ptr) free_key_name_entry;
    
    // [EtwpFreeKeyNameList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x79335c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84a620, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a05f8, 0x1fe000 bytes
    //
    _o61(sdk::unknown_ptr) free_key_name_list;
    
    // [EtwpFreePartitionMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5aa668, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ec7b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5aa4e8, 0x1fe000 bytes
    //
    _o62(sdk::unknown_ptr) free_partition_memory;
    
    // [EtwpFreeTraceBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x238a88, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x346060, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33fe8c, 0x1fe000 bytes
    //
    _o63(sdk::unknown_ptr) free_trace_buffer;
    
    // [EtwpGetAutoLoggerEventNameFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7a7b14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x858940, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7afd3c, 0x1fe000 bytes
    //
    _o64(sdk::unknown_ptr) get_auto_logger_event_name_filter;
    
    // [EtwpGetAutoLoggerLevelKwFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7acbd8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85da94, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b47f8, 0x1fe000 bytes
    //
    _o65(sdk::unknown_ptr) get_auto_logger_level_kw_filter;
    
    // [EtwpGetDurationSince]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a2aa4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x465d4c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a2924, 0x1fe000 bytes
    //
    _o66(sdk::unknown_ptr) get_duration_since;
    
    // [EtwpGetLoggerTimeStamp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x30eaf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f349c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x240c58, 0x1fe000 bytes
    //
    _o67(sdk::unknown_ptr) get_logger_time_stamp;
    
    // [EtwpGetMaxTrackingEventBufferSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x638360, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8069b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67b3cc, 0x1fe000 bytes
    //
    _o68(sdk::unknown_ptr) get_max_tracking_event_buffer_size;
    
    // [EtwpGetMicroarchitecturalPmcAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9371c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d7b74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x935a98, 0x1fe000 bytes
    //
    _o69(sdk::unknown_ptr) get_microarchitectural_pmc_affinity;
    
    // [EtwpGetPmcCpuHierarchyRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x937284, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d7c30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x935b54, 0x1fe000 bytes
    //
    _o70(sdk::unknown_ptr) get_pmc_cpu_hierarchy_registry;
    
    // [EtwpGetPrivateSessionTraceHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93bfd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e00d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93a8a0, 0x1fe000 bytes
    //
    _o71(sdk::unknown_ptr) get_private_session_trace_handle;
    
    // [EtwpGetTimeStampAndQpcDelta]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a57f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ec4d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a5678, 0x1fe000 bytes
    //
    _o72(sdk::unknown_ptr) get_time_stamp_and_qpc_delta;
    
    // [EtwpGetTraceGroupList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a4c74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x931810, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9300e0, 0x1fe000 bytes
    //
    _o73(sdk::unknown_ptr) get_trace_group_list;
    
    // [EtwpHwTraceExtensionHost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc19798, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc316a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc197f8, 0x1fe000 bytes
    //
    _o74(sdk::unknown_ptr) hw_trace_extension_host;
    
    // [EtwpIncrementTraceFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9319f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9db8e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9302c8, 0x1fe000 bytes
    //
    _o75(sdk::unknown_ptr) increment_trace_file;
    
    // [EtwpInitializeCompressedWriter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x945530, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e0f3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x943e00, 0x1fe000 bytes
    //
    _o76(sdk::unknown_ptr) initialize_compressed_writer;
    
    // [EtwpInitializeCoverage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x790148, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86fba8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x785eec, 0x1fe000 bytes
    //
    _o77(sdk::unknown_ptr) initialize_coverage;
    
    // [EtwpInitializeCoverageSampler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa62fa8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5efe4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa46804, 0x1fe000 bytes
    //
    _o78(sdk::unknown_ptr) initialize_coverage_sampler;
    
    // [EtwpInitializeLastBranchTracing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b5f5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86f574, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7840c4, 0x1fe000 bytes
    //
    _o79(sdk::unknown_ptr) initialize_last_branch_tracing;
    
    // [EtwpInitializeLoggerSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6780c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e4948, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6791b0, 0x1fe000 bytes
    //
    _o80(sdk::unknown_ptr) initialize_logger_security_descriptor;
    
    // [EtwpInitializePrivateSessionDemuxObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b511c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86e260, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x784010, 0x1fe000 bytes
    //
    _o81(sdk::unknown_ptr) initialize_private_session_demux_object;
    
    // [EtwpInitializeProcessorTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x78f5cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82db30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a5d78, 0x1fe000 bytes
    //
    _o82(sdk::unknown_ptr) initialize_processor_trace;
    
    // [EtwpInitializeStackTracing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5481dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9325cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x930e9c, 0x1fe000 bytes
    //
    _o83(sdk::unknown_ptr) initialize_stack_tracing;
    
    // [EtwpInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe1b8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc198e5, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc19908, 0x1fe000 bytes
    //
    _o84(sdk::unknown_ptr) initialized;
    
    // [EtwpInvokeEventCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a56cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ec3a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a554c, 0x1fe000 bytes
    //
    _o85(sdk::unknown_ptr) invoke_event_callback;
    
    // [EtwpIsValidImageAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5c7cb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b549c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c8554, 0x1fe000 bytes
    //
    _o86(sdk::unknown_ptr) is_valid_image_address;
    
    // [EtwpLastBranchLookAsideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc53b70, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6af80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc53b30, 0x1fe000 bytes
    //
    _o87(sdk::unknown_ptr) last_branch_look_aside_list;
    
    // [EtwpLastBranchStackSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb6b4, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dd24, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb6b4, 0x1fe000 bytes
    //
    _o88(sdk::unknown_ptr) last_branch_stack_size;
    
    // [EtwpLastBranchSupportedOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb688, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dce8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb688, 0x1fe000 bytes
    //
    _o89(sdk::unknown_ptr) last_branch_supported_options;
    
    // [EtwpLoadMicroarchitecturalPmcs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x78fd88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86cd14, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x784174, 0x1fe000 bytes
    //
    _o90(sdk::unknown_ptr) load_microarchitectural_pmcs;
    
    // [EtwpLoadMicroarchitecturalProfileGroup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9373ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d7d58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x935c7c, 0x1fe000 bytes
    //
    _o91(sdk::unknown_ptr) load_microarchitectural_profile_group;
    
    // [EtwpLoadMicroarchitecturalProfileSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x937690, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d806c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x935f60, 0x1fe000 bytes
    //
    _o92(sdk::unknown_ptr) load_microarchitectural_profile_source;
    
    // [EtwpLocateDbgIdForRegEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x662d54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b5140, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d6d3c, 0x1fe000 bytes
    //
    _o93(sdk::unknown_ptr) locate_dbg_id_for_reg_entry;
    
    // [EtwpLogContextSwapEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a54d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b2670, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3aa750, 0x1fe000 bytes
    //
    _o94(sdk::unknown_ptr) log_context_swap_event;
    
    // [EtwpLogFileNameRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93a9a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e272c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x939278, 0x1fe000 bytes
    //
    _o95(sdk::unknown_ptr) log_file_name_rundown;
    
    // [EtwpLogMemNodeInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a2dc8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x465e46, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a2c48, 0x1fe000 bytes
    //
    _o96(sdk::unknown_ptr) log_mem_node_info;
    
    // [EtwpLoggerSaveState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0xd2c9c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53768, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c9c8, 0x1fe000 bytes
    //
    _o97(sdk::unknown_ptr) logger_save_state;
    
    // [EtwpMaxPmcCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0xd2b064, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd5103c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b064, 0x1fe000 bytes
    //
    _o98(sdk::unknown_ptr) max_pmc_counter;
    
    // [EtwpMaxProfilingSources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0xd2b140, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51120, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b140, 0x1fe000 bytes
    //
    _o99(sdk::unknown_ptr) max_profiling_sources;
    
    // [EtwpMdlHashTableAllocator]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5aa6c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ec80c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5aa544, 0x1fe000 bytes
    //
    _p00(sdk::unknown_ptr) mdl_hash_table_allocator;
    
    // [EtwpMdlHashTableDeallocator]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5aa6e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ec830, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5aa568, 0x1fe000 bytes
    //
    _p01(sdk::unknown_ptr) mdl_hash_table_deallocator;
    
    // [EtwpMdlTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc19780, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc316c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc197e0, 0x1fe000 bytes
    //
    _p02(sdk::unknown_ptr) mdl_table;
    
    // [EtwpMutableSecurityKeyHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc197d0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc316e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19830, 0x1fe000 bytes
    //
    _p03(sdk::unknown_ptr) mutable_security_key_handle;
    
    // [EtwpOpenSessionDemuxObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x660030, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c4870, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d39c0, 0x1fe000 bytes
    //
    _p04(sdk::unknown_ptr) open_session_demux_object;
    
    // [EtwpQueryCoverageSamplerInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x944690, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e78b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x942f60, 0x1fe000 bytes
    //
    _p05(sdk::unknown_ptr) query_coverage_sampler_information;
    
    // [EtwpQueryPartitionRegistryInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b7c8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cf0b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bc228, 0x1fe000 bytes
    //
    _p06(sdk::unknown_ptr) query_partition_registry_information;
    
    // [EtwpQuerySessionDemuxObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93c14c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e02d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93aa1c, 0x1fe000 bytes
    //
    _p07(sdk::unknown_ptr) query_session_demux_object;
    
    // [EtwpReenableStackWalkApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x270da0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x384f80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x322560, 0x1fe000 bytes
    //
    _p08(sdk::unknown_ptr) reenable_stack_walk_apc;
    
    // [EtwpRefQpcDelta]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc19a98, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc318a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19b00, 0x1fe000 bytes
    //
    _p09(sdk::unknown_ptr) ref_qpc_delta;
    
    // [EtwpReferenceLastBranchLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x944f5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e4294, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94382c, 0x1fe000 bytes
    //
    _p10(sdk::unknown_ptr) reference_last_branch_lookaside_list;
    
    // [EtwpRegisterPartitionPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5aa704, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ec84c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5aa584, 0x1fe000 bytes
    //
    _p11(sdk::unknown_ptr) register_partition_pages;
    
    // [EtwpRegisterPrivateSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93c1c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e034c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93aa98, 0x1fe000 bytes
    //
    _p12(sdk::unknown_ptr) register_private_session;
    
    // [EtwpRegisterUMGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ae7c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6bc510, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x5f5e60, 0x1fe000 bytes
    //
    _p13(sdk::unknown_ptr) register_um_guid;
    
    // [EtwpRemoveMicroarchitecturalPmcFromPmcGroup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9379c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d8464, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x936298, 0x1fe000 bytes
    //
    _p14(sdk::unknown_ptr) remove_microarchitectural_pmc_from_pmc_group;
    
    // [EtwpRemoveMicroarchitecturalPmcFromRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x937c60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d86ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x936530, 0x1fe000 bytes
    //
    _p15(sdk::unknown_ptr) remove_microarchitectural_pmc_from_registry;
    
    // [EtwpRTBacklogFileRoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a2f8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b330, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b330, 0x1fe000 bytes
    //
    _p16(sdk::unknown_ptr) rt_backlog_file_root;
    
    // [EtwpSavePersistedLoggers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9460c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e1ac4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x944990, 0x1fe000 bytes
    //
    _p17(sdk::unknown_ptr) save_persisted_loggers;
    
    // [EtwpSessionDemuxObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb940, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1df10, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb940, 0x1fe000 bytes
    //
    _p18(sdk::unknown_ptr) session_demux_object_type;
    
    // [EtwpSetCoverageSamplerInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9447e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e7a0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9430b8, 0x1fe000 bytes
    //
    _p19(sdk::unknown_ptr) set_coverage_sampler_information;
    
    // [EtwpSetPartitionContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5aaa40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ecba0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5aa8c0, 0x1fe000 bytes
    //
    _p20(sdk::unknown_ptr) set_partition_context;
    
    // [EtwpSetProviderBinaryTracking]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93dce8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e921c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93c5b8, 0x1fe000 bytes
    //
    _p21(sdk::unknown_ptr) set_provider_binary_tracking;
    
    // [EtwpSetQpcDeltaTracking]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a47d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e7748, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a4658, 0x1fe000 bytes
    //
    _p22(sdk::unknown_ptr) set_qpc_delta_tracking;
    
    // [EtwpSiloAllowedGroupMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb808, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1de60, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb808, 0x1fe000 bytes
    //
    _p23(sdk::unknown_ptr) silo_allowed_group_mask;
    
    // [EtwpTiAllocVadQueryEventWriteWorkItemContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x266340, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36fd28, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x316ad0, 0x1fe000 bytes
    //
    _p24(sdk::unknown_ptr) ti_alloc_vad_query_event_write_work_item_context;
    
    // [EtwpTiAsyncVadQueryEventWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2662d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36fcb8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x316a60, 0x1fe000 bytes
    //
    _p25(sdk::unknown_ptr) ti_async_vad_query_event_write;
    
    // [EtwpTiFillProcessIdentity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20c260, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ed6a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x357750, 0x1fe000 bytes
    //
    _p26(sdk::unknown_ptr) ti_fill_process_identity;
    
    // [EtwpTiFillThreadIdentity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20c4e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ed948, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3579d4, 0x1fe000 bytes
    //
    _p27(sdk::unknown_ptr) ti_fill_thread_identity;
    
    // [EtwpTiFillVad]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x26b9d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3780ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31cfd8, 0x1fe000 bytes
    //
    _p28(sdk::unknown_ptr) ti_fill_vad;
    
    // [EtwpTiFillVadEventWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x26b8a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x378028, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31cea4, 0x1fe000 bytes
    //
    _p29(sdk::unknown_ptr) ti_fill_vad_event_write;
    
    // [EtwpTiParseContextRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9392a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9df0ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x937b74, 0x1fe000 bytes
    //
    _p30(sdk::unknown_ptr) ti_parse_context_record;
    
    // [EtwpTiQueryCodeIntegrityOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x939418, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dd9b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x937ce8, 0x1fe000 bytes
    //
    _p31(sdk::unknown_ptr) ti_query_code_integrity_options;
    
    // [EtwpTiQueryVad]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6713ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d2e00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e4c0c, 0x1fe000 bytes
    //
    _p32(sdk::unknown_ptr) ti_query_vad;
    
    // [EtwpTiVadQueryEventWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x266258, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36fc40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3169e8, 0x1fe000 bytes
    //
    _p33(sdk::unknown_ptr) ti_vad_query_event_write;
    
    // [EtwpTiVadQueryEventWriteCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6712b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d2d00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e4b10, 0x1fe000 bytes
    //
    _p34(sdk::unknown_ptr) ti_vad_query_event_write_callback;
    
    // [EtwpTimLogMitigationForProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x939464, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9df260, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x937d34, 0x1fe000 bytes
    //
    _p35(sdk::unknown_ptr) tim_log_mitigation_for_process;
    
    // [EtwpTraceImageUnload]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2b68fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f4ee8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2a8d68, 0x1fe000 bytes
    //
    _p36(sdk::unknown_ptr) trace_image_unload;
    
    // [EtwpTraceImageUnloadApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x25caf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36a330, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30d1f0, 0x1fe000 bytes
    //
    _p37(sdk::unknown_ptr) trace_image_unload_apc;
    
    // [EtwpTraceImageUnloadApcStub]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _p38(sdk::unknown_ptr) trace_image_unload_apc_stub;
    
    // [EtwpTraceLastBranchRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5aa254, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x467e66, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5aa0d4, 0x1fe000 bytes
    //
    _p39(sdk::unknown_ptr) trace_last_branch_record;
    
    // [EtwpTraceProcessorTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5aa458, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ee034, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5aa2d8, 0x1fe000 bytes
    //
    _p40(sdk::unknown_ptr) trace_processor_trace;
    
    // [EtwpTrackBinaryForSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93ddb4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x897790, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93c684, 0x1fe000 bytes
    //
    _p41(sdk::unknown_ptr) track_binary_for_session;
    
    // [EtwpTrackDebugIdForSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x662c24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b5514, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d6c0c, 0x1fe000 bytes
    //
    _p42(sdk::unknown_ptr) track_debug_id_for_session;
    
    // [EtwpTrackDecodeGuidForSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93e03c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e92e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93c90c, 0x1fe000 bytes
    //
    _p43(sdk::unknown_ptr) track_decode_guid_for_session;
    
    // [EtwpTrackGuidEntryRegistrations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93e174, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e9414, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93ca44, 0x1fe000 bytes
    //
    _p44(sdk::unknown_ptr) track_guid_entry_registrations;
    
    // [EtwpTrackProviderRegistration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6bcb70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x705860, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f4d10, 0x1fe000 bytes
    //
    _p45(sdk::unknown_ptr) track_provider_registration;
    
    // [EtwpUnregisterPartitionPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5aaad0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ecc30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5aa950, 0x1fe000 bytes
    //
    _p46(sdk::unknown_ptr) unregister_partition_pages;
    
    // [EtwpUpdateFilterData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x507cfc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fd3f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67eaf0, 0x1fe000 bytes
    //
    _p47(sdk::unknown_ptr) update_filter_data;
    
    // [EtwpUpdateGlobalGroupMasks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x775538, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78f7a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x786764, 0x1fe000 bytes
    //
    _p48(sdk::unknown_ptr) update_global_group_masks;
    
    // [EtwpUpdateLastBranchTracingConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x944fdc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e4314, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9438ac, 0x1fe000 bytes
    //
    _p49(sdk::unknown_ptr) update_last_branch_tracing_configuration;
    
    // [EtwpUpdateLastBranchTracingEvents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9450a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e43d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x943970, 0x1fe000 bytes
    //
    _p50(sdk::unknown_ptr) update_last_branch_tracing_events;
    
    // [EtwpUpdatePeriodicCaptureState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93c484, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e0608, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93ad54, 0x1fe000 bytes
    //
    _p51(sdk::unknown_ptr) update_periodic_capture_state;
    
    // [EtwpUpdatePidFilterData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6abd2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93dac8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93c398, 0x1fe000 bytes
    //
    _p52(sdk::unknown_ptr) update_pid_filter_data;
    
    // [EtwpUpdateProcessorTraceConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9451e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e4510, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x943ab8, 0x1fe000 bytes
    //
    _p53(sdk::unknown_ptr) update_processor_trace_configuration;
    
    // [EtwpUpdateProcessorTraceEvents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x945290, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e45b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x943b60, 0x1fe000 bytes
    //
    _p54(sdk::unknown_ptr) update_processor_trace_events;
    
    // [EtwpUpdateSchematizedFilterData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6abdc8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b18d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b9464, 0x1fe000 bytes
    //
    _p55(sdk::unknown_ptr) update_schematized_filter_data;
    
    // [EtwpUpdateStringFilterData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6abe88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93db6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93c43c, 0x1fe000 bytes
    //
    _p56(sdk::unknown_ptr) update_string_filter_data;
    
    // [EtwpUserInAdminOrLogUsersGroup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x937f0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d89bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9367dc, 0x1fe000 bytes
    //
    _p57(sdk::unknown_ptr) user_in_admin_or_log_users_group;
    
    // [EtwpValidateTraceControlFilterDescriptors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93dba4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e90f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93c474, 0x1fe000 bytes
    //
    _p58(sdk::unknown_ptr) validate_trace_control_filter_descriptors;
    
    // [EtwpWriteProcessorTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5aa510, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ee0f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5aa390, 0x1fe000 bytes
    //
    _p59(sdk::unknown_ptr) write_processor_trace;
    
    // [EtwpAccessCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4af6bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x688844, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x703a20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f4628, 0x1fe000 bytes
    //
    _p60(sdk::unknown_ptr) access_check;
    
    // [EtwpAccessCheckFromState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a6f8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5dcb00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x706428, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f26a4, 0x1fe000 bytes
    //
    _p61(sdk::unknown_ptr) access_check_from_state;
    
    // [EtwpAcquireLoggerContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x512a88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e7d44, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x806214, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67a13c, 0x1fe000 bytes
    //
    _p62(sdk::unknown_ptr) acquire_logger_context;
    
    // [EtwpAcquireLoggerContextByLoggerId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a6c7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x688328, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7040ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f39f4, 0x1fe000 bytes
    //
    _p63(sdk::unknown_ptr) acquire_logger_context_by_logger_id;
    
    // [EtwpAcquireLoggerContextByLoggerName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x512e58, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x687d14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x703848, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67a25c, 0x1fe000 bytes
    //
    _p64(sdk::unknown_ptr) acquire_logger_context_by_logger_name;
    
    // [EtwpAcquireTokenAccessInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5660bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9309cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85eacc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92f29c, 0x1fe000 bytes
    //
    _p65(sdk::unknown_ptr) acquire_token_access_information;
    
    // [EtwpAddBinaryInfoEvents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a91c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x939e28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9dfc1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9386f8, 0x1fe000 bytes
    //
    _p66(sdk::unknown_ptr) add_binary_info_events;
    
    // [EtwpAddDataSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x507418, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fdfc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x700490, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67f6b8, 0x1fe000 bytes
    //
    _p67(sdk::unknown_ptr) add_data_source;
    
    // [EtwpAddDebugInfoEvents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x511110, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x639d08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x806de8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67a840, 0x1fe000 bytes
    //
    _p68(sdk::unknown_ptr) add_debug_info_events;
    
    // [EtwpAddEventToBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x511268, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x639e94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x806f70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67a9cc, 0x1fe000 bytes
    //
    _p69(sdk::unknown_ptr) add_event_to_buffer;
    
    // [EtwpAddGuidEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x507ebc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fd7a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x751bcc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67ee98, 0x1fe000 bytes
    //
    _p70(sdk::unknown_ptr) add_guid_entry;
    
    // [EtwpAddKmRegEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x509cf8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x743330, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a17e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74af70, 0x1fe000 bytes
    //
    _p71(sdk::unknown_ptr) add_km_reg_entry;
    
    // [EtwpAddLogHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5112d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6391bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x807e94, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67c0c0, 0x1fe000 bytes
    //
    _p72(sdk::unknown_ptr) add_log_header;
    
    // [EtwpAddNotificationEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x507378, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fdf18, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ffb94, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67f610, 0x1fe000 bytes
    //
    _p73(sdk::unknown_ptr) add_notification_event;
    
    // [EtwpAddRegEntryToGroup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a6278, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c0570, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x703bf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f46e0, 0x1fe000 bytes
    //
    _p74(sdk::unknown_ptr) add_reg_entry_to_group;
    
    // [EtwpAddUmRegEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4adcbc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6bb620, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x705714, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f4e28, 0x1fe000 bytes
    //
    _p75(sdk::unknown_ptr) add_um_reg_entry;
    
    // [EtwpAdjustBuffersWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe1e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc198c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc318c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19920, 0x1fe000 bytes
    //
    _p76(sdk::unknown_ptr) adjust_buffers_work_item;
    
    // [EtwpAdjustFreeBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a6d80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6881e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x706a78, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f23c8, 0x1fe000 bytes
    //
    _p77(sdk::unknown_ptr) adjust_free_buffers;
    
    // [EtwpAdjustTraceBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xdc530, 0x32828 bytes
    // ntoskrnl.exe .text:0x262480, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x306110, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x312a70, 0x1fe000 bytes
    //
    _p78(sdk::unknown_ptr) adjust_trace_buffers;
    
    // [EtwpAllNotifyRoutines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6eefe0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x983840, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa67960, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x982120, 0x1fe000 bytes
    //
    _p79(sdk::unknown_ptr) all_notify_routines;
    
    // [EtwpAllocDataBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x507e20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fe8d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ff930, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67cd4c, 0x1fe000 bytes
    //
    _p80(sdk::unknown_ptr) alloc_data_block;
    
    // [EtwpAllocGuidEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50802c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fd934, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x751d70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67f02c, 0x1fe000 bytes
    //
    _p81(sdk::unknown_ptr) alloc_guid_entry;
    
    // [EtwpAllocateEventNameFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6aaf40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93cf64, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e83ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93b834, 0x1fe000 bytes
    //
    _p82(sdk::unknown_ptr) allocate_event_name_filter;
    
    // [EtwpAllocateFreeBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10acd0, 0x32828 bytes
    // ntoskrnl.exe .text:0x23cab8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38fde4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ded30, 0x1fe000 bytes
    //
    _p83(sdk::unknown_ptr) allocate_free_buffers;
    
    // [EtwpAllocatePayloadFilterData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ab300, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93d31c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e87fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93bbec, 0x1fe000 bytes
    //
    _p84(sdk::unknown_ptr) allocate_payload_filter_data;
    
    // [EtwpAllocatePmcData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a7c2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x936520, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d6d2c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x934df0, 0x1fe000 bytes
    //
    _p85(sdk::unknown_ptr) allocate_pmc_data;
    
    // [EtwpAllocateStringFilterData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ab384, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93d3a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e89b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93bc78, 0x1fe000 bytes
    //
    _p86(sdk::unknown_ptr) allocate_string_filter_data;
    
    // [EtwpAllocateTraceBufferPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51301c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x638480, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x807c84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67a77c, 0x1fe000 bytes
    //
    _p87(sdk::unknown_ptr) allocate_trace_buffer_pool;
    
    // [EtwpAppStateChangeSequenceNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe950, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19ed0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31f60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19f28, 0x1fe000 bytes
    //
    _p88(sdk::unknown_ptr) app_state_change_sequence_number;
    
    // [EtwpApplyEventIdPayloadFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x228e84, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d6cd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x355080, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x257d40, 0x1fe000 bytes
    //
    _p89(sdk::unknown_ptr) apply_event_id_payload_filter;
    
    // [EtwpApplyEventIdPayloadFilterOnUserEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ab500, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x677820, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a7c1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6eae60, 0x1fe000 bytes
    //
    _p90(sdk::unknown_ptr) apply_event_id_payload_filter_on_user_event;
    
    // [EtwpApplyEventNameFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x229000, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a5b84, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x468b76, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a5a04, 0x1fe000 bytes
    //
    _p91(sdk::unknown_ptr) apply_event_name_filter;
    
    // [EtwpApplyExeFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ab548, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93d664, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e8c74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93bf34, 0x1fe000 bytes
    //
    _p92(sdk::unknown_ptr) apply_exe_filter;
    
    // [EtwpApplyPackageIdFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ab5fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93d72c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e8d48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93bffc, 0x1fe000 bytes
    //
    _p93(sdk::unknown_ptr) apply_package_id_filter;
    
    // [EtwpApplyPayloadFilterInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22ac24, 0x32828 bytes
    // ntoskrnl.exe .text:0x5aad28, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ef7c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5aaba8, 0x1fe000 bytes
    //
    _p94(sdk::unknown_ptr) apply_payload_filter_internal;
    
    // [EtwpApplyScopeFilters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ade68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6bcc88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x705994, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f4b98, 0x1fe000 bytes
    //
    _p95(sdk::unknown_ptr) apply_scope_filters;
    
    // [EtwpApplyStackWalkFilterOnUserEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ab7bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93d90c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e8f20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93c1dc, 0x1fe000 bytes
    //
    _p96(sdk::unknown_ptr) apply_stack_walk_filter_on_user_event;
    
    // [EtwpBootTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe390, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19a90, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc319c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19b18, 0x1fe000 bytes
    //
    _p97(sdk::unknown_ptr) boot_time;
    
    // [EtwpBufferAdjustmentActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe214, 0x32828 bytes
    // ntoskrnl.exe .data:0xc198e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc318e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1990c, 0x1fe000 bytes
    //
    _p98(sdk::unknown_ptr) buffer_adjustment_active;
    
    // [EtwpBufferAdjustmentCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe370, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19900, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31880, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19950, 0x1fe000 bytes
    //
    _p99(sdk::unknown_ptr) buffer_adjustment_count;
    
    // [EtwpBufferingModeCompressionFlush]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x229680, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a6488, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ed508, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a6308, 0x1fe000 bytes
    //
    _q00(sdk::unknown_ptr) buffering_mode_compression_flush;
    
    // [EtwpBufferingModeFlush]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a92bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x939fa8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x893fd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x938878, 0x1fe000 bytes
    //
    _q01(sdk::unknown_ptr) buffering_mode_flush;
    
    // [EtwpBugCheckCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe120, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19800, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31700, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19860, 0x1fe000 bytes
    //
    _q02(sdk::unknown_ptr) bug_check_callback;
    
    // [EtwpBugCheckMultiPartCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x227940, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a4940, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5eb710, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a47c0, 0x1fe000 bytes
    //
    _q03(sdk::unknown_ptr) bug_check_multi_part_callback;
    
    // [EtwpBuildMdlForTraceBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ac764, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x945300, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e0d04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x943bd0, 0x1fe000 bytes
    //
    _q04(sdk::unknown_ptr) build_mdl_for_trace_buffer;
    
    // [EtwpBuildNotificationPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x507d84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fe84c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ff8ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67ccc8, 0x1fe000 bytes
    //
    _q05(sdk::unknown_ptr) build_notification_packet;
    
    // [EtwpBuildProcessEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f469c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60c2c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ea7fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d8e38, 0x1fe000 bytes
    //
    _q06(sdk::unknown_ptr) build_process_event;
    
    // [EtwpCalculateUpdateNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5075a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fe034, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ffc3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67f72c, 0x1fe000 bytes
    //
    _q07(sdk::unknown_ptr) calculate_update_notification;
    
    // [EtwpCancelMemoryPreservation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ac7b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9453bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e0dc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x943c8c, 0x1fe000 bytes
    //
    _q08(sdk::unknown_ptr) cancel_memory_preservation;
    
    // [EtwpCapturePreviousRegistryData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a82c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x937fa4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e8154, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x936874, 0x1fe000 bytes
    //
    _q09(sdk::unknown_ptr) capture_previous_registry_data;
    
    // [EtwpCaptureRegistryData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a83c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9380a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e8264, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x936978, 0x1fe000 bytes
    //
    _q10(sdk::unknown_ptr) capture_registry_data;
    
    // [EtwpCaptureString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x512f10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e7e64, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x806310, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67a320, 0x1fe000 bytes
    //
    _q11(sdk::unknown_ptr) capture_string;
    
    // [EtwpCCSwapDeleteProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x229644, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a6444, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ef62c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a62c4, 0x1fe000 bytes
    //
    _q12(sdk::unknown_ptr) cc_swap_delete_processor;
    
    // [EtwpCCSwapFlush]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9d5f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a5988, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b2c44, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3aac08, 0x1fe000 bytes
    //
    _q13(sdk::unknown_ptr) cc_swap_flush;
    
    // [EtwpCCSwapStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x536ba4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x773f00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x836360, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x780440, 0x1fe000 bytes
    //
    _q14(sdk::unknown_ptr) cc_swap_start;
    
    // [EtwpCCSwapStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a2ef4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x773e88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x836418, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x780500, 0x1fe000 bytes
    //
    _q15(sdk::unknown_ptr) cc_swap_stop;
    
    // [EtwpCCSwapTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9cee0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a5630, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b28c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3aa8b0, 0x1fe000 bytes
    //
    _q16(sdk::unknown_ptr) cc_swap_trace;
    
    // [EtwpCheckForPoolTagFilterExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50f7e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x773b38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8665e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x780578, 0x1fe000 bytes
    //
    _q17(sdk::unknown_ptr) check_for_pool_tag_filter_extension;
    
    // [EtwpCheckForStackTracingExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x513a0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67793c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80673c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67912c, 0x1fe000 bytes
    //
    _q18(sdk::unknown_ptr) check_for_stack_tracing_extension;
    
    // [EtwpCheckGuidAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5077b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fd3a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x700640, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67eaa0, 0x1fe000 bytes
    //
    _q19(sdk::unknown_ptr) check_guid_access;
    
    // [EtwpCheckGuidAccessAndDoRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a9748, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93a568, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e22e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x938e38, 0x1fe000 bytes
    //
    _q20(sdk::unknown_ptr) check_guid_access_and_do_rundown;
    
    // [EtwpCheckLoggerAccessAndDoRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a982c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93a6a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e2430, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x938f70, 0x1fe000 bytes
    //
    _q21(sdk::unknown_ptr) check_logger_access_and_do_rundown;
    
    // [EtwpCheckLoggerControlAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a6dc8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6887a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x703950, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f24b0, 0x1fe000 bytes
    //
    _q22(sdk::unknown_ptr) check_logger_control_access;
    
    // [EtwpCheckProviderLoggingAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x506bc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fdaf4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7004f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67f1ec, 0x1fe000 bytes
    //
    _q23(sdk::unknown_ptr) check_provider_logging_access;
    
    // [EtwpCheckSystemTraceAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5710bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x773b08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82ed98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x780608, 0x1fe000 bytes
    //
    _q24(sdk::unknown_ptr) check_system_trace_access;
    
    // [EtwpClearSessionAndUnreferenceEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x505c1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e8558, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x705b10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f303c, 0x1fe000 bytes
    //
    _q25(sdk::unknown_ptr) clear_session_and_unreference_entry;
    
    // [EtwpClockSourceRunDown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a98ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93a788, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e2518, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x939058, 0x1fe000 bytes
    //
    _q26(sdk::unknown_ptr) clock_source_run_down;
    
    // [EtwpCloseLogger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9d70c, 0x32828 bytes
    // ntoskrnl.exe .text:0x375be4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390860, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x376f64, 0x1fe000 bytes
    //
    _q27(sdk::function<void(uint32_t, struct etw::silodriverstate_t*, struct etw::logger_handle_t)>*) close_logger;
    
    // [EtwpCloseRealTimeConnectionObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5106c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e9da0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e3960, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x676e10, 0x1fe000 bytes
    //
    _q28(sdk::unknown_ptr) close_real_time_connection_object;
    
    // [EtwpCloseRegistrationObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5190c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67a4c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b6dc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed840, 0x1fe000 bytes
    //
    _q29(sdk::unknown_ptr) close_registration_object;
    
    // [EtwpCompareGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x488f24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93e4c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8949c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93cd90, 0x1fe000 bytes
    //
    _q30(sdk::unknown_ptr) compare_guid;
    
    // [EtwpCompleteBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48736c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6881b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x706e60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f22e8, 0x1fe000 bytes
    //
    _q31(sdk::unknown_ptr) complete_buffer;
    
    // [EtwpComponentName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e3b0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d530, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xef54, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d850, 0x1fe000 bytes
    //
    _q32(sdk::unknown_ptr) component_name;
    
    // [EtwpCompressBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x229714, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a66a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ed570, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a6520, 0x1fe000 bytes
    //
    _q33(sdk::unknown_ptr) compress_buffer;
    
    // [EtwpCompressPendingBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x229a94, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a6a28, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ed8f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a68a8, 0x1fe000 bytes
    //
    _q34(sdk::unknown_ptr) compress_pending_buffers;
    
    // [EtwpCompressionDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x229bdc, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a6cf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5eda20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a6b70, 0x1fe000 bytes
    //
    _q35(sdk::unknown_ptr) compression_dpc;
    
    // [EtwpCompressionProc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x229c18, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a6d40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5eda70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a6bc0, 0x1fe000 bytes
    //
    _q36(sdk::unknown_ptr) compression_proc;
    
    // [EtwpComputeRegEntryEnableInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a5d84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e88b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7068e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f2b90, 0x1fe000 bytes
    //
    _q37(sdk::unknown_ptr) compute_reg_entry_enable_info;
    
    // [EtwpCopyEventData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9d98c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a5a98, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c3450, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3aad18, 0x1fe000 bytes
    //
    _q38(sdk::unknown_ptr) copy_event_data;
    
    // [EtwpCopyJobGuidSafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a5b70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9337e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8930f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9320b8, 0x1fe000 bytes
    //
    _q39(sdk::unknown_ptr) copy_job_guid_safe;
    
    // [EtwpCopyJobIdSafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a5b8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x933808, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d9a7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9320d8, 0x1fe000 bytes
    //
    _q40(sdk::unknown_ptr) copy_job_id_safe;
    
    // [EtwpCopySchematizedFilters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ab7dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93d934, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e8fdc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93c204, 0x1fe000 bytes
    //
    _q41(sdk::unknown_ptr) copy_schematized_filters;
    
    // [EtwpCreateActivityId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc15e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x215fc8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f2990, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x241cc8, 0x1fe000 bytes
    //
    _q42(sdk::unknown_ptr) create_activity_id;
    
    // [EtwpCreateDirectoryFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5147a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x638fa4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x807564, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67bea8, 0x1fe000 bytes
    //
    _q43(sdk::unknown_ptr) create_directory_file;
    
    // [EtwpCreateEventKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xccec8, 0x32828 bytes
    // ntoskrnl.exe .text:0x219044, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36a1bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d7004, 0x1fe000 bytes
    //
    _q44(sdk::unknown_ptr) create_event_key;
    
    // [EtwpCreateLogFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x514038, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x638880, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x806ff0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67b784, 0x1fe000 bytes
    //
    _q45(sdk::unknown_ptr) create_log_file;
    
    // [EtwpCreateNtFileName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5148e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6390e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80749c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67bfe8, 0x1fe000 bytes
    //
    _q46(sdk::unknown_ptr) create_nt_file_name;
    
    // [EtwpCreatePerfectHashFunction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ab88c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x799b40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c8a90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a10ec, 0x1fe000 bytes
    //
    _q47(sdk::unknown_ptr) create_perfect_hash_function;
    
    // [EtwpCreateUmReplyObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a2254, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67867c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84f5e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ebabc, 0x1fe000 bytes
    //
    _q48(sdk::unknown_ptr) create_um_reply_object;
    
    // [EtwpCrimsonMaskMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe4e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19b20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31aa0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19ba0, 0x1fe000 bytes
    //
    _q49(sdk::unknown_ptr) crimson_mask_mutex;
    
    // [EtwpCrimsonProvEnableCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53ba78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x776540, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e3f50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7880b0, 0x1fe000 bytes
    //
    _q50(sdk::unknown_ptr) crimson_prov_enable_callback;
    
    // [EtwpDebuggerData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5f28, 0x32828 bytes
    // ntoskrnl.exe .data:0xc10d08, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0b4a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc10d68, 0x1fe000 bytes
    //
    _q51(sdk::unknown_ptr) debugger_data;
    
    // [EtwpDefaultTraceSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341f98, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4380, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd16d18, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4380, 0x1fe000 bytes
    //
    _q52(sdk::unknown_ptr) default_trace_security_descriptor;
    
    // [EtwpDelayCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5146d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x638ec4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x807374, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67bdc8, 0x1fe000 bytes
    //
    _q53(sdk::unknown_ptr) delay_create;
    
    // [EtwpDeleteRealTimeConnectionObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a2840, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x679a30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e3980, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ecdd0, 0x1fe000 bytes
    //
    _q54(sdk::unknown_ptr) delete_real_time_connection_object;
    
    // [EtwpDeleteRegistrationObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4aebc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a1580, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x704390, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f7ae0, 0x1fe000 bytes
    //
    _q55(sdk::unknown_ptr) delete_registration_object;
    
    // [EtwpDequeueBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfe4f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x27e244, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f31c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2415dc, 0x1fe000 bytes
    //
    _q56(sdk::unknown_ptr) dequeue_buffer;
    
    // [EtwpDequeueBufferPendingCompression]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x229cf4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a6f94, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5edb28, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a6e14, 0x1fe000 bytes
    //
    _q57(sdk::unknown_ptr) dequeue_buffer_pending_compression;
    
    // [EtwpDequeueBufferPendingCompressionFromQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x229de0, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a7088, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5edc28, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a6f08, 0x1fe000 bytes
    //
    _q58(sdk::unknown_ptr) dequeue_buffer_pending_compression_from_queue;
    
    // [EtwpDequeueFreeBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfe390, 0x32828 bytes
    // ntoskrnl.exe .text:0x27e0c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f304c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x241460, 0x1fe000 bytes
    //
    _q59(sdk::unknown_ptr) dequeue_free_buffer;
    
    // [EtwpDereferenceLoggerSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a6e14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6887fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x703908, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f2504, 0x1fe000 bytes
    //
    _q60(sdk::unknown_ptr) dereference_logger_security_descriptor;
    
    // [EtwpDereferenceStackEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22a5d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a7a58, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x467632, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a78d8, 0x1fe000 bytes
    //
    _q61(sdk::unknown_ptr) dereference_stack_entry;
    
    // [EtwpDisableCompression]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x229e44, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a70f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5edc98, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a6f78, 0x1fe000 bytes
    //
    _q62(sdk::unknown_ptr) disable_compression;
    
    // [EtwpDisableKernelTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5152e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x775084, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78fd38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7862b0, 0x1fe000 bytes
    //
    _q63(sdk::unknown_ptr) disable_kernel_trace;
    
    // [EtwpDisableTraceProviders]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5059f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e833c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x70416c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f3398, 0x1fe000 bytes
    //
    _q64(sdk::unknown_ptr) disable_trace_providers;
    
    // [EtwpDisassociateConsumer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51392c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x678d38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e39b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ec178, 0x1fe000 bytes
    //
    _q65(sdk::unknown_ptr) disassociate_consumer;
    
    // [EtwpDiskIoNotifyRoutines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3243f8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc54550, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc644a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc54520, 0x1fe000 bytes
    //
    _q66(sdk::unknown_ptr) disk_io_notify_routines;
    
    // [EtwpDiskProvRegHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe3d0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19a78, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc319d8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19ae0, 0x1fe000 bytes
    //
    _q67(sdk::unknown_ptr) disk_prov_reg_handle;
    
    // [EtwpDiskProvTraceDisk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x226084, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a258c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e8e78, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a240c, 0x1fe000 bytes
    //
    _q68(sdk::unknown_ptr) disk_prov_trace_disk;
    
    // [EtwpDumpCallbackContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe110, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19830, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc316f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19890, 0x1fe000 bytes
    //
    _q69(sdk::unknown_ptr) dump_callback_context;
    
    // [EtwpEnableDisableSpecialGuids]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x507490, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fcf74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x700690, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67e66c, 0x1fe000 bytes
    //
    _q70(sdk::unknown_ptr) enable_disable_special_guids;
    
    // [EtwpEnableDisableUMGL]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a44f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x931088, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9dae48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92f958, 0x1fe000 bytes
    //
    _q71(sdk::unknown_ptr) enable_disable_umgl;
    
    // [EtwpEnableFlagMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ede70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x982680, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa66270, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x980f60, 0x1fe000 bytes
    //
    _q72(sdk::unknown_ptr) enable_flag_map;
    
    // [EtwpEnableGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5062f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fc52c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x700da0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67dc24, 0x1fe000 bytes
    //
    _q73(sdk::unknown_ptr) enable_guid;
    
    // [EtwpEnableKernelTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51505c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7752a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78f9c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7864d0, 0x1fe000 bytes
    //
    _q74(sdk::unknown_ptr) enable_kernel_trace;
    
    // [EtwpEnableKeyProviders]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x556320, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x793278, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84a53c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a0514, 0x1fe000 bytes
    //
    _q75(sdk::unknown_ptr) enable_key_providers;
    
    // [EtwpEnableStackCaching]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ac560, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93eb34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8947aa, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93d404, 0x1fe000 bytes
    //
    _q76(sdk::unknown_ptr) enable_stack_caching;
    
    // [EtwpEnableTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5058a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76d1d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x820554, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x774c44, 0x1fe000 bytes
    //
    _q77(sdk::unknown_ptr) enable_trace;
    
    // [EtwpEnqueueAvailableBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfdf6c, 0x32828 bytes
    // ntoskrnl.exe .text:0x27e284, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f3204, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x24161c, 0x1fe000 bytes
    //
    _q78(sdk::unknown_ptr) enqueue_available_buffer;
    
    // [EtwpEnqueueOverflowBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd40b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x26fee8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x382070, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x321708, 0x1fe000 bytes
    //
    _q79(sdk::unknown_ptr) enqueue_overflow_buffer;
    
    // [EtwpEnumerateAddressSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a9b64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69ab9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x708f70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6384b4, 0x1fe000 bytes
    //
    _q80(sdk::unknown_ptr) enumerate_address_space;
    
    // [EtwpEnumerateTraceGuids]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5197f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70ed2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66e034, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7166bc, 0x1fe000 bytes
    //
    _q81(sdk::unknown_ptr) enumerate_trace_guids;
    
    // [EtwpEnumerateWorkingSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a999c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93a848, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e25e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x939118, 0x1fe000 bytes
    //
    _q82(sdk::unknown_ptr) enumerate_working_set;
    
    // [EtwpEthreadSyncTrackingSequence]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x359208, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9e24, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b8d4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9e24, 0x1fe000 bytes
    //
    _q83(sdk::unknown_ptr) ethread_sync_tracking_sequence;
    
    // [EtwpEventNameFilterSearch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22934c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a6178, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x46902a, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a5ff8, 0x1fe000 bytes
    //
    _q84(sdk::unknown_ptr) event_name_filter_search;
    
    // [EtwpEventTracingCounterSetCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6eaf1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97f9c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa62d60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97e2a0, 0x1fe000 bytes
    //
    _q85(sdk::unknown_ptr) event_tracing_counter_set_callback;
    
    // [EtwpEventTracingProvRegHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe3c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19ab8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc319e8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19af0, 0x1fe000 bytes
    //
    _q86(sdk::unknown_ptr) event_tracing_prov_reg_handle;
    
    // [EtwpEventWriteFull]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9b1e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d5e50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2986e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x256ec0, 0x1fe000 bytes
    //
    _q87(sdk::unknown_ptr) event_write_full;
    
    // [EtwpEventWriteProviderEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a7c98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93673c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d7264, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93500c, 0x1fe000 bytes
    //
    _q88(sdk::unknown_ptr) event_write_provider_enabled;
    
    // [EtwpEventWriteTemplateAdmin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a7d5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93697c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d74a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93524c, 0x1fe000 bytes
    //
    _q89(sdk::unknown_ptr) event_write_template_admin;
    
    // [EtwpEventWriteTemplateBackingFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a7e14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x936a3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67921c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93530c, 0x1fe000 bytes
    //
    _q90(sdk::unknown_ptr) event_write_template_backing_file;
    
    // [EtwpEventWriteTemplateMaxFileSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e2f44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x936ae0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d7564, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9353b0, 0x1fe000 bytes
    //
    _q91(sdk::unknown_ptr) event_write_template_max_file_size;
    
    // [EtwpEventWriteTemplateSessAndProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a7eb0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x936bc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x89301a, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x935490, 0x1fe000 bytes
    //
    _q92(sdk::unknown_ptr) event_write_template_sess_and_prov;
    
    // [EtwpEventWriteTemplateSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a7f84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x936c9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d7644, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93556c, 0x1fe000 bytes
    //
    _q93(sdk::unknown_ptr) event_write_template_session;
    
    // [EtwpEventWriteTemplateSessionEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e2e70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x936e98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d7840, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x935768, 0x1fe000 bytes
    //
    _q94(sdk::unknown_ptr) event_write_template_session_end;
    
    // [EtwpExecutiveResourceConfigRunDown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a9a54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93a914, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e2698, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9391e4, 0x1fe000 bytes
    //
    _q95(sdk::unknown_ptr) executive_resource_config_run_down;
    
    // [EtwpExecutiveResourceContentionSampleRate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fa9f8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12cb8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0dd04, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12d28, 0x1fe000 bytes
    //
    _q96(sdk::unknown_ptr) executive_resource_contention_sample_rate;
    
    // [EtwpExecutiveResourceReleaseSampleRate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2faa00, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12cbc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0dd08, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12d2c, 0x1fe000 bytes
    //
    _q97(sdk::unknown_ptr) executive_resource_release_sample_rate;
    
    // [EtwpExecutiveResourceTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fa9fc, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12cc0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0dd00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12d30, 0x1fe000 bytes
    //
    _q98(sdk::unknown_ptr) executive_resource_timeout;
    
    // [EtwpExpandFileName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x517e70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63a0e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8076a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b5694, 0x1fe000 bytes
    //
    _q99(sdk::unknown_ptr) expand_file_name;
    
    // [EtwpFailLogging]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x224af8, 0x32828 bytes
    // ntoskrnl.exe .text:0x368714, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38fc3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x369ac4, 0x1fe000 bytes
    //
    _r00(sdk::unknown_ptr) fail_logging;
    
    // [EtwpFileIoNotifyRoutines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f3358, 0x32828 bytes
    // ntoskrnl.exe .data:0xc00ee0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc00300, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc00ee0, 0x1fe000 bytes
    //
    _r01(sdk::unknown_ptr) file_io_notify_routines;
    
    // [EtwpFileProvRegHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe3d8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19a70, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc319e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19af8, 0x1fe000 bytes
    //
    _r02(sdk::unknown_ptr) file_prov_reg_handle;
    
    // [EtwpFileProvTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22624c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a28a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x465b4e, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a2724, 0x1fe000 bytes
    //
    _r03(sdk::unknown_ptr) file_prov_trace;
    
    // [EtwpFillPerfectHashTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6aba88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x799d54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c8cc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a1300, 0x1fe000 bytes
    //
    _r04(sdk::unknown_ptr) fill_perfect_hash_table;
    
    // [EtwpFinalizeHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x510ed8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x638544, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x806acc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67b448, 0x1fe000 bytes
    //
    _r05(sdk::unknown_ptr) finalize_header;
    
    // [EtwpFindAndLockBufferForFlushing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a9604, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93a410, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x89460e, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x938ce0, 0x1fe000 bytes
    //
    _r06(sdk::unknown_ptr) find_and_lock_buffer_for_flushing;
    
    // [EtwpFindDebugId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x509288, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x662ea4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b5290, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d6e94, 0x1fe000 bytes
    //
    _r07(sdk::unknown_ptr) find_debug_id;
    
    // [EtwpFindGuidEntryByGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ae670, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6bca30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7054f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f5d20, 0x1fe000 bytes
    //
    _r08(sdk::unknown_ptr) find_guid_entry_by_guid;
    
    // [EtwpFindUserBufferSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51385c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6898d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7073fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x704790, 0x1fe000 bytes
    //
    _r09(sdk::unknown_ptr) find_user_buffer_space;
    
    // [EtwpFltIoNotifyRoutines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f3328, 0x32828 bytes
    // ntoskrnl.exe .data:0xc00eb0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc002d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc00eb0, 0x1fe000 bytes
    //
    _r10(sdk::unknown_ptr) flt_io_notify_routines;
    
    // [EtwpFlushActiveBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c3c90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x688448, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x706ae4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f2cdc, 0x1fe000 bytes
    //
    _r11(sdk::unknown_ptr) flush_active_buffers;
    
    // [EtwpFlushBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x513248, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x688978, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x706e8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f21a8, 0x1fe000 bytes
    //
    _r12(sdk::unknown_ptr) flush_buffer;
    
    // [EtwpFlushBufferToLogfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x513388, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x687b3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x808b48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x676b08, 0x1fe000 bytes
    //
    _r13(sdk::unknown_ptr) flush_buffer_to_logfile;
    
    // [EtwpFlushBufferToRealtime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5134f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x689528, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x707034, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x704384, 0x1fe000 bytes
    //
    _r14(sdk::unknown_ptr) flush_buffer_to_realtime;
    
    // [EtwpFlushTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x510da8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e794c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x805638, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x678940, 0x1fe000 bytes
    //
    _r15(sdk::unknown_ptr) flush_trace;
    
    // [EtwpFreeCompression]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb9c4c, 0x32828 bytes
    // ntoskrnl.exe .text:0x238ae8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x346aa4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33feec, 0x1fe000 bytes
    //
    _r16(sdk::unknown_ptr) free_compression;
    
    // [EtwpFreeEventNameFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6abce4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93d9f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e9098, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93c2c0, 0x1fe000 bytes
    //
    _r17(sdk::unknown_ptr) free_event_name_filter;
    
    // [EtwpFreeFilterInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x506c14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fcd74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x700cc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67e46c, 0x1fe000 bytes
    //
    _r18(sdk::unknown_ptr) free_filter_info;
    
    // [EtwpFreeGuidEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4941e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66b768, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d44a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6de38c, 0x1fe000 bytes
    //
    _r19(sdk::unknown_ptr) free_guid_entry;
    
    // [EtwpFreeLoggerContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4774e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x636850, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x796b88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x700ef8, 0x1fe000 bytes
    //
    _r20(sdk::unknown_ptr) free_logger_context;
    
    // [EtwpFreePlaceholderList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb9d58, 0x32828 bytes
    // ntoskrnl.exe .text:0x238cb4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x346b1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3400b4, 0x1fe000 bytes
    //
    _r21(sdk::unknown_ptr) free_placeholder_list;
    
    // [EtwpFreeSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a7008, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5dcb88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x706530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f272c, 0x1fe000 bytes
    //
    _r22(sdk::unknown_ptr) free_security_descriptor;
    
    // [EtwpFreeStackCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ac6c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93ec88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x894908, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93d558, 0x1fe000 bytes
    //
    _r23(sdk::unknown_ptr) free_stack_cache;
    
    // [EtwpFreeTraceBufferPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47770c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x636b3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x796e8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x703d3c, 0x1fe000 bytes
    //
    _r24(sdk::unknown_ptr) free_trace_buffer_pool;
    
    // [EtwpFreeUserBufferSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ac4b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93ea7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e3a0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93d34c, 0x1fe000 bytes
    //
    _r25(sdk::unknown_ptr) free_user_buffer_space;
    
    // [EtwpGenerateFileName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50fc20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x675954, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x808cb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x676c60, 0x1fe000 bytes
    //
    _r26(sdk::unknown_ptr) generate_file_name;
    
    // [EtwpGenericMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25fc60, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xcc38, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf130, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa5e8, 0x1fe000 bytes
    //
    _r27(sdk::unknown_ptr) generic_mapping;
    
    // [EtwpGetAutoLoggerProviderFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x556874, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x775ebc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x820810, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77d230, 0x1fe000 bytes
    //
    _r28(sdk::unknown_ptr) get_auto_logger_provider_filter;
    
    // [EtwpGetCompressionSettings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22a03c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a7334, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5edd18, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a71b4, 0x1fe000 bytes
    //
    _r29(sdk::unknown_ptr) get_compression_settings;
    
    // [EtwpGetDisallowList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a4850, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9314e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9db678, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92fdb8, 0x1fe000 bytes
    //
    _r30(sdk::unknown_ptr) get_disallow_list;
    
    // [EtwpGetEventNameFromEventMetadata]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2295a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a63d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4692f2, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a6254, 0x1fe000 bytes
    //
    _r31(sdk::unknown_ptr) get_event_name_from_event_metadata;
    
    // [EtwpGetFlagExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x513a44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67797c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8067a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67916c, 0x1fe000 bytes
    //
    _r32(sdk::unknown_ptr) get_flag_extension;
    
    // [EtwpGetGuidSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a72e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5dccd8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x706680, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f287c, 0x1fe000 bytes
    //
    _r33(sdk::unknown_ptr) get_guid_security_descriptor;
    
    // [EtwpGetImageSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a32ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x764fc4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x816f94, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76c688, 0x1fe000 bytes
    //
    _r34(sdk::unknown_ptr) get_image_size;
    
    // [EtwpGetLoggerInfoFromContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x512b90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e7f74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x806420, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67a430, 0x1fe000 bytes
    //
    _r35(sdk::unknown_ptr) get_logger_info_from_context;
    
    // [EtwpGetNextEventOffsetType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22a124, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a73f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d6a2c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a7270, 0x1fe000 bytes
    //
    _r36(sdk::unknown_ptr) get_next_event_offset_type;
    
    // [EtwpGetNextGuidEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x505ad4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e8420, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x704254, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f347c, 0x1fe000 bytes
    //
    _r37(sdk::unknown_ptr) get_next_guid_entry;
    
    // [EtwpGetProcessStartKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a0888, 0x32828 bytes
    // ntoskrnl.exe .text:0x219090, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x307140, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d7050, 0x1fe000 bytes
    //
    _r38(sdk::unknown_ptr) get_process_start_key;
    
    // [EtwpGetPsmKeyExtendedHeaderItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a410c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9307d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9dac44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92f0a4, 0x1fe000 bytes
    //
    _r39(sdk::unknown_ptr) get_psm_key_extended_header_item;
    
    // [EtwpGetReserveTraceBufferStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9d5d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3689ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3791f8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x369d5c, 0x1fe000 bytes
    //
    _r40(sdk::unknown_ptr) get_reserve_trace_buffer_status;
    
    // [EtwpGetSchematizedFilterSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4aeb90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6bc8d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x705228, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f6228, 0x1fe000 bytes
    //
    _r41(sdk::unknown_ptr) get_schematized_filter_size;
    
    // [EtwpGetScsiPassThroughCdb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x226400, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a2b24, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e9190, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a29a4, 0x1fe000 bytes
    //
    _r42(sdk::unknown_ptr) get_scsi_pass_through_cdb;
    
    // [EtwpGetSecurityDescriptorByGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a71dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5dcbc8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x706570, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f276c, 0x1fe000 bytes
    //
    _r43(sdk::unknown_ptr) get_security_descriptor_by_guid;
    
    // [EtwpGetSidExtendedHeaderItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x459cc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x619f80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cba94, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66aa60, 0x1fe000 bytes
    //
    _r44(sdk::unknown_ptr) get_sid_extended_header_item;
    
    // [EtwpGetSoftRestartInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ac800, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x945420, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e0e24, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x943cf0, 0x1fe000 bytes
    //
    _r45(sdk::unknown_ptr) get_soft_restart_information;
    
    // [EtwpGetStackExtendedHeaderItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x224cc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x59fdc4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5eaf6c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59fc44, 0x1fe000 bytes
    //
    _r46(sdk::unknown_ptr) get_stack_extended_header_item;
    
    // [EtwpGetStackLookasideListEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x228828, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a0c40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x466d80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a0ac0, 0x1fe000 bytes
    //
    _r47(sdk::unknown_ptr) get_stack_lookaside_list_entry;
    
    // [EtwpGetSystemMaximumBufferCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51397c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x639f14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x807d58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67a6e4, 0x1fe000 bytes
    //
    _r48(sdk::unknown_ptr) get_system_maximum_buffer_count;
    
    // [EtwpGetTraceGroupInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a4958, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9315c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x893922, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92fe94, 0x1fe000 bytes
    //
    _r49(sdk::unknown_ptr) get_trace_group_info;
    
    // [EtwpGetTraceGuidInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49c668, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7128f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e43dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71a284, 0x1fe000 bytes
    //
    _r50(sdk::unknown_ptr) get_trace_guid_info;
    
    // [EtwpGetTraceGuidList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a4cf8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93189c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9db754, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93016c, 0x1fe000 bytes
    //
    _r51(sdk::unknown_ptr) get_trace_guid_list;
    
    // [EtwpGetTrackingLockSlotForThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x227c84, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a4ca8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5eb998, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a4b28, 0x1fe000 bytes
    //
    _r52(sdk::unknown_ptr) get_tracking_lock_slot_for_thread;
    
    // [EtwpGlobalMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe180, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19860, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc317a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc198c0, 0x1fe000 bytes
    //
    _r53(sdk::unknown_ptr) global_mutex;
    
    // [EtwpGlobalSequence]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe210, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19904, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc318e4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19a20, 0x1fe000 bytes
    //
    _r54(sdk::unknown_ptr) global_sequence;
    
    // [EtwpGroupMaskMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe640, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19ae0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31a60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19be0, 0x1fe000 bytes
    //
    _r55(sdk::unknown_ptr) group_mask_mutex;
    
    // [EtwpHostSiloState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe1c0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa008, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c010, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa008, 0x1fe000 bytes
    //
    _r56(sdk::unknown_ptr) host_silo_state;
    
    // [EtwpInitLoggerContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x513b50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x645004, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a8f10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x678bdc, 0x1fe000 bytes
    //
    _r57(sdk::unknown_ptr) init_logger_context;
    
    // [EtwpInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x785814, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa628d4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb3dd94, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa46af8, 0x1fe000 bytes
    //
    _r58(sdk::unknown_ptr) initialize;
    
    // [EtwpInitializeActivityIdSeed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x548274, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7900b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83233c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7860c8, 0x1fe000 bytes
    //
    _r59(sdk::unknown_ptr) initialize_activity_id_seed;
    
    // [EtwpInitializeAutoLoggers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5560dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x792130, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84952c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79f3cc, 0x1fe000 bytes
    //
    _r60(sdk::unknown_ptr) initialize_auto_loggers;
    
    // [EtwpInitializeBufferHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10ae20, 0x32828 bytes
    // ntoskrnl.exe .text:0x23cbe8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38ffa4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dee60, 0x1fe000 bytes
    //
    _r61(sdk::unknown_ptr) initialize_buffer_header;
    
    // [EtwpInitializeCompression]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22a234, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a7508, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e7f98, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a7388, 0x1fe000 bytes
    //
    _r62(sdk::unknown_ptr) initialize_compression;
    
    // [EtwpInitializeProviderInfoBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x511d48, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6383dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x806a28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67881c, 0x1fe000 bytes
    //
    _r63(sdk::unknown_ptr) initialize_provider_info_buffer;
    
    // [EtwpInitializeProviderTraits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5718dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78fd48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86ef24, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x784134, 0x1fe000 bytes
    //
    _r64(sdk::unknown_ptr) initialize_provider_traits;
    
    // [EtwpInitializeRealTimeConnection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a8ee8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6ffac, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5ffb4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa46634, 0x1fe000 bytes
    //
    _r65(sdk::unknown_ptr) initialize_real_time_connection;
    
    // [EtwpInitializeRegistration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a84a4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6f294, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5ed9c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa46548, 0x1fe000 bytes
    //
    _r66(sdk::unknown_ptr) initialize_registration;
    
    // [EtwpInitializeSecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a8f98, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6effc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5eb88, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa461f4, 0x1fe000 bytes
    //
    _r67(sdk::unknown_ptr) initialize_security;
    
    // [EtwpInitializeStackLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571ac4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b6b78, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8703b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x783fd8, 0x1fe000 bytes
    //
    _r68(sdk::unknown_ptr) initialize_stack_lookaside_list;
    
    // [EtwpInitializeTimeStamp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x513a80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x673f00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7da064, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x678fb0, 0x1fe000 bytes
    //
    _r69(sdk::unknown_ptr) initialize_time_stamp;
    
    // [EtwpIsEventNameFilterEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9d478, 0x32828 bytes
    // ntoskrnl.exe .text:0x219028, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35d4b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d6fe8, 0x1fe000 bytes
    //
    _r70(sdk::unknown_ptr) is_event_name_filter_enabled;
    
    // [EtwpIsGuidAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a6ecc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65687c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7064b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f2624, 0x1fe000 bytes
    //
    _r71(sdk::unknown_ptr) is_guid_allowed;
    
    // [EtwpIsProcessZombie]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x515b38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x774b24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x835c90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x780004, 0x1fe000 bytes
    //
    _r72(sdk::unknown_ptr) is_process_zombie;
    
    // [EtwpIsRegEntryAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x506ae8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fda20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x70055c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67f118, 0x1fe000 bytes
    //
    _r73(sdk::unknown_ptr) is_reg_entry_allowed;
    
    // [EtwpIsStackWalkingEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x517b28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x774ef4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x835f08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7803d4, 0x1fe000 bytes
    //
    _r74(sdk::unknown_ptr) is_stack_walking_enabled;
    
    // [EtwpIsWow64Logger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x511718, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x639700, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8083ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67c604, 0x1fe000 bytes
    //
    _r75(sdk::unknown_ptr) is_wow64_logger;
    
    // [EtwpKernelProvEnableCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x570fbc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b6350, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x870410, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bdee0, 0x1fe000 bytes
    //
    _r76(sdk::unknown_ptr) kernel_prov_enable_callback;
    
    // [EtwpKernelTraceRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x514d08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7743cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8355d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77f8a8, 0x1fe000 bytes
    //
    _r77(sdk::unknown_ptr) kernel_trace_rundown;
    
    // [EtwpKsrCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ac900, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9455d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e0fd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x943ea0, 0x1fe000 bytes
    //
    _r78(sdk::unknown_ptr) ksr_callback;
    
    // [EtwpKsrCallbackObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74afe0, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cae0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53860, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cae0, 0x1fe000 bytes
    //
    _r79(sdk::unknown_ptr) ksr_callback_object;
    
    // [EtwpKsrGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec1a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9804b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa63f68, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ed98, 0x1fe000 bytes
    //
    _r80(sdk::unknown_ptr) ksr_guid;
    
    // [EtwpKsrMemoryEnumCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ac9ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9456e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e10e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x943fb0, 0x1fe000 bytes
    //
    _r81(sdk::unknown_ptr) ksr_memory_enum_callback;
    
    // [EtwpKsrPrepared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ab52, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53455, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c6b4, 0x1fe000 bytes
    //
    _r82(sdk::unknown_ptr) ksr_prepared;
    
    // [EtwpLevelKeywordEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x53e90, 0x32828 bytes
    // ntoskrnl.exe .text:0x304610, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2996d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26ea90, 0x1fe000 bytes
    //
    _r83(sdk::unknown_ptr) level_keyword_enabled;
    
    // [EtwpLockBufferList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfb910, 0x32828 bytes
    // ntoskrnl.exe .text:0x27e36c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f3324, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x241704, 0x1fe000 bytes
    //
    _r84(sdk::unknown_ptr) lock_buffer_list;
    
    // [EtwpLockUnlockBufferList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb47d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x27ee3c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f273c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f15e0, 0x1fe000 bytes
    //
    _r85(sdk::unknown_ptr) lock_unlock_buffer_list;
    
    // [EtwpLogAlwaysPresentRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x514eb0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x774f10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x835f28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7803f0, 0x1fe000 bytes
    //
    _r86(sdk::unknown_ptr) log_always_present_rundown;
    
    // [EtwpLogGroupMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x514c8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x774348, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x835550, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77f824, 0x1fe000 bytes
    //
    _r87(sdk::unknown_ptr) log_group_mask;
    
    // [EtwpLogKernelEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e1c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2ea7d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2cc550, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2085b0, 0x1fe000 bytes
    //
    _r88(sdk::unknown_ptr) log_kernel_event;
    
    // [EtwpLogKernelTraceRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a9ae4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93a9fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e2780, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9392cc, 0x1fe000 bytes
    //
    _r89(sdk::unknown_ptr) log_kernel_trace_rundown;
    
    // [EtwpLogMemInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2264b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a2be8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e9254, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a2a68, 0x1fe000 bytes
    //
    _r90(sdk::unknown_ptr) log_mem_info;
    
    // [EtwpLogMemInfoRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a9b2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93aa70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e27f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x939340, 0x1fe000 bytes
    //
    _r91(sdk::unknown_ptr) log_mem_info_rundown;
    
    // [EtwpLogMemInfoTimerCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2265d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a2d50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x465dd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a2bd0, 0x1fe000 bytes
    //
    _r92(sdk::unknown_ptr) log_mem_info_timer_callback;
    
    // [EtwpLogMemInfoWs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a5ba0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x933820, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x893114, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9320f0, 0x1fe000 bytes
    //
    _r93(sdk::unknown_ptr) log_mem_info_ws;
    
    // [EtwpLogMemInfoWsHelper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a5eb4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x933b44, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d9b5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x932414, 0x1fe000 bytes
    //
    _r94(sdk::unknown_ptr) log_mem_info_ws_helper;
    
    // [EtwpLogPmcCounterRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a9b80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93aad4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e2858, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9393a4, 0x1fe000 bytes
    //
    _r95(sdk::unknown_ptr) log_pmc_counter_rundown;
    
    // [EtwpLogProcessPerfCtrs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a5f88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x933c2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d9c44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9324fc, 0x1fe000 bytes
    //
    _r96(sdk::unknown_ptr) log_process_perf_ctrs;
    
    // [EtwpLogRefSetAutoMark]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a9ca4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93ac70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e2b70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x939540, 0x1fe000 bytes
    //
    _r97(sdk::unknown_ptr) log_ref_set_auto_mark;
    
    // [EtwpLogRegistryEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a6054, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x933d18, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x89343c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9325e8, 0x1fe000 bytes
    //
    _r98(sdk::unknown_ptr) log_registry_event;
    
    // [EtwpLogSessionWorkingSetInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a6130, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x933e18, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x89353c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9326e8, 0x1fe000 bytes
    //
    _r99(sdk::unknown_ptr) log_session_working_set_info;
    
    // [EtwpLogSystemEventUnsafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9d7bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a51d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c323c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3aa45c, 0x1fe000 bytes
    //
    _s00(sdk::unknown_ptr) log_system_event_unsafe;
    
    // [EtwpLogTxREvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a6320, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93401c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d9d30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9328ec, 0x1fe000 bytes
    //
    _s01(sdk::unknown_ptr) log_tx_r_event;
    
    // [EtwpLogger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a6768, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x687de0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x740d80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67aa50, 0x1fe000 bytes
    //
    _s02(sdk::unknown_ptr) logger;
    
    // [EtwpLoggerDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f874, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a4770, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea590, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a45f0, 0x1fe000 bytes
    //
    _s03(sdk::unknown_ptr) logger_dpc;
    
    // [EtwpLookupLoggerIdByName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x513efc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6879a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x703110, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x678b48, 0x1fe000 bytes
    //
    _s04(sdk::unknown_ptr) lookup_logger_id_by_name;
    
    // [EtwpMapEnableFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5149b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ea390, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x835f98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e9f10, 0x1fe000 bytes
    //
    _s05(sdk::unknown_ptr) map_enable_flags;
    
    // [EtwpMaxNonPagedPoolUsage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a1f4, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b1e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd511a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b1e4, 0x1fe000 bytes
    //
    _s06(sdk::unknown_ptr) max_non_paged_pool_usage;
    
    // [EtwpMemInfoInterval]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9c78, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12078, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd38, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc120dc, 0x1fe000 bytes
    //
    _s07(sdk::unknown_ptr) mem_info_interval;
    
    // [EtwpMemInfoTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe8c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19e40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31dc0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19ea0, 0x1fe000 bytes
    //
    _s08(sdk::unknown_ptr) mem_info_timer;
    
    // [EtwpMemoryProvRegHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe3c8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19ab0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc319f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19b30, 0x1fe000 bytes
    //
    _s09(sdk::unknown_ptr) memory_prov_reg_handle;
    
    // [EtwpNetProvRegHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe388, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19a60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc319d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19ae8, 0x1fe000 bytes
    //
    _s10(sdk::unknown_ptr) net_prov_reg_handle;
    
    // [EtwpNetProvTraceNetwork]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x226638, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a2f58, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x466052, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a2dd8, 0x1fe000 bytes
    //
    _s11(sdk::unknown_ptr) net_prov_trace_network;
    
    // [EtwpNotifyGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5060d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fe4ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ffe94, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67cdf0, 0x1fe000 bytes
    //
    _s12(sdk::unknown_ptr) notify_guid;
    
    // [EtwpNull]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25fc38, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xcc08, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf160, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa678, 0x1fe000 bytes
    //
    _s13(sdk::unknown_ptr) null;
    
    // [EtwpObjectHandleEnumCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a9d28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93ad10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e2c10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9395e0, 0x1fe000 bytes
    //
    _s14(sdk::unknown_ptr) object_handle_enum_callback;
    
    // [EtwpObjectHandleRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a9f50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93af4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e2e78, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93981c, 0x1fe000 bytes
    //
    _s15(sdk::unknown_ptr) object_handle_rundown;
    
    // [EtwpObjectTypeFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe2c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19920, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc317e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19a40, 0x1fe000 bytes
    //
    _s16(sdk::unknown_ptr) object_type_filter;
    
    // [EtwpObjectTypeRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a9fbc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93afc4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e2ef0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x939894, 0x1fe000 bytes
    //
    _s17(sdk::unknown_ptr) object_type_rundown;
    
    // [EtwpOneMs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x271970, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1a4d0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x1ff80, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1a450, 0x1fe000 bytes
    //
    _s18(sdk::unknown_ptr) one_ms;
    
    // [EtwpOneSecond]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2868e8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x3a340, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x467e0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x3a680, 0x1fe000 bytes
    //
    _s19(sdk::unknown_ptr) one_second;
    
    // [EtwpOpenConsumer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x510c64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ea314, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x805bbc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x677384, 0x1fe000 bytes
    //
    _s20(sdk::unknown_ptr) open_consumer;
    
    // [EtwpOpenLogger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9d744, 0x32828 bytes
    // ntoskrnl.exe .text:0x218f38, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390700, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d6ef8, 0x1fe000 bytes
    //
    _s21(sdk::unknown_ptr) open_logger;
    
    // [EtwpOpenRealTimeConnectionObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48a968, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x660030, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c4870, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d39c0, 0x1fe000 bytes
    //
    _s22(sdk::unknown_ptr) open_real_time_connection_object;
    
    // [EtwpOpenRegistrationObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48a968, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x660030, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c4870, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d39c0, 0x1fe000 bytes
    //
    _s23(sdk::unknown_ptr) open_registration_object;
    
    // [EtwpPagingDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe1b9, 0x32828 bytes
    // ntoskrnl.exe .data:0xc198e4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc317d9, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19944, 0x1fe000 bytes
    //
    _s24(sdk::unknown_ptr) paging_disabled;
    
    // [EtwpParsePoolTagFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6aacd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93ce98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e0c3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93b768, 0x1fe000 bytes
    //
    _s25(sdk::unknown_ptr) parse_pool_tag_filter;
    
    // [EtwpPerfMemInfoWork]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a63ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x934110, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x893740, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9329e0, 0x1fe000 bytes
    //
    _s26(sdk::unknown_ptr) perf_mem_info_work;
    
    // [EtwpPerfectHashFunctionSearch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x229604, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d6dbc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3551b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x257e2c, 0x1fe000 bytes
    //
    _s27(sdk::unknown_ptr) perfect_hash_function_search;
    
    // [EtwpPmcInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2267f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a3130, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e93b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a2fb0, 0x1fe000 bytes
    //
    _s28(sdk::unknown_ptr) pmc_interrupt;
    
    // [EtwpPmcProfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe680, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19d20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31f50, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19d80, 0x1fe000 bytes
    //
    _s29(sdk::unknown_ptr) pmc_profile;
    
    // [EtwpPoolRunDown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6aa114, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93b120, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e304c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9399f0, 0x1fe000 bytes
    //
    _s30(sdk::unknown_ptr) pool_run_down;
    
    // [EtwpPoolTagFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe220, 0x32828 bytes
    // ntoskrnl.exe .data:0xc199c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31900, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19980, 0x1fe000 bytes
    //
    _s31(sdk::unknown_ptr) pool_tag_filter;
    
    // [EtwpPowerStateCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x537a04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7718c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86a500, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7792c0, 0x1fe000 bytes
    //
    _s32(sdk::unknown_ptr) power_state_callback;
    
    // [EtwpPrepareDirtyBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfe534, 0x32828 bytes
    // ntoskrnl.exe .text:0x27e420, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f344c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2417b8, 0x1fe000 bytes
    //
    _s33(sdk::unknown_ptr) prepare_dirty_buffer;
    
    // [EtwpPrepareHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x513304, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x688a40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x706f78, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f2270, 0x1fe000 bytes
    //
    _s34(sdk::unknown_ptr) prepare_header;
    
    // [EtwpPrepareWmitraceLoggerInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a8ea4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x939a0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9df808, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9382dc, 0x1fe000 bytes
    //
    _s35(sdk::unknown_ptr) prepare_wmitrace_logger_info;
    
    // [EtwpPreserveLogger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6aca08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94570c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e110c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x943fdc, 0x1fe000 bytes
    //
    _s36(sdk::unknown_ptr) preserve_logger;
    
    // [EtwpPreserveMdlList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6acc3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94594c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e134c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94421c, 0x1fe000 bytes
    //
    _s37(sdk::unknown_ptr) preserve_mdl_list;
    
    // [EtwpProcessEnumCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x515868, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7746d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x835940, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77fbb0, 0x1fe000 bytes
    //
    _s38(sdk::unknown_ptr) process_enum_callback;
    
    // [EtwpProcessPerfCtrsRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6aa544, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93b574, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x894672, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x939e44, 0x1fe000 bytes
    //
    _s39(sdk::unknown_ptr) process_perf_ctrs_rundown;
    
    // [EtwpProcessThreadImageRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x515698, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7745b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x835830, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77fa94, 0x1fe000 bytes
    //
    _s40(sdk::unknown_ptr) process_thread_image_rundown;
    
    // [EtwpProcessorRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6aa66c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93b6ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e3260, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x939f7c, 0x1fe000 bytes
    //
    _s41(sdk::unknown_ptr) processor_rundown;
    
    // [EtwpProfileInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x226894, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a31e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e9460, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a3060, 0x1fe000 bytes
    //
    _s42(sdk::unknown_ptr) profile_interrupt;
    
    // [EtwpProfileInterval]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9c7c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11ed0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd3c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11f30, 0x1fe000 bytes
    //
    _s43(sdk::unknown_ptr) profile_interval;
    
    // [EtwpProfileObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe6a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19c20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31ae0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19c20, 0x1fe000 bytes
    //
    _s44(sdk::unknown_ptr) profile_object;
    
    // [EtwpProviderArrivalCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x508f58, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x662b08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b5020, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d6af0, 0x1fe000 bytes
    //
    _s45(sdk::unknown_ptr) provider_arrival_callback;
    
    // [EtwpProviderTraitsKmMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe400, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19b80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31d60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19b60, 0x1fe000 bytes
    //
    _s46(sdk::unknown_ptr) provider_traits_km_mutex;
    
    // [EtwpProviderTraitsKmTree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe450, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19b60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31da0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19d60, 0x1fe000 bytes
    //
    _s47(sdk::unknown_ptr) provider_traits_km_tree;
    
    // [EtwpProviderTraitsUmMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe460, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19be0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31a00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19d20, 0x1fe000 bytes
    //
    _s48(sdk::unknown_ptr) provider_traits_um_mutex;
    
    // [EtwpProviderTraitsUmTree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe440, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19bc0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31a40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19d70, 0x1fe000 bytes
    //
    _s49(sdk::unknown_ptr) provider_traits_um_tree;
    
    // [EtwpPsProvCaptureState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6aa8c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93b8f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e34d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93a1c8, 0x1fe000 bytes
    //
    _s50(sdk::unknown_ptr) ps_prov_capture_state;
    
    // [EtwpPsProvProcessEnumCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6aa940, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93b980, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e3560, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93a250, 0x1fe000 bytes
    //
    _s51(sdk::unknown_ptr) ps_prov_process_enum_callback;
    
    // [EtwpPsProvRegHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe380, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19a68, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc319c8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19b10, 0x1fe000 bytes
    //
    _s52(sdk::unknown_ptr) ps_prov_reg_handle;
    
    // [EtwpPsProvTraceImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53bc7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x607368, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d9e18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x63933c, 0x1fe000 bytes
    //
    _s53(sdk::unknown_ptr) ps_prov_trace_image;
    
    // [EtwpPsProvTraceJob]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a640c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x934138, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d9f4c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x932a08, 0x1fe000 bytes
    //
    _s54(sdk::unknown_ptr) ps_prov_trace_job;
    
    // [EtwpPsProvTracePriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2269ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a331c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e959c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a319c, 0x1fe000 bytes
    //
    _s55(sdk::unknown_ptr) ps_prov_trace_priority;
    
    // [EtwpPsProvTraceProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53c0e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60babc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6eaca8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d862c, 0x1fe000 bytes
    //
    _s56(sdk::unknown_ptr) ps_prov_trace_process;
    
    // [EtwpPsProvTraceThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53bdb0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x605770, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9da010, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x700a9c, 0x1fe000 bytes
    //
    _s57(sdk::unknown_ptr) ps_prov_trace_thread;
    
    // [EtwpQueryPersistedMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6acd24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x945a54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e1454, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x944324, 0x1fe000 bytes
    //
    _s58(sdk::unknown_ptr) query_persisted_memory;
    
    // [EtwpQueryProcessCommandLine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f4b1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60c0ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ea448, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d8c5c, 0x1fe000 bytes
    //
    _s59(sdk::unknown_ptr) query_process_command_line;
    
    // [EtwpQueryProcessOtherInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f4ae4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60c288, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ea624, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d8df8, 0x1fe000 bytes
    //
    _s60(sdk::unknown_ptr) query_process_other_info;
    
    // [EtwpQueryPsmKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a41cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9308ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9dad28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92f17c, 0x1fe000 bytes
    //
    _s61(sdk::unknown_ptr) query_psm_key;
    
    // [EtwpQueryReferenceTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a4de0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x931ae4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9db9cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9303b4, 0x1fe000 bytes
    //
    _s62(sdk::unknown_ptr) query_reference_time;
    
    // [EtwpQueryRegistryCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x495538, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x793ca0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x846910, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x799420, 0x1fe000 bytes
    //
    _s63(sdk::unknown_ptr) query_registry_callback;
    
    // [EtwpQueryTokenPackageInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f497c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60c5e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ea664, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d9150, 0x1fe000 bytes
    //
    _s64(sdk::unknown_ptr) query_token_package_info;
    
    // [EtwpQueryTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5129b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e7c6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8060f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67a064, 0x1fe000 bytes
    //
    _s65(sdk::unknown_ptr) query_trace;
    
    // [EtwpQueryUsedProcessorCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xdc664, 0x32828 bytes
    // ntoskrnl.exe .text:0x27deb4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f33bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x24124c, 0x1fe000 bytes
    //
    _s66(sdk::unknown_ptr) query_used_processor_count;
    
    // [EtwpQueueNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x507158, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fdd50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7002f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67f448, 0x1fe000 bytes
    //
    _s67(sdk::unknown_ptr) queue_notification;
    
    // [EtwpQueuePerfMemInfoWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x226a9c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a3410, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x466228, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a3290, 0x1fe000 bytes
    //
    _s68(sdk::unknown_ptr) queue_perf_mem_info_work_item;
    
    // [EtwpQueueReply]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48530c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x671880, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84f410, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e50e0, 0x1fe000 bytes
    //
    _s69(sdk::unknown_ptr) queue_reply;
    
    // [EtwpQueueStackWalkApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x228850, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a0c70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x466e46, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a0af0, 0x1fe000 bytes
    //
    _s70(sdk::unknown_ptr) queue_stack_walk_apc;
    
    // [EtwpQueueStackWalkDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2289ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a0e4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5eb0a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a0ccc, 0x1fe000 bytes
    //
    _s71(sdk::unknown_ptr) queue_stack_walk_dpc;
    
    // [EtwpReadConfigParameters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a7228, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6da14, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5dee8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa46330, 0x1fe000 bytes
    //
    _s72(sdk::unknown_ptr) read_config_parameters;
    
    // [EtwpRealTimeConnectionObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa2a8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa2f8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c3d0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa2f8, 0x1fe000 bytes
    //
    _s73(sdk::unknown_ptr) real_time_connection_object_type;
    
    // [EtwpRealtimeConnect]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5106d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e9db8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80578c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x676e28, 0x1fe000 bytes
    //
    _s74(sdk::unknown_ptr) realtime_connect;
    
    // [EtwpRealtimeCreateLogfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x517c70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x689c2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x741638, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67b0ac, 0x1fe000 bytes
    //
    _s75(sdk::unknown_ptr) realtime_create_logfile;
    
    // [EtwpRealtimeDeliverBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x513558, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x689598, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7070a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x704458, 0x1fe000 bytes
    //
    _s76(sdk::unknown_ptr) realtime_deliver_buffer;
    
    // [EtwpRealtimeDisconnectAllConsumers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4778f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x636c68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7982b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x703e68, 0x1fe000 bytes
    //
    _s77(sdk::unknown_ptr) realtime_disconnect_all_consumers;
    
    // [EtwpRealtimeDisconnectConsumer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x510ae4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ea1e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e3a90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x677258, 0x1fe000 bytes
    //
    _s78(sdk::unknown_ptr) realtime_disconnect_consumer;
    
    // [EtwpRealtimeDisconnectConsumerByHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51066c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e9d38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e3b34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x676da0, 0x1fe000 bytes
    //
    _s79(sdk::unknown_ptr) realtime_disconnect_consumer_by_handle;
    
    // [EtwpRealtimeFlushSavedBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5130c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6899a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x741518, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67ae28, 0x1fe000 bytes
    //
    _s80(sdk::unknown_ptr) realtime_flush_saved_buffers;
    
    // [EtwpRealtimeInjectEtwBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51367c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6896dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x707200, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70459c, 0x1fe000 bytes
    //
    _s81(sdk::unknown_ptr) realtime_inject_etw_buffer;
    
    // [EtwpRealtimeNotifyConsumers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x511c10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x638254, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8068b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67b2c0, 0x1fe000 bytes
    //
    _s82(sdk::unknown_ptr) realtime_notify_consumers;
    
    // [EtwpRealtimeResetReferenceTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ac534, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93eb00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80b6c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93d3d0, 0x1fe000 bytes
    //
    _s83(sdk::unknown_ptr) realtime_reset_reference_time;
    
    // [EtwpRealtimeRestoreBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51bad4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a05b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84f480, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a87d0, 0x1fe000 bytes
    //
    _s84(sdk::unknown_ptr) realtime_restore_buffer;
    
    // [EtwpRealtimeRestoreState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56ad38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7aa88c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85e318, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b220c, 0x1fe000 bytes
    //
    _s85(sdk::unknown_ptr) realtime_restore_state;
    
    // [EtwpRealtimeSaveBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51d580, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x639fac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x808720, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e84cc, 0x1fe000 bytes
    //
    _s86(sdk::unknown_ptr) realtime_save_buffer;
    
    // [EtwpRealtimeSaveState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3bd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x679988, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e3b98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ecd1c, 0x1fe000 bytes
    //
    _s87(sdk::unknown_ptr) realtime_save_state;
    
    // [EtwpRealtimeSendEmptyMarker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5131f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x639a68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x807df0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67c96c, 0x1fe000 bytes
    //
    _s88(sdk::unknown_ptr) realtime_send_empty_marker;
    
    // [EtwpRealtimeUpdateConsumers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48fc20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x689ad4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7418c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67af54, 0x1fe000 bytes
    //
    _s89(sdk::unknown_ptr) realtime_update_consumers;
    
    // [EtwpRealtimeUpdateReferenceTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56efd8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b216c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x871668, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b9cfc, 0x1fe000 bytes
    //
    _s90(sdk::unknown_ptr) realtime_update_reference_time;
    
    // [EtwpRealtimeZeroTruncateLogfile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51edb0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7aedb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x862724, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b69d8, 0x1fe000 bytes
    //
    _s91(sdk::unknown_ptr) realtime_zero_truncate_logfile;
    
    // [EtwpReceiveNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5077fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fe290, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7018d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67f988, 0x1fe000 bytes
    //
    _s92(sdk::unknown_ptr) receive_notification;
    
    // [EtwpReceiveReplyDataBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x488c88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x658d44, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84fbc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cc898, 0x1fe000 bytes
    //
    _s93(sdk::unknown_ptr) receive_reply_data_block;
    
    // [EtwpReenableCompression]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22a370, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a7660, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5eddd4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a74e0, 0x1fe000 bytes
    //
    _s94(sdk::unknown_ptr) reenable_compression;
    
    // [EtwpRefTimeCycle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe360, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19a88, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31890, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19958, 0x1fe000 bytes
    //
    _s95(sdk::unknown_ptr) ref_time_cycle;
    
    // [EtwpRefTimePerfCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe368, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19a80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31898, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19b08, 0x1fe000 bytes
    //
    _s96(sdk::unknown_ptr) ref_time_perf_counter;
    
    // [EtwpRefTimeSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe378, 0x32828 bytes
    // ntoskrnl.exe .data:0xc198f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31888, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19960, 0x1fe000 bytes
    //
    _s97(sdk::unknown_ptr) ref_time_system;
    
    // [EtwpReferenceGuidEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ae780, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6bcb24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7055e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f5e14, 0x1fe000 bytes
    //
    _s98(sdk::unknown_ptr) reference_guid_entry;
    
    // [EtwpReferenceLoggerSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a6e4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6888fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7039a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f2434, 0x1fe000 bytes
    //
    _s99(sdk::unknown_ptr) reference_logger_security_descriptor;
    
    // [EtwpReferenceStackLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6aad94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x932730, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9dc4a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x931000, 0x1fe000 bytes
    //
    _t00(sdk::unknown_ptr) reference_stack_lookaside_list;
    
    // [EtwpRegTraceCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a8460, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x938140, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8970b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x936a10, 0x1fe000 bytes
    //
    _t01(sdk::unknown_ptr) reg_trace_callback;
    
    // [EtwpRegTraceCookie]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a270, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b2b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51260, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b2b0, 0x1fe000 bytes
    //
    _t02(sdk::unknown_ptr) reg_trace_cookie;
    
    // [EtwpRegTraceEnableCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a8b50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x938820, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e8300, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9370f0, 0x1fe000 bytes
    //
    _t03(sdk::unknown_ptr) reg_trace_enable_callback;
    
    // [EtwpRegTraceHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a010, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b018, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51010, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b018, 0x1fe000 bytes
    //
    _t04(sdk::unknown_ptr) reg_trace_handle;
    
    // [EtwpRegTraceOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a0c8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b0e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd510b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b0e0, 0x1fe000 bytes
    //
    _t05(sdk::unknown_ptr) reg_trace_options;
    
    // [EtwpRegTracingEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a01d, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b02a, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd5101d, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b02a, 0x1fe000 bytes
    //
    _t06(sdk::unknown_ptr) reg_tracing_enabled;
    
    // [EtwpRegistrationObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab3a8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb630, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dc90, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb630, 0x1fe000 bytes
    //
    _t07(sdk::unknown_ptr) registration_object_type;
    
    // [EtwpReleaseLoggerContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a6d40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6883fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x706a2c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f3ac8, 0x1fe000 bytes
    //
    _t08(sdk::unknown_ptr) release_logger_context;
    
    // [EtwpReleaseProviderTraitsReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x483b24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x654704, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x705e90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c8548, 0x1fe000 bytes
    //
    _t09(sdk::unknown_ptr) release_provider_traits_reference;
    
    // [EtwpReleaseQueueEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5079fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fe41c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x701848, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67fb14, 0x1fe000 bytes
    //
    _t10(sdk::unknown_ptr) release_queue_entry;
    
    // [EtwpReleaseTraceBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9d438, 0x32828 bytes
    // ntoskrnl.exe .text:0x218fe0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3907a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d6fa0, 0x1fe000 bytes
    //
    _t11(sdk::unknown_ptr) release_trace_buffer;
    
    // [EtwpRelinquishCompressionTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22a418, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a7714, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ede88, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a7594, 0x1fe000 bytes
    //
    _t12(sdk::unknown_ptr) relinquish_compression_target;
    
    // [EtwpReplyListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe150, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19850, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31780, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc198b0, 0x1fe000 bytes
    //
    _t13(sdk::unknown_ptr) reply_list_head;
    
    // [EtwpReplyListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe160, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19848, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31790, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc198a8, 0x1fe000 bytes
    //
    _t14(sdk::unknown_ptr) reply_list_lock;
    
    // [EtwpRequestFlushTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc9eec, 0x32828 bytes
    // ntoskrnl.exe .text:0x27f0f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f34d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23602c, 0x1fe000 bytes
    //
    _t15(sdk::unknown_ptr) request_flush_timer;
    
    // [EtwpReserveTraceBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9d240, 0x32828 bytes
    // ntoskrnl.exe .text:0x2ea280, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ccc60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x208060, 0x1fe000 bytes
    //
    _t16(sdk::unknown_ptr) reserve_trace_buffer;
    
    // [EtwpReserveWithPebsIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x226ae8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a3464, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e9690, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a32e4, 0x1fe000 bytes
    //
    _t17(sdk::unknown_ptr) reserve_with_pebs_index;
    
    // [EtwpReserveWithPmcCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x226b78, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a34f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x466278, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a3378, 0x1fe000 bytes
    //
    _t18(sdk::unknown_ptr) reserve_with_pmc_counters;
    
    // [EtwpResetBufferHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10ae08, 0x32828 bytes
    // ntoskrnl.exe .text:0x27e3c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f33f8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x241760, 0x1fe000 bytes
    //
    _t19(sdk::unknown_ptr) reset_buffer_header;
    
    // [EtwpResetFlushTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcd7a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x27f4f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x302ce0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2decfc, 0x1fe000 bytes
    //
    _t20(sdk::unknown_ptr) reset_flush_timer;
    
    // [EtwpRotateCompressionTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22a45c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a7764, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5eded8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a75e4, 0x1fe000 bytes
    //
    _t21(sdk::unknown_ptr) rotate_compression_target;
    
    // [EtwpRotateCompressionTargetIfNeeded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22a4c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a77d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5edf44, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a7650, 0x1fe000 bytes
    //
    _t22(sdk::unknown_ptr) rotate_compression_target_if_needed;
    
    // [EtwpRundownNotifications]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47969c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64eb2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x705f28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c1d5c, 0x1fe000 bytes
    //
    _t23(sdk::unknown_ptr) rundown_notifications;
    
    // [EtwpSampledProfileRunDown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6aaaa8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93bb28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e3714, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93a3f8, 0x1fe000 bytes
    //
    _t24(sdk::unknown_ptr) sampled_profile_run_down;
    
    // [EtwpSavePersistedLogger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6acdf4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x945b40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e1540, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x944410, 0x1fe000 bytes
    //
    _t25(sdk::unknown_ptr) save_persisted_logger;
    
    // [EtwpSavePersistedLoggersWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ad19c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9460f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e1af4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9449c0, 0x1fe000 bytes
    //
    _t26(sdk::unknown_ptr) save_persisted_loggers_worker;
    
    // [EtwpSecurityKeyHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe0f8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc197d8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc316e8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19838, 0x1fe000 bytes
    //
    _t27(sdk::unknown_ptr) security_key_handle;
    
    // [EtwpSecurityLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe690, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19b18, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31ad8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19d18, 0x1fe000 bytes
    //
    _t28(sdk::unknown_ptr) security_lock;
    
    // [EtwpSendBufferToDebugger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a8ee4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x939a54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9df850, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x938324, 0x1fe000 bytes
    //
    _t29(sdk::unknown_ptr) send_buffer_to_debugger;
    
    // [EtwpSendDataBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x506fd4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fdb58, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x700104, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67f250, 0x1fe000 bytes
    //
    _t30(sdk::unknown_ptr) send_data_block;
    
    // [EtwpSendDbgId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a8ff4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x939b70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9df978, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x938440, 0x1fe000 bytes
    //
    _t31(sdk::unknown_ptr) send_dbg_id;
    
    // [EtwpSendReplyDataBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x485230, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x671798, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84f328, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e4ff8, 0x1fe000 bytes
    //
    _t32(sdk::unknown_ptr) send_reply_data_block;
    
    // [EtwpSendSessionNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x502b18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fe974, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x808a58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67cc08, 0x1fe000 bytes
    //
    _t33(sdk::unknown_ptr) send_session_notification;
    
    // [EtwpSendTraceEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x227ba4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a4bbc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d693c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a4a3c, 0x1fe000 bytes
    //
    _t34(sdk::unknown_ptr) send_trace_event;
    
    // [EtwpSetCompressionSettings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22a4ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a7804, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5edf78, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a7684, 0x1fe000 bytes
    //
    _t35(sdk::unknown_ptr) set_compression_settings;
    
    // [EtwpSetMark]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a64c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9341fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9da3a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x932acc, 0x1fe000 bytes
    //
    _t36(sdk::unknown_ptr) set_mark;
    
    // [EtwpSetPmcProfileSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a661c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93437c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9da524, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x932c4c, 0x1fe000 bytes
    //
    _t37(sdk::unknown_ptr) set_pmc_profile_source;
    
    // [EtwpSetProviderTraitsKm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x539734, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7626a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d4998, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x769948, 0x1fe000 bytes
    //
    _t38(sdk::unknown_ptr) set_provider_traits_km;
    
    // [EtwpSetProviderTraitsUm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a5e90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6465ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x705fe0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f35b4, 0x1fe000 bytes
    //
    _t39(sdk::unknown_ptr) set_provider_traits_um;
    
    // [EtwpSetSoftRestartInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ad298, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x946204, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e1c08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x944ad4, 0x1fe000 bytes
    //
    _t40(sdk::unknown_ptr) set_soft_restart_information;
    
    // [EtwpShortTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25ea00, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb800, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe4d0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa210, 0x1fe000 bytes
    //
    _t41(sdk::unknown_ptr) short_time;
    
    // [EtwpSpinLockAcquireSampleRate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa154, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa104, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c13c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa0fc, 0x1fe000 bytes
    //
    _t42(sdk::unknown_ptr) spin_lock_acquire_sample_rate;
    
    // [EtwpSpinLockConfigRunDown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6aac34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93bcd4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e38c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93a5a4, 0x1fe000 bytes
    //
    _t43(sdk::unknown_ptr) spin_lock_config_run_down;
    
    // [EtwpSpinLockContentionSampleRate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa14c, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa100, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c140, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa104, 0x1fe000 bytes
    //
    _t44(sdk::unknown_ptr) spin_lock_contention_sample_rate;
    
    // [EtwpSpinLockCountersCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a0e8, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b0f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd510d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b0f0, 0x1fe000 bytes
    //
    _t45(sdk::unknown_ptr) spin_lock_counters_count;
    
    // [EtwpSpinLockHoldThreshold]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa088, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa08c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c0b4, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa08c, 0x1fe000 bytes
    //
    _t46(sdk::unknown_ptr) spin_lock_hold_threshold;
    
    // [EtwpSpinLockSpinThreshold]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa150, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa0fc, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c138, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa100, 0x1fe000 bytes
    //
    _t47(sdk::unknown_ptr) spin_lock_spin_threshold;
    
    // [EtwpSplitIoNotifyRoutines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341f90, 0x32828 bytes
    // ntoskrnl.exe .data:0xced158, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7d20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xced158, 0x1fe000 bytes
    //
    _t48(sdk::unknown_ptr) split_io_notify_routines;
    
    // [EtwpStackCaptureTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9b80, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1207c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc120d8, 0x1fe000 bytes
    //
    _t49(sdk::unknown_ptr) stack_capture_timeout;
    
    // [EtwpStackLookAsideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x329bc0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc53b50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6af60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc53b10, 0x1fe000 bytes
    //
    _t50(sdk::unknown_ptr) stack_look_aside_list;
    
    // [EtwpStackMatchId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2faa08, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12cc8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0dd10, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12d38, 0x1fe000 bytes
    //
    _t51(sdk::unknown_ptr) stack_match_id;
    
    // [EtwpStackRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22a630, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a7ac8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4676a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a7948, 0x1fe000 bytes
    //
    _t52(sdk::unknown_ptr) stack_rundown;
    
    // [EtwpStackTraceDispatcher]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x228a00, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a0f30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x467070, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a0db0, 0x1fe000 bytes
    //
    _t53(sdk::unknown_ptr) stack_trace_dispatcher;
    
    // [EtwpStackWalkApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x228b40, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a1090, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x467180, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a0f10, 0x1fe000 bytes
    //
    _t54(sdk::unknown_ptr) stack_walk_apc;
    
    // [EtwpStackWalkDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x228bf0, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a1110, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5eb190, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a0f90, 0x1fe000 bytes
    //
    _t55(sdk::unknown_ptr) stack_walk_dpc;
    
    // [EtwpStartLogger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x511ddc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x684f24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x702488, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6793ec, 0x1fe000 bytes
    //
    _t56(sdk::unknown_ptr) start_logger;
    
    // [EtwpStartTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5119a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x677874, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e4154, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6788c0, 0x1fe000 bytes
    //
    _t57(sdk::unknown_ptr) start_trace;
    
    // [EtwpStopLoggerInstance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5142f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e8228, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80888c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x678708, 0x1fe000 bytes
    //
    _t58(sdk::unknown_ptr) stop_logger_instance;
    
    // [EtwpStopTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x511a18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e7a88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x805c08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x679208, 0x1fe000 bytes
    //
    _t59(sdk::unknown_ptr) stop_trace;
    
    // [EtwpStopTraceCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe7b0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19ec8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31db0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19e90, 0x1fe000 bytes
    //
    _t60(sdk::unknown_ptr) stop_trace_count;
    
    // [EtwpSwitchBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfe170, 0x32828 bytes
    // ntoskrnl.exe .text:0x27def0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f2e34, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x241288, 0x1fe000 bytes
    //
    _t61(sdk::unknown_ptr) switch_buffer;
    
    // [EtwpSynchronizationDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb7ef0, 0x32828 bytes
    // ntoskrnl.exe .text:0x270d00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3849c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3224c0, 0x1fe000 bytes
    //
    _t62(sdk::unknown_ptr) synchronization_dpc;
    
    // [EtwpSynchronizeWithLogger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x510be4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ea28c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8089d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6772fc, 0x1fe000 bytes
    //
    _t63(sdk::unknown_ptr) synchronize_with_logger;
    
    // [EtwpSysModuleRunDown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x515c88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x774c28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x836024, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x780108, 0x1fe000 bytes
    //
    _t64(sdk::unknown_ptr) sys_module_run_down;
    
    // [EtwpSystemImageEnumCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x515ef0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x799e60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x848190, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a1410, 0x1fe000 bytes
    //
    _t65(sdk::unknown_ptr) system_image_enum_callback;
    
    // [EtwpSystemTraceWdf]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x226c8c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a3700, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e9730, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a3580, 0x1fe000 bytes
    //
    _t66(sdk::unknown_ptr) system_trace_wdf;
    
    // [EtwpTdiIoNotify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3426a8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4bc0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17340, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4bc8, 0x1fe000 bytes
    //
    _t67(sdk::unknown_ptr) tdi_io_notify;
    
    // [EtwpThreadEnumCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x452e48, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x774be0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x835ec0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7800c0, 0x1fe000 bytes
    //
    _t68(sdk::unknown_ptr) thread_enum_callback;
    
    // [EtwpThreadRundownApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x228680, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a58a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ecea0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a5720, 0x1fe000 bytes
    //
    _t69(sdk::unknown_ptr) thread_rundown_apc;
    
    // [EtwpTraceALPC]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x226ce0, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a3760, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e9790, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a35e0, 0x1fe000 bytes
    //
    _t70(sdk::unknown_ptr) trace_alpc;
    
    // [EtwpTraceCachedStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22a714, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a7c74, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x467858, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a7af4, 0x1fe000 bytes
    //
    _t71(sdk::unknown_ptr) trace_cached_stack;
    
    // [EtwpTraceDebugPrint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x226dd8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a3860, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e9890, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a36e0, 0x1fe000 bytes
    //
    _t72(sdk::unknown_ptr) trace_debug_print;
    
    // [EtwpTraceFileIo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x226e74, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a3910, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x332090, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a3790, 0x1fe000 bytes
    //
    _t73(sdk::unknown_ptr) trace_file_io;
    
    // [EtwpTraceFileName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xdead4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b42e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f6080, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b4b90, 0x1fe000 bytes
    //
    _t74(sdk::unknown_ptr) trace_file_name;
    
    // [EtwpTraceFltIo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x226ee8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a39c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x466490, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a3840, 0x1fe000 bytes
    //
    _t75(sdk::unknown_ptr) trace_flt_io;
    
    // [EtwpTraceFltTimedIo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x226f34, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a3a20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4664f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a38a0, 0x1fe000 bytes
    //
    _t76(sdk::unknown_ptr) trace_flt_timed_io;
    
    // [EtwpTraceHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a672c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93449c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9da680, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x932d6c, 0x1fe000 bytes
    //
    _t77(sdk::unknown_ptr) trace_handle;
    
    // [EtwpTraceImageRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a75ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78bb08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83d478, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7958a8, 0x1fe000 bytes
    //
    _t78(sdk::unknown_ptr) trace_image_rundown;
    
    // [EtwpTraceIo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xde914, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b39f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f5ba0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b42a0, 0x1fe000 bytes
    //
    _t79(sdk::unknown_ptr) trace_io;
    
    // [EtwpTraceIoInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x226f68, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a3a60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x466530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a38e0, 0x1fe000 bytes
    //
    _t80(sdk::unknown_ptr) trace_io_init;
    
    // [EtwpTraceKernelEventWithFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22700c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a3b3c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e9938, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a39bc, 0x1fe000 bytes
    //
    _t81(sdk::unknown_ptr) trace_kernel_event_with_filter;
    
    // [EtwpTraceLoggingProvEnableCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x569da8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b6bd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86faf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x783fb0, 0x1fe000 bytes
    //
    _t82(sdk::unknown_ptr) trace_logging_prov_enable_callback;
    
    // [EtwpTraceLostEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22780c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a4804, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e7774, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a4684, 0x1fe000 bytes
    //
    _t83(sdk::unknown_ptr) trace_lost_event;
    
    // [EtwpTraceMessageVa]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9c6e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x218900, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390030, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d68c0, 0x1fe000 bytes
    //
    _t84(sdk::unknown_ptr) trace_message_va;
    
    // [EtwpTraceNetwork]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x227090, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a3bc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x466610, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a3a40, 0x1fe000 bytes
    //
    _t85(sdk::unknown_ptr) trace_network;
    
    // [EtwpTraceOpticalIo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x227104, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a3c50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e99c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a3ad0, 0x1fe000 bytes
    //
    _t86(sdk::unknown_ptr) trace_optical_io;
    
    // [EtwpTraceOpticalIoInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x227358, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a3f00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e9c70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a3d80, 0x1fe000 bytes
    //
    _t87(sdk::unknown_ptr) trace_optical_io_init;
    
    // [EtwpTraceProcessRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x515b64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7749ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x835cc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77fe8c, 0x1fe000 bytes
    //
    _t88(sdk::unknown_ptr) trace_process_rundown;
    
    // [EtwpTraceRedirectedIo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x110d5c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a3ff0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e9d60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a3e70, 0x1fe000 bytes
    //
    _t89(sdk::unknown_ptr) trace_redirected_io;
    
    // [EtwpTraceRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a6954, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9346f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x893770, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x932fc0, 0x1fe000 bytes
    //
    _t90(sdk::unknown_ptr) trace_registry;
    
    // [EtwpTraceRegistryTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a6a10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9347d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9da8d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9330a0, 0x1fe000 bytes
    //
    _t91(sdk::unknown_ptr) trace_registry_transaction;
    
    // [EtwpTraceSavePersistedLoggerStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ad4c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x946450, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e1e4c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x944d20, 0x1fe000 bytes
    //
    _t92(sdk::unknown_ptr) trace_save_persisted_logger_stop;
    
    // [EtwpTraceSplitIo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x227434, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a40a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e9e10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a3f20, 0x1fe000 bytes
    //
    _t93(sdk::unknown_ptr) trace_split_io;
    
    // [EtwpTraceStackKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22a7e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a7d4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x467930, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a7bcc, 0x1fe000 bytes
    //
    _t94(sdk::unknown_ptr) trace_stack_key;
    
    // [EtwpTraceStackWalk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x228c3c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a1164, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x46738c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a0fe4, 0x1fe000 bytes
    //
    _t95(sdk::unknown_ptr) trace_stack_walk;
    
    // [EtwpTraceSystemInitialization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7963fc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa62d88, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb23188, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa468d8, 0x1fe000 bytes
    //
    _t96(sdk::unknown_ptr) trace_system_initialization;
    
    // [EtwpTraceSystemShutdown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a6acc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9348a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9da9a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x933174, 0x1fe000 bytes
    //
    _t97(sdk::unknown_ptr) trace_system_shutdown;
    
    // [EtwpTraceThreadRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9da0c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a4edc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c2f28, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3aa160, 0x1fe000 bytes
    //
    _t98(sdk::unknown_ptr) trace_thread_rundown;
    
    // [EtwpTraceThreadRundownWithStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2286b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a58dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ecedc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a575c, 0x1fe000 bytes
    //
    _t99(sdk::unknown_ptr) trace_thread_rundown_with_stack;
    
    // [EtwpTraceWdf]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22749c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a4110, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4666a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a3f90, 0x1fe000 bytes
    //
    _u00(sdk::unknown_ptr) trace_wdf;
    
    // [EtwpTracingProvEnableCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571b88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b6d20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x870480, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be8c0, 0x1fe000 bytes
    //
    _u01(sdk::unknown_ptr) tracing_prov_enable_callback;
    
    // [EtwpTrackProviderBinary]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49f3e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6762e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e88d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e9548, 0x1fe000 bytes
    //
    _u02(sdk::unknown_ptr) track_provider_binary;
    
    // [EtwpUMGLEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a45a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93115c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9db2f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92fa2c, 0x1fe000 bytes
    //
    _u03(sdk::unknown_ptr) umgl_enabled;
    
    // [EtwpUmglProviders]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ee400, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981550, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa651f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97fe30, 0x1fe000 bytes
    //
    _u04(sdk::unknown_ptr) umgl_providers;
    
    // [EtwpUnlockBufferList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfe100, 0x32828 bytes
    // ntoskrnl.exe .text:0x27e320, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f32d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2416b8, 0x1fe000 bytes
    //
    _u05(sdk::unknown_ptr) unlock_buffer_list;
    
    // [EtwpUnreferenceDataBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x507a5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fe484, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7018b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67fb7c, 0x1fe000 bytes
    //
    _u06(sdk::unknown_ptr) unreference_data_block;
    
    // [EtwpUnreferenceGuidEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4aef2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6bc940, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x705624, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f70f8, 0x1fe000 bytes
    //
    _u07(sdk::unknown_ptr) unreference_guid_entry;
    
    // [EtwpUpdateDisallowList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51e38c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x931250, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9db3e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92fb20, 0x1fe000 bytes
    //
    _u08(sdk::unknown_ptr) update_disallow_list;
    
    // [EtwpUpdateDisallowedGuids]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51e3ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93e4dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e3d18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93cdac, 0x1fe000 bytes
    //
    _u09(sdk::unknown_ptr) update_disallowed_guids;
    
    // [EtwpUpdateEnableMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a6bb8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x688250, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x703ad8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f254c, 0x1fe000 bytes
    //
    _u10(sdk::unknown_ptr) update_enable_mask;
    
    // [EtwpUpdateEventsLostCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9d5c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x368968, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3908c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x369d18, 0x1fe000 bytes
    //
    _u11(sdk::unknown_ptr) update_events_lost_count;
    
    // [EtwpUpdateFileHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5143f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x638b7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x807914, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67ba80, 0x1fe000 bytes
    //
    _u12(sdk::unknown_ptr) update_file_header;
    
    // [EtwpUpdateFileInfoDriverRegistration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51550c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x774f60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x865cfc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78618c, 0x1fe000 bytes
    //
    _u13(sdk::unknown_ptr) update_file_info_driver_registration;
    
    // [EtwpUpdateFileInfoDriverState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x515488, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x775210, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78ffa4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78643c, 0x1fe000 bytes
    //
    _u14(sdk::unknown_ptr) update_file_info_driver_state;
    
    // [EtwpUpdateGroupMasks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x514a30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x774080, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8354b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77f55c, 0x1fe000 bytes
    //
    _u15(sdk::unknown_ptr) update_group_masks;
    
    // [EtwpUpdateGuidEnableInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x507a74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fd080, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x700a38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67e778, 0x1fe000 bytes
    //
    _u16(sdk::unknown_ptr) update_guid_enable_info;
    
    // [EtwpUpdateKernelGroupsWork]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53d5c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x773fc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x790030, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x786160, 0x1fe000 bytes
    //
    _u17(sdk::unknown_ptr) update_kernel_groups_work;
    
    // [EtwpUpdateLoggerGroupMasks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5155fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x773fec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x835414, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77f4c8, 0x1fe000 bytes
    //
    _u18(sdk::unknown_ptr) update_logger_group_masks;
    
    // [EtwpUpdateLoggerSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ac160, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93e3d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9dfe04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93cca4, 0x1fe000 bytes
    //
    _u19(sdk::unknown_ptr) update_logger_security_descriptor;
    
    // [EtwpUpdatePerProcessTracing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a467c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9312b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9db44c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92fb84, 0x1fe000 bytes
    //
    _u20(sdk::unknown_ptr) update_per_process_tracing;
    
    // [EtwpUpdatePmcCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a8110, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x937d2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d87b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9365fc, 0x1fe000 bytes
    //
    _u21(sdk::unknown_ptr) update_pmc_counters;
    
    // [EtwpUpdatePmcEvents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a8224, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x937e60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d8910, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x936730, 0x1fe000 bytes
    //
    _u22(sdk::unknown_ptr) update_pmc_events;
    
    // [EtwpUpdateProcessTracingCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a476c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9313f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9db580, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92fcc0, 0x1fe000 bytes
    //
    _u23(sdk::unknown_ptr) update_process_tracing_callback;
    
    // [EtwpUpdateStackTracing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6aadf8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93279c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9dc514, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93106c, 0x1fe000 bytes
    //
    _u24(sdk::unknown_ptr) update_stack_tracing;
    
    // [EtwpUpdateTagFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50f844, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x773ba0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x866648, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7805e0, 0x1fe000 bytes
    //
    _u25(sdk::unknown_ptr) update_tag_filter;
    
    // [EtwpUpdateTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x538b64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x773bc8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x805dec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77f208, 0x1fe000 bytes
    //
    _u26(sdk::unknown_ptr) update_trace;
    
    // [EtwpUseDescriptorTypeUm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a4d7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x931968, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9db850, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x930238, 0x1fe000 bytes
    //
    _u27(sdk::unknown_ptr) use_descriptor_type_um;
    
    // [EtwpValidateEnableNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x506ca0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fce08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7016d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67e500, 0x1fe000 bytes
    //
    _u28(sdk::unknown_ptr) validate_enable_notification;
    
    // [EtwpValidateFilterDescriptors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6abeb8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7998b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c8830, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a0e5c, 0x1fe000 bytes
    //
    _u29(sdk::unknown_ptr) validate_filter_descriptors;
    
    // [EtwpValidateFlagExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x513f84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x679370, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8067e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x678a7c, 0x1fe000 bytes
    //
    _u30(sdk::unknown_ptr) validate_flag_extension;
    
    // [EtwpValidateLoggerInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x512b60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e7e34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8061dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67a22c, 0x1fe000 bytes
    //
    _u31(sdk::unknown_ptr) validate_logger_info;
    
    // [EtwpValidatePayloadFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ad5c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9467ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e9600, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9450bc, 0x1fe000 bytes
    //
    _u32(sdk::unknown_ptr) validate_payload_filter;
    
    // [EtwpWaitForBufferReferenceCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48afc8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x688ab8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x707000, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f2174, 0x1fe000 bytes
    //
    _u33(sdk::unknown_ptr) wait_for_buffer_reference_count;
    
    // [EtwpWdfNotifyRoutines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f7d40, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11e18, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0c8d8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11e78, 0x1fe000 bytes
    //
    _u34(sdk::unknown_ptr) wdf_notify_routines;
    
    // [EtwpWmitraceParams]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe7c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19d40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31e60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19da0, 0x1fe000 bytes
    //
    _u35(sdk::unknown_ptr) wmitrace_params;
    
    // [EtwpWriteUserEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x458e10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x618e30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a69f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x669910, 0x1fe000 bytes
    //
    _u36(sdk::unknown_ptr) write_user_event;
    
    // [EtwpSetUIPIProcessInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xbb7cc, 0x1eb80 bytes
    //
    _u37(sdk::unknown_ptr) set_uipi_process_info;
    
    // [EtwpTraceUIPIError]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xbb830, 0x1eb80 bytes
    //
    _u38(sdk::unknown_ptr) trace_uipi_error;
    
    // [EtwpTraceAuditApiQueryAddressVADInformation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf53c, 0x243e0 bytes
    // win32kbase.sys .text:0x7e6ec, 0x27ef0 bytes
    // win32kbase.sys .text:0x5b6cc, 0x243e0 bytes
    //
    _u39(sdk::unknown_ptr) trace_audit_api_query_address_vad_information;
    
    // [EtwpGetClassName]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbb624, 0x1eb80 bytes
    // win32kbase.sys .text:0xbb3dc, 0x243e0 bytes
    // win32kbase.sys .text:0x7fe74, 0x27ef0 bytes
    // win32kbase.sys .text:0xb4f3c, 0x243e0 bytes
    //
    _u40(sdk::unknown_ptr) get_class_name;
    
    // [EtwpGetLastInputProcessTime]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbb68c, 0x1eb80 bytes
    // win32kbase.sys .text:0x10c04, 0x243e0 bytes
    // win32kbase.sys .text:0x1e324, 0x27ef0 bytes
    // win32kbase.sys .text:0x716e4, 0x243e0 bytes
    //
    _u41(sdk::unknown_ptr) get_last_input_process_time;
    
    // [EtwpGetThreadInfoFlags]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbb6b8, 0x1eb80 bytes
    // win32kbase.sys .text:0xf438, 0x243e0 bytes
    // win32kbase.sys .text:0x7e5fc, 0x27ef0 bytes
    // win32kbase.sys .text:0x5b5c8, 0x243e0 bytes
    //
    _u42(sdk::unknown_ptr) get_thread_info_flags;
    
    // [EtwpGetWaitCursorType]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbb764, 0x1eb80 bytes
    // win32kbase.sys .text:0x134cd4, 0x243e0 bytes
    // win32kbase.sys .text:0x165d88, 0x27ef0 bytes
    // win32kbase.sys .text:0x132684, 0x243e0 bytes
    //
    _u43(sdk::unknown_ptr) get_wait_cursor_type;
    
    // [EtwpSetTraceHeader]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbb794, 0x1eb80 bytes
    // win32kbase.sys .text:0x12110, 0x243e0 bytes
    // win32kbase.sys .text:0x13090, 0x27ef0 bytes
    // win32kbase.sys .text:0x72bf0, 0x243e0 bytes
    //
    _u44(sdk::unknown_ptr) set_trace_header;
    
    // [EtwpGetNextAvaliableLoggerId]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607
    // ntdll.dll .text:0x65428, 0x67960 bytes
    //
    _u45(sdk::unknown_ptr) get_next_avaliable_logger_id;
    
    // [EtwpAcquireGuidEntryExclusive]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5038, 0x6fc38 bytes
    // ntdll.dll .text:0x61ca0, 0x74648 bytes
    // ntdll.dll .text:0x5038, 0x6fc38 bytes
    //
    _u46(sdk::unknown_ptr) acquire_guid_entry_exclusive;
    
    // [EtwpAddReloggedHeaderExtensionEvents]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4d7dc, 0x6fc38 bytes
    // ntdll.dll .text:0x5e96c, 0x74648 bytes
    // ntdll.dll .text:0x4d7dc, 0x6fc38 bytes
    //
    _u47(sdk::unknown_ptr) add_relogged_header_extension_events;
    
    // [EtwpAllocateUmGuidEntry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x829cc, 0x6fc38 bytes
    // ntdll.dll .text:0x61d7c, 0x74648 bytes
    // ntdll.dll .text:0x82b6c, 0x6fc38 bytes
    //
    _u48(sdk::unknown_ptr) allocate_um_guid_entry;
    
    // [EtwpCheckForPrivatePreEnable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa5c0, 0x6fc38 bytes
    // ntdll.dll .text:0x32358, 0x74648 bytes
    // ntdll.dll .text:0xa5c0, 0x6fc38 bytes
    //
    _u49(sdk::unknown_ptr) check_for_private_pre_enable;
    
    // [EtwpDemuxUmTraceHandle]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x110430, 0x6fc38 bytes
    // ntdll.dll .text:0x124060, 0x74648 bytes
    // ntdll.dll .text:0x1105d0, 0x6fc38 bytes
    //
    _u50(sdk::unknown_ptr) demux_um_trace_handle;
    
    // [EtwpDereferenceUmGuidEntry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x508c, 0x6fc38 bytes
    // ntdll.dll .text:0x61cd0, 0x74648 bytes
    // ntdll.dll .text:0x508c, 0x6fc38 bytes
    //
    _u51(sdk::unknown_ptr) dereference_um_guid_entry;
    
    // [EtwpFindGuidEntry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xa6d4, 0x6fc38 bytes
    // ntdll.dll .text:0x3246c, 0x74648 bytes
    // ntdll.dll .text:0xa6d4, 0x6fc38 bytes
    //
    _u52(sdk::unknown_ptr) find_guid_entry;
    
    // [EtwpGetMaxLogger]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x80908, 0x6fc38 bytes
    // ntdll.dll .text:0x81738, 0x74648 bytes
    // ntdll.dll .text:0x80aa8, 0x6fc38 bytes
    //
    _u53(sdk::unknown_ptr) get_max_logger;
    
    // [EtwpGetNextAvailableLoggerId]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4f75c, 0x6fc38 bytes
    // ntdll.dll .text:0x5f584, 0x74648 bytes
    // ntdll.dll .text:0x4f75c, 0x6fc38 bytes
    //
    _u54(sdk::unknown_ptr) get_next_available_logger_id;
    
    // [EtwpGetRegDwordValue]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4fa04, 0x6fc38 bytes
    // ntdll.dll .text:0x60594, 0x74648 bytes
    // ntdll.dll .text:0x4fa04, 0x6fc38 bytes
    //
    _u55(sdk::unknown_ptr) get_reg_dword_value;
    
    // [EtwpGuidEntryCompare]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x81b70, 0x6fc38 bytes
    // ntdll.dll .text:0x83e20, 0x74648 bytes
    // ntdll.dll .text:0x81d10, 0x6fc38 bytes
    //
    _u56(sdk::unknown_ptr) guid_entry_compare;
    
    // [EtwpGuidEntryTable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16b5e8, 0x6fc38 bytes
    // ntdll.dll .data:0x185180, 0x74648 bytes
    // ntdll.dll .data:0x16c5d8, 0x6fc38 bytes
    //
    _u57(sdk::unknown_ptr) guid_entry_table;
    
    // [EtwpIncrementUmLoggerFile]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x110630, 0x6fc38 bytes
    // ntdll.dll .text:0x12438c, 0x74648 bytes
    // ntdll.dll .text:0x1107d0, 0x6fc38 bytes
    //
    _u58(sdk::unknown_ptr) increment_um_logger_file;
    
    // [EtwpInsertGuidEntry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x82a3c, 0x6fc38 bytes
    // ntdll.dll .text:0x61dec, 0x74648 bytes
    // ntdll.dll .text:0x82bdc, 0x6fc38 bytes
    //
    _u59(sdk::unknown_ptr) insert_guid_entry;
    
    // [EtwpMaxLoggers]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x16852c, 0x6fc38 bytes
    // ntdll.dll .data:0x18260c, 0x74648 bytes
    // ntdll.dll .data:0x169534, 0x6fc38 bytes
    //
    _u60(sdk::unknown_ptr) max_loggers;
    
    // [EtwpPopulatePrivateEnableInfoFromGuidEntry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x82464, 0x6fc38 bytes
    // ntdll.dll .text:0x82508, 0x74648 bytes
    // ntdll.dll .text:0x82604, 0x6fc38 bytes
    //
    _u61(sdk::unknown_ptr) populate_private_enable_info_from_guid_entry;
    
    // [EtwpPreEnableEventApiCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x83fd8, 0x6fc38 bytes
    // ntdll.dll .text:0x867ec, 0x74648 bytes
    // ntdll.dll .text:0x84178, 0x6fc38 bytes
    //
    _u62(sdk::unknown_ptr) pre_enable_event_api_callback;
    
    // [EtwpQueryPartitionRegistryInformationUm]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4fb70, 0x6fc38 bytes
    // ntdll.dll .text:0x606fc, 0x74648 bytes
    // ntdll.dll .text:0x4fb70, 0x6fc38 bytes
    //
    _u63(sdk::unknown_ptr) query_partition_registry_information_um;
    
    // [EtwpReferenceUmGuidEntry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5068, 0x6fc38 bytes
    // ntdll.dll .text:0x61d58, 0x74648 bytes
    // ntdll.dll .text:0x5068, 0x6fc38 bytes
    //
    _u64(sdk::unknown_ptr) reference_um_guid_entry;
    
    // [EtwpReplySend]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntdll.dll .data:0x1513be, 0x67960 bytes
    // ntdll.dll .data:0x168526, 0x6fc38 bytes
    // ntdll.dll .data:0x169530, 0x6fc38 bytes
    //
    _u65(sdk::unknown_ptr) reply_send;
    
    // [EtwpAddInstanceIdToLogFileName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x65390, 0x67960 bytes
    // ntdll.dll .text:0x4f6dc, 0x6fc38 bytes
    // ntdll.dll .text:0x5f440, 0x74648 bytes
    // ntdll.dll .text:0x4f6dc, 0x6fc38 bytes
    //
    _u66(sdk::unknown_ptr) add_instance_id_to_log_file_name;
    
    // [EtwpAddLogHeaderToLogFile]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x647b4, 0x67960 bytes
    // ntdll.dll .text:0x4ea18, 0x6fc38 bytes
    // ntdll.dll .text:0x5fef4, 0x74648 bytes
    // ntdll.dll .text:0x4ea18, 0x6fc38 bytes
    //
    _u67(sdk::unknown_ptr) add_log_header_to_log_file;
    
    // [EtwpAddProviderTrackingInfo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x64d68, 0x67960 bytes
    // ntdll.dll .text:0x4f0d8, 0x6fc38 bytes
    // ntdll.dll .text:0x6122c, 0x74648 bytes
    // ntdll.dll .text:0x4f0d8, 0x6fc38 bytes
    //
    _u68(sdk::unknown_ptr) add_provider_tracking_info;
    
    // [EtwpAllocateRegistration]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x12ac4, 0x67960 bytes
    // ntdll.dll .text:0xa4b0, 0x6fc38 bytes
    // ntdll.dll .text:0x328ec, 0x74648 bytes
    // ntdll.dll .text:0xa4b0, 0x6fc38 bytes
    //
    _u69(sdk::unknown_ptr) allocate_registration;
    
    // [EtwpCheckForEnoughStackSpace]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfe728, 0x67960 bytes
    // ntdll.dll .text:0x1103c4, 0x6fc38 bytes
    // ntdll.dll .text:0x123ff4, 0x74648 bytes
    // ntdll.dll .text:0x110564, 0x6fc38 bytes
    //
    _u70(sdk::unknown_ptr) check_for_enough_stack_space;
    
    // [EtwpCreateEtwThread]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x64290, 0x67960 bytes
    // ntdll.dll .text:0x4e530, 0x6fc38 bytes
    // ntdll.dll .text:0x5ee80, 0x74648 bytes
    // ntdll.dll .text:0x4e530, 0x6fc38 bytes
    //
    _u71(sdk::unknown_ptr) create_etw_thread;
    
    // [EtwpCreateFile]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x64de8, 0x67960 bytes
    // ntdll.dll .text:0x4f134, 0x6fc38 bytes
    // ntdll.dll .text:0x60dac, 0x74648 bytes
    // ntdll.dll .text:0x4f134, 0x6fc38 bytes
    //
    _u72(sdk::unknown_ptr) create_file;
    
    // [EtwpCreateRegGuidsContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1303c, 0x67960 bytes
    // ntdll.dll .text:0xaed4, 0x6fc38 bytes
    // ntdll.dll .text:0x60adc, 0x74648 bytes
    // ntdll.dll .text:0xaed4, 0x6fc38 bytes
    //
    _u73(sdk::unknown_ptr) create_reg_guids_context;
    
    // [EtwpEventApiCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x13140, 0x67960 bytes
    // ntdll.dll .text:0xac74, 0x6fc38 bytes
    // ntdll.dll .text:0x309d4, 0x74648 bytes
    // ntdll.dll .text:0xac74, 0x6fc38 bytes
    //
    _u74(sdk::unknown_ptr) event_api_callback;
    
    // [EtwpFillProcessorStreamIndexMap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2dac, 0x67960 bytes
    // ntdll.dll .text:0x4c4f0, 0x6fc38 bytes
    // ntdll.dll .text:0x124160, 0x74648 bytes
    // ntdll.dll .text:0x4c4f0, 0x6fc38 bytes
    //
    _u75(sdk::unknown_ptr) fill_processor_stream_index_map;
    
    // [EtwpFinalizeLogFileHeader]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x639e0, 0x67960 bytes
    // ntdll.dll .text:0x4d878, 0x6fc38 bytes
    // ntdll.dll .text:0x5e714, 0x74648 bytes
    // ntdll.dll .text:0x4d878, 0x6fc38 bytes
    //
    _u76(sdk::unknown_ptr) finalize_log_file_header;
    
    // [EtwpFinalizeRelogFileHeaderStats]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2f3c, 0x67960 bytes
    // ntdll.dll .text:0x86698, 0x6fc38 bytes
    // ntdll.dll .text:0x124d8c, 0x74648 bytes
    // ntdll.dll .text:0x86838, 0x6fc38 bytes
    //
    _u77(sdk::unknown_ptr) finalize_relog_file_header_stats;
    
    // [EtwpFindRegistration]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x12550, 0x67960 bytes
    // ntdll.dll .text:0x876c, 0x6fc38 bytes
    // ntdll.dll .text:0x61bdc, 0x74648 bytes
    // ntdll.dll .text:0x876c, 0x6fc38 bytes
    //
    _u78(sdk::unknown_ptr) find_registration;
    
    // [EtwpFlushUmLogger]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfe7f4, 0x67960 bytes
    // ntdll.dll .text:0x4c618, 0x6fc38 bytes
    // ntdll.dll .text:0x62110, 0x74648 bytes
    // ntdll.dll .text:0x4c618, 0x6fc38 bytes
    //
    _u79(sdk::unknown_ptr) flush_um_logger;
    
    // [EtwpFreeRegistration]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5fae8, 0x67960 bytes
    // ntdll.dll .text:0x4a568, 0x6fc38 bytes
    // ntdll.dll .text:0x300c4, 0x74648 bytes
    // ntdll.dll .text:0x4a568, 0x6fc38 bytes
    //
    _u80(sdk::unknown_ptr) free_registration;
    
    // [EtwpFreeRegistrationList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1541a0, 0x67960 bytes
    // ntdll.dll .data:0x16b310, 0x6fc38 bytes
    // ntdll.dll .data:0x184e80, 0x74648 bytes
    // ntdll.dll .data:0x16c310, 0x6fc38 bytes
    //
    _u81(sdk::unknown_ptr) free_registration_list;
    
    // [EtwpFreeStreamIndexMap]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x66f6c, 0x67960 bytes
    // ntdll.dll .text:0x4cb24, 0x6fc38 bytes
    // ntdll.dll .text:0x5df20, 0x74648 bytes
    // ntdll.dll .text:0x4cb24, 0x6fc38 bytes
    //
    _u82(sdk::unknown_ptr) free_stream_index_map;
    
    // [EtwpGetCpuSpeed]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x655d0, 0x67960 bytes
    // ntdll.dll .text:0x4f910, 0x6fc38 bytes
    // ntdll.dll .text:0x604a0, 0x74648 bytes
    // ntdll.dll .text:0x4f910, 0x6fc38 bytes
    //
    _u83(sdk::unknown_ptr) get_cpu_speed;
    
    // [EtwpGetCpuSpeedFromRegistry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x655dc, 0x67960 bytes
    // ntdll.dll .text:0x4f91c, 0x6fc38 bytes
    // ntdll.dll .text:0x604ac, 0x74648 bytes
    // ntdll.dll .text:0x4f91c, 0x6fc38 bytes
    //
    _u84(sdk::unknown_ptr) get_cpu_speed_from_registry;
    
    // [EtwpGetKmRegHandle]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5f280, 0x67960 bytes
    // ntdll.dll .text:0x4acc8, 0x6fc38 bytes
    // ntdll.dll .text:0x52968, 0x74648 bytes
    // ntdll.dll .text:0x4acc8, 0x6fc38 bytes
    //
    _u85(sdk::unknown_ptr) get_km_reg_handle;
    
    // [EtwpGetNextRegistration]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1546c, 0x67960 bytes
    // ntdll.dll .text:0x867c, 0x6fc38 bytes
    // ntdll.dll .text:0x61a04, 0x74648 bytes
    // ntdll.dll .text:0x867c, 0x6fc38 bytes
    //
    _u86(sdk::unknown_ptr) get_next_registration;
    
    // [EtwpGetPrivateLoggerContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x66b60, 0x67960 bytes
    // ntdll.dll .text:0x4db5c, 0x6fc38 bytes
    // ntdll.dll .text:0x62244, 0x74648 bytes
    // ntdll.dll .text:0x4db5c, 0x6fc38 bytes
    //
    _u87(sdk::unknown_ptr) get_private_logger_context;
    
    // [EtwpGetPrivateLoggerContextByName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6551c, 0x67960 bytes
    // ntdll.dll .text:0x4f844, 0x6fc38 bytes
    // ntdll.dll .text:0x5f4c0, 0x74648 bytes
    // ntdll.dll .text:0x4f844, 0x6fc38 bytes
    //
    _u88(sdk::unknown_ptr) get_private_logger_context_by_name;
    
    // [EtwpGetTimeZoneInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x656c4, 0x67960 bytes
    // ntdll.dll .text:0x4fe94, 0x6fc38 bytes
    // ntdll.dll .text:0x60c40, 0x74648 bytes
    // ntdll.dll .text:0x4fe94, 0x6fc38 bytes
    //
    _u89(sdk::unknown_ptr) get_time_zone_information;
    
    // [EtwpGetUmLoggerInfoFromContext]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x641d8, 0x67960 bytes
    // ntdll.dll .text:0x4e45c, 0x6fc38 bytes
    // ntdll.dll .text:0x61f10, 0x74648 bytes
    // ntdll.dll .text:0x4e45c, 0x6fc38 bytes
    //
    _u90(sdk::unknown_ptr) get_um_logger_info_from_context;
    
    // [EtwpGetUmProcessImageInfo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7b020, 0x67960 bytes
    // ntdll.dll .text:0x861c4, 0x6fc38 bytes
    // ntdll.dll .text:0x20ac, 0x74648 bytes
    // ntdll.dll .text:0x86364, 0x6fc38 bytes
    //
    _u91(sdk::unknown_ptr) get_um_process_image_info;
    
    // [EtwpInsertRegistration]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x12cdc, 0x67960 bytes
    // ntdll.dll .text:0xa7a4, 0x6fc38 bytes
    // ntdll.dll .text:0x3253c, 0x74648 bytes
    // ntdll.dll .text:0xa7a4, 0x6fc38 bytes
    //
    _u92(sdk::unknown_ptr) insert_registration;
    
    // [EtwpIsPrivateLoggerOn]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x86830, 0x67960 bytes
    // ntdll.dll .text:0x83990, 0x6fc38 bytes
    // ntdll.dll .text:0x8591c, 0x74648 bytes
    // ntdll.dll .text:0x83b30, 0x6fc38 bytes
    //
    _u93(sdk::unknown_ptr) is_private_logger_on;
    
    // [EtwpLoggerArray]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1513b0, 0x67960 bytes
    // ntdll.dll .data:0x168518, 0x6fc38 bytes
    // ntdll.dll .data:0x1825f8, 0x74648 bytes
    // ntdll.dll .data:0x169520, 0x6fc38 bytes
    //
    _u94(sdk::unknown_ptr) logger_array;
    
    // [EtwpNotificationThread]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x15000, 0x67960 bytes
    // ntdll.dll .text:0x81b0, 0x6fc38 bytes
    // ntdll.dll .text:0x614f0, 0x74648 bytes
    // ntdll.dll .text:0x81b0, 0x6fc38 bytes
    //
    _u95(sdk::unknown_ptr) notification_thread;
    
    // [EtwpPrivSessionLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1543d8, 0x67960 bytes
    // ntdll.dll .data:0x16b610, 0x6fc38 bytes
    // ntdll.dll .data:0x1851a8, 0x74648 bytes
    // ntdll.dll .data:0x16c600, 0x6fc38 bytes
    //
    _u96(sdk::unknown_ptr) priv_session_lock;
    
    // [EtwpProcessNotification]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x15538, 0x67960 bytes
    // ntdll.dll .text:0x8830, 0x6fc38 bytes
    // ntdll.dll .text:0x61af4, 0x74648 bytes
    // ntdll.dll .text:0x8830, 0x6fc38 bytes
    //
    _u97(sdk::unknown_ptr) process_notification;
    
    // [EtwpProvLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1543d0, 0x67960 bytes
    // ntdll.dll .data:0x16b608, 0x6fc38 bytes
    // ntdll.dll .data:0x1851a0, 0x74648 bytes
    // ntdll.dll .data:0x16c5f8, 0x6fc38 bytes
    //
    _u98(sdk::unknown_ptr) prov_lock;
    
    // [EtwpQueryRegString]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2b2c, 0x67960 bytes
    // ntdll.dll .text:0x4fcf8, 0x6fc38 bytes
    // ntdll.dll .text:0x60884, 0x74648 bytes
    // ntdll.dll .text:0x4fcf8, 0x6fc38 bytes
    //
    _u99(sdk::unknown_ptr) query_reg_string;
    
    // [EtwpQueryUmLogger]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x670c0, 0x67960 bytes
    // ntdll.dll .text:0x4c6fc, 0x6fc38 bytes
    // ntdll.dll .text:0x61fd8, 0x74648 bytes
    // ntdll.dll .text:0x4c6fc, 0x6fc38 bytes
    //
    _v00(sdk::unknown_ptr) query_um_logger;
    
    // [EtwpRegisterGuidsApiCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x14e0c, 0x67960 bytes
    // ntdll.dll .text:0x7ea4, 0x6fc38 bytes
    // ntdll.dll .text:0x81da8, 0x74648 bytes
    // ntdll.dll .text:0x7ea4, 0x6fc38 bytes
    //
    _v01(sdk::unknown_ptr) register_guids_api_callback;
    
    // [EtwpRegisterTpInitOnce]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1543e0, 0x67960 bytes
    // ntdll.dll .data:0x16b618, 0x6fc38 bytes
    // ntdll.dll .data:0x1851b0, 0x74648 bytes
    // ntdll.dll .data:0x16c608, 0x6fc38 bytes
    //
    _v02(sdk::unknown_ptr) register_tp_init_once;
    
    // [EtwpRegisterTpNotificationOnce]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x149b0, 0x67960 bytes
    // ntdll.dll .text:0x7c7a0, 0x6fc38 bytes
    // ntdll.dll .text:0x4b8c0, 0x74648 bytes
    // ntdll.dll .text:0x7c940, 0x6fc38 bytes
    //
    _v03(sdk::unknown_ptr) register_tp_notification_once;
    
    // [EtwpRegistrationCompare]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x12d7c, 0x67960 bytes
    // ntdll.dll .text:0x6e658, 0x6fc38 bytes
    // ntdll.dll .text:0x6de40, 0x74648 bytes
    // ntdll.dll .text:0x6e778, 0x6fc38 bytes
    //
    _v04(sdk::unknown_ptr) registration_compare;
    
    // [EtwpRegistrationCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1513c0, 0x67960 bytes
    // ntdll.dll .data:0x168528, 0x6fc38 bytes
    // ntdll.dll .data:0x182608, 0x74648 bytes
    // ntdll.dll .data:0x16952c, 0x6fc38 bytes
    //
    _v05(sdk::unknown_ptr) registration_count;
    
    // [EtwpRegistrationSequence]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1513bc, 0x67960 bytes
    // ntdll.dll .data:0x168524, 0x6fc38 bytes
    // ntdll.dll .data:0x182604, 0x74648 bytes
    // ntdll.dll .data:0x169528, 0x6fc38 bytes
    //
    _v06(sdk::unknown_ptr) registration_sequence;
    
    // [EtwpRegistrationTable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1543c0, 0x67960 bytes
    // ntdll.dll .data:0x16b5f8, 0x6fc38 bytes
    // ntdll.dll .data:0x185190, 0x74648 bytes
    // ntdll.dll .data:0x16c5e8, 0x6fc38 bytes
    //
    _v07(sdk::unknown_ptr) registration_table;
    
    // [EtwpReleasePrivateBuffers]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x61510, 0x67960 bytes
    // ntdll.dll .text:0x49568, 0x6fc38 bytes
    // ntdll.dll .text:0x820f4, 0x74648 bytes
    // ntdll.dll .text:0x49568, 0x6fc38 bytes
    //
    _v08(sdk::unknown_ptr) release_private_buffers;
    
    // [EtwpRelogEvent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x61f30, 0x67960 bytes
    // ntdll.dll .text:0x49f8c, 0x6fc38 bytes
    // ntdll.dll .text:0x1244c4, 0x74648 bytes
    // ntdll.dll .text:0x49f8c, 0x6fc38 bytes
    //
    _v09(sdk::unknown_ptr) relog_event;
    
    // [EtwpRemoveRegistrationFromTable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5fb24, 0x67960 bytes
    // ntdll.dll .text:0x4a5a8, 0x6fc38 bytes
    // ntdll.dll .text:0x30078, 0x74648 bytes
    // ntdll.dll .text:0x4a5a8, 0x6fc38 bytes
    //
    _v10(sdk::unknown_ptr) remove_registration_from_table;
    
    // [EtwpSetProviderTraits]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x12624, 0x67960 bytes
    // ntdll.dll .text:0x9e88, 0x6fc38 bytes
    // ntdll.dll .text:0x2fd58, 0x74648 bytes
    // ntdll.dll .text:0x9e88, 0x6fc38 bytes
    //
    _v11(sdk::unknown_ptr) set_provider_traits;
    
    // [EtwpShutdownCompression]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x3264, 0x67960 bytes
    // ntdll.dll .text:0x86c60, 0x6fc38 bytes
    // ntdll.dll .text:0x12516c, 0x74648 bytes
    // ntdll.dll .text:0x86e00, 0x6fc38 bytes
    //
    _v12(sdk::unknown_ptr) shutdown_compression;
    
    // [EtwpShutdownPrivateLoggers]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85174, 0x67960 bytes
    // ntdll.dll .text:0x80e70, 0x6fc38 bytes
    // ntdll.dll .text:0x82018, 0x74648 bytes
    // ntdll.dll .text:0x81010, 0x6fc38 bytes
    //
    _v13(sdk::unknown_ptr) shutdown_private_loggers;
    
    // [EtwpStartUmLogger]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x63dec, 0x67960 bytes
    // ntdll.dll .text:0x4e028, 0x6fc38 bytes
    // ntdll.dll .text:0x5eb5c, 0x74648 bytes
    // ntdll.dll .text:0x4e028, 0x6fc38 bytes
    //
    _v14(sdk::unknown_ptr) start_um_logger;
    
    // [EtwpStopUmLogger]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x66a00, 0x67960 bytes
    // ntdll.dll .text:0x4dbf0, 0x6fc38 bytes
    // ntdll.dll .text:0x62440, 0x74648 bytes
    // ntdll.dll .text:0x4dbf0, 0x6fc38 bytes
    //
    _v15(sdk::unknown_ptr) stop_um_logger;
    
    // [EtwpTraceUmEvent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x61be8, 0x67960 bytes
    // ntdll.dll .text:0x49c54, 0x6fc38 bytes
    // ntdll.dll .text:0x1246b4, 0x74648 bytes
    // ntdll.dll .text:0x49c54, 0x6fc38 bytes
    //
    _v16(sdk::unknown_ptr) trace_um_event;
    
    // [EtwpTraceUmMessage]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x60ec4, 0x67960 bytes
    // ntdll.dll .text:0x110768, 0x6fc38 bytes
    // ntdll.dll .text:0x8e224, 0x74648 bytes
    // ntdll.dll .text:0x110908, 0x6fc38 bytes
    //
    _v17(sdk::unknown_ptr) trace_um_message;
    
    // [EtwpTrackRegBinaryInfo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x837c4, 0x67960 bytes
    // ntdll.dll .text:0x80a2c, 0x6fc38 bytes
    // ntdll.dll .text:0x84988, 0x74648 bytes
    // ntdll.dll .text:0x80bcc, 0x6fc38 bytes
    //
    _v18(sdk::unknown_ptr) track_reg_binary_info;
    
    // [EtwpUpdateEnableInfoAndCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x12dcc, 0x67960 bytes
    // ntdll.dll .text:0xa894, 0x6fc38 bytes
    // ntdll.dll .text:0x32098, 0x74648 bytes
    // ntdll.dll .text:0xa894, 0x6fc38 bytes
    //
    _v19(sdk::unknown_ptr) update_enable_info_and_callback;
    
    // [EtwpUpdatePrivateEnableInfo]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85b8c, 0x67960 bytes
    // ntdll.dll .text:0x824b0, 0x6fc38 bytes
    // ntdll.dll .text:0x82554, 0x74648 bytes
    // ntdll.dll .text:0x82650, 0x6fc38 bytes
    //
    _v20(sdk::unknown_ptr) update_private_enable_info;
    
    // [EtwpUpdateUmLogger]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfe9e8, 0x67960 bytes
    // ntdll.dll .text:0x110af0, 0x6fc38 bytes
    // ntdll.dll .text:0x124a44, 0x74648 bytes
    // ntdll.dll .text:0x110c90, 0x6fc38 bytes
    //
    _v21(sdk::unknown_ptr) update_um_logger;
    
    // [EtwpUseDescriptorType]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfe2f0, 0x67960 bytes
    // ntdll.dll .text:0x10ff60, 0x6fc38 bytes
    // ntdll.dll .text:0x123b90, 0x74648 bytes
    // ntdll.dll .text:0x110100, 0x6fc38 bytes
    //
    _v22(sdk::unknown_ptr) use_descriptor_type;
    
    // [EtwpWriteToPrivateBuffers]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x61564, 0x67960 bytes
    // ntdll.dll .text:0x495bc, 0x6fc38 bytes
    // ntdll.dll .text:0x5d08c, 0x74648 bytes
    // ntdll.dll .text:0x495bc, 0x6fc38 bytes
    //
    _v23(sdk::unknown_ptr) write_to_private_buffers;
};
#include "magic/api.end.hpp"
