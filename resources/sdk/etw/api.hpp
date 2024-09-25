#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../nt/event_descriptor_t.hpp"
#include "../nt/event_info_class_t.hpp"
#include "../nt/event_data_descriptor_t.hpp"
#include "../nt/event_filter_descriptor_t.hpp"

#include "magic/api.start.hpp"
namespace etw
{
    // [EtwActivityIdControlKernel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x108e84, 0x32828 bytes
    //
    _m00(sdk::function<int32_t(uint32_t, const struct nt::guid_t**)>*) activity_id_control_kernel;
    
    // [EtwCheckSecurityLoggerAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x808b18, 0x1fd000 bytes
    //
    _m01(sdk::unknown_ptr) check_security_logger_access;
    
    // [EtwCleanupSiloState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9d57a4, 0x1fd000 bytes
    //
    _m02(sdk::unknown_ptr) cleanup_silo_state;
    
    // [EtwCpuStarvationProvRegHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc319b8, 0x1fd000 bytes
    //
    _m03(sdk::unknown_ptr) cpu_starvation_prov_reg_handle;
    
    // [EtwDeleteProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9d588c, 0x1fd000 bytes
    //
    _m04(sdk::unknown_ptr) delete_processor;
    
    // [ETW_EVENT_CAPTURE_STATE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0xeef8, 0x1fd000 bytes
    //
    _m05(sdk::unknown_ptr) event_capture_state;
    
    // [ETW_EVENT_DEBUG_LOOKUP_FAILED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x3c7a0, 0x1fd000 bytes
    //
    _m06(sdk::unknown_ptr) event_debug_lookup_failed;
    
    // [ETW_EVENT_LOST_SYSTEM_EVENT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0xe4a8, 0x1fd000 bytes
    //
    _m07(sdk::unknown_ptr) event_lost_system_event;
    
    // [ETW_EVENT_LOST_TLG_EVENT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x3d6c0, 0x1fd000 bytes
    //
    _m08(sdk::unknown_ptr) event_lost_tlg_event;
    
    // [ETW_EVENT_LOST_WPP_EVENT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x3d0a0, 0x1fd000 bytes
    //
    _m09(sdk::unknown_ptr) event_lost_wpp_event;
    
    // [ETW_EVENT_OUT_OF_LOGGER_SLOTS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x3d6d0, 0x1fd000 bytes
    //
    _m10(sdk::unknown_ptr) event_out_of_logger_slots;
    
    // [ETW_EVENT_PROVIDER_ACCESS_DENIED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0xe9e0, 0x1fd000 bytes
    //
    _m11(sdk::unknown_ptr) event_provider_access_denied;
    
    // [ETW_EVENT_TRACING_PROVIDER_DISABLING]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x3bdc0, 0x1fd000 bytes
    //
    _m12(sdk::unknown_ptr) event_tracing_provider_disabling;
    
    // [ETW_EVENT_TRACING_PROVIDER_ENABLE_CHANGING]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x3b810, 0x1fd000 bytes
    //
    _m13(sdk::unknown_ptr) event_tracing_provider_enable_changing;
    
    // [EtwGetInterruptTimeStamp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xb31a0, 0x32828 bytes
    //
    _m14(sdk::unknown_ptr) get_interrupt_time_stamp;
    
    // [EtwGetProcessAppSessionGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x53cb20, 0x32828 bytes
    //
    _m15(sdk::unknown_ptr) get_process_app_session_guid;
    
    // [EtwInitializeProcessorActivityId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x8321c4, 0x1fd000 bytes
    //
    _m16(sdk::unknown_ptr) initialize_processor_activity_id;
    
    // [EtwMetaProviderContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x8000, 0x1fd000 bytes
    //
    _m17(sdk::unknown_ptr) meta_provider_context;
    
    // [EtwProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x46730, 0x1fd000 bytes
    //
    _m18(sdk::unknown_ptr) provider;
    
    // [EtwProvider_Context]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc09340, 0x1fd000 bytes
    //
    _m19(sdk::unknown_ptr) provider_context;
    
    // [EtwTimLogControlProtectionKernelModeReturnMismatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5eb1ec, 0x1fd000 bytes
    //
    _m20(sdk::unknown_ptr) tim_log_control_protection_kernel_mode_return_mismatch;
    
    // [EtwTimLogRedirectionTrustPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9de17c, 0x1fd000 bytes
    //
    _m21(sdk::unknown_ptr) tim_log_redirection_trust_policy;
    
    // [EtwTimeProfileReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x86f40c, 0x1fd000 bytes
    //
    _m22(sdk::unknown_ptr) time_profile_reset;
    
    // [EtwTraceContFreeEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x309f1c, 0x1fd000 bytes
    //
    _m23(sdk::unknown_ptr) trace_cont_free_event;
    
    // [EtwTraceCumulativeDpcSoftTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5e7d58, 0x1fd000 bytes
    //
    _m24(sdk::unknown_ptr) trace_cumulative_dpc_soft_timeout;
    
    // [EtwTraceDeniedTokenCreation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6a4ee0, 0x32828 bytes
    //
    _m25(sdk::unknown_ptr) trace_denied_token_creation;
    
    // [EtwTraceDpcProfilingStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5e7fc4, 0x1fd000 bytes
    //
    _m26(sdk::unknown_ptr) trace_dpc_profiling_stack;
    
    // [EtwTraceDpcProfilingStackBegin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5e8054, 0x1fd000 bytes
    //
    _m27(sdk::unknown_ptr) trace_dpc_profiling_stack_begin;
    
    // [EtwTraceLongDpcDetectionEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5e8330, 0x1fd000 bytes
    //
    _m28(sdk::unknown_ptr) trace_long_dpc_detection_event;
    
    // [EtwTraceLongDpcMitigationEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5e83b0, 0x1fd000 bytes
    //
    _m29(sdk::unknown_ptr) trace_long_dpc_mitigation_event;
    
    // [EtwTraceProcessSetInPrivateMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5e87b0, 0x1fd000 bytes
    //
    _m30(sdk::unknown_ptr) trace_process_set_in_private_mode;
    
    // [EtwTracePsIoRateControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x41f734, 0x32828 bytes
    //
    _m31(sdk::unknown_ptr) trace_ps_io_rate_control;
    
    // [EtwTraceSingleDpcSoftTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5e8988, 0x1fd000 bytes
    //
    _m32(sdk::unknown_ptr) trace_single_dpc_soft_timeout;
    
    // [EtwTraceThreadFeedbackRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5e8aa0, 0x1fd000 bytes
    //
    _m33(sdk::unknown_ptr) trace_thread_feedback_read;
    
    // [EtwTraceWorkloadClassUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5e8ba4, 0x1fd000 bytes
    //
    _m34(sdk::unknown_ptr) trace_workload_class_update;
    
    // [EtwTraceXSchedulerPriorityKickReceive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5e8c24, 0x1fd000 bytes
    //
    _m35(sdk::unknown_ptr) trace_x_scheduler_priority_kick_receive;
    
    // [EtwTraceXSchedulerPriorityUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5e8c98, 0x1fd000 bytes
    //
    _m36(sdk::unknown_ptr) trace_x_scheduler_priority_update;
    
    // [EtwAdminlessProvRegHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc19aa8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc19b38, 0x1fe000 bytes
    //
    _m37(sdk::unknown_ptr) adminless_prov_reg_handle;
    
    // [EtwTimLogBlockNonCetBinaries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9dc900, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c7890, 0x1fe000 bytes
    //
    _m38(sdk::unknown_ptr) tim_log_block_non_cet_binaries;
    
    // [EtwTimLogControlProtectionUserModeReturnMismatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9dcce4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c7c50, 0x1fe000 bytes
    //
    _m39(sdk::unknown_ptr) tim_log_control_protection_user_mode_return_mismatch;
    
    // [EtwTimLogUserCetSetContextIpValidationFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9decdc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5c8140, 0x1fe000 bytes
    //
    _m40(sdk::unknown_ptr) tim_log_user_cet_set_context_ip_validation_failure;
    
    // [EtwTraceAdminlessAccessFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93cae4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93b3b4, 0x1fe000 bytes
    //
    _m41(sdk::unknown_ptr) trace_adminless_access_failure;
    
    // [EtwCovSampHash]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a82b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x468068, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a8134, 0x1fe000 bytes
    //
    _m42(sdk::function<uint64_t(uint64_t, uint64_t)>*) cov_samp_hash;
    
    // [EtwDeleteSiloState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a6cb4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x934b44, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x933414, 0x1fe000 bytes
    //
    _m43(sdk::unknown_ptr) delete_silo_state;
    
    // [ETW_EVENT_ENABLE_INFO]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2e4b8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c6c8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e7f8, 0x1fe000 bytes
    //
    _m44(sdk::unknown_ptr) event_enable_info;
    
    // [ETW_EVENT_GROUP_ENTRY_INFO]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2ec98, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3cfb8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2efd8, 0x1fe000 bytes
    //
    _m45(sdk::unknown_ptr) event_group_entry_info;
    
    // [ETW_EVENT_GROUP_JOIN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xb230, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf150, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa5b8, 0x1fe000 bytes
    //
    _m46(sdk::unknown_ptr) event_group_join;
    
    // [ETW_EVENT_GUID_ENTRY_INFO]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2ef58, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d3c8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f298, 0x1fe000 bytes
    //
    _m47(sdk::unknown_ptr) event_guid_entry_info;
    
    // [ETW_EVENT_REG_ENTRY_INFO]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2df88, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c0b0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e2c8, 0x1fe000 bytes
    //
    _m48(sdk::unknown_ptr) event_reg_entry_info;
    
    // [ETW_EVENT_SET_TRAITS_FAILED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2f1e8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d6b0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f528, 0x1fe000 bytes
    //
    _m49(sdk::unknown_ptr) event_set_traits_failed;
    
    // [EtwGetKernelTraceTimestampSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x25099c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d6ba0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b3ee4, 0x1fe000 bytes
    //
    _m50(sdk::unknown_ptr) get_kernel_trace_timestamp_silo;
    
    // [EtwLpacProvRegHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc19ac0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc319a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19b40, 0x1fe000 bytes
    //
    _m51(sdk::unknown_ptr) lpac_prov_reg_handle;
    
    // [EtwQueryProcessTelemetryCoverage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x931b60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9dba48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x930430, 0x1fe000 bytes
    //
    _m52(sdk::unknown_ptr) query_process_telemetry_coverage;
    
    // [EtwRegisterEventCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x939d40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9dfb40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x938610, 0x1fe000 bytes
    //
    _m53(sdk::unknown_ptr) register_event_callback;
    
    // [EtwSecurityMitigationsRegHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc19aa0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc319b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19b20, 0x1fe000 bytes
    //
    _m54(sdk::unknown_ptr) security_mitigations_reg_handle;
    
    // [EtwSetProcessTelemetryCoverage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x754c68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cde78, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75c528, 0x1fe000 bytes
    //
    _m55(sdk::unknown_ptr) set_process_telemetry_coverage;
    
    // [EtwTelemetryCoverageReport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x267d80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3deb90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x318c90, 0x1fe000 bytes
    //
    _m56(sdk::unknown_ptr) telemetry_coverage_report;
    
    // [EtwThreatIntProvRegHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc19898, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31f70, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc198f8, 0x1fe000 bytes
    //
    _m57(sdk::unknown_ptr) threat_int_prov_reg_handle;
    
    // [EtwTiLogAllocExecVm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5f482c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f80c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x708b2c, 0x1fe000 bytes
    //
    _m58(sdk::unknown_ptr) ti_log_alloc_exec_vm;
    
    // [EtwTiLogDeviceObjectLoadUnload]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5f9c8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f7f74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x702aac, 0x1fe000 bytes
    //
    _m59(sdk::unknown_ptr) ti_log_device_object_load_unload;
    
    // [EtwTiLogDriverObjectLoad]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7553e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dd8a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75ce30, 0x1fe000 bytes
    //
    _m60(sdk::unknown_ptr) ti_log_driver_object_load;
    
    // [EtwTiLogDriverObjectUnLoad]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x74c804, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cc1f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x754444, 0x1fe000 bytes
    //
    _m61(sdk::unknown_ptr) ti_log_driver_object_un_load;
    
    // [EtwTiLogInsertQueueUserApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x265f90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36f96c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x316720, 0x1fe000 bytes
    //
    _m62(sdk::unknown_ptr) ti_log_insert_queue_user_apc;
    
    // [EtwTiLogMapExecView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x674394, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9dc5f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e7728, 0x1fe000 bytes
    //
    _m63(sdk::unknown_ptr) ti_log_map_exec_view;
    
    // [EtwTiLogProtectExecVm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5f4a18, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x893b9a, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x708d18, 0x1fe000 bytes
    //
    _m64(sdk::unknown_ptr) ti_log_protect_exec_vm;
    
    // [EtwTiLogReadWriteVm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5f467c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f9548, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x708e3c, 0x1fe000 bytes
    //
    _m65(sdk::unknown_ptr) ti_log_read_write_vm;
    
    // [EtwTiLogSetContextThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6f46f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7db9d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fd404, 0x1fe000 bytes
    //
    _m66(sdk::unknown_ptr) ti_log_set_context_thread;
    
    // [EtwTiLogSuspendResumeProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9388cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9dc798, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93719c, 0x1fe000 bytes
    //
    _m67(sdk::unknown_ptr) ti_log_suspend_resume_process;
    
    // [EtwTiLogSuspendResumeThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x938a34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x893e74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x937304, 0x1fe000 bytes
    //
    _m68(sdk::unknown_ptr) ti_log_suspend_resume_thread;
    
    // [EtwTimLogProhibitChildProcessCreation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x713794, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9dd4fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71b1e0, 0x1fe000 bytes
    //
    _m69(sdk::unknown_ptr) tim_log_prohibit_child_process_creation;
    
    // [EtwTimLogProhibitDynamicCode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x938b98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9dda38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x937468, 0x1fe000 bytes
    //
    _m70(sdk::unknown_ptr) tim_log_prohibit_dynamic_code;
    
    // [EtwTimLogProhibitLowILImageMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x938be8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9dda88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9374b8, 0x1fe000 bytes
    //
    _m71(sdk::unknown_ptr) tim_log_prohibit_low_il_image_map;
    
    // [EtwTimLogProhibitNonMicrosoftBinaries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x938ee8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ddd98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9377b8, 0x1fe000 bytes
    //
    _m72(sdk::unknown_ptr) tim_log_prohibit_non_microsoft_binaries;
    
    // [EtwTimLogProhibitWin32kSystemCalls]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x939250, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9de128, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x937b20, 0x1fe000 bytes
    //
    _m73(sdk::unknown_ptr) tim_log_prohibit_win32k_system_calls;
    
    // [EtwTraceIdealProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a1874, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e81c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a16f4, 0x1fe000 bytes
    //
    _m74(sdk::unknown_ptr) trace_ideal_processor;
    
    // [EtwTraceJobSendNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x932d8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d8f7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93165c, 0x1fe000 bytes
    //
    _m75(sdk::unknown_ptr) trace_job_send_notification;
    
    // [EtwTraceJobServerSiloMonitorCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c2c84, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3da2f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c3a94, 0x1fe000 bytes
    //
    _m76(sdk::unknown_ptr) trace_job_server_silo_monitor_callback;
    
    // [EtwTraceJobServerSiloStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x932e2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d901c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9316fc, 0x1fe000 bytes
    //
    _m77(sdk::unknown_ptr) trace_job_server_silo_state_change;
    
    // [EtwTraceLeapSecondDataParseFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x933354, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d9538, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x931c24, 0x1fe000 bytes
    //
    _m78(sdk::unknown_ptr) trace_leap_second_data_parse_failure;
    
    // [EtwTraceLeapSecondDataUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x785e1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85f144, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78fbbc, 0x1fe000 bytes
    //
    _m79(sdk::unknown_ptr) trace_leap_second_data_update;
    
    // [EtwTraceLpacAccessFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x93ce00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e0ba4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93b6d0, 0x1fe000 bytes
    //
    _m80(sdk::unknown_ptr) trace_lpac_access_failure;
    
    // [EtwTraceRetpolineExit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a20e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e8870, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a1f60, 0x1fe000 bytes
    //
    _m81(sdk::unknown_ptr) trace_retpoline_exit;
    
    // [EtwTraceSiloDcEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a21c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e8950, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a2040, 0x1fe000 bytes
    //
    _m82(sdk::unknown_ptr) trace_silo_dc_event;
    
    // [EtwTraceSiloKernelEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2b70dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f5e60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2a8ca4, 0x1fe000 bytes
    //
    _m83(sdk::unknown_ptr) trace_silo_kernel_event;
    
    // [EtwTraceSiloTimedEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5a21f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x465856, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a2078, 0x1fe000 bytes
    //
    _m84(sdk::unknown_ptr) trace_silo_timed_event;
    
    // [EtwTraceThreadSetName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5f4c7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x780428, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x639ed8, 0x1fe000 bytes
    //
    _m85(sdk::unknown_ptr) trace_thread_set_name;
    
    // [EtwTraceTimeZoneBiasChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9335a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d978c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x931e78, 0x1fe000 bytes
    //
    _m86(sdk::unknown_ptr) trace_time_zone_bias_change;
    
    // [EtwTraceTimeZoneInformationRefresh]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7865d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84d338, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x790374, 0x1fe000 bytes
    //
    _m87(sdk::unknown_ptr) trace_time_zone_information_refresh;
    
    // [EtwActivityIdControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc145c, 0x32828 bytes
    // ntoskrnl.exe .text:0x215e50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e9ba0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x241b50, 0x1fe000 bytes
    //
    _m88(sdk::function<int32_t(uint32_t, struct nt::guid_t*)>*) activity_id_control;
    
    // [EtwApiCallsProvRegHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe968, 0x32828 bytes
    // ntoskrnl.exe .data:0xc198a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31f68, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19900, 0x1fe000 bytes
    //
    _m89(sdk::unknown_ptr) api_calls_prov_reg_handle;
    
    // [EtwAppCompatProvRegHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe960, 0x32828 bytes
    // ntoskrnl.exe .data:0xc198b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc319f8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19f38, 0x1fe000 bytes
    //
    _m90(sdk::unknown_ptr) app_compat_prov_reg_handle;
    
    // [EtwBootPerfData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce5c0, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd54790, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f750, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54790, 0x1fe000 bytes
    //
    _m91(sdk::unknown_ptr) boot_perf_data;
    
    // [EtwCPUSpeedInMHz]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe200, 0x32828 bytes
    // ntoskrnl.exe .data:0xc198f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc317dc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19940, 0x1fe000 bytes
    //
    _m92(sdk::unknown_ptr) cpu_speed_in_m_hz;
    
    // [EtwCVEAuditProvRegHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe3e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19ac8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc319a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19b28, 0x1fe000 bytes
    //
    _m93(sdk::unknown_ptr) cve_audit_prov_reg_handle;
    
    // [EtwDereferenceSpinLockCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a911c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x939c74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9dfa7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x938544, 0x1fe000 bytes
    //
    _m94(sdk::unknown_ptr) dereference_spin_lock_counters;
    
    // [EtwEnableTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50eb48, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76d110, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x843d10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x774b80, 0x1fe000 bytes
    //
    _m95(sdk::function<int32_t(const struct nt::guid_t*, const struct nt::guid_t*, uint64_t, uint32_t, uint8_t, uint64_t, uint64_t, uint32_t)>*) enable_trace;
    
    // [ETW_EVENT_BACKING_FILE_FULL]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27ff88, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2eba8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11ac0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2eee8, 0x1fe000 bytes
    //
    _m96(sdk::unknown_ptr) event_backing_file_full;
    
    // [ETW_EVENT_CHANGE_SESSION_SD]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27ff58, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2f050, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d520, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f390, 0x1fe000 bytes
    //
    _m97(sdk::unknown_ptr) event_change_session_sd;
    
    // [EtwEventEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xebfd0, 0x32828 bytes
    // ntoskrnl.exe .text:0x301210, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x21d490, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26b690, 0x1fe000 bytes
    //
    _m98(sdk::function<uint8_t(uint64_t, const struct nt::event_descriptor_t*)>*) event_enabled;
    
