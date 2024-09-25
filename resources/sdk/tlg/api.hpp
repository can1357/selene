#pragma once
#include <sdkgen/support_library.hpp>
#include "provider_t.hpp"
#include "../nt/guid_t.hpp"
#include "../nt/event_data_descriptor_t.hpp"
#include "../tag/tlg_aggregate_options_t.hpp"
#include "../nt/event_filter_descriptor_t.hpp"
#include "../nt/periodic_flush_frequency_t.hpp"

#include "magic/api.start.hpp"
namespace tlg
{
    // [_TlgCreateSz]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1d07f8, 0x32828 bytes
    //
    _m0(sdk::function<void(struct nt::event_data_descriptor_t*, const char*)>*) create_sz;
    
    // [_TlgCreateWsz]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1323a4, 0x32828 bytes
    //
    _m1(sdk::function<void(struct nt::event_data_descriptor_t*, const wchar_t*)>*) create_wsz;
    
    // [_tlgDefineProvider_annotation__TlgCarTraceLogProviderProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    //
    _m2(sdk::unknown_ptr) define_provider_annotation_tlg_car_trace_log_provider_prov;
    
    // [_tlgDefineProvider_annotation__TlgCcTelemetryProviderProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    //
    _m3(sdk::unknown_ptr) define_provider_annotation_tlg_cc_telemetry_provider_prov;
    
    // [_tlgDefineProvider_annotation__TlgDumpTraceLoggingProviderProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    //
    _m4(sdk::unknown_ptr) define_provider_annotation_tlg_dump_trace_logging_provider_prov;
    
    // [_tlgDefineProvider_annotation__TlgFsRtlOplockTraceLoggingHandleProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    //
    _m5(sdk::unknown_ptr) define_provider_annotation_tlg_fs_rtl_oplock_trace_logging_handle_prov;
    
    // [_tlgDefineProvider_annotation__TlgIoManagerTraceLoggingProviderProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    //
    _m6(sdk::unknown_ptr) define_provider_annotation_tlg_io_manager_trace_logging_provider_prov;
    
    // [_tlgDefineProvider_annotation__TlgKiTimerTraceLoggingHandleProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    //
    _m7(sdk::unknown_ptr) define_provider_annotation_tlg_ki_timer_trace_logging_handle_prov;
    
    // [_tlgDefineProvider_annotation__TlgObpTraceLoggingHandleProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb820b4, 0x1fd000 bytes
    //
    _m8(sdk::unknown_ptr) define_provider_annotation_tlg_obp_trace_logging_handle_prov;
    
    // [_tlgDefineProvider_annotation__TlgPfKernelTraceLoggingProviderProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    //
    _m9(sdk::unknown_ptr) define_provider_annotation_tlg_pf_kernel_trace_logging_provider_prov;
    
    // [_tlgDefineProvider_annotation__TlgPlatformRecordsProviderProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    //
    _n0(sdk::unknown_ptr) define_provider_annotation_tlg_platform_records_provider_prov;
    
    // [_tlgDefineProvider_annotation__TlgPopTraceDiagFxAccountingHandleProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    //
    _n1(sdk::unknown_ptr) define_provider_annotation_tlg_pop_trace_diag_fx_accounting_handle_prov;
    
    // [_tlgDefineProvider_annotation__TlgPopTraceHandleCoreProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    //
    _n2(sdk::unknown_ptr) define_provider_annotation_tlg_pop_trace_handle_core_prov;
    
    // [_tlgDefineProvider_annotation__TlgPotsTracePowerTransitionsHandleProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    //
    _n3(sdk::unknown_ptr) define_provider_annotation_tlg_pots_trace_power_transitions_handle_prov;
    
    // [_tlgDefineProvider_annotation__TlgTlgAttackSurfaceMonitorProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    //
    _n4(sdk::unknown_ptr) define_provider_annotation_tlg_tlg_attack_surface_monitor_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_DapiProviderProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    //
    _n5(sdk::unknown_ptr) define_provider_annotation_tlgg_dapi_provider_prov;
    
    // [_TlgEnableCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x535af0, 0x32828 bytes
    //
    _n6(sdk::function<void(const struct nt::guid_t*, uint32_t, uint8_t, uint64_t, uint64_t, struct nt::event_filter_descriptor_t*, void*)>*) enable_callback;
    
