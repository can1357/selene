#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace sshp
{
    // [SshpAlpcContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc37fc0, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) alpc_context;
    
    // [SshpAlpcInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb5372c, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) alpc_initialize;
    
    // [SshpAlpcMessageCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x8584e0, 0x1fd000 bytes
    //
    _m2(sdk::unknown_ptr) alpc_message_callback;
    
    // [SshpAlpcOpenGracePeriodTimerCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3e99e0, 0x1fd000 bytes
    //
    _m3(sdk::unknown_ptr) alpc_open_grace_period_timer_callback;
    
    // [SshpAlpcOpenGracePeriodWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x8583a0, 0x1fd000 bytes
    //
    _m4(sdk::unknown_ptr) alpc_open_grace_period_worker;
    
    // [SshpAlpcOpenTraceSessionUnsafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x858410, 0x1fd000 bytes
    //
    _m5(sdk::unknown_ptr) alpc_open_trace_session_unsafe;
    
    // [SshpAlpcProcessAlpcMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x85861c, 0x1fd000 bytes
    //
    _m6(sdk::unknown_ptr) alpc_process_alpc_message;
    
    // [SshpAlpcProcessMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x8587a8, 0x1fd000 bytes
    //
    _m7(sdk::unknown_ptr) alpc_process_message;
    
    // [SshpAlpcSendMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x858880, 0x1fd000 bytes
    //
    _m8(sdk::unknown_ptr) alpc_send_message;
    
    // [SshpAlpcShutdownTraceSessions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x996014, 0x1fd000 bytes
    //
    _m9(sdk::unknown_ptr) alpc_shutdown_trace_sessions;
    
    // [SshpBlockerActiveDereference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x371a0c, 0x1fd000 bytes
    //
    _n0(sdk::unknown_ptr) blocker_active_dereference;
    
    // [SshpGenerateDeviceVerboseDescription]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x8516dc, 0x1fd000 bytes
    //
    _n1(sdk::unknown_ptr) generate_device_verbose_description;
    
    // [SshpSessionManagerContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc381a0, 0x1fd000 bytes
    //
    _n2(sdk::unknown_ptr) session_manager_context;
    
    // [SshpSessionManagerControlSessionCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x865bd0, 0x1fd000 bytes
    //
    _n3(sdk::unknown_ptr) session_manager_control_session_callback;
    
    // [SshpSessionManagerFlushControlEventBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x865c00, 0x1fd000 bytes
    //
    _n4(sdk::unknown_ptr) session_manager_flush_control_event_buffer;
    
    // [SshpSessionManagerInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb60760, 0x1fd000 bytes
    //
    _n5(sdk::unknown_ptr) session_manager_initialize;
    
    // [SshpSessionManagerInterruptTimeToSystemTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x995794, 0x1fd000 bytes
    //
    _n6(sdk::unknown_ptr) session_manager_interrupt_time_to_system_time;
    
    // [SshpSessionManagerLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc38198, 0x1fd000 bytes
    //
    _n7(sdk::unknown_ptr) session_manager_lock;
    
    // [SshpSessionManagerSendControlEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x816838, 0x1fd000 bytes
    //
    _n8(sdk::unknown_ptr) session_manager_send_control_event;
    
    // [SshpSessionManagerTraceSystemStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x86f178, 0x1fd000 bytes
    //
    _n9(sdk::unknown_ptr) session_manager_trace_system_start;
    
    // [SshpActiveThresholdPercent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1e224, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc1e244, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) active_threshold_percent;
    
    // [SshpFreeBlockerEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x579e90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x579c80, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) free_blocker_entry;
    
    // [SshpQueryRegistryValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7735fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77ecfc, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) query_registry_values;
    
    // [SshpSessionStartTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1e1e8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc1e208, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) session_start_time;
    
    // [SshpSessionThresholdHns]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1e200, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc1e210, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) session_threshold_hns;
    
    // [SshpTelemetryHandleRegistered]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1e220, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc1e242, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) telemetry_handle_registered;
    
    // [SshpUninitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa92160, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa91344, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) uninitialize;
    
    // [SshpAccountingBucketLimits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x346a0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x19098, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x349e8, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) accounting_bucket_limits;
    
    // [SshpBlockerCollections]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1e240, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc38620, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e260, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) blocker_collections;
    
    // [SshpCopyDataEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x579df0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58dcc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x579be0, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) copy_data_entry;
    
    // [SshpDereferenceBlocker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66f4d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73d228, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e2654, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) dereference_blocker;
    
    // [SshpFlushBlockerDataCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8f7bd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x994ff8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f62c0, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) flush_blocker_data_cache;
    
    // [SshpFreeDataEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8f7de8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x995218, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f64d8, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) free_data_entry;
    
    // [SshpGenerateDeviceFriendlyName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8f82f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8514e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f69e0, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) generate_device_friendly_name;
    
    // [SshpIdleResiliencyEngaged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1e1b8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc38160, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e1c8, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) idle_resiliency_engaged;
    
    // [SshpInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1e221, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc38611, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e241, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) initialized;
    
    // [SshpLibraryList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1e1f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc385f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e220, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) library_list;
    
    // [SshpLibraryListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1e218, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc38608, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e238, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) library_list_lock;
    
    // [SshpPowerSettingCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8f8cc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x995fc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f73b0, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) power_setting_callback;
    
    // [SshpPowerSettingHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1e1b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc38168, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e1e0, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) power_setting_handle;
    
    // [SshpPowerSettingHandleInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1e1c8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc38171, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e1e8, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) power_setting_handle_initialized;
    
    // [SshpQueryBlockerPendingDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x579f9c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58dd60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x579d8c, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) query_blocker_pending_delete;
    
    // [SshpReferenceBlocker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x676df4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e7b40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ea0b4, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) reference_blocker;
    
    // [SshpRoutineBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc050f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc04be0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc05130, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) routine_block;
    
    // [SshpSendSessionData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8f7e78, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80d084, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f6568, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) send_session_data;
    
    // [SshpSessionGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1e1d0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc38180, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e1f0, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) session_guid;
    
    // [SshpSessionId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1e1e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc38190, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e200, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) session_id;
    
    // [SshpSetBlockerActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x25beb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x371ae0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30ba00, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) set_blocker_active;
    
    // [SshpSetCollectionActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57a03c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e3b3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x579e2c, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) set_collection_active;
    
    // [SshpStopBlockerAccounting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57a31c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x371b40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57a10c, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) stop_blocker_accounting;
    
    // [SshpSubscribeCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa3c8cc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb245d0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3cf88, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) subscribe_callbacks;
    
    // [SshpTraceHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1e208, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc38600, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e230, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) trace_handle;
    
    // [SshpTraceHandleRegistered]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1e210, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc38610, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e240, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) trace_handle_registered;
    
    // [SshpWnfCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8f8d20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80ccd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f7410, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) wnf_callback;
    
    // [SshpWnfSubscription]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1e1c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc38158, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e1d0, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) wnf_subscription;
    
    // [SshpWnfSubscriptionInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1e1a8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc38170, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1e1d8, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) wnf_subscription_initialized;
    
    // [SshpWriteBlocker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x57a3cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58de00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x57a1bc, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) write_blocker;
};
#include "magic/api.end.hpp"