    // [ETW_EVENT_FLUSH_TRACE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25fff8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa5d0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11a40, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xaa48, 0x1fe000 bytes
    //
    _m99(sdk::unknown_ptr) event_flush_trace;
    
    // [ETW_EVENT_LOST_EVENT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27ff38, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb7f0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11aa0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa200, 0x1fe000 bytes
    //
    _n00(sdk::unknown_ptr) event_lost_event;
    
    // [ETW_EVENT_MAX_FILE_SIZE_REACHED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e0d0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2eb78, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3ce90, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2eeb8, 0x1fe000 bytes
    //
    _n01(sdk::unknown_ptr) event_max_file_size_reached;
    
    // [ETW_EVENT_PROVIDER_DISABLED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e1f8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa780, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe560, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xaaf0, 0x1fe000 bytes
    //
    _n02(sdk::unknown_ptr) event_provider_disabled;
    
    // [ETW_EVENT_PROVIDER_ENABLED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25feb0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa770, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe550, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xab00, 0x1fe000 bytes
    //
    _n03(sdk::unknown_ptr) event_provider_enabled;
    
    // [ETW_EVENT_PROVIDER_REGISTER]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25fc40, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xcc48, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf140, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa5c8, 0x1fe000 bytes
    //
    _n04(sdk::unknown_ptr) event_provider_register;
    
    // [ETW_EVENT_PROVIDER_UNREGISTERS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2604e0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xc0e8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xfa90, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xba48, 0x1fe000 bytes
    //
    _n05(sdk::unknown_ptr) event_provider_unregisters;
    
    // [ETW_EVENT_SAVE_PERSISTED_LOGGER_ERROR]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27ff08, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2f4f8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3da68, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f838, 0x1fe000 bytes
    //
    _n06(sdk::unknown_ptr) event_save_persisted_logger_error;
    
    // [ETW_EVENT_SAVE_PERSISTED_LOGGER_START]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x261890, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xfdf0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x149e8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xf948, 0x1fe000 bytes
    //
    _n07(sdk::unknown_ptr) event_save_persisted_logger_start;
    
    // [ETW_EVENT_SAVE_PERSISTED_LOGGER_STOP]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27ff18, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e800, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3ca78, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2eb40, 0x1fe000 bytes
    //
    _n08(sdk::unknown_ptr) event_save_persisted_logger_stop;
    
    // [ETW_EVENT_SESSION_END_FAILED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e0c0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2f030, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d500, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f370, 0x1fe000 bytes
    //
    _n09(sdk::unknown_ptr) event_session_end_failed;
    
    // [ETW_EVENT_SESSION_INFO]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27ff28, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2efb8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d468, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f2f8, 0x1fe000 bytes
    //
    _n10(sdk::unknown_ptr) event_session_info;
    
    // [ETW_EVENT_SESSION_START_FAILED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27ff78, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e858, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3cad8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2eb98, 0x1fe000 bytes
    //
    _n11(sdk::unknown_ptr) event_session_start_failed;
    
    // [ETW_EVENT_START_TRACE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x260150, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb618, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe7d0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xaad0, 0x1fe000 bytes
    //
    _n12(sdk::unknown_ptr) event_start_trace;
    
    // [ETW_EVENT_STOP_TRACE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x260160, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa598, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11a90, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xaa80, 0x1fe000 bytes
    //
    _n13(sdk::unknown_ptr) event_stop_trace;
    
    // [ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27ff68, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2edc0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d160, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f100, 0x1fe000 bytes
    //
    _n14(sdk::unknown_ptr) event_switch_to_new_file_failed;
    
    // [ETW_EVENT_UPDATE_TRACE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x260130, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa600, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11a70, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb4c8, 0x1fe000 bytes
    //
    _n15(sdk::unknown_ptr) event_update_trace;
    
    // [ETW_EVENT_USER_STACK_TRACE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27ff48, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e2c0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c458, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e600, 0x1fe000 bytes
    //
    _n16(sdk::unknown_ptr) event_user_stack_trace;
    
    // [ETW_EVENT_WRITE_FAILED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27ff98, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2df08, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c020, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e248, 0x1fe000 bytes
    //
    _n17(sdk::unknown_ptr) event_write_failed;
    
    // [EtwExitProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f9e28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x705d24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x767978, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x660088, 0x1fe000 bytes
    //
    _n18(sdk::unknown_ptr) exit_process;
    
    // [EtwGetKernelTraceTimestamp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbf904, 0x32828 bytes
    // ntoskrnl.exe .text:0x242c70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d6b80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ee940, 0x1fe000 bytes
    //
    _n19(sdk::unknown_ptr) get_kernel_trace_timestamp;
    
    // [EtwGetProcessorBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x227748, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a45c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e7220, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a4448, 0x1fe000 bytes
    //
    _n20(sdk::unknown_ptr) get_processor_buffer;
    
    // [EtwGetProviderIdFromHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10ac30, 0x32828 bytes
    // ntoskrnl.exe .text:0x39a528, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a7a34, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39b9e8, 0x1fe000 bytes
    //
    _n21(sdk::unknown_ptr) get_provider_id_from_handle;
    
    // [EtwInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x548100, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78ff10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x831a40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x785f28, 0x1fe000 bytes
    //
    _n22(sdk::unknown_ptr) initialize;
    
    // [EtwInitializeProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x548130, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78fff8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8321e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x786010, 0x1fe000 bytes
    //
    _n23(sdk::unknown_ptr) initialize_processor;
    
    // [EtwInitializeSiloState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x555e9c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x791d74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d590c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79f010, 0x1fe000 bytes
    //
    _n24(sdk::unknown_ptr) initialize_silo_state;
    
    // [EtwKernelMemoryRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a4e54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x932868, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d8a58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x931138, 0x1fe000 bytes
    //
    _n25(sdk::unknown_ptr) kernel_memory_rundown;
    
    // [EtwKernelProvRegHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe958, 0x32828 bytes
    // ntoskrnl.exe .data:0xc198a8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31f78, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19f30, 0x1fe000 bytes
    //
    _n26(sdk::unknown_ptr) kernel_prov_reg_handle;
    
    // [EtwLogPfnInfoRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a965c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93a474, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e21f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x938d44, 0x1fe000 bytes
    //
    _n27(sdk::unknown_ptr) log_pfn_info_rundown;
    
    // [EtwPerfFreq]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe208, 0x32828 bytes
    // ntoskrnl.exe .data:0xc198e8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc318a8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19948, 0x1fe000 bytes
    //
    _n28(sdk::unknown_ptr) perf_freq;
    
    // [EtwProviderEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd614c, 0x32828 bytes
    // ntoskrnl.exe .text:0x20c4a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ed8e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x357990, 0x1fe000 bytes
    //
    _n29(sdk::function<uint8_t(uint64_t, uint8_t, uint64_t)>*) provider_enabled;
    
    // [EtwQueryPerformanceTraceInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a6dfc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x934c8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8351c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93355c, 0x1fe000 bytes
    //
    _n30(sdk::unknown_ptr) query_performance_trace_information;
    
    // [EtwQueryProcessTelemetryInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46f5c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x704834, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ea0bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x665c74, 0x1fe000 bytes
    //
    _n31(sdk::unknown_ptr) query_process_telemetry_info;
    
    // [EtwQueryTraceHandleByLoggerName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x510d2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76cd0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e2948, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77477c, 0x1fe000 bytes
    //
    _n32(sdk::unknown_ptr) query_trace_handle_by_logger_name;
    
    // [EtwReferenceSpinLockCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a916c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x939cd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9dfad8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9385a0, 0x1fe000 bytes
    //
    _n33(sdk::unknown_ptr) reference_spin_lock_counters;
    
    // [EtwRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53ab2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x742fd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a14b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74ac10, 0x1fe000 bytes
    //
    _n34(sdk::function<int32_t(const struct nt::guid_t*, sdk::function<void(const struct nt::guid_t*, uint32_t, uint8_t, uint64_t, uint64_t, struct nt::event_filter_descriptor_t*, void*)>*, void*, uint64_t*)>*) register_;
    
    // [EtwRegisterClassicProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50a0f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x742f80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a1460, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74abc0, 0x1fe000 bytes
    //
    _n35(sdk::function<int32_t(const struct nt::guid_t*, uint32_t, sdk::function<void(const struct nt::guid_t*, uint8_t, void*, void*)>*, void*, uint64_t*)>*) register_classic_provider;
    
    // [EtwRegisterCounters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55f8b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7ae118, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86393c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b5d38, 0x1fe000 bytes
    //
    _n36(sdk::unknown_ptr) register_counters;
    
    // [ETW_REGISTRY_EVENT_CLOSE_KEY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280268, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e348, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c530, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e688, 0x1fe000 bytes
    //
    _n37(sdk::unknown_ptr) registry_event_close_key;
    
    // [ETW_REGISTRY_EVENT_CREATE_KEY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280328, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2dff8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c110, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e338, 0x1fe000 bytes
    //
    _n38(sdk::unknown_ptr) registry_event_create_key;
    
    // [ETW_REGISTRY_EVENT_DELETE_KEY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280308, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2f0d8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d570, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f418, 0x1fe000 bytes
    //
    _n39(sdk::unknown_ptr) registry_event_delete_key;
    
    // [ETW_REGISTRY_EVENT_DELETE_VALUE_KEY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2802d8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2ddd8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3bea0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e118, 0x1fe000 bytes
    //
    _n40(sdk::unknown_ptr) registry_event_delete_value_key;
    
    // [ETW_REGISTRY_EVENT_ENUMERATE_KEY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2802b8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e408, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c608, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e748, 0x1fe000 bytes
    //
    _n41(sdk::unknown_ptr) registry_event_enumerate_key;
    
    // [ETW_REGISTRY_EVENT_ENUMERATE_VALUE_KEY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2802a8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2db98, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3bbc0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2ded8, 0x1fe000 bytes
    //
    _n42(sdk::unknown_ptr) registry_event_enumerate_value_key;
    
    // [ETW_REGISTRY_EVENT_FLUSH_KEY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280278, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e5f8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c850, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e938, 0x1fe000 bytes
    //
    _n43(sdk::unknown_ptr) registry_event_flush_key;
    
    // [ETW_REGISTRY_EVENT_OPEN_KEY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280318, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2dac0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3bad8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2de00, 0x1fe000 bytes
    //
    _n44(sdk::unknown_ptr) registry_event_open_key;
    
    // [ETW_REGISTRY_EVENT_QUERY_KEY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2802f8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e008, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c130, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e348, 0x1fe000 bytes
    //
    _n45(sdk::unknown_ptr) registry_event_query_key;
    
    // [ETW_REGISTRY_EVENT_QUERY_MULTIPLE_VALUE_KEY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280298, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d838, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b800, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2db78, 0x1fe000 bytes
    //
    _n46(sdk::unknown_ptr) registry_event_query_multiple_value_key;
    
    // [ETW_REGISTRY_EVENT_QUERY_SECURITY_KEY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280258, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e8a8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3cb18, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2ebe8, 0x1fe000 bytes
    //
    _n47(sdk::unknown_ptr) registry_event_query_security_key;
    
    // [ETW_REGISTRY_EVENT_QUERY_VALUE_KEY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2802c8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e598, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c800, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e8d8, 0x1fe000 bytes
    //
    _n48(sdk::unknown_ptr) registry_event_query_value_key;
    
    // [ETW_REGISTRY_EVENT_SET_INFORMATION_KEY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280288, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e828, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3ca88, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2eb68, 0x1fe000 bytes
    //
    _n49(sdk::unknown_ptr) registry_event_set_information_key;
    
    // [ETW_REGISTRY_EVENT_SET_SECURITY_KEY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280248, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2eaf8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3cdd0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2ee38, 0x1fe000 bytes
    //
    _n50(sdk::unknown_ptr) registry_event_set_security_key;
    
    // [ETW_REGISTRY_EVENT_SET_VALUE_KEY]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2802e8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e298, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c448, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e5d8, 0x1fe000 bytes
    //
    _n51(sdk::unknown_ptr) registry_event_set_value_key;
    
    // [EtwSecondaryDumpDataGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x286788, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x3a330, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x467c0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x3a670, 0x1fe000 bytes
    //
    _n52(sdk::unknown_ptr) secondary_dump_data_guid;
    
    // [EtwSendTraceBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x224e84, 0x32828 bytes
    // ntoskrnl.exe .text:0x59ff60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ea5d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59fde0, 0x1fe000 bytes
    //
    _n53(sdk::function<int32_t(uint64_t, void*, uint32_t, sdk::function<void(int32_t, void*, void*)>*, void*)>*) send_trace_buffer;
    
    // [EtwSetInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5396e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x762650, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d4940, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7698f0, 0x1fe000 bytes
    //
    _n54(sdk::function<int32_t(uint64_t, enum nt::event_info_class_t, void*, uint32_t)>*) set_information;
    
    // [EtwSetPerformanceTraceInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a74b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x935380, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d5968, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x933c50, 0x1fe000 bytes
    //
    _n55(sdk::unknown_ptr) set_performance_trace_information;
    
    // [EtwShutdown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x521268, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x757f04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d6600, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75f950, 0x1fe000 bytes
    //
    _n56(sdk::unknown_ptr) shutdown;
    
    // [EtwStartAutoLogger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50fd2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x792710, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x849a08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79f9ac, 0x1fe000 bytes
    //
    _n57(sdk::unknown_ptr) start_auto_logger;
    
    // [EtwTraceAntiStarvationBoost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1577a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a140c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e7c7c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a128c, 0x1fe000 bytes
    //
    _n58(sdk::unknown_ptr) trace_anti_starvation_boost;
    
    // [EtwTraceAppStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x424410, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x703590, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76a3f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6641a0, 0x1fe000 bytes
    //
    _n59(sdk::unknown_ptr) trace_app_state_change;
    
    // [EtwTraceAutoBoostClearFloor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x225668, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a1490, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4652a2, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a1310, 0x1fe000 bytes
    //
    _n60(sdk::unknown_ptr) trace_auto_boost_clear_floor;
    
    // [EtwTraceAutoBoostEntryExhaustion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x157824, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ef8a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x46532e, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1180, 0x1fe000 bytes
    //
    _n61(sdk::unknown_ptr) trace_auto_boost_entry_exhaustion;
    
    // [EtwTraceAutoBoostSetFloor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2256dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a151c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4653ba, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a139c, 0x1fe000 bytes
    //
    _n62(sdk::unknown_ptr) trace_auto_boost_set_floor;
    
    // [EtwTraceContextSwap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9cdb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a5400, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b2560, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3aa680, 0x1fe000 bytes
    //
    _n63(sdk::unknown_ptr) trace_context_swap;
    
    // [EtwTraceCpuCacheFlush]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2257ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a15f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e7d00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a1474, 0x1fe000 bytes
    //
    _n64(sdk::unknown_ptr) trace_cpu_cache_flush;
    
    // [EtwTraceDebuggerEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2257fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a164c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e7e14, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a14cc, 0x1fe000 bytes
    //
    _n65(sdk::unknown_ptr) trace_debugger_event;
    
    // [EtwTraceDequeueWork]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x225874, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a16cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e7e94, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a154c, 0x1fe000 bytes
    //
    _n66(sdk::unknown_ptr) trace_dequeue_work;
    
    // [EtwTraceDpcEnqueueEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2258f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a1754, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e7f20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a15d4, 0x1fe000 bytes
    //
    _n67(sdk::unknown_ptr) trace_dpc_enqueue_event;
    
    // [EtwTraceDuplicateHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a5104, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x93290c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d8afc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9311dc, 0x1fe000 bytes
    //
    _n68(sdk::unknown_ptr) trace_duplicate_handle;
    
    // [EtwTraceEnqueueWork]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x225980, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a17f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e8140, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a1670, 0x1fe000 bytes
    //
    _n69(sdk::unknown_ptr) trace_enqueue_work;
    
    // [EtwTraceEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x224fec, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a00d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x466742, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59ff50, 0x1fe000 bytes
    //
    _n70(sdk::unknown_ptr) trace_event;
    
    // [EtwTraceFreezeThawProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a5270, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x932a7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d8c6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x93134c, 0x1fe000 bytes
    //
    _n71(sdk::unknown_ptr) trace_freeze_thaw_process;
    
    // [EtwTraceInswapProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2259fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a18f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e8240, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a1770, 0x1fe000 bytes
    //
    _n72(sdk::unknown_ptr) trace_inswap_process;
    
    // [EtwTraceIoTimerEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x225a7c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a1974, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e82c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a17f4, 0x1fe000 bytes
    //
    _n73(sdk::unknown_ptr) trace_io_timer_event;
    
    // [EtwTraceJob]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a5340, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x932b58, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d8d48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x931428, 0x1fe000 bytes
    //
    _n74(sdk::unknown_ptr) trace_job;
    
    // [EtwTraceJobAssignProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a53ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x932c38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d8e28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x931508, 0x1fe000 bytes
    //
    _n75(sdk::unknown_ptr) trace_job_assign_process;
    
    // [EtwTraceJobRemoveProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a5480, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x932ce8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d8ed8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9315b8, 0x1fe000 bytes
    //
    _n76(sdk::unknown_ptr) trace_job_remove_process;
    
    // [EtwTraceJobSetQuery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a5514, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x932eec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d90dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9317bc, 0x1fe000 bytes
    //
    _n77(sdk::unknown_ptr) trace_job_set_query;
    
    // [EtwTraceKernelEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xdf0b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x20d70c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x336548, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2a9948, 0x1fe000 bytes
    //
    _n78(sdk::unknown_ptr) trace_kernel_event;
    
    // [EtwTraceMemoryAcg]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd6100, 0x32828 bytes
    // ntoskrnl.exe .text:0x20c444, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ed884, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x357934, 0x1fe000 bytes
    //
    _n79(sdk::unknown_ptr) trace_memory_acg;
    
    // [EtwTraceObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a5900, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x933434, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d9618, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x931d04, 0x1fe000 bytes
    //
    _n80(sdk::unknown_ptr) trace_object;
    
    // [EtwTraceObjectOperation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x225ae4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a19e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e8448, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a1860, 0x1fe000 bytes
    //
    _n81(sdk::unknown_ptr) trace_object_operation;
    
    // [EtwTracePageFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x225c48, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a1b5c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x465492, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a19dc, 0x1fe000 bytes
    //
    _n82(sdk::unknown_ptr) trace_page_fault;
    
    // [EtwTracePool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x157894, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a1cf4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e85c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a1b74, 0x1fe000 bytes
    //
    _n83(sdk::unknown_ptr) trace_pool;
    
    // [EtwTracePriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x225d70, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a1ed4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x46564a, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a1d54, 0x1fe000 bytes
    //
    _n84(sdk::unknown_ptr) trace_priority;
    
    // [EtwTraceProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f4320, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60b704, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73f370, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d8274, 0x1fe000 bytes
    //
    _n85(sdk::unknown_ptr) trace_process;
    
    // [EtwTraceProcessTerminate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8a68c, 0x32828 bytes
    // ntoskrnl.exe .text:0x20d69c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x335838, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3596bc, 0x1fe000 bytes
    //
    _n86(sdk::unknown_ptr) trace_process_terminate;
    
    // [EtwTraceRaw]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x225424, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a0578, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ea768, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a03f8, 0x1fe000 bytes
    //
    _n87(sdk::unknown_ptr) trace_raw;
    
    // [EtwTraceReadyThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x225e28, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a1fa0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x465716, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a1e20, 0x1fe000 bytes
    //
    _n88(sdk::unknown_ptr) trace_ready_thread;
    
    // [EtwTraceShouldYieldProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x225f1c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a214c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e88dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a1fcc, 0x1fe000 bytes
    //
    _n89(sdk::unknown_ptr) trace_should_yield_processor;
    
    // [EtwTraceSystemTimeChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3cfffc, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x995348, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa96344, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x994358, 0x1fe000 bytes
    //
    _n90(sdk::unknown_ptr) trace_system_time_change;
    