    // [TlgKernelSeRegHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6ec1e8, 0x32828 bytes
    //
    _n7(sdk::unknown_ptr) kernel_se_reg_handle;
    
    // [_TlgKeywordOn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x8ada8, 0x32828 bytes
    //
    _n8(sdk::function<uint8_t(const struct tlg::provider_t*, uint64_t)>*) keyword_on;
    
    // [_TlgWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x106190, 0x32828 bytes
    //
    _n9(sdk::function<int32_t(const struct tlg::provider_t*, __unaligned const void*, const struct nt::guid_t*, const struct nt::guid_t*, uint32_t, struct nt::event_data_descriptor_t*)>*) write;
    
    // [_TlgWriteAgg]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x8ca6c, 0x32828 bytes
    //
    _o0(sdk::unknown_ptr) write_agg;
    
    // [_TlgWriteEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1e25d0, 0x32828 bytes
    //
    _o1(sdk::unknown_ptr) write_ex;
    
    // [_tlgDefineProvider_annotation__TlgCmFcpTraceLoggingHandleProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebce4, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) define_provider_annotation_tlg_cm_fcp_trace_logging_handle_prov;
    
    // [_tlgDefineProvider_annotation__TlgSshpTelemetryHandleProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bd07c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ebce4, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) define_provider_annotation_tlg_sshp_telemetry_handle_prov;
    
    // [TlgAggregateFlush]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5c4450, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6611b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5c32c0, 0x1fe000 bytes
    //
    _o4(sdk::function<void(const struct tlg::provider_t*)>*) aggregate_flush;
    
    // [TlgAggregateInternalFlushTimerCallbackKernelMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x37de40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x384d30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37f1c0, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) aggregate_internal_flush_timer_callback_kernel_mode;
    
    // [TlgAggregateInternalFlushWorkItemRoutineKernelMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x740c50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b5770, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x748890, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) aggregate_internal_flush_work_item_routine_kernel_mode;
    
    // [TlgAggregateInternalProviderCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x97ce20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8705c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97b700, 0x1fe000 bytes
    //
    _o7(sdk::function<void(const struct nt::guid_t*, uint32_t, uint8_t, uint64_t, uint64_t, struct nt::event_filter_descriptor_t*, void*)>*) aggregate_internal_provider_callback;
    
    // [TlgAggregateInternalRegisteredProviderEtwCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b58b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x866d50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bd470, 0x1fe000 bytes
    //
    _o8(sdk::function<void(const struct nt::guid_t*, uint32_t, uint8_t, uint64_t, uint64_t, struct nt::event_filter_descriptor_t*, void*)>*) aggregate_internal_registered_provider_etw_callback;
    
    // [_tlgCreate1Sz_char]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x213f78, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3473ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33da14, 0x1fe000 bytes
    //
    _o9(sdk::function<void(struct nt::event_data_descriptor_t*, const char*)>*) create1_sz_char;
    
    // [_tlgCreate1Sz_wchar_t]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x213f38, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x307180, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33d9d4, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) create1_sz_wchar_t;
    
    // [_tlgDefineProvider_annotation__TlgBootProviderProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bd07c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebce4, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) define_provider_annotation_tlg_boot_provider_prov;
    
    // [_tlgDefineProvider_annotation__TlgCmpTraceLoggingHandleProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x868260, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99e89c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x866804, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) define_provider_annotation_tlg_cmp_trace_logging_handle_prov;
    
    // [_tlgDefineProvider_annotation__TlgExpTraceLoggingProviderProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bd07c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebce4, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) define_provider_annotation_tlg_exp_trace_logging_provider_prov;
    
    // [_tlgDefineProvider_annotation__TlgHalTraceLoggingProviderProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bd07c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebce4, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) define_provider_annotation_tlg_hal_trace_logging_provider_prov;
    
    // [_tlgDefineProvider_annotation__TlgKiTraceLoggingHandleProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bd07c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebce4, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) define_provider_annotation_tlg_ki_trace_logging_handle_prov;
    
    // [_tlgDefineProvider_annotation__TlgLiveDumpTraceLoggingProviderProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bd07c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebce4, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) define_provider_annotation_tlg_live_dump_trace_logging_provider_prov;
    
