#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::wil::details
{
    // [delete_wnf_subscription_state@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8db6c, 0x18b10 bytes
    //
    _m0(sdk::unknown_ptr) delete_wnf_subscription_state;
    
    // [FeatureLoggingHook@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v20H2
    // dxgi.dll .text:0x280b0, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) feature_logging_hook;
    
    // [FormatNtStatusMsg@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x4f670, 0x18b10 bytes
    //
    _m2(sdk::unknown_ptr) format_nt_status_msg;
    
    // [g_pfnFailfastWithContextCallback@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .data:0xcd588, 0x18b10 bytes
    //
    _m3(sdk::unknown_ptr) g_pfn_failfast_with_context_callback;
    
    // [g_pfnFormatNtStatusMsg@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .data:0xcd448, 0x18b10 bytes
    //
    _m4(sdk::unknown_ptr) g_pfn_format_nt_status_msg;
    
    // [HrToNtStatus@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x4fe5c, 0x18b10 bytes
    //
    _m5(sdk::unknown_ptr) hr_to_nt_status;
    
    // [WilApi_GetFeatureEnabledState@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x2ad8c, 0x18b10 bytes
    //
    _m6(sdk::unknown_ptr) wil_api_get_feature_enabled_state;
    
    // [ReportFailure@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x453f8, 0x17e70 bytes
    // dxgi.dll .text:0x454e8, 0x17e70 bytes
    // dxgi.dll .text:0x46604, 0x17e70 bytes
    //
    _m7(sdk::unknown_ptr) report_failure;
    
    // [ReportFailure_GetLastError@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x45504, 0x17e70 bytes
    // dxgi.dll .text:0x455f4, 0x17e70 bytes
    // dxgi.dll .text:0x46710, 0x17e70 bytes
    //
    _m8(sdk::unknown_ptr) report_failure_get_last_error;
    
    // [ReportFailure_GetLastErrorHr@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x45594, 0x17e70 bytes
    // dxgi.dll .text:0x45684, 0x17e70 bytes
    // dxgi.dll .text:0x467a0, 0x17e70 bytes
    //
    _m9(sdk::unknown_ptr) report_failure_get_last_error_hr;
    
    // [ReportFailure_Hr@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x45620, 0x17e70 bytes
    // dxgi.dll .text:0x45710, 0x17e70 bytes
    // dxgi.dll .text:0x4682c, 0x17e70 bytes
    //
    _n0(sdk::unknown_ptr) report_failure_hr;
    
    // [ReportFailure_NtStatus@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7ca90, 0x17e70 bytes
    // dxgi.dll .text:0x7cc10, 0x17e70 bytes
    // dxgi.dll .text:0x7d91c, 0x17e70 bytes
    //
    _n1(sdk::unknown_ptr) report_failure_nt_status;
    
    // [ReportFailure_Win32@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7cb08, 0x17e70 bytes
    // dxgi.dll .text:0x7cc88, 0x17e70 bytes
    // dxgi.dll .text:0x7d994, 0x17e70 bytes
    //
    _n2(sdk::unknown_ptr) report_failure_win32;
    
    // [UnsubscribeWilWnf@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x3bd0, 0x17e70 bytes
    // dxgi.dll .text:0x3bd0, 0x17e70 bytes
    // dxgi.dll .text:0x5a50, 0x17e70 bytes
    //
    _n3(sdk::unknown_ptr) unsubscribe_wil_wnf;
    
    // [CloseHandle@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xa3e4, 0x17e70 bytes
    // dxgi.dll .text:0xa3e4, 0x17e70 bytes
    // dxgi.dll .text:0x2499c, 0x18b10 bytes
    // dxgi.dll .text:0x1ebf4, 0x17e70 bytes
    //
    _n4(sdk::unknown_ptr) close_handle;
    
    // [DebugBreak@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x44240, 0x17e70 bytes
    // dxgi.dll .text:0x44330, 0x17e70 bytes
    // dxgi.dll .text:0x4f610, 0x18b10 bytes
    // dxgi.dll .text:0x453a0, 0x17e70 bytes
    //
    _n5(sdk::unknown_ptr) debug_break;
    
    // [EnsureCoalescedTimer_SetTimer@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1af94, 0x17e70 bytes
    // dxgi.dll .text:0x1b2a4, 0x17e70 bytes
    // dxgi.dll .text:0x97bc, 0x18b10 bytes
    // dxgi.dll .text:0x16824, 0x17e70 bytes
    //
    _n6(sdk::unknown_ptr) ensure_coalesced_timer_set_timer;
    
    // [FreeProcessHeap@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xab20, 0x17e70 bytes
    // dxgi.dll .text:0xab50, 0x17e70 bytes
    // dxgi.dll .text:0x250fc, 0x18b10 bytes
    // dxgi.dll .text:0x1f360, 0x17e70 bytes
    //
    _n7(sdk::unknown_ptr) free_process_heap;
    
    // [g_enabledStateManager@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcdcd0, 0x17e70 bytes
    // dxgi.dll .data:0xcdcd0, 0x17e70 bytes
    // dxgi.dll .data:0xccd58, 0x18b10 bytes
    // dxgi.dll .data:0xced20, 0x17e70 bytes
    //
    _n8(sdk::unknown_ptr) g_enabled_state_manager;
    
    // [g_featureStateManager@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcebf0, 0x17e70 bytes
    // dxgi.dll .data:0xcebf0, 0x17e70 bytes
    // dxgi.dll .data:0xcd278, 0x18b10 bytes
    // dxgi.dll .data:0xcfc68, 0x17e70 bytes
    //
    _n9(sdk::unknown_ptr) g_feature_state_manager;
    
    // [g_pThreadFailureCallbacks@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbe40, 0x17e70 bytes
    // dxgi.dll .data:0xcbe40, 0x17e70 bytes
    // dxgi.dll .data:0xcaee0, 0x18b10 bytes
    // dxgi.dll .data:0xcceb0, 0x17e70 bytes
    //
    _o0(sdk::unknown_ptr) g_p_thread_failure_callbacks;
    
    // [g_pfnDebugBreak@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf2a8, 0x17e70 bytes
    // dxgi.dll .data:0xcf2a8, 0x17e70 bytes
    // dxgi.dll .data:0xcd460, 0x18b10 bytes
    // dxgi.dll .data:0xd0328, 0x17e70 bytes
    //
    _o1(sdk::unknown_ptr) g_pfn_debug_break;
    
    // [g_pfnDllShutdownInProgress@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf2a0, 0x17e70 bytes
    // dxgi.dll .data:0xcf2a0, 0x17e70 bytes
    // dxgi.dll .data:0xcd458, 0x18b10 bytes
    // dxgi.dll .data:0xd0320, 0x17e70 bytes
    //
    _o2(sdk::unknown_ptr) g_pfn_dll_shutdown_in_progress;
    
    // [g_pfnGetContextAndNotifyFailure@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbe48, 0x17e70 bytes
    // dxgi.dll .data:0xcbe48, 0x17e70 bytes
    // dxgi.dll .data:0xcaee8, 0x18b10 bytes
    // dxgi.dll .data:0xcceb8, 0x17e70 bytes
    //
    _o3(sdk::unknown_ptr) g_pfn_get_context_and_notify_failure;
    
    // [g_pfnGetModuleName@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf2b8, 0x17e70 bytes
    // dxgi.dll .data:0xcf2b8, 0x17e70 bytes
    // dxgi.dll .data:0xcd470, 0x18b10 bytes
    // dxgi.dll .data:0xd0338, 0x17e70 bytes
    //
    _o4(sdk::unknown_ptr) g_pfn_get_module_name;
    
    // [g_pfnLoggingCallback@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf3b8, 0x17e70 bytes
    // dxgi.dll .data:0xcf3b8, 0x17e70 bytes
    // dxgi.dll .data:0xcd578, 0x18b10 bytes
    // dxgi.dll .data:0xd0418, 0x17e70 bytes
    //
    _o5(sdk::unknown_ptr) g_pfn_logging_callback;
    
    // [g_pfnOriginateCallback@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf3c8, 0x17e70 bytes
    // dxgi.dll .data:0xcf3c8, 0x17e70 bytes
    // dxgi.dll .data:0xcd580, 0x18b10 bytes
    // dxgi.dll .data:0xd0428, 0x17e70 bytes
    //
    _o6(sdk::unknown_ptr) g_pfn_originate_callback;
    
    // [g_pfnRaiseFailFastException@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf2b0, 0x17e70 bytes
    // dxgi.dll .data:0xcf2b0, 0x17e70 bytes
    // dxgi.dll .data:0xcd468, 0x18b10 bytes
    // dxgi.dll .data:0xd0330, 0x17e70 bytes
    //
    _o7(sdk::unknown_ptr) g_pfn_raise_fail_fast_exception;
    
    // [g_pfnRethrow@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbe50, 0x17e70 bytes
    // dxgi.dll .data:0xcbe50, 0x17e70 bytes
    // dxgi.dll .data:0xcaef0, 0x18b10 bytes
    // dxgi.dll .data:0xccec0, 0x17e70 bytes
    //
    _o8(sdk::unknown_ptr) g_pfn_rethrow;
    
    // [g_pfnRtlDisownModuleHeapAllocation@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf298, 0x17e70 bytes
    // dxgi.dll .data:0xcf298, 0x17e70 bytes
    // dxgi.dll .data:0xcd450, 0x18b10 bytes
    // dxgi.dll .data:0xd0318, 0x17e70 bytes
    //
    _o9(sdk::unknown_ptr) g_pfn_rtl_disown_module_heap_allocation;
    
    // [g_pfnRtlNtStatusToDosErrorNoTeb@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf2c0, 0x17e70 bytes
    // dxgi.dll .data:0xcf2c0, 0x17e70 bytes
    // dxgi.dll .data:0xcd478, 0x18b10 bytes
    // dxgi.dll .data:0xd0340, 0x17e70 bytes
    //
    _p0(sdk::unknown_ptr) g_pfn_rtl_nt_status_to_dos_error_no_teb;
    
    // [g_pfnTelemetryCallback@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf3b0, 0x17e70 bytes
    // dxgi.dll .data:0xcf3b0, 0x17e70 bytes
    // dxgi.dll .data:0xcd570, 0x18b10 bytes
    // dxgi.dll .data:0xd0410, 0x17e70 bytes
    //
    _p1(sdk::unknown_ptr) g_pfn_telemetry_callback;
    
    // [g_pfnThrowResultException@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbe58, 0x17e70 bytes
    // dxgi.dll .data:0xcbe58, 0x17e70 bytes
    // dxgi.dll .data:0xcaef8, 0x18b10 bytes
    // dxgi.dll .data:0xccec8, 0x17e70 bytes
    //
    _p2(sdk::unknown_ptr) g_pfn_throw_result_exception;
    
    // [g_processLocalData@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcb098, 0x17e70 bytes
    // dxgi.dll .data:0xcb098, 0x17e70 bytes
    // dxgi.dll .data:0xca098, 0x18b10 bytes
    // dxgi.dll .data:0xcc0d8, 0x17e70 bytes
    //
    _p3(sdk::unknown_ptr) g_process_local_data;
    
    // [g_processShutdownInProgress@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf3d0, 0x17e70 bytes
    // dxgi.dll .data:0xcf3d0, 0x17e70 bytes
    // dxgi.dll .data:0xcd590, 0x18b10 bytes
    // dxgi.dll .data:0xd0430, 0x17e70 bytes
    //
    _p4(sdk::unknown_ptr) g_process_shutdown_in_progress;
    
    // [g_resultMessageCallbackSet@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf3a9, 0x17e70 bytes
    // dxgi.dll .data:0xcf3a9, 0x17e70 bytes
    // dxgi.dll .data:0xcd569, 0x18b10 bytes
    // dxgi.dll .data:0xd0409, 0x17e70 bytes
    //
    _p5(sdk::unknown_ptr) g_result_message_callback_set;
    
    // [g_threadFailureCallbacks@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xced10, 0x17e70 bytes
    // dxgi.dll .data:0xced10, 0x17e70 bytes
    // dxgi.dll .data:0xca4c0, 0x18b10 bytes
    // dxgi.dll .data:0xcfd80, 0x17e70 bytes
    //
    _p6(sdk::unknown_ptr) g_thread_failure_callbacks;
    
    // [GetContextAndNotifyFailure@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x44390, 0x17e70 bytes
    // dxgi.dll .text:0x44480, 0x17e70 bytes
    // dxgi.dll .text:0x4f7b0, 0x18b10 bytes
    // dxgi.dll .text:0x454f0, 0x17e70 bytes
    //
    _p7(sdk::unknown_ptr) get_context_and_notify_failure;
    
    // [GetCurrentModuleName@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x44410, 0x17e70 bytes
    // dxgi.dll .text:0x44500, 0x17e70 bytes
    // dxgi.dll .text:0x4f830, 0x18b10 bytes
    // dxgi.dll .text:0x45570, 0x17e70 bytes
    //
    _p8(sdk::unknown_ptr) get_current_module_name;
    
    // [GetLastErrorFail@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x446c8, 0x17e70 bytes
    // dxgi.dll .text:0x447b8, 0x17e70 bytes
    // dxgi.dll .text:0x4fb44, 0x18b10 bytes
    // dxgi.dll .text:0x45828, 0x17e70 bytes
    //
    _p9(sdk::unknown_ptr) get_last_error_fail;
    
    // [GetLastErrorFailHr@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4473c, 0x17e70 bytes
    // dxgi.dll .text:0x4482c, 0x17e70 bytes
    // dxgi.dll .text:0x4fbb0, 0x18b10 bytes
    // dxgi.dll .text:0x4589c, 0x17e70 bytes
    //
    _q0(sdk::unknown_ptr) get_last_error_fail_hr;
    
    // [IsFeatureConfigured@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x18e3c, 0x17e70 bytes
    // dxgi.dll .text:0x1909c, 0x17e70 bytes
    // dxgi.dll .text:0xb3d0, 0x18b10 bytes
    // dxgi.dll .text:0x145ac, 0x17e70 bytes
    //
    _q1(sdk::unknown_ptr) is_feature_configured;
    
    // [K32GetModuleInformation@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x44a18, 0x17e70 bytes
    // dxgi.dll .text:0x44b08, 0x17e70 bytes
    // dxgi.dll .text:0x50060, 0x18b10 bytes
    // dxgi.dll .text:0x45b78, 0x17e70 bytes
    //
    _q2(sdk::unknown_ptr) k32_get_module_information;
    
    // [LogFailure@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x44b0c, 0x17e70 bytes
    // dxgi.dll .text:0x44bfc, 0x17e70 bytes
    // dxgi.dll .text:0x50154, 0x18b10 bytes
    // dxgi.dll .text:0x45c6c, 0x17e70 bytes
    //
    _q3(sdk::unknown_ptr) log_failure;
    
    // [LogStringPrintf@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x44dcc, 0x17e70 bytes
    // dxgi.dll .text:0x44ebc, 0x17e70 bytes
    // dxgi.dll .text:0x50490, 0x18b10 bytes
    // dxgi.dll .text:0x45f2c, 0x17e70 bytes
    //
    _q4(sdk::unknown_ptr) log_string_printf;
    
    // [NtStatusToHr@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ad50, 0x17e70 bytes
    // dxgi.dll .text:0x1b060, 0x17e70 bytes
    // dxgi.dll .text:0x9f74, 0x18b10 bytes
    // dxgi.dll .text:0x165e0, 0x17e70 bytes
    //
    _q5(sdk::unknown_ptr) nt_status_to_hr;
    
    // [ProcessHeapAlloc@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x45150, 0x17e70 bytes
    // dxgi.dll .text:0x45240, 0x17e70 bytes
    // dxgi.dll .text:0x9df4, 0x18b10 bytes
    // dxgi.dll .text:0x46324, 0x17e70 bytes
    //
    _q6(sdk::unknown_ptr) process_heap_alloc;
    
    // [RecordException@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x452b8, 0x17e70 bytes
    // dxgi.dll .text:0x453a8, 0x17e70 bytes
    // dxgi.dll .text:0x507b0, 0x18b10 bytes
    // dxgi.dll .text:0x4648c, 0x17e70 bytes
    //
    _q7(sdk::unknown_ptr) record_exception;
    
    // [RecordFailFast@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1e9b0, 0x17e70 bytes
    // dxgi.dll .text:0x1ecc0, 0x17e70 bytes
    // dxgi.dll .text:0x263e0, 0x18b10 bytes
    // dxgi.dll .text:0x1fab0, 0x17e70 bytes
    //
    _q8(sdk::unknown_ptr) record_fail_fast;
    
    // [RecordFeatureUsageCallback@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x183e0, 0x17e70 bytes
    // dxgi.dll .text:0x18640, 0x17e70 bytes
    // dxgi.dll .text:0x22050, 0x18b10 bytes
    // dxgi.dll .text:0x13b50, 0x17e70 bytes
    //
    _q9(sdk::unknown_ptr) record_feature_usage_callback;
    
    // [RecordLog@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x452d8, 0x17e70 bytes
    // dxgi.dll .text:0x453c8, 0x17e70 bytes
    // dxgi.dll .text:0x507d0, 0x18b10 bytes
    // dxgi.dll .text:0x464ac, 0x17e70 bytes
    //
    _r0(sdk::unknown_ptr) record_log;
    
    // [RecordReturn@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x452f8, 0x17e70 bytes
    // dxgi.dll .text:0x453e8, 0x17e70 bytes
    // dxgi.dll .text:0x507f0, 0x18b10 bytes
    // dxgi.dll .text:0x464cc, 0x17e70 bytes
    //
    _r1(sdk::unknown_ptr) record_return;
    
    // [RecordSRUMFeatureUsage@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x45320, 0x17e70 bytes
    // dxgi.dll .text:0x45410, 0x17e70 bytes
    // dxgi.dll .text:0x50810, 0x18b10 bytes
    // dxgi.dll .text:0x464f0, 0x17e70 bytes
    //
    _r2(sdk::unknown_ptr) record_srum_feature_usage;
    
    // [ReleaseMutex@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xaaa4, 0x17e70 bytes
    // dxgi.dll .text:0xaad4, 0x17e70 bytes
    // dxgi.dll .text:0x250d8, 0x18b10 bytes
    // dxgi.dll .text:0x1f2e4, 0x17e70 bytes
    //
    _r3(sdk::unknown_ptr) release_mutex;
    
    // [ResultStringSize@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x45668, 0x17e70 bytes
    // dxgi.dll .text:0x45758, 0x17e70 bytes
    // dxgi.dll .text:0x50a0c, 0x18b10 bytes
    // dxgi.dll .text:0x46b28, 0x17e70 bytes
    //
    _r4(sdk::unknown_ptr) result_string_size;
    
    // [Rethrow@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x456c0, 0x17e70 bytes
    // dxgi.dll .text:0x457b0, 0x17e70 bytes
    // dxgi.dll .text:0x50a70, 0x18b10 bytes
    // dxgi.dll .text:0x46b80, 0x17e70 bytes
    //
    _r5(sdk::unknown_ptr) rethrow;
    
    // [RtlDisownModuleHeapAllocation@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x19310, 0x17e70 bytes
    // dxgi.dll .text:0x19570, 0x17e70 bytes
    // dxgi.dll .text:0xb620, 0x18b10 bytes
    // dxgi.dll .text:0x14a80, 0x17e70 bytes
    //
    _r6(sdk::unknown_ptr) rtl_disown_module_heap_allocation;
    
    // [RtlDllShutdownInProgress@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x19600, 0x17e70 bytes
    // dxgi.dll .text:0x19860, 0x17e70 bytes
    // dxgi.dll .text:0xb6a0, 0x18b10 bytes
    // dxgi.dll .text:0x14d70, 0x17e70 bytes
    //
    _r7(sdk::unknown_ptr) rtl_dll_shutdown_in_progress;
    
    // [RtlNtStatusToDosErrorNoTeb@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x45730, 0x17e70 bytes
    // dxgi.dll .text:0x45820, 0x17e70 bytes
    // dxgi.dll .text:0x50ad0, 0x18b10 bytes
    // dxgi.dll .text:0x46bf0, 0x17e70 bytes
    //
    _r8(sdk::unknown_ptr) rtl_nt_status_to_dos_error_no_teb;
    
    // [StringCchPrintfA@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x45c20, 0x17e70 bytes
    // dxgi.dll .text:0x45d10, 0x17e70 bytes
    // dxgi.dll .text:0x50fd4, 0x18b10 bytes
    // dxgi.dll .text:0x470e0, 0x17e70 bytes
    //
    _r9(sdk::unknown_ptr) string_cch_printf_a;
    
    // [ThrowResultExceptionInternal@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x45cb0, 0x17e70 bytes
    // dxgi.dll .text:0x45da0, 0x17e70 bytes
    // dxgi.dll .text:0x51100, 0x18b10 bytes
    // dxgi.dll .text:0x47170, 0x17e70 bytes
    //
    _s0(sdk::unknown_ptr) throw_result_exception_internal;
    
    // [UnregisterWilFeatureConfigurationChange@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4088, 0x17e70 bytes
    // dxgi.dll .text:0x4088, 0x17e70 bytes
    // dxgi.dll .text:0x75d8, 0x18b10 bytes
    // dxgi.dll .text:0x5f08, 0x17e70 bytes
    //
    _s1(sdk::unknown_ptr) unregister_wil_feature_configuration_change;
    
    // [UnsubscribeProcessWideUsageFlush@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x41e4, 0x17e70 bytes
    // dxgi.dll .text:0x41e4, 0x17e70 bytes
    // dxgi.dll .text:0x7bc0, 0x18b10 bytes
    // dxgi.dll .text:0x6064, 0x17e70 bytes
    //
    _s2(sdk::unknown_ptr) unsubscribe_process_wide_usage_flush;
    
    // [WilApi_GetFeatureVariant@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x9318, 0x17e70 bytes
    // dxgi.dll .text:0x9318, 0x17e70 bytes
    // dxgi.dll .text:0x66bd0, 0x18b10 bytes
    // dxgi.dll .text:0x1db98, 0x17e70 bytes
    //
    _s3(sdk::unknown_ptr) wil_api_get_feature_variant;
    
    // [WilApiImpl_GetFeatureEnabledState@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x18dc0, 0x17e70 bytes
    // dxgi.dll .text:0x19020, 0x17e70 bytes
    // dxgi.dll .text:0xb360, 0x18b10 bytes
    // dxgi.dll .text:0x14530, 0x17e70 bytes
    //
    _s4(sdk::unknown_ptr) wil_api_impl_get_feature_enabled_state;
    
    // [WilApiImpl_GetFeatureVariant@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x19950, 0x17e70 bytes
    // dxgi.dll .text:0x19c00, 0x17e70 bytes
    // dxgi.dll .text:0xb2e0, 0x18b10 bytes
    // dxgi.dll .text:0x15110, 0x17e70 bytes
    //
    _s5(sdk::unknown_ptr) wil_api_impl_get_feature_variant;
    
    // [WilApiImpl_RecordFeatureUsage@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x185c0, 0x17e70 bytes
    // dxgi.dll .text:0x18820, 0x17e70 bytes
    // dxgi.dll .text:0xc300, 0x18b10 bytes
    // dxgi.dll .text:0x13d30, 0x17e70 bytes
    //
    _s6(sdk::unknown_ptr) wil_api_impl_record_feature_usage;
    
    // [WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1a370, 0x17e70 bytes
    // dxgi.dll .text:0x1a620, 0x17e70 bytes
    // dxgi.dll .text:0xaa50, 0x18b10 bytes
    // dxgi.dll .text:0x15ba0, 0x17e70 bytes
    //
    _s7(sdk::unknown_ptr) wil_api_impl_subscribe_feature_state_change_notification;
    
    // [WilApiImpl_UnsubscribeFeatureStateChangeNotification@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x2f70, 0x17e70 bytes
    // dxgi.dll .text:0x2f70, 0x17e70 bytes
    // dxgi.dll .text:0x6730, 0x18b10 bytes
    // dxgi.dll .text:0x4df0, 0x17e70 bytes
    //
    _s8(sdk::unknown_ptr) wil_api_impl_unsubscribe_feature_state_change_notification;
    
    // [WilApi_RecordFeatureUsage@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1a6b8, 0x17e70 bytes
    // dxgi.dll .text:0x1a968, 0x17e70 bytes
    // dxgi.dll .text:0x51168, 0x18b10 bytes
    // dxgi.dll .text:0x15ee8, 0x17e70 bytes
    //
    _s9(sdk::unknown_ptr) wil_api_record_feature_usage;
    
    // [WilApi_UnsubscribeFeatureStateChangeNotification@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4228, 0x17e70 bytes
    // dxgi.dll .text:0x4228, 0x17e70 bytes
    // dxgi.dll .text:0x8070, 0x18b10 bytes
    // dxgi.dll .text:0x60a8, 0x17e70 bytes
    //
    _t0(sdk::unknown_ptr) wil_api_unsubscribe_feature_state_change_notification;
    
    // [WilDynamicLoadRaiseFailFastException@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x45d20, 0x17e70 bytes
    // dxgi.dll .text:0x45e10, 0x17e70 bytes
    // dxgi.dll .text:0x511c0, 0x18b10 bytes
    // dxgi.dll .text:0x471e0, 0x17e70 bytes
    //
    _t1(sdk::unknown_ptr) wil_dynamic_load_raise_fail_fast_exception;
    
    // [WilFailFast@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x45d8c, 0x17e70 bytes
    // dxgi.dll .text:0x45e7c, 0x17e70 bytes
    // dxgi.dll .text:0x51238, 0x18b10 bytes
    // dxgi.dll .text:0x4724c, 0x17e70 bytes
    //
    _t2(sdk::unknown_ptr) wil_fail_fast;
    
    // [WilRaiseFailFastException@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x45e28, 0x17e70 bytes
    // dxgi.dll .text:0x45f18, 0x17e70 bytes
    // dxgi.dll .text:0x512fc, 0x18b10 bytes
    // dxgi.dll .text:0x472e8, 0x17e70 bytes
    //
    _t3(sdk::unknown_ptr) wil_raise_fail_fast_exception;
};
#include "magic/api.end.hpp"