    // [EtwTraceThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x459e7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x605414, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x70e21c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x700740, 0x1fe000 bytes
    //
    _n91(sdk::unknown_ptr) trace_thread;
    
    // [EtwTraceThreadAffinity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x225f88, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a2370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4659cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a21f0, 0x1fe000 bytes
    //
    _n92(sdk::unknown_ptr) trace_thread_affinity;
    
    // [EtwTraceThreadWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x226004, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a23f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e8b20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a2270, 0x1fe000 bytes
    //
    _n93(sdk::unknown_ptr) trace_thread_work_item;
    
    // [EtwTraceThreadWorkOnBehalfUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c4068, 0x32828 bytes
    // ntoskrnl.exe .text:0x303760, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36af54, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26dbe0, 0x1fe000 bytes
    //
    _n94(sdk::unknown_ptr) trace_thread_work_on_behalf_update;
    
    // [EtwTraceTimedEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x727a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x251460, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x465a4c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ff520, 0x1fe000 bytes
    //
    _n95(sdk::unknown_ptr) trace_timed_event;
    
    // [EtwTraceWakeCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a5a54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9336bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d989c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x931f8c, 0x1fe000 bytes
    //
    _n96(sdk::unknown_ptr) trace_wake_counter;
    
    // [EtwTraceWakeEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a5b08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x933778, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d9958, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x932048, 0x1fe000 bytes
    //
    _n97(sdk::unknown_ptr) trace_wake_event;
    
    // [EtwTraceWorkingSetInSwapStoreFail]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a43b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67b0b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d99c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x655d50, 0x1fe000 bytes
    //
    _n98(sdk::unknown_ptr) trace_working_set_in_swap_store_fail;
    
    // [EtwTraceWorkingSetSwap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a4410, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x695010, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x778644, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x655690, 0x1fe000 bytes
    //
    _n99(sdk::unknown_ptr) trace_working_set_swap;
    
    // [EtwUnregister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5394b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x740650, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b6c40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x748290, 0x1fe000 bytes
    //
    _o00(sdk::function<int32_t(uint64_t)>*) unregister;
    
    // [EtwWmitraceWork]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fe948, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19e30, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31e48, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19e94, 0x1fe000 bytes
    //
    _o01(sdk::unknown_ptr) wmitrace_work;
    
    // [EtwWmitraceWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a8bec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9396e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9df4e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x937fb4, 0x1fe000 bytes
    //
    _o02(sdk::unknown_ptr) wmitrace_worker;
    
    // [EtwWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf2ad0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d5b80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d52a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x256bf0, 0x1fe000 bytes
    //
    _o03(sdk::function<int32_t(uint64_t, const struct nt::event_descriptor_t*, const struct nt::guid_t*, uint32_t, struct nt::event_data_descriptor_t*)>*) write;
    
    // [EtwWriteEndScenario]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53886c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76b8c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x850f70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x773330, 0x1fe000 bytes
    //
    _o04(sdk::function<int32_t(uint64_t, const struct nt::event_descriptor_t*, const struct nt::guid_t*, uint32_t, struct nt::event_data_descriptor_t*)>*) write_end_scenario;
    
    // [EtwWriteErrorLogEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x532d3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x735828, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e25c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73d468, 0x1fe000 bytes
    //
    _o05(sdk::unknown_ptr) write_error_log_entry;
    
    // [EtwWriteEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf2b10, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d5c00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2984a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x256c70, 0x1fe000 bytes
    //
    _o06(sdk::function<int32_t(uint64_t, const struct nt::event_descriptor_t*, uint64_t, uint32_t, const struct nt::guid_t*, const struct nt::guid_t*, uint32_t, struct nt::event_data_descriptor_t*)>*) write_ex;
    
    // [EtwWriteKMSecurityEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1411f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3bba74, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cf8ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bc7b4, 0x1fe000 bytes
    //
    _o07(sdk::function<int32_t(const struct nt::event_descriptor_t*, const struct nt::guid_t*, uint32_t, struct nt::event_data_descriptor_t*)>*) write_km_security_event;
    
    // [EtwWriteStartScenario]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x537d48, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76b980, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x867fe0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7733f0, 0x1fe000 bytes
    //
    _o08(sdk::function<int32_t(uint64_t, const struct nt::event_descriptor_t*, struct nt::guid_t*, uint32_t, struct nt::event_data_descriptor_t*)>*) write_start_scenario;
    
    // [EtwWriteString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2247e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x59f910, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5ea270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59f790, 0x1fe000 bytes
    //
    _o09(sdk::function<int32_t(uint64_t, uint8_t, uint64_t, const struct nt::guid_t*, const wchar_t*)>*) write_string;
    
    // [EtwWriteTransfer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x106228, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d5bc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x361c40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x256c30, 0x1fe000 bytes
    //
    _o10(sdk::function<int32_t(uint64_t, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const struct nt::guid_t*, uint32_t, struct nt::event_data_descriptor_t*)>*) write_transfer;
    
    // [EtwTraceFlipManagerAddBuffer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1669a0, 0x27ef0 bytes
    //
    _o11(sdk::unknown_ptr) trace_flip_manager_add_buffer;
    
    // [EtwTraceFlipManagerAddContent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1669e0, 0x27ef0 bytes
    //
    _o12(sdk::unknown_ptr) trace_flip_manager_add_content;
    
    // [EtwTraceFlipManagerBindingInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x166a10, 0x27ef0 bytes
    //
    _o13(sdk::unknown_ptr) trace_flip_manager_binding_info;
    
    // [EtwTraceFlipManagerBindingStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x166a40, 0x27ef0 bytes
    //
    _o14(sdk::unknown_ptr) trace_flip_manager_binding_start;
    
    // [EtwTraceFlipManagerBindingStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x166a70, 0x27ef0 bytes
    //
    _o15(sdk::unknown_ptr) trace_flip_manager_binding_stop;
    
    // [EtwTraceFlipManagerBufferAvailable]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x166aa0, 0x27ef0 bytes
    //
    _o16(sdk::unknown_ptr) trace_flip_manager_buffer_available;
    
    // [EtwTraceFlipManagerCancelPosted]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x166ad0, 0x27ef0 bytes
    //
    _o17(sdk::unknown_ptr) trace_flip_manager_cancel_posted;
    
    // [EtwTraceFlipManagerCanceledPresentShown]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xe7810, 0x27ef0 bytes
    //
    _o18(sdk::unknown_ptr) trace_flip_manager_canceled_present_shown;
    
    // [EtwTraceFlipManagerContentFlip]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x166b00, 0x27ef0 bytes
    //
    _o19(sdk::unknown_ptr) trace_flip_manager_content_flip;
    
    // [EtwTraceFlipManagerContentRebind]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x166b30, 0x27ef0 bytes
    //
    _o20(sdk::unknown_ptr) trace_flip_manager_content_rebind;
    
    // [EtwTraceFlipManagerContentUnbind]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x166b80, 0x27ef0 bytes
    //
    _o21(sdk::unknown_ptr) trace_flip_manager_content_unbind;
    
    // [EtwTraceFlipManagerCreate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x166bb0, 0x27ef0 bytes
    //
    _o22(sdk::unknown_ptr) trace_flip_manager_create;
    
    // [EtwTraceFlipManagerDestroy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x166be0, 0x27ef0 bytes
    //
    _o23(sdk::unknown_ptr) trace_flip_manager_destroy;
    
    // [EtwTraceFlipManagerLost]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xe7850, 0x27ef0 bytes
    //
    _o24(sdk::unknown_ptr) trace_flip_manager_lost;
    
    // [EtwTraceFlipManagerNoOpPresent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x166c10, 0x27ef0 bytes
    //
    _o25(sdk::unknown_ptr) trace_flip_manager_no_op_present;
    
    // [EtwTraceFlipManagerPresentCanceled]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x166c40, 0x27ef0 bytes
    //
    _o26(sdk::unknown_ptr) trace_flip_manager_present_canceled;
    
    // [EtwTraceFlipManagerPresentConfirmed]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x166f20, 0x27ef0 bytes
    //
    _o27(sdk::unknown_ptr) trace_flip_manager_present_confirmed;
    
    // [EtwTraceFlipManagerPresentDeferred]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x166f50, 0x27ef0 bytes
    //
    _o28(sdk::unknown_ptr) trace_flip_manager_present_deferred;
    
    // [EtwTraceFlipManagerPresentIFlipCompleted]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x167230, 0x27ef0 bytes
    //
    _o29(sdk::unknown_ptr) trace_flip_manager_present_i_flip_completed;
    
    // [EtwTraceFlipManagerPresentIFlipSubmitted]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x167270, 0x27ef0 bytes
    //
    _o30(sdk::unknown_ptr) trace_flip_manager_present_i_flip_submitted;
    
    // [EtwTraceFlipManagerPresentPosted]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1672b0, 0x27ef0 bytes
    //
    _o31(sdk::unknown_ptr) trace_flip_manager_present_posted;
    
    // [EtwTraceFlipManagerPresentProcessed]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1674c0, 0x27ef0 bytes
    //
    _o32(sdk::unknown_ptr) trace_flip_manager_present_processed;
    
    // [EtwTraceFlipManagerPresentQueueDepth]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1677a0, 0x27ef0 bytes
    //
    _o33(sdk::unknown_ptr) trace_flip_manager_present_queue_depth;
    
    // [EtwTraceFlipManagerPresentSignaled]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1677d0, 0x27ef0 bytes
    //
    _o34(sdk::unknown_ptr) trace_flip_manager_present_signaled;
    
    // [EtwTraceFlipManagerProducerSetContent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x167810, 0x27ef0 bytes
    //
    _o35(sdk::unknown_ptr) trace_flip_manager_producer_set_content;
    
    // [EtwTraceFlipManagerProducerSetContent_Enabled]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x167840, 0x27ef0 bytes
    //
    _o36(sdk::unknown_ptr) trace_flip_manager_producer_set_content_enabled;
    
    // [EtwTraceFlipManagerRemoveBuffer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x167890, 0x27ef0 bytes
    //
    _o37(sdk::unknown_ptr) trace_flip_manager_remove_buffer;
    
    // [EtwTraceFlipManagerUpdateExpectedConsumerPresentId]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xe7880, 0x27ef0 bytes
    //
    _o38(sdk::unknown_ptr) trace_flip_manager_update_expected_consumer_present_id;
    
    // [EtwTraceTokenManagerDisableScanoutToken]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1681b0, 0x27ef0 bytes
    //
    _o39(sdk::unknown_ptr) trace_token_manager_disable_scanout_token;
    
    // [EtwTraceWakeMIT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xc17d0, 0x27ef0 bytes
    //
    _o40(sdk::unknown_ptr) trace_wake_mit;
    
    // [EtwWakeMIT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .rdata:0x27fff8, 0x27ef0 bytes
    //
    _o41(sdk::unknown_ptr) wake_mit;
    
    // [EtwTraceGdiCreateHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xa489c, 0x243e0 bytes
    // win32kbase.sys .text:0x1beb4, 0x243e0 bytes
    //
    _o42(sdk::unknown_ptr) trace_gdi_create_handle;
    
    // [EtwInitializeAsyncKeyMonitor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc7474, 0x243e0 bytes
    // win32kbase.sys .text:0xd9028, 0x27ef0 bytes
    // win32kbase.sys .text:0xc00b4, 0x243e0 bytes
    //
    _o43(sdk::unknown_ptr) initialize_async_key_monitor;
    
    // [EtwTraceAcquiredExclusiveUserCrit]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5e300, 0x243e0 bytes
    // win32kbase.sys .text:0x97b40, 0x27ef0 bytes
    // win32kbase.sys .text:0x27740, 0x243e0 bytes
    //
    _o44(sdk::unknown_ptr) trace_acquired_exclusive_user_crit;
    
    // [EtwTraceAcquiredSharedUserCrit]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x64df0, 0x243e0 bytes
    // win32kbase.sys .text:0x97f20, 0x27ef0 bytes
    // win32kbase.sys .text:0x2e560, 0x243e0 bytes
    //
    _o45(sdk::unknown_ptr) trace_acquired_shared_user_crit;
    
    // [EtwTraceAuditApiSetWindowsHookEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x134e70, 0x243e0 bytes
    // win32kbase.sys .text:0x7e320, 0x27ef0 bytes
    // win32kbase.sys .text:0x132820, 0x243e0 bytes
    //
    _o46(sdk::unknown_ptr) trace_audit_api_set_windows_hook_ex;
    
    // [EtwTraceCompletePowerRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x91220, 0x243e0 bytes
    // win32kbase.sys .text:0x69e90, 0x27ef0 bytes
    // win32kbase.sys .text:0x6e580, 0x243e0 bytes
    //
    _o47(sdk::unknown_ptr) trace_complete_power_request;
    
    // [EtwTraceDwmVisRgnDirty]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa48c0, 0x243e0 bytes
    // win32kbase.sys .text:0xb1ea0, 0x27ef0 bytes
    // win32kbase.sys .text:0x943a0, 0x243e0 bytes
    //
    _o48(sdk::unknown_ptr) trace_dwm_vis_rgn_dirty;
    
    // [EtwTraceDwmVisRgnUpdate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa7a50, 0x243e0 bytes
    // win32kbase.sys .text:0xb61e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x9b900, 0x243e0 bytes
    //
    _o49(sdk::unknown_ptr) trace_dwm_vis_rgn_update;
    
    // [EtwTraceFlipManagerStartCompleteToken]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x135bd0, 0x243e0 bytes
    // win32kbase.sys .text:0x1678d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x133580, 0x243e0 bytes
    //
    _o50(sdk::unknown_ptr) trace_flip_manager_start_complete_token;
    
    // [EtwTraceFlipManagerStartTokenReleaseToFrame]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x135c00, 0x243e0 bytes
    // win32kbase.sys .text:0x167910, 0x27ef0 bytes
    // win32kbase.sys .text:0x1335b0, 0x243e0 bytes
    //
    _o51(sdk::unknown_ptr) trace_flip_manager_start_token_release_to_frame;
    
    // [EtwTraceFlipManagerStopCompleteToken]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x135c30, 0x243e0 bytes
    // win32kbase.sys .text:0x167940, 0x27ef0 bytes
    // win32kbase.sys .text:0x1335e0, 0x243e0 bytes
    //
    _o52(sdk::unknown_ptr) trace_flip_manager_stop_complete_token;
    
    // [EtwTraceFlipManagerStopTokenReleaseToFrame]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x135c60, 0x243e0 bytes
    // win32kbase.sys .text:0x167970, 0x27ef0 bytes
    // win32kbase.sys .text:0x133610, 0x243e0 bytes
    //
    _o53(sdk::unknown_ptr) trace_flip_manager_stop_token_release_to_frame;
    
    // [EtwTraceGdiTransformHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x646c, 0x243e0 bytes
    // win32kbase.sys .text:0x5e65c, 0x27ef0 bytes
    // win32kbase.sys .text:0x857cc, 0x243e0 bytes
    //
    _o54(sdk::unknown_ptr) trace_gdi_transform_handle;
    
    // [EtwTraceGetAsyncKeyState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x10aa0, 0x243e0 bytes
    // win32kbase.sys .text:0x13b7c, 0x27ef0 bytes
    // win32kbase.sys .text:0x71580, 0x243e0 bytes
    //
    _o55(sdk::unknown_ptr) trace_get_async_key_state;
    
    // [EtwTraceProcessWindowInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6fc40, 0x243e0 bytes
    // win32kbase.sys .text:0xa40e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x114e0, 0x243e0 bytes
    //
    _o56(sdk::unknown_ptr) trace_process_window_info;
    
    // [EtwTraceProcessWindowInfoSendUnique]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x134be0, 0x243e0 bytes
    // win32kbase.sys .text:0x165ca0, 0x27ef0 bytes
    // win32kbase.sys .text:0x132590, 0x243e0 bytes
    //
    _o57(sdk::unknown_ptr) trace_process_window_info_send_unique;
    
    // [EtwTraceStopPowerEventCalloutWorker]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x91aa0, 0x243e0 bytes
    // win32kbase.sys .text:0x6a618, 0x27ef0 bytes
    // win32kbase.sys .text:0x6ee00, 0x243e0 bytes
    //
    _o58(sdk::unknown_ptr) trace_stop_power_event_callout_worker;
    
    // [EtwTraceUiAuditReadClipboard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd4c90, 0x243e0 bytes
    // win32kbase.sys .text:0xdb460, 0x27ef0 bytes
    // win32kbase.sys .text:0xd3530, 0x243e0 bytes
    //
    _o59(sdk::unknown_ptr) trace_ui_audit_read_clipboard;
    
    // [EtwTraceUiAuditWriteClipboard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc25b0, 0x243e0 bytes
    // win32kbase.sys .text:0xdb300, 0x27ef0 bytes
    // win32kbase.sys .text:0xbbba0, 0x243e0 bytes
    //
    _o60(sdk::unknown_ptr) trace_ui_audit_write_clipboard;
    
    // [EtwTraceUiLimitWriteClipboard]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x136e80, 0x243e0 bytes
    // win32kbase.sys .text:0x168c60, 0x27ef0 bytes
    // win32kbase.sys .text:0x134830, 0x243e0 bytes
    //
    _o61(sdk::unknown_ptr) trace_ui_limit_write_clipboard;
    
    // [EtwTraceUserCreateHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x87740, 0x243e0 bytes
    // win32kbase.sys .text:0x75ac0, 0x27ef0 bytes
    // win32kbase.sys .text:0x70120, 0x243e0 bytes
    //
    _o62(sdk::unknown_ptr) trace_user_create_handle;
    
    // [EtwTraceUserDestroyHandle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x87a1c, 0x243e0 bytes
    // win32kbase.sys .text:0x72454, 0x27ef0 bytes
    // win32kbase.sys .text:0x6fdec, 0x243e0 bytes
    //
    _o63(sdk::unknown_ptr) trace_user_destroy_handle;
    
    // [EtwTraceUserUpdateHandleOwner]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa8ce4, 0x243e0 bytes
    // win32kbase.sys .text:0xb5b14, 0x27ef0 bytes
    // win32kbase.sys .text:0x9dfb4, 0x243e0 bytes
    //
    _o64(sdk::unknown_ptr) trace_user_update_handle_owner;
    
    // [EtwTraceWakeDIT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x7e410, 0x1eb80 bytes
    // win32kbase.sys .text:0xb1750, 0x243e0 bytes
    // win32kbase.sys .text:0xa7c60, 0x243e0 bytes
    //
    _o65(sdk::unknown_ptr) trace_wake_dit;
    
    // [EtwWakeDIT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .rdata:0x109d40, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x22bca0, 0x243e0 bytes
    // win32kbase.sys .rdata:0x229ce0, 0x243e0 bytes
    //
    _o66(sdk::unknown_ptr) wake_dit;
    
    // [EtwBindLogicalSurfaceRHEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd0a50, 0x1eb80 bytes
    // win32kbase.sys .text:0x15ca30, 0x243e0 bytes
    // win32kbase.sys .text:0x18f510, 0x27ef0 bytes
    // win32kbase.sys .text:0x15ae20, 0x243e0 bytes
    //
    _o67(sdk::unknown_ptr) bind_logical_surface_rh_event;
    
    // [EtwBindSwapChain]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x87030, 0x1eb80 bytes
    // win32kbase.sys .text:0xce5b0, 0x243e0 bytes
    // win32kbase.sys .text:0xdfc80, 0x27ef0 bytes
    // win32kbase.sys .text:0xccf50, 0x243e0 bytes
    //
    _o68(sdk::unknown_ptr) bind_swap_chain;
    
    // [EtwCaptureStateCallback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbb2f0, 0x1eb80 bytes
    // win32kbase.sys .text:0x134550, 0x243e0 bytes
    // win32kbase.sys .text:0x1656f8, 0x27ef0 bytes
    // win32kbase.sys .text:0x131f00, 0x243e0 bytes
    //
    _o69(sdk::unknown_ptr) capture_state_callback;
    
