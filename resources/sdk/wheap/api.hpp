#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace wheap
{
    // [WheapAddToDefectListInPlugin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5fd3a4, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) add_to_defect_list_in_plugin;
    
    // [WheapBadPageLimitLogged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xd1b928, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) bad_page_limit_logged;
    
    // [WheapCallErrorSourceRecover]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5fd998, 0x1fd000 bytes
    //
    _m2(sdk::unknown_ptr) call_error_source_recover;
    
    // [WheapCreateLiveTriageDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6bda80, 0x32828 bytes
    //
    _m3(sdk::unknown_ptr) create_live_triage_dump;
    
    // [WheapCreateTriageDumpFromPreviousSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGELK:0x3dff38, 0x32828 bytes
    //
    _m4(sdk::unknown_ptr) create_triage_dump_from_previous_session;
    
    // [WheapCriticalStateRefCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xcf7d48, 0x1fd000 bytes
    //
    _m5(sdk::unknown_ptr) critical_state_ref_count;
    
    // [WheapErrDescIsDeviceDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5fc9b0, 0x1fd000 bytes
    //
    _m6(sdk::unknown_ptr) err_desc_is_device_driver;
    
    // [WheapExecuteRowFailureCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9fbcd0, 0x1fd000 bytes
    //
    _m7(sdk::unknown_ptr) execute_row_failure_check;
    
    // [WheapFormatBadPageList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5fd4a8, 0x1fd000 bytes
    //
    _m8(sdk::unknown_ptr) format_bad_page_list;
    
    // [WheapGenerateETWErrorRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5fe320, 0x1fd000 bytes
    //
    _m9(sdk::unknown_ptr) generate_etw_error_record;
    
    // [WheapGenerateETWErrorRecordLarge]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5fe3a0, 0x1fd000 bytes
    //
    _n0(sdk::unknown_ptr) generate_etw_error_record_large;
    
    // [WheapGetErrorThresholdInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5fc0dc, 0x1fd000 bytes
    //
    _n1(sdk::unknown_ptr) get_error_threshold_information;
    
    // [WheapInitWnfCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x86eb38, 0x1fd000 bytes
    //
    _n2(sdk::unknown_ptr) init_wnf_callbacks;
    
    // [WheapInsertPageToList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5fd5e4, 0x1fd000 bytes
    //
    _n3(sdk::unknown_ptr) insert_page_to_list;
    
    // [WheapInsertTriageDataBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6bdb80, 0x32828 bytes
    //
    _n4(sdk::unknown_ptr) insert_triage_data_block;
    
    // [WheapIsSqmLoggerRunning]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6be56c, 0x32828 bytes
    //
    _n5(sdk::unknown_ptr) is_sqm_logger_running;
    
    // [WheapLogAddToDefectListFail]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9fb940, 0x1fd000 bytes
    //
    _n6(sdk::unknown_ptr) log_add_to_defect_list_fail;
    
    // [WheapOfflineChecker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc2a3e0, 0x1fd000 bytes
    //
    _n7(sdk::unknown_ptr) offline_checker;
    
    // [WheapOverrideHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xd17710, 0x1fd000 bytes
    //
    _n8(sdk::unknown_ptr) override_handler;
    
    // [WheapPfnComparisonHelper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5fd6c0, 0x1fd000 bytes
    //
    _n9(sdk::unknown_ptr) pfn_comparison_helper;
    
    // [WheapPolicyBadPageListLocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc0dd40, 0x1fd000 bytes
    //
    _o0(sdk::unknown_ptr) policy_bad_page_list_location;
    
    // [WheapPolicyBadPageListMaxSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc0dd48, 0x1fd000 bytes
    //
    _o1(sdk::unknown_ptr) policy_bad_page_list_max_size;
    
    // [WheapPolicyNotifyAllOfflines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xd17348, 0x1fd000 bytes
    //
    _o2(sdk::unknown_ptr) policy_notify_all_offlines;
    
    // [WheapPolicyPendingPageListSz]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc0dd68, 0x1fd000 bytes
    //
    _o3(sdk::unknown_ptr) policy_pending_page_list_sz;
    
    // [WheapPolicyRowFailCheckEnable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc0dd50, 0x1fd000 bytes
    //
    _o4(sdk::unknown_ptr) policy_row_fail_check_enable;
    
    // [WheapPolicyRowFailCheckExtent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc0dd4c, 0x1fd000 bytes
    //
    _o5(sdk::unknown_ptr) policy_row_fail_check_extent;
    
    // [WheapPolicyRowFailCheckThreshold]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc0dd54, 0x1fd000 bytes
    //
    _o6(sdk::unknown_ptr) policy_row_fail_check_threshold;
    
    // [WheapProcessOfflineList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5ff660, 0x1fd000 bytes
    //
    _o7(sdk::unknown_ptr) process_offline_list;
    
    // [WheapProcessWaitingETWEvents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x86b200, 0x1fd000 bytes
    //
    _o8(sdk::unknown_ptr) process_waiting_etw_events;
    
    // [WheapPushPendingOfflineWrapper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9fcee8, 0x1fd000 bytes
    //
    _o9(sdk::unknown_ptr) push_pending_offline_wrapper;
    
    // [WheapRegPolicyPendingPageListSz]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc0cd80, 0x1fd000 bytes
    //
    _p0(sdk::unknown_ptr) reg_policy_pending_page_list_sz;
    
    // [WheapResetPolicyDefaults]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9fccc0, 0x1fd000 bytes
    //
    _p1(sdk::unknown_ptr) reset_policy_defaults;
    
    // [WheapReverseAddressTranslateToPAInPlugin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9fb9b0, 0x1fd000 bytes
    //
    _p2(sdk::unknown_ptr) reverse_address_translate_to_pa_in_plugin;
    
    // [WheapSelLogSetNtSchedulerAvailabilityNoLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5fb4c0, 0x1fd000 bytes
    //
    _p3(sdk::unknown_ptr) sel_log_set_nt_scheduler_availability_no_lock;
    
    // [WheapSetDefaultErrorConfigurationCalls]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5fddfc, 0x1fd000 bytes
    //
    _p4(sdk::unknown_ptr) set_default_error_configuration_calls;
    
    // [WheapSetDefaultErrorSourceConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb548e0, 0x1fd000 bytes
    //
    _p5(sdk::unknown_ptr) set_default_error_source_configuration;
    
    // [WheapSourceConfigOverride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xd16d60, 0x1fd000 bytes
    //
    _p6(sdk::unknown_ptr) source_config_override;
    
    // [WheapSqmAddToStream]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6be654, 0x32828 bytes
    //
    _p7(sdk::unknown_ptr) sqm_add_to_stream;
    
    // [WheapSqmCollectPshedPluginTelemetry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6be7fc, 0x32828 bytes
    //
    _p8(sdk::unknown_ptr) sqm_collect_pshed_plugin_telemetry;
    
    // [WheapSqmCollectWheaOscTelemetry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x231050, 0x32828 bytes
    //
    _p9(sdk::unknown_ptr) sqm_collect_whea_osc_telemetry;
    
    // [WheapSqmCollectWheaPolicyTelemetry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6bd990, 0x32828 bytes
    //
    _q0(sdk::unknown_ptr) sqm_collect_whea_policy_telemetry;
    
    // [WheapSqmDwordCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x2311ac, 0x32828 bytes
    //
    _q1(sdk::unknown_ptr) sqm_dword_common;
    
    // [WheapSqmIncrementDword]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x231240, 0x32828 bytes
    //
    _q2(sdk::unknown_ptr) sqm_increment_dword;
    
    // [WheapSqmSetDword]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6be918, 0x32828 bytes
    //
    _q3(sdk::unknown_ptr) sqm_set_dword;
    
    // [WheapSqmWaitDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x23125c, 0x32828 bytes
    //
    _q4(sdk::unknown_ptr) sqm_wait_dpc_routine;
    
    // [WheapSqmWaitQueued]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x342280, 0x32828 bytes
    //
    _q5(sdk::unknown_ptr) sqm_wait_queued;
    
    // [WheapSqmWaitRetryCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x359284, 0x32828 bytes
    //
    _q6(sdk::unknown_ptr) sqm_wait_retry_count;
    
    // [WheapSqmWaitTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x2faa38, 0x32828 bytes
    //
    _q7(sdk::unknown_ptr) sqm_wait_timeout;
    
    // [WheapSqmWaitTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x2fb9c0, 0x32828 bytes
    //
    _q8(sdk::unknown_ptr) sqm_wait_timer;
    
    // [WheapSqmWaitTimerDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x2fb980, 0x32828 bytes
    //
    _q9(sdk::unknown_ptr) sqm_wait_timer_dpc;
    
    // [WheapSqmWaitWorkQueueItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x2fba00, 0x32828 bytes
    //
    _r0(sdk::unknown_ptr) sqm_wait_work_queue_item;
    
    // [WheapSqmWaitWorkerRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6be930, 0x32828 bytes
    //
    _r1(sdk::unknown_ptr) sqm_wait_worker_routine;
    
    // [WheapTrackPendingPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9fcf18, 0x1fd000 bytes
    //
    _r2(sdk::unknown_ptr) track_pending_page;
    
    // [WheapTranslateAddressInPlugin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9fba74, 0x1fd000 bytes
    //
    _r3(sdk::unknown_ptr) translate_address_in_plugin;
    
    // [WheapTriageDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x359278, 0x32828 bytes
    //
    _r4(sdk::unknown_ptr) triage_dump;
    
    // [WheapTriageDumpCreation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x359274, 0x32828 bytes
    //
    _r5(sdk::unknown_ptr) triage_dump_creation;
    
    // [WheapTriageDumpGenerated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x3426b0, 0x32828 bytes
    //
    _r6(sdk::unknown_ptr) triage_dump_generated;
    
    // [WheapTriageDumpLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x359270, 0x32828 bytes
    //
    _r7(sdk::unknown_ptr) triage_dump_length;
    
    // [WheapTriageDumpLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x2fba80, 0x32828 bytes
    //
    _r8(sdk::unknown_ptr) triage_dump_lock;
    
    // [WheapTriageDumpReported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x359280, 0x32828 bytes
    //
    _r9(sdk::unknown_ptr) triage_dump_reported;
    
    // [WheapWmiExecutePageOfflineMethod]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5ff2f4, 0x1fd000 bytes
    //
    _s0(sdk::unknown_ptr) wmi_execute_page_offline_method;
    
    // [WheapWmiExecutePluginCtlMethod]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5ff384, 0x1fd000 bytes
    //
    _s1(sdk::unknown_ptr) wmi_execute_plugin_ctl_method;
    
    // [WheapWriteTriageDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6bdcd0, 0x32828 bytes
    //
    _s2(sdk::unknown_ptr) write_triage_dump;
    
    // [WheapAttemptArchitecturalErrorRecovery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b5700, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b5580, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) attempt_architectural_error_recovery;
    
    // [WheapCheckForClzeroSupport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b5eac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b675c, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) check_for_clzero_support;
    
    // [WheapDrsPoolList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcee1c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcee1c0, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) drs_pool_list;
    
    // [WheapFillOutErrorRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b5954, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b57d4, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) fill_out_error_record;
    
    // [WheapAddRecoveryPacketToErrorRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b6990, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fd750, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b6810, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) add_recovery_packet_to_error_record;
    
    // [WheapCallErrorSourceCorrect]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b62a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390aac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b6b50, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) call_error_source_correct;
    
    // [WheapCallErrorSourceInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b61a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390aec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b6a50, 0x1fe000 bytes
    //
    _s9(sdk::unknown_ptr) call_error_source_initialize;
    
    // [WheapCallErrorSourceUninitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b6bc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fd9f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b6a40, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) call_error_source_uninitialize;
    
    // [WheapClearPoison]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x95a604, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fb7c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x958ee4, 0x1fe000 bytes
    //
    _t1(sdk::unknown_ptr) clear_poison;
    
    // [WheapClearPoisonSupported]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf9e78, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b925, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9e70, 0x1fe000 bytes
    //
    _t2(sdk::unknown_ptr) clear_poison_supported;
    
    // [WheapCorrectErrorSourceDeviceDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x361c50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391890, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x363070, 0x1fe000 bytes
    //
    _t3(sdk::unknown_ptr) correct_error_source_device_driver;
    
    // [WheapCreateLiveDumpFromPreviousSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x9b0c84, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa975c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9afbf4, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) create_live_dump_from_previous_session;
    
    // [WheapDefaultErrSrcUninitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _t5(sdk::unknown_ptr) default_err_src_uninitialize;
    
    // [WheapDefaultInitDeviceDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x219120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fe270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d53d0, 0x1fe000 bytes
    //
    _t6(sdk::unknown_ptr) default_init_device_driver;
    
    // [WheapDeferredEventBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc14ce0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2b540, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc14d20, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) deferred_event_buffer;
    
    // [WheapDeferredEventTotalBytes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf9ea8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b950, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9ea0, 0x1fe000 bytes
    //
    _t8(sdk::unknown_ptr) deferred_event_total_bytes;
    
    // [WheapDeferredInternalLogs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc13ca0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2b480, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc13d00, 0x1fe000 bytes
    //
    _t9(sdk::unknown_ptr) deferred_internal_logs;
    
    // [WheapDeferredInternalLogsEventLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc14cc0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2b4a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15d20, 0x1fe000 bytes
    //
    _u0(sdk::unknown_ptr) deferred_internal_logs_event_lock;
    
    // [WheapDeviceDriverCreateRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b61f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fc930, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b6070, 0x1fe000 bytes
    //
    _u1(sdk::unknown_ptr) device_driver_create_record;
    
    // [WheapDeviceDriverGetPacketLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b6410, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390a04, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b6cc0, 0x1fe000 bytes
    //
    _u2(sdk::unknown_ptr) device_driver_get_packet_length;
    
    // [WheapDrsPoolEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xced5c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc60c20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xced5c0, 0x1fe000 bytes
    //
    _u3(sdk::unknown_ptr) drs_pool_entries;
    
    // [WheapErrorContainsMemorySection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b6814, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fd428, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b6694, 0x1fe000 bytes
    //
    _u4(sdk::unknown_ptr) error_contains_memory_section;
    
    // [WheapErrorHandleIsValid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b6270, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fc9c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b60f0, 0x1fe000 bytes
    //
    _u5(sdk::unknown_ptr) error_handle_is_valid;
    
    // [WheapFreeDriverPacketBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b628c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fc9e4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b610c, 0x1fe000 bytes
    //
    _u6(sdk::unknown_ptr) free_driver_packet_buffer;
    
    // [WheapGenericErrSrcRecover]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b6f50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fdde0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b6dd0, 0x1fe000 bytes
    //
    _u7(sdk::unknown_ptr) generic_err_src_recover;
    
    // [WheapGetErrorSourceFunction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b62e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390b64, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b6b90, 0x1fe000 bytes
    //
    _u8(sdk::unknown_ptr) get_error_source_function;
    
    // [WheapGetPreallocatedErrorRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b5a34, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fc16c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b58b4, 0x1fe000 bytes
    //
    _u9(sdk::unknown_ptr) get_preallocated_error_record;
    
    // [WheapGetPreallocatedPacketBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b62f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fca60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b6170, 0x1fe000 bytes
    //
    _v0(sdk::unknown_ptr) get_preallocated_packet_buffer;
    
    // [WheapGetTimestamp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b6894, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fd544, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b6714, 0x1fe000 bytes
    //
    _v1(sdk::unknown_ptr) get_timestamp;
    
    // [WheapHardwareErrorGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc11300, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0beb8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11370, 0x1fe000 bytes
    //
    _v2(sdk::unknown_ptr) hardware_error_guid;
    
    // [WheapHighIrqlLogSelEventHandlerAcquireLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b7430, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fe508, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b72b0, 0x1fe000 bytes
    //
    _v3(sdk::unknown_ptr) high_irql_log_sel_event_handler_acquire_lock;
    
    // [WheapHighIrqlLogSelHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc13c80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2a460, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc13ce0, 0x1fe000 bytes
    //
    _v4(sdk::unknown_ptr) high_irql_log_sel_handler;
    
    // [WheapInitErrorReportDeviceDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b63a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fcb18, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b6220, 0x1fe000 bytes
    //
    _v5(sdk::unknown_ptr) init_error_report_device_driver;
    
    // [WheapIpmiLogEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xceeb90, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0f690, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xceeb80, 0x1fe000 bytes
    //
    _v6(sdk::unknown_ptr) ipmi_log_entry;
    
    // [WheapIpmiLogEntryList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xceeb80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0f680, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf2380, 0x1fe000 bytes
    //
    _v7(sdk::unknown_ptr) ipmi_log_entry_list;
    
    // [WheapIsNonHestErrorSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b63f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390c04, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b6ca4, 0x1fe000 bytes
    //
    _v8(sdk::unknown_ptr) is_non_hest_error_source;
    
    // [WheapLiveDumpLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc13c20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2a420, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc13c80, 0x1fe000 bytes
    //
    _v9(sdk::unknown_ptr) live_dump_lock;
    
    // [WheapLiveDumpRecordList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc13c60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2a410, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc13cc0, 0x1fe000 bytes
    //
    _w0(sdk::unknown_ptr) live_dump_record_list;
    
    // [WheapLiveDumpsCreated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf9eb4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b954, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9eac, 0x1fe000 bytes
    //
    _w1(sdk::unknown_ptr) live_dumps_created;
    
    // [WheapLogIpmiSELEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b7458, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fe530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b72d8, 0x1fe000 bytes
    //
    _w2(sdk::unknown_ptr) log_ipmi_sel_event;
    
    // [WheapLogIpmiSELEventHighIrql]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b74f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fe5d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b7378, 0x1fe000 bytes
    //
    _w3(sdk::unknown_ptr) log_ipmi_sel_event_high_irql;
    
    // [WheapLogPolicyTelemetry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x95ac2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fcc04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x95950c, 0x1fe000 bytes
    //
    _w4(sdk::unknown_ptr) log_policy_telemetry;
    
    // [WheapPersistPageForMemoryError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b5a80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fc1b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b5900, 0x1fe000 bytes
    //
    _w5(sdk::unknown_ptr) persist_page_for_memory_error;
    
    // [WheapPfaLogPageMonitorRemoval]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x95b02c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fbf30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x95990c, 0x1fe000 bytes
    //
    _w6(sdk::unknown_ptr) pfa_log_page_monitor_removal;
    
    // [WheapPolicyCmciThresholdCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc12d04, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0dd6c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12d74, 0x1fe000 bytes
    //
    _w7(sdk::unknown_ptr) policy_cmci_threshold_count;
    
    // [WheapPolicyCmciThresholdPollCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc12cfc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0dd64, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12d6c, 0x1fe000 bytes
    //
    _w8(sdk::unknown_ptr) policy_cmci_threshold_poll_count;
    
    // [WheapPolicyCmciThresholdTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc12d00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0dd60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12d70, 0x1fe000 bytes
    //
    _w9(sdk::unknown_ptr) policy_cmci_threshold_time;
    
    // [WheapPolicyRestoreCmciEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc12098, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd70, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12134, 0x1fe000 bytes
    //
    _x0(sdk::unknown_ptr) policy_restore_cmci_enabled;
    
    // [WheapPolicyRestoreCmciErrorLimit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc12094, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd6c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1212c, 0x1fe000 bytes
    //
    _x1(sdk::unknown_ptr) policy_restore_cmci_error_limit;
    
    // [WheapPolicyRestoreCmciMaxAttempts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc120a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd78, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1213c, 0x1fe000 bytes
    //
    _x2(sdk::unknown_ptr) policy_restore_cmci_max_attempts;
    
    // [WheapRegPolicyCmciThresholdCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc120a8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd7c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc120fc, 0x1fe000 bytes
    //
    _x3(sdk::unknown_ptr) reg_policy_cmci_threshold_count;
    
    // [WheapRegPolicyCmciThresholdPollCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc120a4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc120f4, 0x1fe000 bytes
    //
    _x4(sdk::unknown_ptr) reg_policy_cmci_threshold_poll_count;
    
    // [WheapRegPolicyCmciThresholdTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc120ac, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd88, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc120f0, 0x1fe000 bytes
    //
    _x5(sdk::unknown_ptr) reg_policy_cmci_threshold_time;
    
    // [WheapRegPolicyRestoreCmciEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc120bc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd8c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12100, 0x1fe000 bytes
    //
    _x6(sdk::unknown_ptr) reg_policy_restore_cmci_enabled;
    
    // [WheapRegPolicyRestoreCmciErrorLimit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc120b4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cdac, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc120f8, 0x1fe000 bytes
    //
    _x7(sdk::unknown_ptr) reg_policy_restore_cmci_error_limit;
    
    // [WheapRegPolicyRestoreCmciMaxAttempts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc120b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cdb0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12104, 0x1fe000 bytes
    //
    _x8(sdk::unknown_ptr) reg_policy_restore_cmci_max_attempts;
    
    // [WheapReportDeferredLiveDumps]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x95ae3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fc484, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x95971c, 0x1fe000 bytes
    //
    _x9(sdk::unknown_ptr) report_deferred_live_dumps;
    
    // [WheapReportLiveDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x95af44, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fc58c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x959824, 0x1fe000 bytes
    //
    _y0(sdk::unknown_ptr) report_live_dump;
    
    // [WheapSaveRecordForLiveDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x9b0d34, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa97674, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9afca4, 0x1fe000 bytes
    //
    _y1(sdk::unknown_ptr) save_record_for_live_dump;
    
    // [WheapSelBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc13cc0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2a480, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc13d20, 0x1fe000 bytes
    //
    _y2(sdk::unknown_ptr) sel_buffer;
    
    // [WheapSortBadPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6bd594, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x95a784, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x959064, 0x1fe000 bytes
    //
    _y3(sdk::unknown_ptr) sort_bad_pages;
    
    // [WheapAddErrorSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14522c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b6374, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390c30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b6c24, 0x1fe000 bytes
    //
    _y4(sdk::unknown_ptr) add_error_source;
    
    // [WheapAddSectionFromGenericErrorData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x230194, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b6aac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fd86c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b692c, 0x1fe000 bytes
    //
    _y5(sdk::unknown_ptr) add_section_from_generic_error_data;
    
    // [WheapAddToDumpFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22fa48, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b5530, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fbce8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b53b0, 0x1fe000 bytes
    //
    _y6(sdk::unknown_ptr) add_to_dump_file;
    
    // [WheapAllocErrorRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22fa84, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b5574, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fbd2c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b53f4, 0x1fe000 bytes
    //
    _y7(sdk::unknown_ptr) alloc_error_record;
    
    // [WheapApplyPolicyChanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6bd5f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x95a7ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fc674, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9590cc, 0x1fe000 bytes
    //
    _y8(sdk::unknown_ptr) apply_policy_changes;
    
    // [WheapApplyThresholdChecks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22fb2c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b5608, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fbda8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b5488, 0x1fe000 bytes
    //
    _y9(sdk::unknown_ptr) apply_threshold_checks;
    
    // [WheapAttemptErrorRecovery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22fc24, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b57a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fbe54, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b5620, 0x1fe000 bytes
    //
    _z0(sdk::unknown_ptr) attempt_error_recovery;
    
    // [WheapAttemptPhysicalPageOffline]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6bd328, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x95a34c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fb4ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x958c2c, 0x1fe000 bytes
    //
    _z1(sdk::unknown_ptr) attempt_physical_page_offline;
    
    // [WheapAttemptPhysicalPageOfflineWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6bd434, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x95a4e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fb690, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x958dc0, 0x1fe000 bytes
    //
    _z2(sdk::unknown_ptr) attempt_physical_page_offline_worker;
    
    // [WheapCallInUsePageNotificationCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6bd464, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x95a524, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fb6e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x958e04, 0x1fe000 bytes
    //
    _z3(sdk::unknown_ptr) call_in_use_page_notification_callbacks;
    
    // [WheapCheckForAndReportErrorsFromPreviousSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14a750, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b5ed8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e7bdc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b6788, 0x1fe000 bytes
    //
    _z4(sdk::unknown_ptr) check_for_and_report_errors_from_previous_session;
    
    // [WheapCommitPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6bd704, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x95aa00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fc958, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9592e0, 0x1fe000 bytes
    //
    _z5(sdk::unknown_ptr) commit_policy;
    
    // [WheapCompressErrorRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22fcd8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b5818, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fbf18, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b5698, 0x1fe000 bytes
    //
    _z6(sdk::unknown_ptr) compress_error_record;
    
    // [WheapConfigTableLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fbb20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc15da0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c608, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15de0, 0x1fe000 bytes
    //
    _z7(sdk::unknown_ptr) config_table_lock;
    
    // [WheapCountBadPageExtents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6bd538, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x95a710, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fb8cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x958ff0, 0x1fe000 bytes
    //
    _z8(sdk::unknown_ptr) count_bad_page_extents;
    
    // [WheapCrashDumpInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a343, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdaf53, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7614, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdaf13, 0x1fe000 bytes
    //
    _z9(sdk::unknown_ptr) crash_dump_initialized;
    
    // [WheapCreatePerProcessorInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a6d80, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5b528, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb27280, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5b3c8, 0x1fe000 bytes
    //
    _a0(sdk::unknown_ptr) create_per_processor_info;
    
    // [WheapCreateRecordFromGenericErrorData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x23029c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b6c10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fda48, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b6a90, 0x1fe000 bytes
    //
    _a1(sdk::unknown_ptr) create_record_from_generic_error_data;
    
    // [WheapDefaultErrSrcCorrect]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x86a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x219120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fe270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d53d0, 0x1fe000 bytes
    //
    _a2(sdk::unknown_ptr) default_err_src_correct;
    
    // [WheapDefaultErrSrcCreateRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x230474, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b6f20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fddb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b6da0, 0x1fe000 bytes
    //
    _a3(sdk::unknown_ptr) default_err_src_create_record;
    
    // [WheapDefaultErrSrcInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d65f0, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98d2d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa746b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98c2e0, 0x1fe000 bytes
    //
    _a4(sdk::unknown_ptr) default_err_src_initialize;
    
    // [WheapDefaultErrSrcRecover]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x86a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x219120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fe270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d53d0, 0x1fe000 bytes
    //
    _a5(sdk::unknown_ptr) default_err_src_recover;
    
    // [WheapDeferredRecoveryServiceDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x230520, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b7050, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fdf30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b6ed0, 0x1fe000 bytes
    //
    _a6(sdk::unknown_ptr) deferred_recovery_service_dpc_routine;
    
    // [WheapDeferredRecoveryServiceWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x230608, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b71b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fe090, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b7030, 0x1fe000 bytes
    //
    _a7(sdk::unknown_ptr) deferred_recovery_service_worker;
    
    // [WheapDispatchPtr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fba20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc13c18, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2a408, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc13c78, 0x1fe000 bytes
    //
    _a8(sdk::unknown_ptr) dispatch_ptr;
    
    // [WheapErrorRecordId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a308, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdaf10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf75d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdaed0, 0x1fe000 bytes
    //
    _a9(sdk::unknown_ptr) error_record_id;
    
    // [WheapErrorSourceTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a310, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdaf18, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf75d8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdaed8, 0x1fe000 bytes
    //
    _b0(sdk::unknown_ptr) error_source_table;
    
    // [WheapEtwEnableCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56f920, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b4f50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86b1d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bcbc0, 0x1fe000 bytes
    //
    _b1(sdk::unknown_ptr) etw_enable_callback;
    
    // [WheapEtwHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fba28, 0x32828 bytes
    // ntoskrnl.exe .data:0xc13c98, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2a458, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc13cf8, 0x1fe000 bytes
    //
    _b2(sdk::unknown_ptr) etw_handle;
    
    // [WheapEventingInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fba30, 0x32828 bytes
    // ntoskrnl.exe .data:0xc15ce0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c540, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15d38, 0x1fe000 bytes
    //
    _b3(sdk::unknown_ptr) eventing_initialized;
    
    // [WheapFreeErrorRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22fe00, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b59d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fc050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b5850, 0x1fe000 bytes
    //
    _b4(sdk::unknown_ptr) free_error_record;
    
    // [WheapGenerateETWEvents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x230664, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b7330, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fe4b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b71b0, 0x1fe000 bytes
    //
    _b5(sdk::unknown_ptr) generate_etw_events;
    
    // [WheapGetAllPolicyBufferSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571f80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x95aaf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fca48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9593d0, 0x1fe000 bytes
    //
    _b6(sdk::unknown_ptr) get_all_policy_buffer_size;
    
    // [WheapGetAllPolicyValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6bd7e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x95ab00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fca58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9593e0, 0x1fe000 bytes
    //
    _b7(sdk::unknown_ptr) get_all_policy_values;
    
    // [WheapGetErrorSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22fe24, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b59f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fc088, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b5874, 0x1fe000 bytes
    //
    _b8(sdk::unknown_ptr) get_error_source;
    
    // [WheapGetPolicyValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6bd828, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x95ab44, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fca9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x959424, 0x1fe000 bytes
    //
    _b9(sdk::unknown_ptr) get_policy_value;
    
    // [WheapInUsePageOfflineNotifyInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a340, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdaf50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7610, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdaf10, 0x1fe000 bytes
    //
    _c0(sdk::unknown_ptr) in_use_page_offline_notify_init;
    
    // [WheapInUsePageOfflineNotifyList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341fb8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf43a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd16d38, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf43a0, 0x1fe000 bytes
    //
    _c1(sdk::unknown_ptr) in_use_page_offline_notify_list;
    
    // [WheapInUsePageOfflineNotifyLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341fb0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4398, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd16d30, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4398, 0x1fe000 bytes
    //
    _c2(sdk::unknown_ptr) in_use_page_offline_notify_lock;
    
    // [WheapInitializationComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a300, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdaf0d, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf75c8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdaecd, 0x1fe000 bytes
    //
    _c3(sdk::unknown_ptr) initialization_complete;
    
    // [WheapInitializeDeferredErrorSources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22f4ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b4d4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fb52c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b4bcc, 0x1fe000 bytes
    //
    _c4(sdk::unknown_ptr) initialize_deferred_error_sources;
    
    // [WheapInitializeErrorRecordWrapper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1452a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b6218, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390a24, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b6ac8, 0x1fe000 bytes
    //
    _c5(sdk::unknown_ptr) initialize_error_record_wrapper;
    
    // [WheapInitializeErrorSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56538c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78d264, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809204, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x797004, 0x1fe000 bytes
    //
    _c6(sdk::unknown_ptr) initialize_error_source;
    
    // [WheapInitializeErrorSourceTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79ff14, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5be2c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5686c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5bccc, 0x1fe000 bytes
    //
    _c7(sdk::unknown_ptr) initialize_error_source_table;
    
    // [WheapInitializeEventing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a98d4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5b5c4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb52bf0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5b464, 0x1fe000 bytes
    //
    _c8(sdk::unknown_ptr) initialize_eventing;
    
    // [WheapInitializeInUsePageOfflineNotifications]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56a218, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a9c28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85bd10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b15a8, 0x1fe000 bytes
    //
    _c9(sdk::unknown_ptr) initialize_in_use_page_offline_notifications;
    
    // [WheapInitializeWorkQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14a484, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b5e14, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e899c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b66c4, 0x1fe000 bytes
    //
    _d0(sdk::unknown_ptr) initialize_work_queue;
    
    // [WheapIsPageInList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6bd574, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x95a75c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fb918, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x95903c, 0x1fe000 bytes
    //
    _d1(sdk::unknown_ptr) is_page_in_list;
    
    // [WheapLoadPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a576c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5b2b8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb59c98, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5b158, 0x1fe000 bytes
    //
    _d2(sdk::unknown_ptr) load_policy;
    
    // [WheapLogInitEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56b4c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78d028, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x861f64, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x796dc8, 0x1fe000 bytes
    //
    _d3(sdk::unknown_ptr) log_init_event;
    
    // [WheapLogPageOfflineAttemptEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2306d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b7548, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fbb30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b73c8, 0x1fe000 bytes
    //
    _d4(sdk::unknown_ptr) log_page_offline_attempt_event;
    
    // [WheapLogProcessTerminateEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x23079c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b7628, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fe620, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b74a8, 0x1fe000 bytes
    //
    _d5(sdk::unknown_ptr) log_process_terminate_event;
    
    // [WheapMaxCorrectedMCEOutstanding]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9cb4, 0x32828 bytes
    // ntoskrnl.exe .data:0xc120dc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cda8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12120, 0x1fe000 bytes
    //
    _d6(sdk::unknown_ptr) max_corrected_mce_outstanding;
    
    // [WheapPfaInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a344, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdaf54, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7613, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdaf14, 0x1fe000 bytes
    //
    _d7(sdk::unknown_ptr) pfa_initialized;
    
    // [WheapPfaList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342290, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4808, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17228, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4800, 0x1fe000 bytes
    //
    _d8(sdk::unknown_ptr) pfa_list;
    
    // [WheapPfaLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342288, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4800, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17220, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4810, 0x1fe000 bytes
    //
    _d9(sdk::unknown_ptr) pfa_lock;
    
    // [WheapPfaMemoryCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6bdf9c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x95b0c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fbfc8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9599a4, 0x1fe000 bytes
    //
    _e0(sdk::unknown_ptr) pfa_memory_check;
    
    // [WheapPfaReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6be228, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x95b274, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fc190, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x959b54, 0x1fe000 bytes
    //
    _e1(sdk::unknown_ptr) pfa_reset;
    
    // [WheapPfaRetireExpiredMemoryEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6be2f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x95b340, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fc25c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x959c20, 0x1fe000 bytes
    //
    _e2(sdk::unknown_ptr) pfa_retire_expired_memory_entries;
    
    // [WheapPolicyDisableOffline]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x35926d, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9eb0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b958, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9ea8, 0x1fe000 bytes
    //
    _e3(sdk::unknown_ptr) policy_disable_offline;
    
    // [WheapPolicyIgnoreDummyWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x359264, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12cf8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0dd44, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12d68, 0x1fe000 bytes
    //
    _e4(sdk::unknown_ptr) policy_ignore_dummy_write;
    
    // [WheapPolicyMemPersistOffline]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a342, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdaf52, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7615, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdaf12, 0x1fe000 bytes
    //
    _e5(sdk::unknown_ptr) policy_mem_persist_offline;
    
    // [WheapPolicyMemPfaDisable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x35926c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9eb1, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b959, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9ea9, 0x1fe000 bytes
    //
    _e6(sdk::unknown_ptr) policy_mem_pfa_disable;
    
    // [WheapPolicyMemPfaPageCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9c90, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12090, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd58, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12130, 0x1fe000 bytes
    //
    _e7(sdk::unknown_ptr) policy_mem_pfa_page_count;
    
    // [WheapPolicyMemPfaThreshold]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9c94, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1209c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd54, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12138, 0x1fe000 bytes
    //
    _e8(sdk::unknown_ptr) policy_mem_pfa_threshold;
    
    // [WheapPolicyMemPfaTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2faa30, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12d08, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0dd58, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12d78, 0x1fe000 bytes
    //
    _e9(sdk::unknown_ptr) policy_mem_pfa_timeout;
    
    // [WheapPredictiveFailureAnalysis]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6be420, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x95b3f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fc30c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x959cd0, 0x1fe000 bytes
    //
    _f0(sdk::unknown_ptr) predictive_failure_analysis;
    
    // [WheapPrevErrList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fbb30, 0x32828 bytes
    // ntoskrnl.exe .data:0xc15db0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c610, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15df0, 0x1fe000 bytes
    //
    _f1(sdk::unknown_ptr) prev_err_list;
    
    // [WheapPreviousSessionFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x359240, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdaf0c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b924, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdaecc, 0x1fe000 bytes
    //
    _f2(sdk::unknown_ptr) previous_session_failure;
    
    // [WheapProcessWorkQueueItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22fe50, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b5af0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fc210, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b5970, 0x1fe000 bytes
    //
    _f3(sdk::unknown_ptr) process_work_queue_item;
    
    // [WheapQueryPshedForErrorSources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x785784, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5bf98, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb279c0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5be38, 0x1fe000 bytes
    //
    _f4(sdk::unknown_ptr) query_pshed_for_error_sources;
    
    // [WheapReportBootError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22f538, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b4dd8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fb5b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b4c58, 0x1fe000 bytes
    //
    _f5(sdk::unknown_ptr) report_boot_error;
    
    // [WheapReportPersistedErrorRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22f5f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b4eac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fb680, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b4d2c, 0x1fe000 bytes
    //
    _f6(sdk::unknown_ptr) report_persisted_error_record;
    
    // [WheapSetPolicyValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6bd8ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x95ace8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fcd08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9595c8, 0x1fe000 bytes
    //
    _f7(sdk::unknown_ptr) set_policy_value;
    
    // [WheapSingleBitEccErrorThreshold]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9cb8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc120d8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd68, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12128, 0x1fe000 bytes
    //
    _f8(sdk::unknown_ptr) single_bit_ecc_error_threshold;
    
    // [WheapSourceConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341fe0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf43c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0c450, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf43c0, 0x1fe000 bytes
    //
    _f9(sdk::unknown_ptr) source_configuration;
    
    // [WheapStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fbbd0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc15e50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c6b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15e90, 0x1fe000 bytes
    //
    _g0(sdk::unknown_ptr) status;
    
    // [WheapWaitingETWEventLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fba60, 0x32828 bytes
    // ntoskrnl.exe .data:0xc15d00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c560, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15d60, 0x1fe000 bytes
    //
    _g1(sdk::unknown_ptr) waiting_etw_event_lock;
    
    // [WheapWaitingETWEvents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fba40, 0x32828 bytes
    // ntoskrnl.exe .data:0xc15cf0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c580, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15d40, 0x1fe000 bytes
    //
    _g2(sdk::unknown_ptr) waiting_etw_events;
    
    // [WheapWmiExecuteErrorInjectionMethod]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2308c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b77cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fec4c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b764c, 0x1fe000 bytes
    //
    _g3(sdk::unknown_ptr) wmi_execute_error_injection_method;
    
    // [WheapWmiExecuteErrorSourceMethod]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x230990, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b78b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fed38, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b7738, 0x1fe000 bytes
    //
    _g4(sdk::unknown_ptr) wmi_execute_error_source_method;
    
    // [WheapWmiExecuteMethod]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x230d90, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b7cd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ff150, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b7b50, 0x1fe000 bytes
    //
    _g5(sdk::unknown_ptr) wmi_execute_method;
    
    // [WheapWmiExecutePolicyManagementMethod]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x230eb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b7e00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ff48c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b7c80, 0x1fe000 bytes
    //
    _g6(sdk::unknown_ptr) wmi_execute_policy_management_method;
    
    // [WheapWmiGuidList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25c9b0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x86f0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x9390, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x86e0, 0x1fe000 bytes
    //
    _g7(sdk::unknown_ptr) wmi_guid_list;
    
    // [WheapWorkQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fbb40, 0x32828 bytes
    // ntoskrnl.exe .data:0xc15dc0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c620, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15e00, 0x1fe000 bytes
    //
    _g8(sdk::unknown_ptr) work_queue;
    
    // [WheapWorkQueueAddItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x23081c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b76c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5feb84, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b7548, 0x1fe000 bytes
    //
    _g9(sdk::unknown_ptr) work_queue_add_item;
    
    // [WheapWorkQueueDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x230874, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b7730, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5febe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b75b0, 0x1fe000 bytes
    //
    _h0(sdk::unknown_ptr) work_queue_dpc_routine;
    
    // [WheapWorkQueueWorkerRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x230884, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b7750, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fec00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b75d0, 0x1fe000 bytes
    //
    _h1(sdk::unknown_ptr) work_queue_worker_routine;
};
#include "magic/api.end.hpp"