    // [_tlgDefineProvider_annotation__TlgMiTraceHandleProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bd07c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebce4, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) define_provider_annotation_tlg_mi_trace_handle_prov;
    
    // [_tlgDefineProvider_annotation__TlgPnpTraceLoggingConfigHandleProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bd07c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebce4, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) define_provider_annotation_tlg_pnp_trace_logging_config_handle_prov;
    
    // [_tlgDefineProvider_annotation__TlgPnpTraceLoggingEventHandleCoreProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bd07c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebce4, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) define_provider_annotation_tlg_pnp_trace_logging_event_handle_core_prov;
    
    // [_tlgDefineProvider_annotation__TlgPnpTraceLoggingEventHandleProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bd07c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebce4, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) define_provider_annotation_tlg_pnp_trace_logging_event_handle_prov;
    
    // [_tlgDefineProvider_annotation__TlgPopDirectedDripsDiagTraceHandleProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bd07c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebce4, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) define_provider_annotation_tlg_pop_directed_drips_diag_trace_handle_prov;
    
    // [_tlgDefineProvider_annotation__TlgPopTraceHandleProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bd07c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebce4, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) define_provider_annotation_tlg_pop_trace_handle_prov;
    
    // [_tlgDefineProvider_annotation__TlgPspTraceLoggingHandleProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bd07c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebce4, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) define_provider_annotation_tlg_psp_trace_logging_handle_prov;
    
    // [_tlgDefineProvider_annotation__TlgRtlpCapChkTraceLoggingProviderProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bd07c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebce4, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) define_provider_annotation_tlg_rtlp_cap_chk_trace_logging_provider_prov;
    
    // [_tlgDefineProvider_annotation__TlgSeTraceLoggingHandleProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bd07c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebce4, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) define_provider_annotation_tlg_se_trace_logging_handle_prov;
    
    // [_tlgDefineProvider_annotation__TlgSysEnvTraceLoggingProviderProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bd07c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebce4, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) define_provider_annotation_tlg_sys_env_trace_logging_provider_prov;
    
    // [_tlgDefineProvider_annotation__TlgTlgAggregateInternalProviderProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bd07c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebce4, 0x1fe000 bytes
    //
    _q7(sdk::function<void()>*) define_provider_annotation_tlg_tlg_aggregate_internal_provider_prov;
    
    // [_tlgDefineProvider_annotation__TlgTlgCoverageProvRegHandleProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bd07c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebce4, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) define_provider_annotation_tlg_tlg_coverage_prov_reg_handle_prov;
    
    // [_tlgDefineProvider_annotation__TlgTlgKernelProvRegHandleProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bd07c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebce4, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) define_provider_annotation_tlg_tlg_kernel_prov_reg_handle_prov;
    
    // [_tlgDefineProvider_annotation__TlgTlgPsProvRegHandleProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bd07c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebce4, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) define_provider_annotation_tlg_tlg_ps_prov_reg_handle_prov;
    
    // [_tlgDefineProvider_annotation__TlgTRACE_PROVIDERProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x868260, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99e89c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x866804, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) define_provider_annotation_tlg_trace_provider_prov;
    
    // [_tlgDefineProvider_annotation__TlgTtmTelemetryHandleProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x868260, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99e89c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x866804, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) define_provider_annotation_tlg_ttm_telemetry_handle_prov;
    
    // [_tlgDefineProvider_annotation__TlgTtmTraceHandleProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x868260, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x99e89c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x866804, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) define_provider_annotation_tlg_ttm_trace_handle_prov;
    
    // [_tlgDefineProvider_annotation__TlgVmpTraceHandleProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bd07c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebce4, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) define_provider_annotation_tlg_vmp_trace_handle_prov;
    
    // [_tlgDefineProvider_annotation__TlgVslpIumTelemetryProviderProv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4bd07c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fb91c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebce4, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) define_provider_annotation_tlg_vslp_ium_telemetry_provider_prov;
    
    // [_tlgKeywordOn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x35b77c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f474c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d5f54, 0x1fe000 bytes
    //
    _r6(sdk::function<uint8_t(const struct tlg::provider_t*, uint64_t)>*) keyword_on_;
    