    // [EtwDevLockEndTightUpdate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7c7e0, 0x1eb80 bytes
    // win32kbase.sys .text:0xb1ea0, 0x243e0 bytes
    // win32kbase.sys .text:0xc3660, 0x27ef0 bytes
    // win32kbase.sys .text:0xa8290, 0x243e0 bytes
    //
    _o70(sdk::unknown_ptr) dev_lock_end_tight_update;
    
    // [EtwDevLockEndUpdate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x78780, 0x1eb80 bytes
    // win32kbase.sys .text:0xa33d0, 0x243e0 bytes
    // win32kbase.sys .text:0xaf250, 0x27ef0 bytes
    // win32kbase.sys .text:0x92810, 0x243e0 bytes
    //
    _o71(sdk::unknown_ptr) dev_lock_end_update;
    
    // [EtwDirtyRectUpdate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x77790, 0x1eb80 bytes
    // win32kbase.sys .text:0xa3230, 0x243e0 bytes
    // win32kbase.sys .text:0xae4e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x92740, 0x243e0 bytes
    //
    _o72(sdk::unknown_ptr) dirty_rect_update;
    
    // [EtwDwmSpriteCreateEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7e3f0, 0x1eb80 bytes
    // win32kbase.sys .text:0xbb050, 0x243e0 bytes
    // win32kbase.sys .text:0xce5d0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb4a40, 0x243e0 bytes
    //
    _o73(sdk::unknown_ptr) dwm_sprite_create_event;
    
    // [EtwDwmSpriteDestroyEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7e450, 0x1eb80 bytes
    // win32kbase.sys .text:0xbb7b0, 0x243e0 bytes
    // win32kbase.sys .text:0xcf270, 0x27ef0 bytes
    // win32kbase.sys .text:0xb55e0, 0x243e0 bytes
    //
    _o74(sdk::unknown_ptr) dwm_sprite_destroy_event;
    
    // [EtwDwmSpriteLogicalSurfBindEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7d440, 0x1eb80 bytes
    // win32kbase.sys .text:0xb8360, 0x243e0 bytes
    // win32kbase.sys .text:0xccc50, 0x27ef0 bytes
    // win32kbase.sys .text:0xb2640, 0x243e0 bytes
    //
    _o75(sdk::unknown_ptr) dwm_sprite_logical_surf_bind_event;
    
    // [EtwDwmSpriteLogicalSurfUnBindEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7d480, 0x1eb80 bytes
    // win32kbase.sys .text:0xba040, 0x243e0 bytes
    // win32kbase.sys .text:0xcdf00, 0x27ef0 bytes
    // win32kbase.sys .text:0xb3920, 0x243e0 bytes
    //
    _o76(sdk::unknown_ptr) dwm_sprite_logical_surf_un_bind_event;
    
    // [EtwFontLoadAttemptEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd0a80, 0x1eb80 bytes
    // win32kbase.sys .text:0x15ca60, 0x243e0 bytes
    // win32kbase.sys .text:0x18f540, 0x27ef0 bytes
    // win32kbase.sys .text:0x15ae50, 0x243e0 bytes
    //
    _o77(sdk::unknown_ptr) font_load_attempt_event;
    
    // [EtwGdiSysMemToken]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7a190, 0x1eb80 bytes
    // win32kbase.sys .text:0xb8260, 0x243e0 bytes
    // win32kbase.sys .text:0xcca30, 0x27ef0 bytes
    // win32kbase.sys .text:0xb2560, 0x243e0 bytes
    //
    _o78(sdk::unknown_ptr) gdi_sys_mem_token;
    
    // [EtwLogicalSurfCreateEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7d460, 0x1eb80 bytes
    // win32kbase.sys .text:0xb8380, 0x243e0 bytes
    // win32kbase.sys .text:0xccc30, 0x27ef0 bytes
    // win32kbase.sys .text:0xb2660, 0x243e0 bytes
    //
    _o79(sdk::unknown_ptr) logical_surf_create_event;
    
    // [EtwLogicalSurfDestroyEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7d5c0, 0x1eb80 bytes
    // win32kbase.sys .text:0xba190, 0x243e0 bytes
    // win32kbase.sys .text:0xcdf20, 0x27ef0 bytes
    // win32kbase.sys .text:0xb3a70, 0x243e0 bytes
    //
    _o80(sdk::unknown_ptr) logical_surf_destroy_event;
    
    // [EtwLogicalSurfEnableDirtyNotificationEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7ec10, 0x1eb80 bytes
    // win32kbase.sys .text:0xbbbb0, 0x243e0 bytes
    // win32kbase.sys .text:0xd0950, 0x27ef0 bytes
    // win32kbase.sys .text:0xb5be0, 0x243e0 bytes
    //
    _o81(sdk::unknown_ptr) logical_surf_enable_dirty_notification_event;
    
    // [EtwLogicalSurfPhysSurfBindEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7e660, 0x1eb80 bytes
    // win32kbase.sys .text:0xbb790, 0x243e0 bytes
    // win32kbase.sys .text:0xd08b0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb55c0, 0x243e0 bytes
    //
    _o82(sdk::unknown_ptr) logical_surf_phys_surf_bind_event;
    
    // [EtwLogicalSurfPhysSurfUnbindEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7e640, 0x1eb80 bytes
    // win32kbase.sys .text:0xbbbd0, 0x243e0 bytes
    // win32kbase.sys .text:0xd1640, 0x27ef0 bytes
    // win32kbase.sys .text:0xb5c00, 0x243e0 bytes
    //
    _o83(sdk::unknown_ptr) logical_surf_phys_surf_unbind_event;
    
    // [EtwLogicalSurfRemovedTranslationFromDirtyEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd0ab0, 0x1eb80 bytes
    // win32kbase.sys .text:0x15ca90, 0x243e0 bytes
    // win32kbase.sys .text:0x18f570, 0x27ef0 bytes
    // win32kbase.sys .text:0x15ae80, 0x243e0 bytes
    //
    _o84(sdk::unknown_ptr) logical_surf_removed_translation_from_dirty_event;
    
    // [EtwLogicalSurfRemovedTranslationFromMoveEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd0af0, 0x1eb80 bytes
    // win32kbase.sys .text:0x15cad0, 0x243e0 bytes
    // win32kbase.sys .text:0x18f5b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x15aec0, 0x243e0 bytes
    //
    _o85(sdk::unknown_ptr) logical_surf_removed_translation_from_move_event;
    
    // [EtwPhysicalSurfCreateEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x77cc0, 0x1eb80 bytes
    // win32kbase.sys .text:0xacf70, 0x243e0 bytes
    // win32kbase.sys .text:0xbb720, 0x27ef0 bytes
    // win32kbase.sys .text:0xa36e0, 0x243e0 bytes
    //
    _o86(sdk::unknown_ptr) physical_surf_create_event;
    
    // [EtwSyscallFilterMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd0b30, 0x1eb80 bytes
    // win32kbase.sys .text:0x15cb10, 0x243e0 bytes
    // win32kbase.sys .text:0x18f5f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x15af00, 0x243e0 bytes
    //
    _o87(sdk::unknown_ptr) syscall_filter_message;
    
    // [EtwTracPowerOnMonitoreBegin]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xdbc4, 0x1eb80 bytes
    // win32kbase.sys .text:0x92418, 0x243e0 bytes
    // win32kbase.sys .text:0x6b078, 0x27ef0 bytes
    // win32kbase.sys .text:0xc2e88, 0x243e0 bytes
    //
    _o88(sdk::unknown_ptr) trac_power_on_monitore_begin;
    
    // [EtwTraceArmDitMouseFlush]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbb890, 0x1eb80 bytes
    // win32kbase.sys .text:0x134e40, 0x243e0 bytes
    // win32kbase.sys .text:0x165f60, 0x27ef0 bytes
    // win32kbase.sys .text:0x1327f0, 0x243e0 bytes
    //
    _o89(sdk::unknown_ptr) trace_arm_dit_mouse_flush;
    
    // [EtwTraceAuditApiRegisterRawInputDevices]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x80ce0, 0x1eb80 bytes
    // win32kbase.sys .text:0xedb0, 0x243e0 bytes
    // win32kbase.sys .text:0x7d8a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x5af40, 0x243e0 bytes
    //
    _o90(sdk::unknown_ptr) trace_audit_api_register_raw_input_devices;
    
    // [EtwTraceAuditApiSetWinEventHook]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7daa0, 0x1eb80 bytes
    // win32kbase.sys .text:0xf1f0, 0x243e0 bytes
    // win32kbase.sys .text:0x7ddb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x5b380, 0x243e0 bytes
    //
    _o91(sdk::unknown_ptr) trace_audit_api_set_win_event_hook;
    
    // [EtwTraceBeginAppMessageProcessing]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x72ff0, 0x1eb80 bytes
    // win32kbase.sys .text:0x9d250, 0x243e0 bytes
    // win32kbase.sys .text:0xa7920, 0x27ef0 bytes
    // win32kbase.sys .text:0x8c1d0, 0x243e0 bytes
    //
    _o92(sdk::unknown_ptr) trace_begin_app_message_processing;
    
    // [EtwTraceBeginCallback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x72870, 0x1eb80 bytes
    // win32kbase.sys .text:0x99dd0, 0x243e0 bytes
    // win32kbase.sys .text:0xa64a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x82ab0, 0x243e0 bytes
    //
    _o93(sdk::unknown_ptr) trace_begin_callback;
    
    // [EtwTraceBeginDelegateInputCallback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x86d90, 0x1eb80 bytes
    // win32kbase.sys .text:0x135020, 0x243e0 bytes
    // win32kbase.sys .text:0x165f90, 0x27ef0 bytes
    // win32kbase.sys .text:0x1329d0, 0x243e0 bytes
    //
    _o94(sdk::unknown_ptr) trace_begin_delegate_input_callback;
    
    // [EtwTraceBeginDelegatedInputWorker]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x86cb0, 0x1eb80 bytes
    // win32kbase.sys .text:0x135150, 0x243e0 bytes
    // win32kbase.sys .text:0xf3c00, 0x27ef0 bytes
    // win32kbase.sys .text:0x132b00, 0x243e0 bytes
    //
    _o95(sdk::unknown_ptr) trace_begin_delegated_input_worker;
    
    // [EtwTraceBeginDispatchMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x78470, 0x1eb80 bytes
    // win32kbase.sys .text:0xacfe0, 0x243e0 bytes
    // win32kbase.sys .text:0xc08c0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa3840, 0x243e0 bytes
    //
    _o96(sdk::unknown_ptr) trace_begin_dispatch_message;
    
    // [EtwTraceBeginInjectMouse]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7d400, 0x1eb80 bytes
    // win32kbase.sys .text:0xbb3a0, 0x243e0 bytes
    // win32kbase.sys .text:0xd0910, 0x27ef0 bytes
    // win32kbase.sys .text:0xb4f00, 0x243e0 bytes
    //
    _o97(sdk::unknown_ptr) trace_begin_inject_mouse;
    
    // [EtwTraceBeginPointerFrameBuildPartial]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbb8c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x135220, 0x243e0 bytes
    // win32kbase.sys .text:0x1660b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x132bd0, 0x243e0 bytes
    //
    _o98(sdk::unknown_ptr) trace_begin_pointer_frame_build_partial;
    
    // [EtwTraceBeginPointerFrameCoalesce]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbb8f0, 0x1eb80 bytes
    // win32kbase.sys .text:0x135250, 0x243e0 bytes
    // win32kbase.sys .text:0x1660e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x132c00, 0x243e0 bytes
    //
    _o99(sdk::unknown_ptr) trace_begin_pointer_frame_coalesce;
    
    // [EtwTraceBeginPointerFrameCommit]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbb940, 0x1eb80 bytes
    // win32kbase.sys .text:0x1352b0, 0x243e0 bytes
    // win32kbase.sys .text:0x166140, 0x27ef0 bytes
    // win32kbase.sys .text:0x132c60, 0x243e0 bytes
    //
    _p00(sdk::unknown_ptr) trace_begin_pointer_frame_commit;
    
    // [EtwTraceBeginPointerFrameCreation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbb970, 0x1eb80 bytes
    // win32kbase.sys .text:0x1352f0, 0x243e0 bytes
    // win32kbase.sys .text:0x166180, 0x27ef0 bytes
    // win32kbase.sys .text:0x132ca0, 0x243e0 bytes
    //
    _p01(sdk::unknown_ptr) trace_begin_pointer_frame_creation;
    
    // [EtwTraceBeginPointerFrameMessageGeneration]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbb9a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x135330, 0x243e0 bytes
    // win32kbase.sys .text:0x1661c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x132ce0, 0x243e0 bytes
    //
    _p02(sdk::unknown_ptr) trace_begin_pointer_frame_message_generation;
    
    // [EtwTraceBeginPointerMessageGeneration]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbb9d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x135370, 0x243e0 bytes
    // win32kbase.sys .text:0x166200, 0x27ef0 bytes
    // win32kbase.sys .text:0x132d20, 0x243e0 bytes
    //
    _p03(sdk::unknown_ptr) trace_begin_pointer_message_generation;
    
    // [EtwTraceBeginPointerMessageRetrieve]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbba00, 0x1eb80 bytes
    // win32kbase.sys .text:0x1353a0, 0x243e0 bytes
    // win32kbase.sys .text:0x166230, 0x27ef0 bytes
    // win32kbase.sys .text:0x132d50, 0x243e0 bytes
    //
    _p04(sdk::unknown_ptr) trace_begin_pointer_message_retrieve;
    
    // [EtwTraceBeginPointerSetTargetWindows]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbba60, 0x1eb80 bytes
    // win32kbase.sys .text:0x135400, 0x243e0 bytes
    // win32kbase.sys .text:0x166290, 0x27ef0 bytes
    // win32kbase.sys .text:0x132db0, 0x243e0 bytes
    //
    _p05(sdk::unknown_ptr) trace_begin_pointer_set_target_windows;
    
    // [EtwTraceBeginRetrieveSendMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x74cd0, 0x1eb80 bytes
    // win32kbase.sys .text:0x9ef20, 0x243e0 bytes
    // win32kbase.sys .text:0xb5260, 0x27ef0 bytes
    // win32kbase.sys .text:0x8dd20, 0x243e0 bytes
    //
    _p06(sdk::unknown_ptr) trace_begin_retrieve_send_message;
    
    // [EtwTraceBeginSendMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x733d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x9d6d0, 0x243e0 bytes
    // win32kbase.sys .text:0xad4b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x8c470, 0x243e0 bytes
    //
    _p07(sdk::unknown_ptr) trace_begin_send_message;
    
    // [EtwTraceBeginTranslateMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7da10, 0x1eb80 bytes
    // win32kbase.sys .text:0xbb0c0, 0x243e0 bytes
    // win32kbase.sys .text:0xd0710, 0x27ef0 bytes
    // win32kbase.sys .text:0xb4ae0, 0x243e0 bytes
    //
    _p08(sdk::unknown_ptr) trace_begin_translate_message;
    
    // [EtwTraceChangeDisplayModeBroadcast]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x83480, 0x1eb80 bytes
    // win32kbase.sys .text:0xc76e0, 0x243e0 bytes
    // win32kbase.sys .text:0xd9ae0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc0280, 0x243e0 bytes
    //
    _p09(sdk::unknown_ptr) trace_change_display_mode_broadcast;
    
    // [EtwTraceCompleteInputDeviceRead]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbbab0, 0x1eb80 bytes
    // win32kbase.sys .text:0xbf950, 0x243e0 bytes
    // win32kbase.sys .text:0xd5320, 0x27ef0 bytes
    // win32kbase.sys .text:0xb9070, 0x243e0 bytes
    //
    _p10(sdk::unknown_ptr) trace_complete_input_device_read;
    
    // [EtwTraceCompositionSurfaceObjectUpdateEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3cfa0, 0x1eb80 bytes
    // win32kbase.sys .text:0xb6d50, 0x243e0 bytes
    // win32kbase.sys .text:0xc66a0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb0c40, 0x243e0 bytes
    //
    _p11(sdk::unknown_ptr) trace_composition_surface_object_update_event;
    
    // [EtwTraceContactVisualizationDown]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbbae0, 0x1eb80 bytes
    // win32kbase.sys .text:0x135450, 0x243e0 bytes
    // win32kbase.sys .text:0x1662e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x132e00, 0x243e0 bytes
    //
    _p12(sdk::unknown_ptr) trace_contact_visualization_down;
    
    // [EtwTraceContactVisualizationInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbbb10, 0x1eb80 bytes
    // win32kbase.sys .text:0x135480, 0x243e0 bytes
    // win32kbase.sys .text:0x166310, 0x27ef0 bytes
    // win32kbase.sys .text:0x132e30, 0x243e0 bytes
    //
    _p13(sdk::unknown_ptr) trace_contact_visualization_info;
    
    // [EtwTraceContactVisualizationUp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbbb40, 0x1eb80 bytes
    // win32kbase.sys .text:0x1354b0, 0x243e0 bytes
    // win32kbase.sys .text:0x166340, 0x27ef0 bytes
    // win32kbase.sys .text:0x132e60, 0x243e0 bytes
    //
    _p14(sdk::unknown_ptr) trace_contact_visualization_up;
    
    // [EtwTraceConvertTimeOutToBlocking]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbbb70, 0x1eb80 bytes
    // win32kbase.sys .text:0x1354e0, 0x243e0 bytes
    // win32kbase.sys .text:0x166370, 0x27ef0 bytes
    // win32kbase.sys .text:0x132e90, 0x243e0 bytes
    //
    _p15(sdk::unknown_ptr) trace_convert_time_out_to_blocking;
    
    // [EtwTraceConvertibleState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbbba0, 0x1eb80 bytes
    // win32kbase.sys .text:0x135520, 0x243e0 bytes
    // win32kbase.sys .text:0x1663a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x132ed0, 0x243e0 bytes
    //
    _p16(sdk::unknown_ptr) trace_convertible_state;
    
    // [EtwTraceCopyPointerInputFrameStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbbbd0, 0x1eb80 bytes
    // win32kbase.sys .text:0x135550, 0x243e0 bytes
    // win32kbase.sys .text:0x1663d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x132f00, 0x243e0 bytes
    //
    _p17(sdk::unknown_ptr) trace_copy_pointer_input_frame_start;
    
    // [EtwTraceCopyPointerInputFrameStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbbc00, 0x1eb80 bytes
    // win32kbase.sys .text:0x135580, 0x243e0 bytes
    // win32kbase.sys .text:0x166400, 0x27ef0 bytes
    // win32kbase.sys .text:0x132f30, 0x243e0 bytes
    //
    _p18(sdk::unknown_ptr) trace_copy_pointer_input_frame_stop;
    
    // [EtwTraceCursorSize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbbc30, 0x1eb80 bytes
    // win32kbase.sys .text:0x1355b0, 0x243e0 bytes
    // win32kbase.sys .text:0x166430, 0x27ef0 bytes
    // win32kbase.sys .text:0x132f60, 0x243e0 bytes
    //
    _p19(sdk::unknown_ptr) trace_cursor_size;
    
    // [EtwTraceDCompBeginFrameEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbbc60, 0x1eb80 bytes
    // win32kbase.sys .text:0x1355f0, 0x243e0 bytes
    // win32kbase.sys .text:0x166470, 0x27ef0 bytes
    // win32kbase.sys .text:0x132fa0, 0x243e0 bytes
    //
    _p20(sdk::unknown_ptr) trace_d_comp_begin_frame_event;
    
    // [EtwTraceDCompCommitBatchEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x79230, 0x1eb80 bytes
    // win32kbase.sys .text:0x74410, 0x243e0 bytes
    // win32kbase.sys .text:0xd6e70, 0x27ef0 bytes
    // win32kbase.sys .text:0xc520, 0x243e0 bytes
    //
    _p21(sdk::unknown_ptr) trace_d_comp_commit_batch_event;
    
    // [EtwTraceDCompDeferBatchEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x80200, 0x1eb80 bytes
    // win32kbase.sys .text:0x7d3d0, 0x243e0 bytes
    // win32kbase.sys .text:0xa1820, 0x27ef0 bytes
    // win32kbase.sys .text:0x80ad0, 0x243e0 bytes
    //
    _p22(sdk::unknown_ptr) trace_d_comp_defer_batch_event;
    
    // [EtwTraceDCompGetBatchEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x78490, 0x1eb80 bytes
    // win32kbase.sys .text:0x9b460, 0x243e0 bytes
    // win32kbase.sys .text:0xa0680, 0x27ef0 bytes
    // win32kbase.sys .text:0x84260, 0x243e0 bytes
    //
    _p23(sdk::unknown_ptr) trace_d_comp_get_batch_event;
    
    // [EtwTraceDisplayChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x87ed0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc7eb0, 0x243e0 bytes
    // win32kbase.sys .text:0xe11e0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc0ab0, 0x243e0 bytes
    //
    _p24(sdk::unknown_ptr) trace_display_change;
    
    // [EtwTraceDisplayReqChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xccf8, 0x1eb80 bytes
    // win32kbase.sys .text:0xc66b8, 0x243e0 bytes
    // win32kbase.sys .text:0x6b098, 0x27ef0 bytes
    // win32kbase.sys .text:0xbf308, 0x243e0 bytes
    //
    _p25(sdk::unknown_ptr) trace_display_req_change;
    
    // [EtwTraceDitDisEngaged]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x83980, 0x1eb80 bytes
    // win32kbase.sys .text:0xc83c0, 0x243e0 bytes
    // win32kbase.sys .text:0xda070, 0x27ef0 bytes
    // win32kbase.sys .text:0xc0f80, 0x243e0 bytes
    //
    _p26(sdk::unknown_ptr) trace_dit_dis_engaged;
    
    // [EtwTraceDitEngaged]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x838e0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc8400, 0x243e0 bytes
    // win32kbase.sys .text:0xd9fd0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc0fc0, 0x243e0 bytes
    //
    _p27(sdk::unknown_ptr) trace_dit_engaged;
    
    // [EtwTraceDitMmcssWorkStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x819b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x135650, 0x243e0 bytes
    // win32kbase.sys .text:0x1664d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x133000, 0x243e0 bytes
    //
    _p28(sdk::unknown_ptr) trace_dit_mmcss_work_start;
    
    // [EtwTraceDitMmcssWorkStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x81990, 0x1eb80 bytes
    // win32kbase.sys .text:0x135680, 0x243e0 bytes
    // win32kbase.sys .text:0x166500, 0x27ef0 bytes
    // win32kbase.sys .text:0x133030, 0x243e0 bytes
    //
    _p29(sdk::unknown_ptr) trace_dit_mmcss_work_stop;
    
    // [EtwTraceDITResolveDCompInputHandleToHwnd]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5120, 0x1eb80 bytes
    // win32kbase.sys .text:0x2eb0, 0x243e0 bytes
    // win32kbase.sys .text:0x7160, 0x27ef0 bytes
    // win32kbase.sys .text:0x2eb0, 0x243e0 bytes
    //
    _p30(sdk::unknown_ptr) trace_dit_resolve_d_comp_input_handle_to_hwnd;
    
    // [EtwTraceDitShutdown]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x83940, 0x1eb80 bytes
    // win32kbase.sys .text:0xc83a0, 0x243e0 bytes
    // win32kbase.sys .text:0xda050, 0x27ef0 bytes
    // win32kbase.sys .text:0xc0f60, 0x243e0 bytes
    //
    _p31(sdk::unknown_ptr) trace_dit_shutdown;
    
    // [EtwTraceDITSpeedHitTestFailedRevalidation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbbc90, 0x1eb80 bytes
    // win32kbase.sys .text:0x135620, 0x243e0 bytes
    // win32kbase.sys .text:0x1664a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x132fd0, 0x243e0 bytes
    //
    _p32(sdk::unknown_ptr) trace_dit_speed_hit_test_failed_revalidation;
    
    // [EtwTraceDitTerminated]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x83960, 0x1eb80 bytes
    // win32kbase.sys .text:0x1356b0, 0x243e0 bytes
    // win32kbase.sys .text:0x166530, 0x27ef0 bytes
    // win32kbase.sys .text:0x133060, 0x243e0 bytes
    //
    _p33(sdk::unknown_ptr) trace_dit_terminated;
    
    // [EtwTraceDitWaitForRitDisEngagement]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x83920, 0x1eb80 bytes
    // win32kbase.sys .text:0xc8440, 0x243e0 bytes
    // win32kbase.sys .text:0xda010, 0x27ef0 bytes
    // win32kbase.sys .text:0xc1000, 0x243e0 bytes
    //
    _p34(sdk::unknown_ptr) trace_dit_wait_for_rit_dis_engagement;
    
    // [EtwTraceDockState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbbcc0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1356e0, 0x243e0 bytes
    // win32kbase.sys .text:0x166560, 0x27ef0 bytes
    // win32kbase.sys .text:0x133090, 0x243e0 bytes
    //
    _p35(sdk::unknown_ptr) trace_dock_state;
    
    // [EtwTraceDWMGetDirtyRegion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x77710, 0x1eb80 bytes
    // win32kbase.sys .text:0xb2660, 0x243e0 bytes
    // win32kbase.sys .text:0xc37d0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa86b0, 0x243e0 bytes
    //
    _p36(sdk::unknown_ptr) trace_dwm_get_dirty_region;
    
    // [EtwTraceDwmManipulationFrameRouted]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbbcf0, 0x1eb80 bytes
    // win32kbase.sys .text:0x135710, 0x243e0 bytes
    // win32kbase.sys .text:0x166590, 0x27ef0 bytes
    // win32kbase.sys .text:0x1330c0, 0x243e0 bytes
    //
    _p37(sdk::unknown_ptr) trace_dwm_manipulation_frame_routed;
    
    // [EtwTraceDwmManipulationFrameStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbbd20, 0x1eb80 bytes
    // win32kbase.sys .text:0x135740, 0x243e0 bytes
    // win32kbase.sys .text:0x1665c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1330f0, 0x243e0 bytes
    //
    _p38(sdk::unknown_ptr) trace_dwm_manipulation_frame_start;
    
    // [EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8a0e0, 0x1eb80 bytes
    // win32kbase.sys .text:0xbf1d0, 0x243e0 bytes
    // win32kbase.sys .text:0xd5140, 0x27ef0 bytes
    // win32kbase.sys .text:0xb87d0, 0x243e0 bytes
    //
    _p39(sdk::unknown_ptr) trace_dwm_sync_flush_force_render_and_wait_for_batch_begin;
    
    // [EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8a0d0, 0x1eb80 bytes
    // win32kbase.sys .text:0xbf1b0, 0x243e0 bytes
    // win32kbase.sys .text:0xd5120, 0x27ef0 bytes
    // win32kbase.sys .text:0xb87b0, 0x243e0 bytes
    //
    _p40(sdk::unknown_ptr) trace_dwm_sync_flush_force_render_and_wait_for_batch_end;
    
    // [EtwTraceEdgyDetectionStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbbd50, 0x1eb80 bytes
    // win32kbase.sys .text:0x135770, 0x243e0 bytes
    // win32kbase.sys .text:0x1665f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x133120, 0x243e0 bytes
    //
    _p41(sdk::unknown_ptr) trace_edgy_detection_start;
    
    // [EtwTraceEdgyDetectionStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbbd80, 0x1eb80 bytes
    // win32kbase.sys .text:0x1357a0, 0x243e0 bytes
    // win32kbase.sys .text:0x166620, 0x27ef0 bytes
    // win32kbase.sys .text:0x133150, 0x243e0 bytes
    //
    _p42(sdk::unknown_ptr) trace_edgy_detection_stop;
    
    // [EtwTraceEndAppMessageProcessing]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x73510, 0x1eb80 bytes
    // win32kbase.sys .text:0x9dde0, 0x243e0 bytes
    // win32kbase.sys .text:0xaa4d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x8cd50, 0x243e0 bytes
    //
    _p43(sdk::unknown_ptr) trace_end_app_message_processing;
    
    // [EtwTraceEndCallback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x728b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x99e30, 0x243e0 bytes
    // win32kbase.sys .text:0xa64e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x82b10, 0x243e0 bytes
    //
    _p44(sdk::unknown_ptr) trace_end_callback;
    
    // [EtwTraceEndDelegateInputCallback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x86d40, 0x1eb80 bytes
    // win32kbase.sys .text:0x1357d0, 0x243e0 bytes
    // win32kbase.sys .text:0x166650, 0x27ef0 bytes
    // win32kbase.sys .text:0x133180, 0x243e0 bytes
    //
    _p45(sdk::unknown_ptr) trace_end_delegate_input_callback;
    
    // [EtwTraceEndDelegatedInputWorker]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x86c70, 0x1eb80 bytes
    // win32kbase.sys .text:0x135900, 0x243e0 bytes
    // win32kbase.sys .text:0xf3cc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1332b0, 0x243e0 bytes
    //
    _p46(sdk::unknown_ptr) trace_end_delegated_input_worker;
    
    // [EtwTraceEndDispatchMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x78450, 0x1eb80 bytes
    // win32kbase.sys .text:0xad000, 0x243e0 bytes
    // win32kbase.sys .text:0xc08a0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa3860, 0x243e0 bytes
    //
    _p47(sdk::unknown_ptr) trace_end_dispatch_message;
    
    // [EtwTraceEndInjectMouse]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7d3c0, 0x1eb80 bytes
    // win32kbase.sys .text:0xbb360, 0x243e0 bytes
    // win32kbase.sys .text:0xd08d0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb4ec0, 0x243e0 bytes
    //
    _p48(sdk::unknown_ptr) trace_end_inject_mouse;
    
    // [EtwTraceEndPointerFrameBuildPartial]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbbdb0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1359a0, 0x243e0 bytes
    // win32kbase.sys .text:0x166770, 0x27ef0 bytes
    // win32kbase.sys .text:0x133350, 0x243e0 bytes
    //
    _p49(sdk::unknown_ptr) trace_end_pointer_frame_build_partial;
    
    // [EtwTraceEndPointerFrameCoalesce]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbbde0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1359d0, 0x243e0 bytes
    // win32kbase.sys .text:0x1667a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x133380, 0x243e0 bytes
    //
    _p50(sdk::unknown_ptr) trace_end_pointer_frame_coalesce;
    
    // [EtwTraceEndPointerFrameCommit]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbbe30, 0x1eb80 bytes
    // win32kbase.sys .text:0x135a30, 0x243e0 bytes
    // win32kbase.sys .text:0x166800, 0x27ef0 bytes
    // win32kbase.sys .text:0x1333e0, 0x243e0 bytes
    //
    _p51(sdk::unknown_ptr) trace_end_pointer_frame_commit;
    
    // [EtwTraceEndPointerFrameCreation]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbbe60, 0x1eb80 bytes
    // win32kbase.sys .text:0x135a70, 0x243e0 bytes
    // win32kbase.sys .text:0x166840, 0x27ef0 bytes
    // win32kbase.sys .text:0x133420, 0x243e0 bytes
    //
    _p52(sdk::unknown_ptr) trace_end_pointer_frame_creation;
    
    // [EtwTraceEndPointerFrameMessageGeneration]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbbe90, 0x1eb80 bytes
    // win32kbase.sys .text:0x135ab0, 0x243e0 bytes
    // win32kbase.sys .text:0x166880, 0x27ef0 bytes
    // win32kbase.sys .text:0x133460, 0x243e0 bytes
    //
    _p53(sdk::unknown_ptr) trace_end_pointer_frame_message_generation;
    
    // [EtwTraceEndPointerMessageGeneration]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbbec0, 0x1eb80 bytes
    // win32kbase.sys .text:0x135af0, 0x243e0 bytes
    // win32kbase.sys .text:0x1668c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1334a0, 0x243e0 bytes
    //
    _p54(sdk::unknown_ptr) trace_end_pointer_message_generation;
    
    // [EtwTraceEndPointerMessageRetrieve]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbbef0, 0x1eb80 bytes
    // win32kbase.sys .text:0x135b20, 0x243e0 bytes
    // win32kbase.sys .text:0x1668f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1334d0, 0x243e0 bytes
    //
    _p55(sdk::unknown_ptr) trace_end_pointer_message_retrieve;
    
    // [EtwTraceEndPointerSetTargetWindows]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbbf50, 0x1eb80 bytes
    // win32kbase.sys .text:0x135b80, 0x243e0 bytes
    // win32kbase.sys .text:0x166950, 0x27ef0 bytes
    // win32kbase.sys .text:0x133530, 0x243e0 bytes
    //
    _p56(sdk::unknown_ptr) trace_end_pointer_set_target_windows;
    
    // [EtwTraceEndRetrieveSendMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x74d00, 0x1eb80 bytes
    // win32kbase.sys .text:0x9ef50, 0x243e0 bytes
    // win32kbase.sys .text:0xb52a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x8dd50, 0x243e0 bytes
    //
    _p57(sdk::unknown_ptr) trace_end_retrieve_send_message;
    
    // [EtwTraceEndSendMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x74cb0, 0x1eb80 bytes
    // win32kbase.sys .text:0x9eef0, 0x243e0 bytes
    // win32kbase.sys .text:0xb5230, 0x27ef0 bytes
    // win32kbase.sys .text:0x8dcf0, 0x243e0 bytes
    //
    _p58(sdk::unknown_ptr) trace_end_send_message;
    
    // [EtwTraceEndTranslateMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7d9f0, 0x1eb80 bytes
    // win32kbase.sys .text:0xbb0a0, 0x243e0 bytes
    // win32kbase.sys .text:0xd06f0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb4ac0, 0x243e0 bytes
    //
    _p59(sdk::unknown_ptr) trace_end_translate_message;
    
    // [EtwTraceFocusChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7c850, 0x1eb80 bytes
    // win32kbase.sys .text:0xb8970, 0x243e0 bytes
    // win32kbase.sys .text:0xcc140, 0x27ef0 bytes
    // win32kbase.sys .text:0xb32f0, 0x243e0 bytes
    //
    _p60(sdk::unknown_ptr) trace_focus_change;
    
    // [EtwTraceFocusedProcessChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7c800, 0x1eb80 bytes
    // win32kbase.sys .text:0xb86e0, 0x243e0 bytes
    // win32kbase.sys .text:0xcc710, 0x27ef0 bytes
    // win32kbase.sys .text:0xb2e20, 0x243e0 bytes
    //
    _p61(sdk::unknown_ptr) trace_focused_process_change;
    
    // [EtwTraceForegroundWindowFullScreenStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbbfa0, 0x1eb80 bytes
    // win32kbase.sys .text:0x135c90, 0x243e0 bytes
    // win32kbase.sys .text:0x1679a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x133640, 0x243e0 bytes
    //
    _p62(sdk::unknown_ptr) trace_foreground_window_full_screen_start;
    
    // [EtwTraceForegroundWindowFullScreenStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbbfd0, 0x1eb80 bytes
    // win32kbase.sys .text:0x135cc0, 0x243e0 bytes
    // win32kbase.sys .text:0x1679d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x133670, 0x243e0 bytes
    //
    _p63(sdk::unknown_ptr) trace_foreground_window_full_screen_stop;
    
    // [EtwTraceGreLockAcquireSemaphoreExclusive]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x73750, 0x1eb80 bytes
    // win32kbase.sys .text:0x9d080, 0x243e0 bytes
    // win32kbase.sys .text:0xa79a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x8ab90, 0x243e0 bytes
    //
    _p64(sdk::function<void(wchar_t*, void*, uint32_t)>*) trace_gre_lock_acquire_semaphore_exclusive;
    
    // [EtwTraceGreLockAcquireSemaphoreShared]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x73840, 0x1eb80 bytes
    // win32kbase.sys .text:0x9d230, 0x243e0 bytes
    // win32kbase.sys .text:0xa5c70, 0x27ef0 bytes
    // win32kbase.sys .text:0x8c1b0, 0x243e0 bytes
    //
    _p65(sdk::function<void(wchar_t*, void*)>*) trace_gre_lock_acquire_semaphore_shared;
    
    // [EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd0b60, 0x1eb80 bytes
    // win32kbase.sys .text:0xd2990, 0x243e0 bytes
    // win32kbase.sys .text:0xe3cc0, 0x27ef0 bytes
    // win32kbase.sys .text:0xd1330, 0x243e0 bytes
    //
    _p66(sdk::function<void(wchar_t*, void*)>*) trace_gre_lock_acquire_semaphore_shared_starve_exclusive;
    
    // [EtwTraceGreLockReleaseSemaphore]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x72e70, 0x1eb80 bytes
    // win32kbase.sys .text:0x9a020, 0x243e0 bytes
    // win32kbase.sys .text:0xa3b30, 0x27ef0 bytes
    // win32kbase.sys .text:0x82d00, 0x243e0 bytes
    //
    _p67(sdk::function<void(wchar_t*, void*)>*) trace_gre_lock_release_semaphore;
    
    // [EtwTraceGreMovePointerBegin]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7e490, 0x1eb80 bytes
    // win32kbase.sys .text:0xc2db0, 0x243e0 bytes
    // win32kbase.sys .text:0xd7a40, 0x27ef0 bytes
    // win32kbase.sys .text:0xbc190, 0x243e0 bytes
    //
    _p68(sdk::unknown_ptr) trace_gre_move_pointer_begin;
    
    // [EtwTraceGreMovePointerEnd]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7e470, 0x1eb80 bytes
    // win32kbase.sys .text:0xc2d90, 0x243e0 bytes
    // win32kbase.sys .text:0xd7a20, 0x27ef0 bytes
    // win32kbase.sys .text:0xbc170, 0x243e0 bytes
    //
    _p69(sdk::unknown_ptr) trace_gre_move_pointer_end;
    
    // [EtwTraceIdleActionExpiration]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x832f0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc6640, 0x243e0 bytes
    // win32kbase.sys .text:0xdfad0, 0x27ef0 bytes
    // win32kbase.sys .text:0xbf290, 0x243e0 bytes
    //
    _p70(sdk::unknown_ptr) trace_idle_action_expiration;
    
    // [EtwTraceIdleStatus]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x783d0, 0x1eb80 bytes
    // win32kbase.sys .text:0xac030, 0x243e0 bytes
    // win32kbase.sys .text:0xbe630, 0x27ef0 bytes
    // win32kbase.sys .text:0xa1d00, 0x243e0 bytes
    //
    _p71(sdk::unknown_ptr) trace_idle_status;
    
    // [EtwTraceInputProcessDelay]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x39460, 0x1eb80 bytes
    // win32kbase.sys .text:0x6fd20, 0x243e0 bytes
    // win32kbase.sys .text:0x1cba0, 0x27ef0 bytes
    // win32kbase.sys .text:0x10cb0, 0x243e0 bytes
    //
    _p72(sdk::unknown_ptr) trace_input_process_delay;
    
    // [EtwTraceInputQueueLocked]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4780, 0x1eb80 bytes
    // win32kbase.sys .text:0xafe50, 0x243e0 bytes
    // win32kbase.sys .text:0xc38d0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa69f0, 0x243e0 bytes
    //
    _p73(sdk::unknown_ptr) trace_input_queue_locked;
    
    // [EtwTraceInputQueueLockedPeekRecursion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7b9a0, 0x1eb80 bytes
    // win32kbase.sys .text:0xbc110, 0x243e0 bytes
    // win32kbase.sys .text:0x4fa0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb6580, 0x243e0 bytes
    //
    _p74(sdk::unknown_ptr) trace_input_queue_locked_peek_recursion;
    
    // [EtwTraceInputQueueNoRemoveLocker]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7ce90, 0x1eb80 bytes
    // win32kbase.sys .text:0xbf290, 0x243e0 bytes
    // win32kbase.sys .text:0xcfe30, 0x27ef0 bytes
    // win32kbase.sys .text:0xb8960, 0x243e0 bytes
    //
    _p75(sdk::unknown_ptr) trace_input_queue_no_remove_locker;
    
    // [EtwTraceInputQueueUnLocked]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x837c0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc6790, 0x243e0 bytes
    // win32kbase.sys .text:0xdfa40, 0x27ef0 bytes
    // win32kbase.sys .text:0xbf470, 0x243e0 bytes
    //
    _p76(sdk::unknown_ptr) trace_input_queue_un_locked;
    
    // [EtwTraceInternalSetTimer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x770c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x9f080, 0x243e0 bytes
    // win32kbase.sys .text:0xb5410, 0x27ef0 bytes
    // win32kbase.sys .text:0x8e050, 0x243e0 bytes
    //
    _p77(sdk::unknown_ptr) trace_internal_set_timer;
    
    // [EtwTraceKillTimer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x776d0, 0x1eb80 bytes
    // win32kbase.sys .text:0xa2d70, 0x243e0 bytes
    // win32kbase.sys .text:0xbf1d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x921b0, 0x243e0 bytes
    //
    _p78(sdk::unknown_ptr) trace_kill_timer;
    
    // [EtwTraceLatencyModeSwitchStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x884b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x135cf0, 0x243e0 bytes
    // win32kbase.sys .text:0x167a00, 0x27ef0 bytes
    // win32kbase.sys .text:0x1336a0, 0x243e0 bytes
    //
    _p79(sdk::unknown_ptr) trace_latency_mode_switch_start;
    
    // [EtwTraceLatencyModeSwitchStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x884a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x135d20, 0x243e0 bytes
    // win32kbase.sys .text:0x167a30, 0x27ef0 bytes
    // win32kbase.sys .text:0x1336d0, 0x243e0 bytes
    //
    _p80(sdk::unknown_ptr) trace_latency_mode_switch_stop;
    
    // [EtwTraceLayoutChangeStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x80630, 0x1eb80 bytes
    // win32kfull.sys .text:0x10e7a0, 0x1596d bytes
    // win32kfull.sys .text:0x9a608, 0x1659e bytes
    // win32kfull.sys .text:0x10f6d0, 0x1596d bytes
    //
    _p81(sdk::unknown_ptr) trace_layout_change_stop;
    
    // [EtwTraceLegacyTouchPadDetected]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc000, 0x1eb80 bytes
    // win32kbase.sys .text:0x135d50, 0x243e0 bytes
    // win32kbase.sys .text:0x167a60, 0x27ef0 bytes
    // win32kbase.sys .text:0x133700, 0x243e0 bytes
    //
    _p82(sdk::unknown_ptr) trace_legacy_touch_pad_detected;
    
    // [EtwTraceLegacyTouchPadDetectionStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x82e20, 0x1eb80 bytes
    // win32kbase.sys .text:0xc7fa0, 0x243e0 bytes
    // win32kbase.sys .text:0xd9bc0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc0bc0, 0x243e0 bytes
    //
    _p83(sdk::unknown_ptr) trace_legacy_touch_pad_detection_start;
    
    // [EtwTraceLegacyTouchPadDetectionStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x82e40, 0x1eb80 bytes
    // win32kbase.sys .text:0xc7fc0, 0x243e0 bytes
    // win32kbase.sys .text:0xd9ba0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc0ba0, 0x243e0 bytes
    //
    _p84(sdk::unknown_ptr) trace_legacy_touch_pad_detection_stop;
    
    // [EtwTraceLifetimeAccum]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x76220, 0x1eb80 bytes
    // win32kbase.sys .text:0x9d170, 0x243e0 bytes
    // win32kbase.sys .text:0xa6660, 0x27ef0 bytes
    // win32kbase.sys .text:0x8c0f0, 0x243e0 bytes
    //
    _p85(sdk::unknown_ptr) trace_lifetime_accum;
    
    // [EtwTraceMessageCheckDelay]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x394e0, 0x1eb80 bytes
    // win32kbase.sys .text:0x704b0, 0x243e0 bytes
    // win32kbase.sys .text:0x7d280, 0x27ef0 bytes
    // win32kbase.sys .text:0xc7a10, 0x243e0 bytes
    //
    _p86(sdk::unknown_ptr) trace_message_check_delay;
    
    // [EtwTraceMouseInputApc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7f8c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x135d80, 0x243e0 bytes
    // win32kbase.sys .text:0x167a90, 0x27ef0 bytes
    // win32kbase.sys .text:0x133730, 0x243e0 bytes
    //
    _p87(sdk::unknown_ptr) trace_mouse_input_apc;
    
    // [EtwTraceMouseInputCoalesced]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc030, 0x1eb80 bytes
    // win32kbase.sys .text:0xc7720, 0x243e0 bytes
    // win32kbase.sys .text:0xd9d00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc02c0, 0x243e0 bytes
    //
    _p88(sdk::unknown_ptr) trace_mouse_input_coalesced;
    
    // [EtwTraceMoveRegion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd0b90, 0x1eb80 bytes
    // win32kbase.sys .text:0x15cb40, 0x243e0 bytes
    // win32kbase.sys .text:0x18f620, 0x27ef0 bytes
    // win32kbase.sys .text:0x15af30, 0x243e0 bytes
    //
    _p89(sdk::unknown_ptr) trace_move_region;
    
    // [EtwTraceOnInputXformUpdate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7b8d0, 0x1eb80 bytes
    // win32kbase.sys .text:0xbb0e0, 0x243e0 bytes
    // win32kbase.sys .text:0xcfcd0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb4b00, 0x243e0 bytes
    //
    _p90(sdk::unknown_ptr) trace_on_input_xform_update;
    
    // [EtwTracePointerCoalesce]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc120, 0x1eb80 bytes
    // win32kbase.sys .text:0x135e70, 0x243e0 bytes
    // win32kbase.sys .text:0x167b80, 0x27ef0 bytes
    // win32kbase.sys .text:0x133820, 0x243e0 bytes
    //
    _p91(sdk::unknown_ptr) trace_pointer_coalesce;
    
    // [EtwTracePointerDeviceArrivalStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x82dc0, 0x1eb80 bytes
    // win32kbase.sys .text:0x135ed0, 0x243e0 bytes
    // win32kbase.sys .text:0x167be0, 0x27ef0 bytes
    // win32kbase.sys .text:0x133880, 0x243e0 bytes
    //
    _p92(sdk::unknown_ptr) trace_pointer_device_arrival_start;
    
    // [EtwTracePointerDeviceArrivalStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x82da0, 0x1eb80 bytes
    // win32kbase.sys .text:0x135f00, 0x243e0 bytes
    // win32kbase.sys .text:0x167c10, 0x27ef0 bytes
    // win32kbase.sys .text:0x1338b0, 0x243e0 bytes
    //
    _p93(sdk::unknown_ptr) trace_pointer_device_arrival_stop;
    
    // [EtwTracePointerDeviceContactIds]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc180, 0x1eb80 bytes
    // win32kbase.sys .text:0x135f30, 0x243e0 bytes
    // win32kbase.sys .text:0x167c40, 0x27ef0 bytes
    // win32kbase.sys .text:0x1338e0, 0x243e0 bytes
    //
    _p94(sdk::unknown_ptr) trace_pointer_device_contact_ids;
    
    // [EtwTracePointerDeviceContactTimerStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc1c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x135f70, 0x243e0 bytes
    // win32kbase.sys .text:0x167c80, 0x27ef0 bytes
    // win32kbase.sys .text:0x133920, 0x243e0 bytes
    //
    _p95(sdk::unknown_ptr) trace_pointer_device_contact_timer_start;
    
    // [EtwTracePointerDeviceContactTimerStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc1f0, 0x1eb80 bytes
    // win32kbase.sys .text:0x135fa0, 0x243e0 bytes
    // win32kbase.sys .text:0x167cb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x133950, 0x243e0 bytes
    //
    _p96(sdk::unknown_ptr) trace_pointer_device_contact_timer_stop;
    
    // [EtwTracePointerDeviceInRangeMessageStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc220, 0x1eb80 bytes
    // win32kbase.sys .text:0x135fd0, 0x243e0 bytes
    // win32kbase.sys .text:0x167ce0, 0x27ef0 bytes
    // win32kbase.sys .text:0x133980, 0x243e0 bytes
    //
    _p97(sdk::unknown_ptr) trace_pointer_device_in_range_message_start;
    
    // [EtwTracePointerDeviceInRangeMessageStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc250, 0x1eb80 bytes
    // win32kbase.sys .text:0x136000, 0x243e0 bytes
    // win32kbase.sys .text:0x167d10, 0x27ef0 bytes
    // win32kbase.sys .text:0x1339b0, 0x243e0 bytes
    //
    _p98(sdk::unknown_ptr) trace_pointer_device_in_range_message_stop;
    
    // [EtwTracePointerDeviceOutOfRangeMessageStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc280, 0x1eb80 bytes
    // win32kbase.sys .text:0x136030, 0x243e0 bytes
    // win32kbase.sys .text:0x167d40, 0x27ef0 bytes
    // win32kbase.sys .text:0x1339e0, 0x243e0 bytes
    //
    _p99(sdk::unknown_ptr) trace_pointer_device_out_of_range_message_start;
    
    // [EtwTracePointerDeviceOutOfRangeMessageStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc2b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x136060, 0x243e0 bytes
    // win32kbase.sys .text:0x167d70, 0x27ef0 bytes
    // win32kbase.sys .text:0x133a10, 0x243e0 bytes
    //
    _q00(sdk::unknown_ptr) trace_pointer_device_out_of_range_message_stop;
    
    // [EtwTracePointerDeviceReadStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc2e0, 0x1eb80 bytes
    // win32kbase.sys .text:0x136090, 0x243e0 bytes
    // win32kbase.sys .text:0x167da0, 0x27ef0 bytes
    // win32kbase.sys .text:0x133a40, 0x243e0 bytes
    //
    _q01(sdk::unknown_ptr) trace_pointer_device_read_start;
    
    // [EtwTracePointerDeviceReadStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc310, 0x1eb80 bytes
    // win32kbase.sys .text:0x1360c0, 0x243e0 bytes
    // win32kbase.sys .text:0x167dd0, 0x27ef0 bytes
    // win32kbase.sys .text:0x133a70, 0x243e0 bytes
    //
    _q02(sdk::unknown_ptr) trace_pointer_device_read_stop;
    
    // [EtwTracePointerDeviceTransformationStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc340, 0x1eb80 bytes
    // win32kbase.sys .text:0x1360f0, 0x243e0 bytes
    // win32kbase.sys .text:0x167e00, 0x27ef0 bytes
    // win32kbase.sys .text:0x133aa0, 0x243e0 bytes
    //
    _q03(sdk::unknown_ptr) trace_pointer_device_transformation_start;
    
    // [EtwTracePointerDeviceTransformationStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc370, 0x1eb80 bytes
    // win32kbase.sys .text:0x136120, 0x243e0 bytes
    // win32kbase.sys .text:0x167e30, 0x27ef0 bytes
    // win32kbase.sys .text:0x133ad0, 0x243e0 bytes
    //
    _q04(sdk::unknown_ptr) trace_pointer_device_transformation_stop;
    
    // [EtwTracePointerNoCoalesce]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc3a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x136150, 0x243e0 bytes
    // win32kbase.sys .text:0x167e60, 0x27ef0 bytes
    // win32kbase.sys .text:0x133b00, 0x243e0 bytes
    //
    _q05(sdk::unknown_ptr) trace_pointer_no_coalesce;
    
    // [EtwTracePointerPredictionStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc400, 0x1eb80 bytes
    // win32kbase.sys .text:0x1361b0, 0x243e0 bytes
    // win32kbase.sys .text:0x167ec0, 0x27ef0 bytes
    // win32kbase.sys .text:0x133b60, 0x243e0 bytes
    //
    _q06(sdk::unknown_ptr) trace_pointer_prediction_start;
    
    // [EtwTracePointerPredictionStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc430, 0x1eb80 bytes
    // win32kbase.sys .text:0x1361e0, 0x243e0 bytes
    // win32kbase.sys .text:0x167ef0, 0x27ef0 bytes
    // win32kbase.sys .text:0x133b90, 0x243e0 bytes
    //
    _q07(sdk::unknown_ptr) trace_pointer_prediction_stop;
    
    // [EtwTracePostInjectedGestureMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc460, 0x1eb80 bytes
    // win32kbase.sys .text:0x136210, 0x243e0 bytes
    // win32kbase.sys .text:0x167f20, 0x27ef0 bytes
    // win32kbase.sys .text:0x133bc0, 0x243e0 bytes
    //
    _q08(sdk::unknown_ptr) trace_post_injected_gesture_message;
    
    // [EtwTracePowerOnGdiBegin]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8a110, 0x1eb80 bytes
    // win32kbase.sys .text:0xd2950, 0x243e0 bytes
    // win32kbase.sys .text:0xe3c80, 0x27ef0 bytes
    // win32kbase.sys .text:0xd12f0, 0x243e0 bytes
    //
    _q09(sdk::unknown_ptr) trace_power_on_gdi_begin;
    
    // [EtwTracePowerOnGdiEnd]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8a0c0, 0x1eb80 bytes
    // win32kbase.sys .text:0xd27d0, 0x243e0 bytes
    // win32kbase.sys .text:0xe3b70, 0x27ef0 bytes
    // win32kbase.sys .text:0xd1170, 0x243e0 bytes
    //
    _q10(sdk::unknown_ptr) trace_power_on_gdi_end;
    
    // [EtwTracePowerOnMonitorEnd]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xdae0, 0x1eb80 bytes
    // win32kbase.sys .text:0x92090, 0x243e0 bytes
    // win32kbase.sys .text:0x6ac2c, 0x27ef0 bytes
    // win32kbase.sys .text:0xc2b00, 0x243e0 bytes
    //
    _q11(sdk::unknown_ptr) trace_power_on_monitor_end;
    
    // [EtwTracePseudoDevCreationStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc4b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x136270, 0x243e0 bytes
    // win32kbase.sys .text:0x167f70, 0x27ef0 bytes
    // win32kbase.sys .text:0x133c20, 0x243e0 bytes
    //
    _q12(sdk::unknown_ptr) trace_pseudo_dev_creation_start;
    
    // [EtwTracePseudoDevCreationStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc4e0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1362a0, 0x243e0 bytes
    // win32kbase.sys .text:0x167fa0, 0x27ef0 bytes
    // win32kbase.sys .text:0x133c50, 0x243e0 bytes
    //
    _q13(sdk::unknown_ptr) trace_pseudo_dev_creation_stop;
    
    // [EtwTracePTPElasticDragModeStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc060, 0x1eb80 bytes
    // win32kbase.sys .text:0x135db0, 0x243e0 bytes
    // win32kbase.sys .text:0x167ac0, 0x27ef0 bytes
    // win32kbase.sys .text:0x133760, 0x243e0 bytes
    //
    _q14(sdk::unknown_ptr) trace_ptp_elastic_drag_mode_start;
    
    // [EtwTracePTPElasticDragModeStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc090, 0x1eb80 bytes
    // win32kbase.sys .text:0x135de0, 0x243e0 bytes
    // win32kbase.sys .text:0x167af0, 0x27ef0 bytes
    // win32kbase.sys .text:0x133790, 0x243e0 bytes
    //
    _q15(sdk::unknown_ptr) trace_ptp_elastic_drag_mode_stop;
    
    // [EtwTracePTPReadThresholdsStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc0c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x135e10, 0x243e0 bytes
    // win32kbase.sys .text:0x167b20, 0x27ef0 bytes
    // win32kbase.sys .text:0x1337c0, 0x243e0 bytes
    //
    _q16(sdk::unknown_ptr) trace_ptp_read_thresholds_start;
    
    // [EtwTracePTPReadThresholdsStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc0f0, 0x1eb80 bytes
    // win32kbase.sys .text:0x135e40, 0x243e0 bytes
    // win32kbase.sys .text:0x167b50, 0x27ef0 bytes
    // win32kbase.sys .text:0x1337f0, 0x243e0 bytes
    //
    _q17(sdk::unknown_ptr) trace_ptp_read_thresholds_stop;
    
    // [EtwTraceQueueInputMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x72ccc, 0x1eb80 bytes
    // win32kbase.sys .text:0x9d018, 0x243e0 bytes
    // win32kbase.sys .text:0x15ec4, 0x27ef0 bytes
    // win32kbase.sys .text:0x86c78, 0x243e0 bytes
    //
    _q18(sdk::unknown_ptr) trace_queue_input_message;
    
    // [EtwTraceQueueMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x72bf0, 0x1eb80 bytes
    // win32kbase.sys .text:0x9cf30, 0x243e0 bytes
    // win32kbase.sys .text:0x15de0, 0x27ef0 bytes
    // win32kbase.sys .text:0x86b90, 0x243e0 bytes
    //
    _q19(sdk::unknown_ptr) trace_queue_message;
    
    // [EtwTraceReleaseUserCrit]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3aaa8, 0x1eb80 bytes
    // win32kbase.sys .text:0x64804, 0x243e0 bytes
    // win32kbase.sys .text:0x1a4a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x2df74, 0x243e0 bytes
    //
    _q20(sdk::unknown_ptr) trace_release_user_crit;
    
    // [EtwTraceRetrieveInputMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x771e0, 0x1eb80 bytes
    // win32kbase.sys .text:0xaa410, 0x243e0 bytes
    // win32kbase.sys .text:0xb7930, 0x27ef0 bytes
    // win32kbase.sys .text:0x9ff20, 0x243e0 bytes
    //
    _q21(sdk::unknown_ptr) trace_retrieve_input_message;
    
    // [EtwTraceRetrievePostMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x73480, 0x1eb80 bytes
    // win32kbase.sys .text:0x9e0b0, 0x243e0 bytes
    // win32kbase.sys .text:0xab0c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x8cf30, 0x243e0 bytes
    //
    _q22(sdk::unknown_ptr) trace_retrieve_post_message;
    
    // [EtwTraceRetrievePseudoMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x77130, 0x1eb80 bytes
    // win32kbase.sys .text:0xa8e90, 0x243e0 bytes
    // win32kbase.sys .text:0xb8c70, 0x27ef0 bytes
    // win32kbase.sys .text:0x9e000, 0x243e0 bytes
    //
    _q23(sdk::unknown_ptr) trace_retrieve_pseudo_message;
    
    // [EtwTraceRetrieveQueueEventMessage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x755f0, 0x1eb80 bytes
    // win32kbase.sys .text:0xa9730, 0x243e0 bytes
    // win32kbase.sys .text:0xb9260, 0x27ef0 bytes
    // win32kbase.sys .text:0x9ed70, 0x243e0 bytes
    //
    _q24(sdk::unknown_ptr) trace_retrieve_queue_event_message;
    
    // [EtwTraceRitDisEngaged]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x83900, 0x1eb80 bytes
    // win32kbase.sys .text:0xc8420, 0x243e0 bytes
    // win32kbase.sys .text:0xd9ff0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc0fe0, 0x243e0 bytes
    //
    _q25(sdk::unknown_ptr) trace_rit_dis_engaged;
    
    // [EtwTraceRitReEngaged]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x839a0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc83e0, 0x243e0 bytes
    // win32kbase.sys .text:0xda090, 0x27ef0 bytes
    // win32kbase.sys .text:0xc0fa0, 0x243e0 bytes
    //
    _q26(sdk::unknown_ptr) trace_rit_re_engaged;
    
    // [EtwTraceScreenSaverProcessEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc508, 0x1eb80 bytes
    // win32kbase.sys .text:0x1362cc, 0x243e0 bytes
    // win32kbase.sys .text:0x167fcc, 0x27ef0 bytes
    // win32kbase.sys .text:0x133c7c, 0x243e0 bytes
    //
    _q27(sdk::unknown_ptr) trace_screen_saver_process_event;
    
    // [EtwTraceSleepInputIdle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x74aa0, 0x1eb80 bytes
    // win32kbase.sys .text:0xa0690, 0x243e0 bytes
    // win32kbase.sys .text:0xb5930, 0x27ef0 bytes
    // win32kbase.sys .text:0x8f360, 0x243e0 bytes
    //
    _q28(sdk::unknown_ptr) trace_sleep_input_idle;
    
    // [EtwTraceSmoothRotationStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc530, 0x1eb80 bytes
    // win32kbase.sys .text:0x136300, 0x243e0 bytes
    // win32kbase.sys .text:0x168000, 0x27ef0 bytes
    // win32kbase.sys .text:0x133cb0, 0x243e0 bytes
    //
    _q29(sdk::unknown_ptr) trace_smooth_rotation_start;
    
    // [EtwTraceSmoothRotationStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc560, 0x1eb80 bytes
    // win32kbase.sys .text:0x136330, 0x243e0 bytes
    // win32kbase.sys .text:0x168030, 0x27ef0 bytes
    // win32kbase.sys .text:0x133ce0, 0x243e0 bytes
    //
    _q30(sdk::unknown_ptr) trace_smooth_rotation_stop;
    
    // [EtwTraceSPIBlockedByFiltering]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x51c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x15cc70, 0x243e0 bytes
    // win32kbase.sys .text:0x18f760, 0x27ef0 bytes
    // win32kbase.sys .text:0x15b060, 0x243e0 bytes
    //
    _q31(sdk::unknown_ptr) trace_spi_blocked_by_filtering;
    
    // [EtwTraceStartInputDeviceRead]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc590, 0x1eb80 bytes
    // win32kbase.sys .text:0x87510, 0x243e0 bytes
    // win32kbase.sys .text:0x75740, 0x27ef0 bytes
    // win32kbase.sys .text:0x538e0, 0x243e0 bytes
    //
    _q32(sdk::unknown_ptr) trace_start_input_device_read;
    
    // [EtwTraceStartProcessQueuedMouseEvents]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7d930, 0x1eb80 bytes
    // win32kbase.sys .text:0xb0d70, 0x243e0 bytes
    // win32kbase.sys .text:0x20d00, 0x27ef0 bytes
    // win32kbase.sys .text:0x64820, 0x243e0 bytes
    //
    _q33(sdk::unknown_ptr) trace_start_process_queued_mouse_events;
    
    // [EtwTraceStopProcessQueuedMouseEvents]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7d910, 0x1eb80 bytes
    // win32kbase.sys .text:0xb0d90, 0x243e0 bytes
    // win32kbase.sys .text:0x21160, 0x27ef0 bytes
    // win32kbase.sys .text:0x64840, 0x243e0 bytes
    //
    _q34(sdk::unknown_ptr) trace_stop_process_queued_mouse_events;
    
    // [EtwTraceTHQAStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x835a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x136360, 0x243e0 bytes
    // win32kbase.sys .text:0x168060, 0x27ef0 bytes
    // win32kbase.sys .text:0x133d10, 0x243e0 bytes
    //
    _q35(sdk::unknown_ptr) trace_thqa_start;
    
    // [EtwTraceTHQAStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x83580, 0x1eb80 bytes
    // win32kbase.sys .text:0x136390, 0x243e0 bytes
    // win32kbase.sys .text:0x168090, 0x27ef0 bytes
    // win32kbase.sys .text:0x133d40, 0x243e0 bytes
    //
    _q36(sdk::unknown_ptr) trace_thqa_stop;
    
    // [EtwTraceTimerDelayStatistics]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc5c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1363c0, 0x243e0 bytes
    // win32kbase.sys .text:0x1680c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x133d70, 0x243e0 bytes
    //
    _q37(sdk::unknown_ptr) trace_timer_delay_statistics;
    
    // [EtwTraceTimerNoCoalescing]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc610, 0x1eb80 bytes
    // win32kbase.sys .text:0x136420, 0x243e0 bytes
    // win32kbase.sys .text:0x168120, 0x27ef0 bytes
    // win32kbase.sys .text:0x133dd0, 0x243e0 bytes
    //
    _q38(sdk::unknown_ptr) trace_timer_no_coalescing;
    
    // [EtwTraceTimerProc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x76c60, 0x1eb80 bytes
    // win32kbase.sys .text:0x9f530, 0x243e0 bytes
    // win32kbase.sys .text:0xb58b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x8e320, 0x243e0 bytes
    //
    _q39(sdk::unknown_ptr) trace_timer_proc;
    
    // [EtwTraceTokenCompositionSurfaceObjectEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3d110, 0x1eb80 bytes
    // win32kbase.sys .text:0xb41b0, 0x243e0 bytes
    // win32kbase.sys .text:0xc3680, 0x27ef0 bytes
    // win32kbase.sys .text:0xac4b0, 0x243e0 bytes
    //
    _q40(sdk::unknown_ptr) trace_token_composition_surface_object_event;
    
    // [EtwTraceTokenIndependentFlipSkipCompleteEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc660, 0x1eb80 bytes
    // win32kbase.sys .text:0x136470, 0x243e0 bytes
    // win32kbase.sys .text:0x168170, 0x27ef0 bytes
    // win32kbase.sys .text:0x133e20, 0x243e0 bytes
    //
    _q41(sdk::unknown_ptr) trace_token_independent_flip_skip_complete_event;
    
    // [EtwTraceTokenStateChangedEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc690, 0x1eb80 bytes
    // win32kbase.sys .text:0xae0f0, 0x243e0 bytes
    // win32kbase.sys .text:0xba160, 0x27ef0 bytes
    // win32kbase.sys .text:0xa4480, 0x243e0 bytes
    //
    _q42(sdk::unknown_ptr) trace_token_state_changed_event;
    
    // [EtwTraceTouchHWTimeStamp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc700, 0x1eb80 bytes
    // win32kbase.sys .text:0x1364b0, 0x243e0 bytes
    // win32kbase.sys .text:0x1681e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x133e60, 0x243e0 bytes
    //
    _q43(sdk::unknown_ptr) trace_touch_hw_time_stamp;
    
    // [EtwTraceTouchInjectionStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc750, 0x1eb80 bytes
    // win32kbase.sys .text:0x136500, 0x243e0 bytes
    // win32kbase.sys .text:0x168230, 0x27ef0 bytes
    // win32kbase.sys .text:0x133eb0, 0x243e0 bytes
    //
    _q44(sdk::unknown_ptr) trace_touch_injection_start;
    
    // [EtwTraceTouchInjectionStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc780, 0x1eb80 bytes
    // win32kbase.sys .text:0x136530, 0x243e0 bytes
    // win32kbase.sys .text:0x168260, 0x27ef0 bytes
    // win32kbase.sys .text:0x133ee0, 0x243e0 bytes
    //
    _q45(sdk::unknown_ptr) trace_touch_injection_stop;
    
    // [EtwTraceTouchPadAAP]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc7b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x136560, 0x243e0 bytes
    // win32kbase.sys .text:0x168290, 0x27ef0 bytes
    // win32kbase.sys .text:0x133f10, 0x243e0 bytes
    //
    _q46(sdk::unknown_ptr) trace_touch_pad_aap;
    
    // [EtwTraceTouchPadConfidenceCleared]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc7f0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1365a0, 0x243e0 bytes
    // win32kbase.sys .text:0x1682d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x133f50, 0x243e0 bytes
    //
    _q47(sdk::unknown_ptr) trace_touch_pad_confidence_cleared;
    
    // [EtwTraceTouchPadConfidenceUpped]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc820, 0x1eb80 bytes
    // win32kbase.sys .text:0x1365d0, 0x243e0 bytes
    // win32kbase.sys .text:0x168300, 0x27ef0 bytes
    // win32kbase.sys .text:0x133f80, 0x243e0 bytes
    //
    _q48(sdk::unknown_ptr) trace_touch_pad_confidence_upped;
    
    // [EtwTraceTouchPadCurtainSize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc850, 0x1eb80 bytes
    // win32kbase.sys .text:0x136600, 0x243e0 bytes
    // win32kbase.sys .text:0x168330, 0x27ef0 bytes
    // win32kbase.sys .text:0x133fb0, 0x243e0 bytes
    //
    _q49(sdk::unknown_ptr) trace_touch_pad_curtain_size;
    
    // [EtwTraceTouchPadCurtainState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc880, 0x1eb80 bytes
    // win32kbase.sys .text:0x136630, 0x243e0 bytes
    // win32kbase.sys .text:0x168360, 0x27ef0 bytes
    // win32kbase.sys .text:0x133fe0, 0x243e0 bytes
    //
    _q50(sdk::unknown_ptr) trace_touch_pad_curtain_state;
    
    // [EtwTraceTouchPadEnabledStatusChangeStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc8a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x136660, 0x243e0 bytes
    // win32kbase.sys .text:0x168390, 0x27ef0 bytes
    // win32kbase.sys .text:0x134010, 0x243e0 bytes
    //
    _q51(sdk::unknown_ptr) trace_touch_pad_enabled_status_change_start;
    
    // [EtwTraceTouchPadEnabledStatusChangeStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc8d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x136690, 0x243e0 bytes
    // win32kbase.sys .text:0x1683c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x134040, 0x243e0 bytes
    //
    _q52(sdk::unknown_ptr) trace_touch_pad_enabled_status_change_stop;
    
    // [EtwTraceTouchPadHIDProcessingStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc900, 0x1eb80 bytes
    // win32kbase.sys .text:0x1366c0, 0x243e0 bytes
    // win32kbase.sys .text:0x1683f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x134070, 0x243e0 bytes
    //
    _q53(sdk::unknown_ptr) trace_touch_pad_hid_processing_start;
    
    // [EtwTraceTouchPadHIDProcessingStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc930, 0x1eb80 bytes
    // win32kbase.sys .text:0x1366f0, 0x243e0 bytes
    // win32kbase.sys .text:0x168420, 0x27ef0 bytes
    // win32kbase.sys .text:0x1340a0, 0x243e0 bytes
    //
    _q54(sdk::unknown_ptr) trace_touch_pad_hid_processing_stop;
    
    // [EtwTraceTouchPadHWTimeStamp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbc960, 0x1eb80 bytes
    // win32kbase.sys .text:0x136720, 0x243e0 bytes
    // win32kbase.sys .text:0x168450, 0x27ef0 bytes
    // win32kbase.sys .text:0x1340d0, 0x243e0 bytes
    //
    _q55(sdk::unknown_ptr) trace_touch_pad_hw_time_stamp;
    
    // [EtwTraceTouchPadTypeDiscovered]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbca30, 0x1eb80 bytes
    // win32kbase.sys .text:0x1367f0, 0x243e0 bytes
    // win32kbase.sys .text:0x168520, 0x27ef0 bytes
    // win32kbase.sys .text:0x1341a0, 0x243e0 bytes
    //
    _q56(sdk::unknown_ptr) trace_touch_pad_type_discovered;
    
    // [EtwTraceTouchPadWhiteListDeviceDetected]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbcac0, 0x1eb80 bytes
    // win32kbase.sys .text:0x136880, 0x243e0 bytes
    // win32kbase.sys .text:0x1685b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x134230, 0x243e0 bytes
    //
    _q57(sdk::unknown_ptr) trace_touch_pad_white_list_device_detected;
    
    // [EtwTraceTouchPadWMPointerProcessingStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbca60, 0x1eb80 bytes
    // win32kbase.sys .text:0x136820, 0x243e0 bytes
    // win32kbase.sys .text:0x168550, 0x27ef0 bytes
    // win32kbase.sys .text:0x1341d0, 0x243e0 bytes
    //
    _q58(sdk::unknown_ptr) trace_touch_pad_wm_pointer_processing_start;
    
    // [EtwTraceTouchPadWMPointerProcessingStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbca90, 0x1eb80 bytes
    // win32kbase.sys .text:0x136850, 0x243e0 bytes
    // win32kbase.sys .text:0x168580, 0x27ef0 bytes
    // win32kbase.sys .text:0x134200, 0x243e0 bytes
    //
    _q59(sdk::unknown_ptr) trace_touch_pad_wm_pointer_processing_stop;
    
    // [EtwTraceTouchTargetingOffset]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbcaf0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1368b0, 0x243e0 bytes
    // win32kbase.sys .text:0x1685e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x134260, 0x243e0 bytes
    //
    _q60(sdk::unknown_ptr) trace_touch_targeting_offset;
    
    // [EtwTraceTouchTargetingPointerEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbcb20, 0x1eb80 bytes
    // win32kbase.sys .text:0x1368f0, 0x243e0 bytes
    // win32kbase.sys .text:0x168620, 0x27ef0 bytes
    // win32kbase.sys .text:0x1342a0, 0x243e0 bytes
    //
    _q61(sdk::unknown_ptr) trace_touch_targeting_pointer_event;
    
    // [EtwTraceTouchTargetingPointerTargetStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbcbb0, 0x1eb80 bytes
    // win32kbase.sys .text:0x136980, 0x243e0 bytes
    // win32kbase.sys .text:0x1686b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x134330, 0x243e0 bytes
    //
    _q62(sdk::unknown_ptr) trace_touch_targeting_pointer_target_start;
    
    // [EtwTraceTouchTargetingPointerTargetStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbcbe0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1369b0, 0x243e0 bytes
    // win32kbase.sys .text:0x1686e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x134360, 0x243e0 bytes
    //
    _q63(sdk::unknown_ptr) trace_touch_targeting_pointer_target_stop;
    
    // [EtwTraceTouchTargetingSpeedHitTestStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbcc10, 0x1eb80 bytes
    // win32kbase.sys .text:0x1369e0, 0x243e0 bytes
    // win32kbase.sys .text:0x168710, 0x27ef0 bytes
    // win32kbase.sys .text:0x134390, 0x243e0 bytes
    //
    _q64(sdk::unknown_ptr) trace_touch_targeting_speed_hit_test_start;
    
    // [EtwTraceTouchTargetingSpeedHitTestStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbcc40, 0x1eb80 bytes
    // win32kbase.sys .text:0x136a10, 0x243e0 bytes
    // win32kbase.sys .text:0x168740, 0x27ef0 bytes
    // win32kbase.sys .text:0x1343c0, 0x243e0 bytes
    //
    _q65(sdk::unknown_ptr) trace_touch_targeting_speed_hit_test_stop;
    
    // [EtwTraceTouchTargetingWindowHitTestStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbcc70, 0x1eb80 bytes
    // win32kbase.sys .text:0x136a40, 0x243e0 bytes
    // win32kbase.sys .text:0x168770, 0x27ef0 bytes
    // win32kbase.sys .text:0x1343f0, 0x243e0 bytes
    //
    _q66(sdk::unknown_ptr) trace_touch_targeting_window_hit_test_start;
    
    // [EtwTraceTouchTargetingWindowHitTestStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbcca0, 0x1eb80 bytes
    // win32kbase.sys .text:0x136a70, 0x243e0 bytes
    // win32kbase.sys .text:0x1687a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x134420, 0x243e0 bytes
    //
    _q67(sdk::unknown_ptr) trace_touch_targeting_window_hit_test_stop;
    
    // [EtwTraceTouchpadEndInertiaQueued]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbccd0, 0x1eb80 bytes
    // win32kbase.sys .text:0x136aa0, 0x243e0 bytes
    // win32kbase.sys .text:0x1687d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x134450, 0x243e0 bytes
    //
    _q68(sdk::unknown_ptr) trace_touchpad_end_inertia_queued;
    
    // [EtwTraceTouchpadGestureDetected]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbcd00, 0x1eb80 bytes
    // win32kbase.sys .text:0x136ad0, 0x243e0 bytes
    // win32kbase.sys .text:0x168800, 0x27ef0 bytes
    // win32kbase.sys .text:0x134480, 0x243e0 bytes
    //
    _q69(sdk::unknown_ptr) trace_touchpad_gesture_detected;
    
    // [EtwTraceTouchpadInertiaContact]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbcd30, 0x1eb80 bytes
    // win32kbase.sys .text:0x136b00, 0x243e0 bytes
    // win32kbase.sys .text:0x168830, 0x27ef0 bytes
    // win32kbase.sys .text:0x1344b0, 0x243e0 bytes
    //
    _q70(sdk::unknown_ptr) trace_touchpad_inertia_contact;
    
    // [EtwTraceTouchpadStopInertiaQueued]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbcd60, 0x1eb80 bytes
    // win32kbase.sys .text:0x136b30, 0x243e0 bytes
    // win32kbase.sys .text:0x168860, 0x27ef0 bytes
    // win32kbase.sys .text:0x1344e0, 0x243e0 bytes
    //
    _q71(sdk::unknown_ptr) trace_touchpad_stop_inertia_queued;
    
    // [EtwTraceTransformAgeDecay]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbcd90, 0x1eb80 bytes
    // win32kbase.sys .text:0x136b60, 0x243e0 bytes
    // win32kbase.sys .text:0x168890, 0x27ef0 bytes
    // win32kbase.sys .text:0x134510, 0x243e0 bytes
    //
    _q72(sdk::unknown_ptr) trace_transform_age_decay;
    
    // [EtwTraceTrappedAppContainerRender]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x47d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x15cca0, 0x243e0 bytes
    // win32kbase.sys .text:0x18f790, 0x27ef0 bytes
    // win32kbase.sys .text:0x15b090, 0x243e0 bytes
    //
    _q73(sdk::unknown_ptr) trace_trapped_app_container_render;
    
    // [EtwTraceUIPIClipboardError]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbcdc0, 0x1eb80 bytes
    // win32kbase.sys .text:0x136b90, 0x243e0 bytes
    // win32kbase.sys .text:0x1688c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x134540, 0x243e0 bytes
    //
    _q74(sdk::unknown_ptr) trace_uipi_clipboard_error;
    
    // [EtwTraceUIPIEventHookError]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7f090, 0x1eb80 bytes
    // win32kbase.sys .text:0x136c80, 0x243e0 bytes
    // win32kbase.sys .text:0x168a00, 0x27ef0 bytes
    // win32kbase.sys .text:0x134630, 0x243e0 bytes
    //
    _q75(sdk::unknown_ptr) trace_uipi_event_hook_error;
    
    // [EtwTraceUIPIHandleValidationError]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x817f8, 0x1eb80 bytes
    // win32kbase.sys .text:0x11f94, 0x243e0 bytes
    // win32kbase.sys .text:0x12cf0, 0x27ef0 bytes
    // win32kbase.sys .text:0x72a74, 0x243e0 bytes
    //
    _q76(sdk::unknown_ptr) trace_uipi_handle_validation_error;
    
    // [EtwTraceUIPIHookError]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbce90, 0x1eb80 bytes
    // win32kbase.sys .text:0x136d80, 0x243e0 bytes
    // win32kbase.sys .text:0x168b30, 0x27ef0 bytes
    // win32kbase.sys .text:0x134730, 0x243e0 bytes
    //
    _q77(sdk::unknown_ptr) trace_uipi_hook_error;
    
    // [EtwTraceUIPIInputError]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7af00, 0x1eb80 bytes
    // win32kbase.sys .text:0x11ed0, 0x243e0 bytes
    // win32kbase.sys .text:0x12ee0, 0x27ef0 bytes
    // win32kbase.sys .text:0x729b0, 0x243e0 bytes
    //
    _q78(sdk::unknown_ptr) trace_uipi_input_error;
    
    // [EtwTraceUIPIMsgError]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7a490, 0x1eb80 bytes
    // win32kbase.sys .text:0x11c60, 0x243e0 bytes
    // win32kbase.sys .text:0xbfc80, 0x27ef0 bytes
    // win32kbase.sys .text:0x72740, 0x243e0 bytes
    //
    _q79(sdk::unknown_ptr) trace_uipi_msg_error;
    
    // [EtwTraceUIPISystemError]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7b730, 0x1eb80 bytes
    // win32kbase.sys .text:0x11e10, 0x243e0 bytes
    // win32kbase.sys .text:0xc7660, 0x27ef0 bytes
    // win32kbase.sys .text:0x728f0, 0x243e0 bytes
    //
    _q80(sdk::unknown_ptr) trace_uipi_system_error;
    
    // [EtwTraceUserIsActive]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x79a10, 0x1eb80 bytes
    // win32kbase.sys .text:0x2cdf0, 0x243e0 bytes
    // win32kbase.sys .text:0x11e00, 0x27ef0 bytes
    // win32kbase.sys .text:0x6f360, 0x243e0 bytes
    //
    _q81(sdk::unknown_ptr) trace_user_is_active;
    