    // [TlgRegisterAggregateProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x781a50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8370bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78b7f0, 0x1fe000 bytes
    //
    _r7(sdk::function<sdk::hresult(const struct tlg::provider_t*)>*) register_aggregate_provider;
    
    // [_tlgWriteAgg]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x371314, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f3ff0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x372694, 0x1fe000 bytes
    //
    _r8(sdk::function<sdk::hresult(const struct tlg::provider_t*, const void*, const void*, uint32_t, struct nt::event_data_descriptor_t*)>*) write_agg_;
    
    // [_tlgWriteEx_EtwWriteEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x270f2c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38b154, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3226ec, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) write_ex_etw_write_ex;
    
    // [_tlgWriteTransfer_EtwWriteTransfer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x35b5fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x303044, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d5dd4, 0x1fe000 bytes
    //
    _s0(sdk::function<int32_t(const struct tlg::provider_t*, const void*, const struct nt::guid_t*, const struct nt::guid_t*, uint32_t, struct nt::event_data_descriptor_t*)>*) write_transfer_etw_write_transfer;
    
    // [TlgRegisterAggregateProviderEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x147740, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x781a6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8370d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78b80c, 0x1fe000 bytes
    //
    _s1(sdk::function<int32_t(const struct tlg::provider_t*, sdk::function<void(const struct nt::guid_t*, uint32_t, uint8_t, uint64_t, uint64_t, struct nt::event_filter_descriptor_t*, void*)>*, void*, enum nt::periodic_flush_frequency_t)>*) register_aggregate_provider_ex;
    