    // [EtwTraceWaitCursor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7a980, 0x1eb80 bytes
    // win32kbase.sys .text:0xb38f0, 0x243e0 bytes
    // win32kbase.sys .text:0xc69a0, 0x27ef0 bytes
    // win32kbase.sys .text:0xabdf0, 0x243e0 bytes
    //
    _q82(sdk::unknown_ptr) trace_wait_cursor;
    
    // [EtwTraceWakeInputIdle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x73460, 0x1eb80 bytes
    // win32kbase.sys .text:0x9de10, 0x243e0 bytes
    // win32kbase.sys .text:0xaca90, 0x27ef0 bytes
    // win32kbase.sys .text:0x8cd80, 0x243e0 bytes
    //
    _q83(sdk::unknown_ptr) trace_wake_input_idle;
    
    // [EtwTraceWakePump]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x772f0, 0x1eb80 bytes
    // win32kbase.sys .text:0x89bc0, 0x243e0 bytes
    // win32kbase.sys .text:0x14990, 0x27ef0 bytes
    // win32kbase.sys .text:0x65060, 0x243e0 bytes
    //
    _q84(sdk::unknown_ptr) trace_wake_pump;
    
    // [EtwTraceWakeRIT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbcf90, 0x1eb80 bytes
    // win32kbase.sys .text:0xc10e0, 0x243e0 bytes
    // win32kbase.sys .text:0xd5970, 0x27ef0 bytes
    // win32kbase.sys .text:0xba810, 0x243e0 bytes
    //
    _q85(sdk::unknown_ptr) trace_wake_rit;
    
    // [EtwTraceWindowRenderingOldToNewRedirectionBitmap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x81ed0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc3590, 0x243e0 bytes
    // win32kbase.sys .text:0xd6240, 0x27ef0 bytes
    // win32kbase.sys .text:0xbc9c0, 0x243e0 bytes
    //
    _q86(sdk::unknown_ptr) trace_window_rendering_old_to_new_redirection_bitmap;
    
    // [EtwTraceWinlogonSleepEndEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x884c0, 0x1eb80 bytes
    // win32kbase.sys .text:0xd0080, 0x243e0 bytes
    // win32kbase.sys .text:0xe14c0, 0x27ef0 bytes
    // win32kbase.sys .text:0xcd610, 0x243e0 bytes
    //
    _q87(sdk::unknown_ptr) trace_winlogon_sleep_end_event;
    
    // [EtwTraceWinlogonSleepStartEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x88070, 0x1eb80 bytes
    // win32kbase.sys .text:0xcf7e0, 0x243e0 bytes
    // win32kbase.sys .text:0xe0a70, 0x27ef0 bytes
    // win32kbase.sys .text:0xce6a0, 0x243e0 bytes
    //
    _q88(sdk::unknown_ptr) trace_winlogon_sleep_start_event;
    
    // [EtwTracexxxUserResetDisplayDeviceBegin]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8a100, 0x1eb80 bytes
    // win32kbase.sys .text:0xd2930, 0x243e0 bytes
    // win32kbase.sys .text:0xe3c60, 0x27ef0 bytes
    // win32kbase.sys .text:0xd12d0, 0x243e0 bytes
    //
    _q89(sdk::unknown_ptr) tracexxx_user_reset_display_device_begin;
    
    // [EtwTracexxxUserResetDisplayDeviceEnd]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8a0f0, 0x1eb80 bytes
    // win32kbase.sys .text:0xd2910, 0x243e0 bytes
    // win32kbase.sys .text:0xe3c40, 0x27ef0 bytes
    // win32kbase.sys .text:0xd12b0, 0x243e0 bytes
    //
    _q90(sdk::unknown_ptr) tracexxx_user_reset_display_device_end;
    
    // [EtwTranslationUpdate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd0cb0, 0x1eb80 bytes
    // win32kbase.sys .text:0x15ce60, 0x243e0 bytes
    // win32kbase.sys .text:0x18f950, 0x27ef0 bytes
    // win32kbase.sys .text:0x15b250, 0x243e0 bytes
    //
    _q91(sdk::unknown_ptr) translation_update;
    
    // [EtwTranslationUpdateOffset]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd0cf0, 0x1eb80 bytes
    // win32kbase.sys .text:0x15cea0, 0x243e0 bytes
    // win32kbase.sys .text:0x18f990, 0x27ef0 bytes
    // win32kbase.sys .text:0x15b290, 0x243e0 bytes
    //
    _q92(sdk::unknown_ptr) translation_update_offset;
    
    // [EtwTranslationUpdateOffsetDWM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd0d20, 0x1eb80 bytes
    // win32kbase.sys .text:0x15cee0, 0x243e0 bytes
    // win32kbase.sys .text:0x18f9d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x15b2d0, 0x243e0 bytes
    //
    _q93(sdk::unknown_ptr) translation_update_offset_dwm;
    
    // [EtwUpdateEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x771c0, 0x1eb80 bytes
    // win32kbase.sys .text:0xa9130, 0x243e0 bytes
    // win32kbase.sys .text:0xb6970, 0x27ef0 bytes
    // win32kbase.sys .text:0x9e380, 0x243e0 bytes
    //
    _q94(sdk::unknown_ptr) update_event;
    
    // [EtwWakeRIT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x109d50, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x22c328, 0x243e0 bytes
    // win32kbase.sys .rdata:0x27fef8, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22a368, 0x243e0 bytes
    //
    _q95(sdk::unknown_ptr) wake_rit;
    
    // [EtwWindowRendering]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd0d50, 0x1eb80 bytes
    // win32kbase.sys .text:0x15cf20, 0x243e0 bytes
    // win32kbase.sys .text:0x18fa10, 0x27ef0 bytes
    // win32kbase.sys .text:0x15b310, 0x243e0 bytes
    //
    _q96(sdk::unknown_ptr) window_rendering;
    
    // [EtwEx_tidActivityInfoTransfer]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .text:0x4c878, 0x1c8a8 bytes
    // ndis.sys .text:0x64ea8, 0x1d2c0 bytes
    // ndis.sys .text:0x5d0d0, 0x1e858 bytes
    // ndis.sys .text:0x65748, 0x1d2c0 bytes
    //
    _q97(sdk::function<uint32_t(uint64_t, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const struct nt::guid_t*, uint8_t, const struct nt::guid_t*, uint32_t)>*) ex_tid_activity_info_transfer;
    
    // [EtwGuidNdisReceive]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .rdata:0x77a20, 0x1c8a8 bytes
    // ndis.sys .rdata:0xccc98, 0x1d2c0 bytes
    // ndis.sys .rdata:0xd2be0, 0x1e858 bytes
    // ndis.sys .rdata:0xcce78, 0x1d2c0 bytes
    //
    _q98(sdk::unknown_ptr) guid_ndis_receive;
    
    // [EtwEx_tidActivityInfo]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x15284, 0x15e38 bytes
    // afd.sys .text:0xf438, 0x15fb8 bytes
    // afd.sys .text:0x305a4, 0x187f8 bytes
    // afd.sys .text:0xf438, 0x15fb8 bytes
    //
    _q99(sdk::function<uint32_t(uint64_t, const struct nt::event_descriptor_t*, const struct nt::guid_t*, const struct nt::guid_t*, uint32_t)>*) ex_tid_activity_info;
    
    // [EtwCheckCoverage]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x84a90, 0x6fc38 bytes
    // ntdll.dll .text:0x88a20, 0x74648 bytes
    // ntdll.dll .text:0x84c30, 0x6fc38 bytes
    //
    _r00(sdk::unknown_ptr) check_coverage;
    
    // [EtwCreateTraceInstanceId]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfdf40, 0x67960 bytes
    // ntdll.dll .text:0x110050, 0x6fc38 bytes
    // ntdll.dll .text:0x123c80, 0x74648 bytes
    // ntdll.dll .text:0x1101f0, 0x6fc38 bytes
    //
    _r01(sdk::unknown_ptr) create_trace_instance_id;
    
    // [EtwDeliverDataBlock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x152b0, 0x67960 bytes
    // ntdll.dll .text:0x82f0, 0x6fc38 bytes
    // ntdll.dll .text:0x61630, 0x74648 bytes
    // ntdll.dll .text:0x82f0, 0x6fc38 bytes
    //
    _r02(sdk::unknown_ptr) deliver_data_block;
    
    // [EtwEnumerateProcessRegGuids]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfdfa0, 0x67960 bytes
    // ntdll.dll .text:0x10fc30, 0x6fc38 bytes
    // ntdll.dll .text:0x123860, 0x74648 bytes
    // ntdll.dll .text:0x10fdd0, 0x6fc38 bytes
    //
    _r03(sdk::unknown_ptr) enumerate_process_reg_guids;
    
    // [EtwEventActivityIdControl]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x71250, 0x67960 bytes
    // ntdll.dll .text:0x5bbc0, 0x6fc38 bytes
    // ntdll.dll .text:0x5c400, 0x74648 bytes
    // ntdll.dll .text:0x5bbc0, 0x6fc38 bytes
    //
    _r04(sdk::unknown_ptr) event_activity_id_control;
    
    // [EtwEventProviderEnabled]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x90d20, 0x67960 bytes
    // ntdll.dll .text:0x74450, 0x6fc38 bytes
    // ntdll.dll .text:0x30110, 0x74648 bytes
    // ntdll.dll .text:0x745f0, 0x6fc38 bytes
    //
    _r05(sdk::unknown_ptr) event_provider_enabled_;
    
    // [EtwEventRegister]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x12830, 0x67960 bytes
    // ntdll.dll .text:0xa1c0, 0x6fc38 bytes
    // ntdll.dll .text:0x31b50, 0x74648 bytes
    // ntdll.dll .text:0xa1c0, 0x6fc38 bytes
    //
    _r06(sdk::function<int32_t(const struct nt::guid_t*, sdk::function<void(const struct nt::guid_t*, uint32_t, uint8_t, uint64_t, uint64_t, struct nt::event_filter_descriptor_t*, void*)>*, void*, uint64_t*)>*) event_register;
    
    // [EtwEventSetInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x125e0, 0x67960 bytes
    // ntdll.dll .text:0x9e30, 0x6fc38 bytes
    // ntdll.dll .text:0x2fd00, 0x74648 bytes
    // ntdll.dll .text:0x9e30, 0x6fc38 bytes
    //
    _r07(sdk::unknown_ptr) event_set_information;
    
    // [EtwEventUnregister]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5fa00, 0x67960 bytes
    // ntdll.dll .text:0x4a450, 0x6fc38 bytes
    // ntdll.dll .text:0x2fc90, 0x74648 bytes
    // ntdll.dll .text:0x4a450, 0x6fc38 bytes
    //
    _r08(sdk::unknown_ptr) event_unregister;
    
    // [EtwEventWrite]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x61230, 0x67960 bytes
    // ntdll.dll .text:0x49270, 0x6fc38 bytes
    // ntdll.dll .text:0x302d0, 0x74648 bytes
    // ntdll.dll .text:0x49270, 0x6fc38 bytes
    //
    _r09(sdk::unknown_ptr) event_write;
    
    // [EtwEventWriteEndScenario]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5f2d0, 0x67960 bytes
    // ntdll.dll .text:0x48ca0, 0x6fc38 bytes
    // ntdll.dll .text:0x527e0, 0x74648 bytes
    // ntdll.dll .text:0x48ca0, 0x6fc38 bytes
    //
    _r10(sdk::unknown_ptr) event_write_end_scenario;
    
    // [EtwEventWriteEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x611e0, 0x67960 bytes
    // ntdll.dll .text:0x49220, 0x6fc38 bytes
    // ntdll.dll .text:0x7c8f0, 0x74648 bytes
    // ntdll.dll .text:0x49220, 0x6fc38 bytes
    //
    _r11(sdk::unknown_ptr) event_write_ex;
    
    // [EtwEventWriteFull]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5ffc0, 0x67960 bytes
    // ntdll.dll .text:0x491d0, 0x6fc38 bytes
    // ntdll.dll .text:0x867a0, 0x74648 bytes
    // ntdll.dll .text:0x491d0, 0x6fc38 bytes
    //
    _r12(sdk::unknown_ptr) event_write_full;
    
    // [EtwEventWriteNoRegistration]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5e920, 0x67960 bytes
    // ntdll.dll .text:0x63540, 0x6fc38 bytes
    // ntdll.dll .text:0x86f90, 0x74648 bytes
    // ntdll.dll .text:0x63660, 0x6fc38 bytes
    //
    _r13(sdk::unknown_ptr) event_write_no_registration;
    
    // [EtwEventWriteStartScenario]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8db60, 0x67960 bytes
    // ntdll.dll .text:0x88cf0, 0x6fc38 bytes
    // ntdll.dll .text:0x526e0, 0x74648 bytes
    // ntdll.dll .text:0x88e90, 0x6fc38 bytes
    //
    _r14(sdk::unknown_ptr) event_write_start_scenario;
    
    // [EtwEventWriteString]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfe0c0, 0x67960 bytes
    // ntdll.dll .text:0x10fd30, 0x6fc38 bytes
    // ntdll.dll .text:0x123960, 0x74648 bytes
    // ntdll.dll .text:0x10fed0, 0x6fc38 bytes
    //
    _r15(sdk::unknown_ptr) event_write_string;
    
    // [EtwEventWriteTransfer]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x61270, 0x67960 bytes
    // ntdll.dll .text:0x492b0, 0x6fc38 bytes
    // ntdll.dll .text:0x304b0, 0x74648 bytes
    // ntdll.dll .text:0x492b0, 0x6fc38 bytes
    //
    _r16(sdk::unknown_ptr) event_write_transfer;
    
    // [EtwGetTraceEnableFlags]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85ac0, 0x67960 bytes
    // ntdll.dll .text:0x808d0, 0x6fc38 bytes
    // ntdll.dll .text:0x81700, 0x74648 bytes
    // ntdll.dll .text:0x80a70, 0x6fc38 bytes
    //
    _r17(sdk::unknown_ptr) get_trace_enable_flags;
    
    // [EtwGetTraceEnableLevel]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85b00, 0x67960 bytes
    // ntdll.dll .text:0x80890, 0x6fc38 bytes
    // ntdll.dll .text:0x816c0, 0x74648 bytes
    // ntdll.dll .text:0x80a30, 0x6fc38 bytes
    //
    _r18(sdk::unknown_ptr) get_trace_enable_level;
    
    // [EtwGetTraceLoggerHandle]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x853f0, 0x67960 bytes
    // ntdll.dll .text:0x80850, 0x6fc38 bytes
    // ntdll.dll .text:0x81680, 0x74648 bytes
    // ntdll.dll .text:0x809f0, 0x6fc38 bytes
    //
    _r19(sdk::unknown_ptr) get_trace_logger_handle;
    
    // [EtwLogTraceEvent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x61b90, 0x67960 bytes
    // ntdll.dll .text:0x49c10, 0x6fc38 bytes
    // ntdll.dll .text:0xafc00, 0x74648 bytes
    // ntdll.dll .text:0x49c10, 0x6fc38 bytes
    //
    _r20(sdk::unknown_ptr) log_trace_event;
    
    // [EtwNotificationRegister]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x12880, 0x67960 bytes
    // ntdll.dll .text:0xa380, 0x6fc38 bytes
    // ntdll.dll .text:0x327a0, 0x74648 bytes
    // ntdll.dll .text:0xa380, 0x6fc38 bytes
    //
    _r21(sdk::unknown_ptr) notification_register;
    
    // [EtwNotificationUnregister]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5fa10, 0x67960 bytes
    // ntdll.dll .text:0x4a460, 0x6fc38 bytes
    // ntdll.dll .text:0x301a0, 0x74648 bytes
    // ntdll.dll .text:0x4a460, 0x6fc38 bytes
    //
    _r22(sdk::unknown_ptr) notification_unregister;
    
    // [EtwProcessPrivateLoggerRequest]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x63ca0, 0x67960 bytes
    // ntdll.dll .text:0x4deb0, 0x6fc38 bytes
    // ntdll.dll .text:0x5e9e0, 0x74648 bytes
    // ntdll.dll .text:0x4deb0, 0x6fc38 bytes
    //
    _r23(sdk::unknown_ptr) process_private_logger_request;
    
    // [EtwRegisterSecurityProvider]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8dd20, 0x67960 bytes
    // ntdll.dll .text:0x8ae90, 0x6fc38 bytes
    // ntdll.dll .text:0x8e2a0, 0x74648 bytes
    // ntdll.dll .text:0x8b030, 0x6fc38 bytes
    //
    _r24(sdk::unknown_ptr) register_security_provider;
    
    // [EtwRegisterTraceGuidsA]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x15b40, 0x67960 bytes
    // ntdll.dll .text:0x84210, 0x6fc38 bytes
    // ntdll.dll .text:0x609c0, 0x74648 bytes
    // ntdll.dll .text:0x843b0, 0x6fc38 bytes
    //
    _r25(sdk::unknown_ptr) register_trace_guids_a;
    
    // [EtwRegisterTraceGuidsW]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x12760, 0x67960 bytes
    // ntdll.dll .text:0x9d50, 0x6fc38 bytes
    // ntdll.dll .text:0x60a00, 0x74648 bytes
    // ntdll.dll .text:0x9d50, 0x6fc38 bytes
    //
    _r26(sdk::unknown_ptr) register_trace_guids_w;
    
    // [EtwReplyNotification]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x3020, 0x67960 bytes
    // ntdll.dll .text:0x19a0, 0x6fc38 bytes
    // ntdll.dll .text:0x61ed0, 0x74648 bytes
    // ntdll.dll .text:0x19a0, 0x6fc38 bytes
    //
    _r27(sdk::unknown_ptr) reply_notification;
    
    // [EtwSendNotification]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x60010, 0x67960 bytes
    // ntdll.dll .text:0x4a600, 0x6fc38 bytes
    // ntdll.dll .text:0x52bf0, 0x74648 bytes
    // ntdll.dll .text:0x4a600, 0x6fc38 bytes
    //
    _r28(sdk::unknown_ptr) send_notification;
    
    // [EtwSetMark]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfe3e0, 0x67960 bytes
    // ntdll.dll .text:0x897b0, 0x6fc38 bytes
    // ntdll.dll .text:0x8c390, 0x74648 bytes
    // ntdll.dll .text:0x89950, 0x6fc38 bytes
    //
    _r29(sdk::unknown_ptr) set_mark;
    
    // [EtwTraceEventInstance]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xfe410, 0x67960 bytes
    // ntdll.dll .text:0x1100b0, 0x6fc38 bytes
    // ntdll.dll .text:0x123ce0, 0x74648 bytes
    // ntdll.dll .text:0x110250, 0x6fc38 bytes
    //
    _r30(sdk::unknown_ptr) trace_event_instance;
    
    // [EtwTraceMessage]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x60660, 0x67960 bytes
    // ntdll.dll .text:0x4a730, 0x6fc38 bytes
    // ntdll.dll .text:0x536b0, 0x74648 bytes
    // ntdll.dll .text:0x4a730, 0x6fc38 bytes
    //
    _r31(sdk::unknown_ptr) trace_message;
    
    // [EtwTraceMessageVa]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x60690, 0x67960 bytes
    // ntdll.dll .text:0x4a760, 0x6fc38 bytes
    // ntdll.dll .text:0x536e0, 0x74648 bytes
    // ntdll.dll .text:0x4a760, 0x6fc38 bytes
    //
    _r32(sdk::unknown_ptr) trace_message_va;
    
    // [EtwUnregisterTraceGuids]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x5f9b0, 0x67960 bytes
    // ntdll.dll .text:0x4a400, 0x6fc38 bytes
    // ntdll.dll .text:0x7d0e0, 0x74648 bytes
    // ntdll.dll .text:0x4a400, 0x6fc38 bytes
    //
    _r33(sdk::unknown_ptr) unregister_trace_guids;
    
    // [EtwWriteUMSecurityEvent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7f030, 0x67960 bytes
    // ntdll.dll .text:0x7b020, 0x6fc38 bytes
    // ntdll.dll .text:0x7b250, 0x74648 bytes
    // ntdll.dll .text:0x7b1c0, 0x6fc38 bytes
    //
    _r34(sdk::unknown_ptr) write_um_security_event;
};
#include "magic/api.end.hpp"