    // [_tlgDefineProvider_annotation__Tlgg_CoreMessagingKProviderProv]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1304b0, 0x243e0 bytes
    // win32kbase.sys .text:0x1625f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x12dd30, 0x243e0 bytes
    //
    _s2(sdk::unknown_ptr) define_provider_annotation_tlgg_core_messaging_k_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_hInkProcessorTraceLoggingProviderProv]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x226830, 0x1596d bytes
    // win32kfull.sys .text:0x222030, 0x1659e bytes
    // win32kfull.sys .text:0x2266f0, 0x1596d bytes
    //
    _s3(sdk::unknown_ptr) define_provider_annotation_tlgg_h_ink_processor_trace_logging_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_hInputTraceProviderProv]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x226830, 0x1596d bytes
    // win32kfull.sys .text:0x222030, 0x1659e bytes
    // win32kfull.sys .text:0x2266f0, 0x1596d bytes
    //
    _s4(sdk::unknown_ptr) define_provider_annotation_tlgg_h_input_trace_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_hMTTDataProviderProv]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1304b0, 0x243e0 bytes
    // win32kbase.sys .text:0x1625f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x12dd30, 0x243e0 bytes
    //
    _s5(sdk::unknown_ptr) define_provider_annotation_tlgg_h_mtt_data_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_hSHCTraceLoggingProviderProv]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x226830, 0x1596d bytes
    // win32kfull.sys .text:0x222030, 0x1659e bytes
    // win32kfull.sys .text:0x2266f0, 0x1596d bytes
    //
    _s6(sdk::unknown_ptr) define_provider_annotation_tlgg_h_shc_trace_logging_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_hTraceLoggingProviderProv]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x226830, 0x1596d bytes
    // win32kfull.sys .text:0x222030, 0x1659e bytes
    // win32kfull.sys .text:0x2266f0, 0x1596d bytes
    //
    _s7(sdk::unknown_ptr) define_provider_annotation_tlgg_h_trace_logging_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_hWin32kBaseInputTelemetryProviderProv]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1304b0, 0x243e0 bytes
    // win32kbase.sys .text:0x1625f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x12dd30, 0x243e0 bytes
    //
    _s8(sdk::unknown_ptr) define_provider_annotation_tlgg_h_win32k_base_input_telemetry_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_hWin32kClipboardAggregateProviderProv]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x226830, 0x1596d bytes
    // win32kfull.sys .text:0x222030, 0x1659e bytes
    // win32kfull.sys .text:0x2266f0, 0x1596d bytes
    //
    _s9(sdk::unknown_ptr) define_provider_annotation_tlgg_h_win32k_clipboard_aggregate_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_hWin32kDeadzonePalmTelemetryProviderProv]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1304b0, 0x243e0 bytes
    // win32kbase.sys .text:0x1625f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x12dd30, 0x243e0 bytes
    //
    _t0(sdk::unknown_ptr) define_provider_annotation_tlgg_h_win32k_deadzone_palm_telemetry_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_hWin32kDisplayTelemetryProviderProv]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1304b0, 0x243e0 bytes
    // win32kbase.sys .text:0x1625f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x12dd30, 0x243e0 bytes
    //
    _t1(sdk::unknown_ptr) define_provider_annotation_tlgg_h_win32k_display_telemetry_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_hWin32kPalmMetricsProviderProv]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1304b0, 0x243e0 bytes
    // win32kbase.sys .text:0x1625f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x12dd30, 0x243e0 bytes
    //
    _t2(sdk::unknown_ptr) define_provider_annotation_tlgg_h_win32k_palm_metrics_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_hWin32kSyscallLoggingProviderProv]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x226830, 0x1596d bytes
    // win32kfull.sys .text:0x222030, 0x1659e bytes
    // win32kfull.sys .text:0x2266f0, 0x1596d bytes
    //
    _t3(sdk::unknown_ptr) define_provider_annotation_tlgg_h_win32k_syscall_logging_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_hWin32kTraceLoggingProviderProv]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x226830, 0x1596d bytes
    // win32kfull.sys .text:0x222030, 0x1659e bytes
    // win32kfull.sys .text:0x2266f0, 0x1596d bytes
    //
    _t4(sdk::unknown_ptr) define_provider_annotation_tlgg_h_win32k_trace_logging_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgmtakm_hTelemetryAssertDiagTrack_KMProv]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x226830, 0x1596d bytes
    // win32kfull.sys .text:0x222030, 0x1659e bytes
    // win32kfull.sys .text:0x2266f0, 0x1596d bytes
    //
    _t5(sdk::function<void()>*) define_provider_annotation_tlgmtakm_h_telemetry_assert_diag_track_km_prov;
    
    // [_tlgDefineProvider_annotation__Tlgmtakm_hTelemetryAssertDiagTrackProv]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x226830, 0x1596d bytes
    // win32kfull.sys .text:0x222030, 0x1659e bytes
    // win32kfull.sys .text:0x2266f0, 0x1596d bytes
    //
    _t6(sdk::function<void()>*) define_provider_annotation_tlgmtakm_h_telemetry_assert_diag_track_prov;
    
    // [_tlgDefineProvider_annotation__Tlgmtakm_hTelemetryAssertProv]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x226830, 0x1596d bytes
    // win32kfull.sys .text:0x222030, 0x1659e bytes
    // win32kfull.sys .text:0x2266f0, 0x1596d bytes
    //
    _t7(sdk::function<void()>*) define_provider_annotation_tlgmtakm_h_telemetry_assert_prov;
    
    // [_tlgDefineProvider_annotation__TlgPciTraceLoggingProviderProv]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x25d9c, 0x1cf0 bytes
    // pci.sys .text:0x280d0, 0x1cf0 bytes
    // pci.sys .text:0x25bbc, 0x1cf0 bytes
    //
    _t8(sdk::unknown_ptr) define_provider_annotation_tlg_pci_trace_logging_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_TraceLoggingProviderProv]
    // Ldr = [mouclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // mouclass.sys .text:0x6b5c, 0xd20 bytes
    // mouclass.sys .text:0x6d1c, 0xd20 bytes
    // mouclass.sys .text:0x6b5c, 0xd20 bytes
    //
    _t9(sdk::unknown_ptr) define_provider_annotation_tlgg_trace_logging_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_hTraceVmsCloudTriageProviderProv]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys .text:0xac494, 0x1e858 bytes
    //
    _u0(sdk::unknown_ptr) define_provider_annotation_tlgg_h_trace_vms_cloud_triage_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_ndisTraceLogProviderProv]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .text:0xab064, 0x1d2c0 bytes
    // ndis.sys .text:0xac494, 0x1e858 bytes
    // ndis.sys .text:0xabb94, 0x1d2c0 bytes
    //
    _u1(sdk::unknown_ptr) define_provider_annotation_tlgg_ndis_trace_log_provider_prov;
    
    // [_tlgDefineProvider_annotation__TlgStorportOnDemandDataProviderProv]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x63e30, 0x440c8 bytes
    //
    _u2(sdk::unknown_ptr) define_provider_annotation_tlg_storport_on_demand_data_provider_prov;
    
    // [_tlgDefineProvider_annotation__TlgStorportTelemetryProviderProv]
    // Ldr = [storport.sys]
    // => Windows 11
    // storport.sys .text:0x63e30, 0x440c8 bytes
    //
    _u3(sdk::unknown_ptr) define_provider_annotation_tlg_storport_telemetry_provider_prov;
    
    // [_tlgDefineProvider_annotation__TlgStorportTraceLoggingProviderProv]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // storport.sys .text:0x55858, 0x2be18 bytes
    // storport.sys .text:0x55858, 0x2be18 bytes
    //
    _u4(sdk::unknown_ptr) define_provider_annotation_tlg_storport_trace_logging_provider_prov;
    
    // [_tlgDefineProvider_annotation__TlgFltMgrTelemetryProviderProv]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x1a5ec, 0x2428 bytes
    // fltMgr.sys .text:0x1b0b4, 0x2428 bytes
    // fltMgr.sys .text:0x1a5ec, 0x2428 bytes
    //
    _u5(sdk::unknown_ptr) define_provider_annotation_tlg_flt_mgr_telemetry_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_MicrosoftWindowsSecurityCodeIntegrityStateProviderProv]
    // Ldr = [ci.dll]
    // => Windows 11
    // ci.dll .text:0x1274, 0x13a78 bytes
    //
    _u6(sdk::unknown_ptr) define_provider_annotation_tlgg_microsoft_windows_security_code_integrity_state_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_CiAuditTraceLoggingProviderProv]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x2070, 0x13a78 bytes
    // ci.dll .text:0x1274, 0x13a78 bytes
    // ci.dll .text:0x1fec, 0x13a78 bytes
    //
    _u7(sdk::unknown_ptr) define_provider_annotation_tlgg_ci_audit_trace_logging_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_CiTraceLoggingProviderProv]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .text:0x2070, 0x13a78 bytes
    // ci.dll .text:0x1274, 0x13a78 bytes
    // ci.dll .text:0x1fec, 0x13a78 bytes
    //
    _u8(sdk::unknown_ptr) define_provider_annotation_tlgg_ci_trace_logging_provider_prov;
    
    // [_tlgDefineProvider_annotation__TlgAfdTraceLogProviderProv]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x103ec, 0x15fb8 bytes
    // afd.sys .text:0x32160, 0x187f8 bytes
    // afd.sys .text:0x103ec, 0x15fb8 bytes
    //
    _u9(sdk::unknown_ptr) define_provider_annotation_tlg_afd_trace_log_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_fwpFeTelemetryTraceLoggingProviderProv]
    // Ldr = [netio.sys]
    // => Windows 11
    // netio.sys .text:0x3ee8c, 0x4e8c bytes
    //
    _v0(sdk::unknown_ptr) define_provider_annotation_tlgg_fwp_fe_telemetry_trace_logging_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_fwpKfdTraceLoggingProviderProv]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x3d8bc, 0x4dd3 bytes
    // netio.sys .text:0x3ee8c, 0x4e8c bytes
    // netio.sys .text:0x3d87c, 0x4dd3 bytes
    //
    _v1(sdk::unknown_ptr) define_provider_annotation_tlgg_fwp_kfd_trace_logging_provider_prov;
    
    // [_tlgDefineProvider_annotation__TlgTcpipUsageTraceLoggingProviderProv]
    // Ldr = [tcpip.sys]
    // => Windows 11
    // tcpip.sys .text:0x128964, 0x91370 bytes
    //
    _v2(sdk::unknown_ptr) define_provider_annotation_tlg_tcpip_usage_trace_logging_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_fwpAleTraceLoggingEtwProviderProv]
    // Ldr = [tcpip.sys]
    // => Windows 11
    // tcpip.sys .text:0x128964, 0x91370 bytes
    //
    _v3(sdk::unknown_ptr) define_provider_annotation_tlgg_fwp_ale_trace_logging_etw_provider_prov;
    
    // [_tlgDefineProvider_annotation__TlgTcpipTraceLoggingProviderProv]
    // Ldr = [tcpip.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // tcpip.sys .text:0x12faf0, 0x7a898 bytes
    // tcpip.sys .text:0x128964, 0x91370 bytes
    // tcpip.sys .text:0x12f170, 0x7a860 bytes
    //
    _v4(sdk::unknown_ptr) define_provider_annotation_tlg_tcpip_trace_logging_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_fwpAleTraceLoggingProviderProv]
    // Ldr = [tcpip.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // tcpip.sys .text:0x12faf0, 0x7a898 bytes
    // tcpip.sys .text:0x128964, 0x91370 bytes
    // tcpip.sys .text:0x12f170, 0x7a860 bytes
    //
    _v5(sdk::unknown_ptr) define_provider_annotation_tlgg_fwp_ale_trace_logging_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_fwpIPsecTraceLoggingProviderProv]
    // Ldr = [tcpip.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // tcpip.sys .text:0x12faf0, 0x7a898 bytes
    // tcpip.sys .text:0x128964, 0x91370 bytes
    // tcpip.sys .text:0x12f170, 0x7a860 bytes
    //
    _v6(sdk::unknown_ptr) define_provider_annotation_tlgg_fwp_i_psec_trace_logging_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_hEfsRpcTelemetryProviderProv]
    // Ldr = [tcpip.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // tcpip.sys .text:0x12faf0, 0x7a898 bytes
    // tcpip.sys .text:0x128964, 0x91370 bytes
    // tcpip.sys .text:0x12f170, 0x7a860 bytes
    //
    _v7(sdk::unknown_ptr) define_provider_annotation_tlgg_h_efs_rpc_telemetry_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_hDisplayTelemetryProviderProv]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4a450, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5228c, 0x84380 bytes
    // dxgkrnl.sys .text:0x4a6a0, 0x762b0 bytes
    //
    _v8(sdk::unknown_ptr) define_provider_annotation_tlgg_h_display_telemetry_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_hDriverDiagnosticsNotificationsTelemetryProviderProv]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4a450, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5228c, 0x84380 bytes
    // dxgkrnl.sys .text:0x4a6a0, 0x762b0 bytes
    //
    _v9(sdk::unknown_ptr) define_provider_annotation_tlgg_h_driver_diagnostics_notifications_telemetry_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_hDriverDiagnosticsProgressionsTelemetryProviderProv]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4a450, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5228c, 0x84380 bytes
    // dxgkrnl.sys .text:0x4a6a0, 0x762b0 bytes
    //
    _w0(sdk::unknown_ptr) define_provider_annotation_tlgg_h_driver_diagnostics_progressions_telemetry_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_hDxgDiagnosticsTelemetryProviderProv]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4a450, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5228c, 0x84380 bytes
    // dxgkrnl.sys .text:0x4a6a0, 0x762b0 bytes
    //
    _w1(sdk::unknown_ptr) define_provider_annotation_tlgg_h_dxg_diagnostics_telemetry_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_hDxgKrnlTelemetryProviderCoreProv]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4a450, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5228c, 0x84380 bytes
    // dxgkrnl.sys .text:0x4a6a0, 0x762b0 bytes
    //
    _w2(sdk::unknown_ptr) define_provider_annotation_tlgg_h_dxg_krnl_telemetry_provider_core_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_hDxgKrnlTelemetryProviderProv]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4a450, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5228c, 0x84380 bytes
    // dxgkrnl.sys .text:0x4a6a0, 0x762b0 bytes
    //
    _w3(sdk::unknown_ptr) define_provider_annotation_tlgg_h_dxg_krnl_telemetry_provider_prov;
    
    // [_tlgWriteTransfer_EventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7d618, 0x17e70 bytes
    // dxgi.dll .text:0x7d798, 0x17e70 bytes
    // dxgi.dll .text:0x7e15c, 0x17e70 bytes
    //
    _w4(sdk::function<sdk::hresult(const struct tlg::provider_t*, const void*, const struct nt::guid_t*, const struct nt::guid_t*, uint32_t, struct nt::event_data_descriptor_t*)>*) write_transfer_event_write_transfer;
    
    // [_tlgDefineProvider_annotation__Tlgg_hDXGITraceLoggingProviderProv]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5c4cc, 0x17e70 bytes
    // dxgi.dll .text:0x5c5bc, 0x17e70 bytes
    // dxgi.dll .text:0x682fc, 0x18b10 bytes
    // dxgi.dll .text:0x5da8c, 0x17e70 bytes
    //
    _w5(sdk::unknown_ptr) define_provider_annotation_tlgg_h_dxgi_trace_logging_provider_prov;
    
    // [_tlgWriteTransfer_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5c4d8, 0x17e70 bytes
    // dxgi.dll .text:0x5c5c8, 0x17e70 bytes
    // dxgi.dll .text:0x1de08, 0x18b10 bytes
    // dxgi.dll .text:0x482c0, 0x17e70 bytes
    //
    _w6(sdk::function<sdk::hresult(const struct tlg::provider_t*, const void*, const struct nt::guid_t*, const struct nt::guid_t*, uint32_t, struct nt::event_data_descriptor_t*)>*) write_transfer_etw_event_write_transfer;
    
    // [_tlgDefineProvider_annotation__TlgLdrpCastGuardTelemetryProviderProv]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xdcc18, 0x74648 bytes
    //
    _w7(sdk::unknown_ptr) define_provider_annotation_tlg_ldrp_cast_guard_telemetry_provider_prov;
    
    // [_tlgDefineProvider_annotation__TlgRtlpXfgAuditTraceLoggingProviderProv]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xdcc18, 0x74648 bytes
    //
    _w8(sdk::unknown_ptr) define_provider_annotation_tlg_rtlp_xfg_audit_trace_logging_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_hEtwUmDiagnosticProviderProv]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xdcc18, 0x74648 bytes
    //
    _w9(sdk::unknown_ptr) define_provider_annotation_tlgg_h_etw_um_diagnostic_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgmtaum_hTelemetryAssertDiagTrackProv]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xdcc18, 0x74648 bytes
    //
    _x0(sdk::function<void()>*) define_provider_annotation_tlgmtaum_h_telemetry_assert_diag_track_prov;
    
    // [_tlgDefineProvider_annotation__Tlgmtaum_hTelemetryAssertProv]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xdcc18, 0x74648 bytes
    //
    _x1(sdk::function<void()>*) define_provider_annotation_tlgmtaum_h_telemetry_assert_prov;
    
    // [_tlgDefineProvider_annotation__TlgCentennialIssueTracker_TraceLoggingProviderProv]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd0248, 0x6fc38 bytes
    // ntdll.dll .text:0xdcc18, 0x74648 bytes
    // ntdll.dll .text:0xd01c8, 0x6fc38 bytes
    //
    _x2(sdk::unknown_ptr) define_provider_annotation_tlg_centennial_issue_tracker_trace_logging_provider_prov;
    
    // [_tlgDefineProvider_annotation__TlgLdrpMuiResourceLoaderTraceLoggingProviderProv]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd0248, 0x6fc38 bytes
    // ntdll.dll .text:0xdcc18, 0x74648 bytes
    // ntdll.dll .text:0xd01c8, 0x6fc38 bytes
    //
    _x3(sdk::unknown_ptr) define_provider_annotation_tlg_ldrp_mui_resource_loader_trace_logging_provider_prov;
    
    // [_tlgDefineProvider_annotation__TlgRtlpHpTraceLoggingProviderProv]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd0248, 0x6fc38 bytes
    // ntdll.dll .text:0xdcc18, 0x74648 bytes
    // ntdll.dll .text:0xd01c8, 0x6fc38 bytes
    //
    _x4(sdk::unknown_ptr) define_provider_annotation_tlg_rtlp_hp_trace_logging_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_LibLoaderProviderProv]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd0248, 0x6fc38 bytes
    // ntdll.dll .text:0xdcc18, 0x74648 bytes
    // ntdll.dll .text:0xd01c8, 0x6fc38 bytes
    //
    _x5(sdk::unknown_ptr) define_provider_annotation_tlgg_lib_loader_provider_prov;
    
    // [_tlgDefineProvider_annotation__Tlgg_VsmEnclaveTraceProviderProv]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd0248, 0x6fc38 bytes
    // ntdll.dll .text:0xdcc18, 0x74648 bytes
    // ntdll.dll .text:0xd01c8, 0x6fc38 bytes
    //
    _x6(sdk::unknown_ptr) define_provider_annotation_tlgg_vsm_enclave_trace_provider_prov;
};
#include "magic/api.end.hpp"
