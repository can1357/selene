#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "error_severity_t.hpp"
#include "error_packet_v2_t.hpp"
#include "error_source_type_t.hpp"
#include "../nt/device_object_t.hpp"
#include "error_record_header_t.hpp"
#include "error_source_descriptor_t.hpp"
#include "../nt/ipmi_os_sel_record_t.hpp"
#include "error_source_configuration_t.hpp"
#include "error_source_configuration_device_driver_t.hpp"

#include "magic/api.start.hpp"
namespace whea
{
    struct drs_object_t;

    // [WheaAddrTranslateAndAddToDefectListInPlugin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9faf3c, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) addr_translate_and_add_to_defect_list_in_plugin;
    
    // [WheaEnterCriticalState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5fb720, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) enter_critical_state;
    
    // [WheaErrorSourceGetState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5fb730, 0x1fd000 bytes
    //
    _m2(sdk::unknown_ptr) error_source_get_state;
    
    // [WheaExecuteRowFailureCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9fbc2c, 0x1fd000 bytes
    //
    _m3(sdk::unknown_ptr) execute_row_failure_check;
    
    // [WheaExitCriticalState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5fb770, 0x1fd000 bytes
    //
    _m4(sdk::unknown_ptr) exit_critical_state;
    
    // [WheaFlushETWEventsAddWorkRtn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5fe164, 0x1fd000 bytes
    //
    _m5(sdk::unknown_ptr) flush_etw_events_add_work_rtn;
    
    // [WheaFlushETWEventsDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5fe1e0, 0x1fd000 bytes
    //
    _m6(sdk::unknown_ptr) flush_etw_events_dpc_routine;
    
    // [WheaFlushETWEventsDpcWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc2b4c0, 0x1fd000 bytes
    //
    _m7(sdk::unknown_ptr) flush_etw_events_dpc_worker;
    
    // [WheaFlushETWEventsDpcWorkerInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3e52a4, 0x1fd000 bytes
    //
    _m8(sdk::unknown_ptr) flush_etw_events_dpc_worker_init;
    
    // [WheaFlushETWEventsInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xcf7612, 0x1fd000 bytes
    //
    _m9(sdk::unknown_ptr) flush_etw_events_initialized;
    
    // [WheaFlushETWEventsSelectProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x56c230, 0x1fd000 bytes
    //
    _n0(sdk::unknown_ptr) flush_etw_events_select_processor;
    
    // [WheaFlushETWEventsWorkerRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5fe210, 0x1fd000 bytes
    //
    _n1(sdk::unknown_ptr) flush_etw_events_worker_routine;
    
    // [WheaGetCurrentProcessName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5fce30, 0x1fd000 bytes
    //
    _n2(sdk::unknown_ptr) get_current_process_name;
    
    // [WheaGetNotifyAllOfflinesPolicy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x423770, 0x1fd000 bytes
    //
    _n3(sdk::unknown_ptr) get_notify_all_offlines_policy;
    
    // [WheaInitializeStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x3d1d0, 0x1fd000 bytes
    //
    _n4(sdk::unknown_ptr) initialize_start;
    
    // [WheaInitializeStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x3ba98, 0x1fd000 bytes
    //
    _n5(sdk::unknown_ptr) initialize_stop;
    
    // [WheaIpmiContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc2c6c0, 0x1fd000 bytes
    //
    _n6(sdk::unknown_ptr) ipmi_context;
    
    // [WheaIpmiContextLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc2c730, 0x1fd000 bytes
    //
    _n7(sdk::unknown_ptr) ipmi_context_lock;
    
    // [WheaIpmiHwLogLocked]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc2c6bc, 0x1fd000 bytes
    //
    _n8(sdk::unknown_ptr) ipmi_hw_log_locked;
    
    // [WheaIsAltContextAllocPossible]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5fced0, 0x1fd000 bytes
    //
    _n9(sdk::unknown_ptr) is_alt_context_alloc_possible;
    
    // [WheaIsCriticalState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3908a0, 0x1fd000 bytes
    //
    _o0(sdk::unknown_ptr) is_critical_state;
    
    // [WheaPageOfflineAndPersist]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9fb170, 0x1fd000 bytes
    //
    _o1(sdk::unknown_ptr) page_offline_and_persist;
    
    // [WHEAPageOfflineMethods_GUID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x262d0, 0x1fd000 bytes
    //
    _o2(sdk::unknown_ptr) page_offline_methods_guid;
    
    // [WheaPersistBadPageToRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5fd140, 0x1fd000 bytes
    //
    _o3(sdk::unknown_ptr) persist_bad_page_to_registry;
    
    // [WheaPersistOfflinedPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x22ff20, 0x32828 bytes
    //
    _o4(sdk::unknown_ptr) persist_offlined_page;
    
    // [WHEAPluginCtlMethods_GUID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x262c0, 0x1fd000 bytes
    //
    _o5(sdk::unknown_ptr) plugin_ctl_methods_guid;
    
    // [WheaProcessWaitingETWEvents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5fe2f0, 0x1fd000 bytes
    //
    _o6(sdk::unknown_ptr) process_waiting_etw_events;
    
    // [WheaQuerySystemInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9faa50, 0x1fd000 bytes
    //
    _o7(sdk::unknown_ptr) query_system_information;
    
    // [WheaRecoveryBugCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5fb7b0, 0x1fd000 bytes
    //
    _o8(sdk::unknown_ptr) recovery_bug_check;
    
    // [WheaRegPolicyBadPageListLocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc0cd74, 0x1fd000 bytes
    //
    _o9(sdk::unknown_ptr) reg_policy_bad_page_list_location;
    
    // [WheaRegPolicyBadPageListMaxSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc0cd5c, 0x1fd000 bytes
    //
    _p0(sdk::unknown_ptr) reg_policy_bad_page_list_max_size;
    
    // [WheaRegPolicyNotifyAllOfflines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc0cd90, 0x1fd000 bytes
    //
    _p1(sdk::unknown_ptr) reg_policy_notify_all_offlines;
    
    // [WheaRegPolicyRowFailCheckEnable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc0cdbc, 0x1fd000 bytes
    //
    _p2(sdk::unknown_ptr) reg_policy_row_fail_check_enable;
    
    // [WheaRegPolicyRowFailCheckExtent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc0cd9c, 0x1fd000 bytes
    //
    _p3(sdk::unknown_ptr) reg_policy_row_fail_check_extent;
    
    // [WheaRegPolicyRowFailCheckThreshold]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc0cda4, 0x1fd000 bytes
    //
    _p4(sdk::unknown_ptr) reg_policy_row_fail_check_threshold;
    
    // [WheaRegisterErrorSourceOverride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5fe6c0, 0x1fd000 bytes
    //
    _p5(sdk::unknown_ptr) register_error_source_override;
    
    // [WheaResumedFromHibernate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5fb4e8, 0x1fd000 bytes
    //
    _p6(sdk::unknown_ptr) resumed_from_hibernate;
    
    // [WheaSelLogCheckPoint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9faae4, 0x1fd000 bytes
    //
    _p7(sdk::unknown_ptr) sel_log_check_point;
    
    // [WheaSelLogSetNtSchedulerAvailability]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5fb35c, 0x1fd000 bytes
    //
    _p8(sdk::unknown_ptr) sel_log_set_nt_scheduler_availability;
    
    // [WheaSignalHandlerOverride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3e9d70, 0x1fd000 bytes
    //
    _p9(sdk::unknown_ptr) signal_handler_override;
    
    // [WHEA_SQM_EVENT_ADDTOSTREAM]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .rdata:0x286b90, 0x32828 bytes
    //
    _q0(sdk::unknown_ptr) sqm_event_addtostream;
    
    // [WHEA_SQM_EVENT_INCREMENTDWORD]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .rdata:0x261a40, 0x32828 bytes
    //
    _q1(sdk::unknown_ptr) sqm_event_incrementdword;
    
    // [WHEA_SQM_EVENT_SETDWORD]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .rdata:0x261a30, 0x32828 bytes
    //
    _q2(sdk::unknown_ptr) sqm_event_setdword;
    
    // [WHEA_SQM_EVENT_SETIFMAXDWORD]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .rdata:0x261a50, 0x32828 bytes
    //
    _q3(sdk::unknown_ptr) sqm_event_setifmaxdword;
    
    // [WheaUnregisterErrorSourceOverride]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5fe9b0, 0x1fd000 bytes
    //
    _q4(sdk::unknown_ptr) unregister_error_source_override;
    
    // [WheaWmiInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b779c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b761c, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) wmi_init;
    
    // [WheaAddErrorSourceDeviceDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x78cc10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x808dd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7969b0, 0x1fe000 bytes
    //
    _q6(sdk::function<int32_t(void*, struct whea::error_source_configuration_device_driver_t*, uint32_t, uint32_t)>*) add_error_source_device_driver;
    
    // [WheaAddErrorSourceDeviceDriverV1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b6020, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e8b10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b68d0, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) add_error_source_device_driver_v1;
    
    // [WheaAddHwErrorReportSectionDeviceDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b5bd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fc2f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b5a50, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) add_hw_error_report_section_device_driver;
    
    // [WheaAttemptClearPoison]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x959f40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fafc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x958820, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) attempt_clear_poison;
    
    // [WheaCreateHwErrorReportDeviceDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b5cd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fc400, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b5b50, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) create_hw_error_report_device_driver;
    
    // [WheaDeviceDriverDefaultSourceConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc032b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc02f58, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc032f0, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) device_driver_default_source_config;
    
    // [WheaHighIrqlLogSelEventHandlerRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b7280, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fe240, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b7100, 0x1fe000 bytes
    //
    _r2(sdk::function<uint8_t(sdk::function<int32_t(void*, struct nt::ipmi_os_sel_record_t*)>*, void*)>*) high_irql_log_sel_event_handler_register;
    
    // [WheaHighIrqlLogSelEventHandlerUnregister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b72f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fe2b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b7170, 0x1fe000 bytes
    //
    _r3(sdk::function<void()>*) high_irql_log_sel_event_handler_unregister;
    
    // [WheaHwErrorReportAbandonDeviceDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b5d00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fc430, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b5b80, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) hw_error_report_abandon_device_driver;
    
    // [WheaHwErrorReportGetLogDataBufferDeviceDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b5d30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fc460, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b5bb0, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) hw_error_report_get_log_data_buffer_device_driver;
    
    // [WheaHwErrorReportMarkAsCriticalDeviceDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b5d80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fc4b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b5c00, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) hw_error_report_mark_as_critical_device_driver;
    
    // [WheaHwErrorReportSetFatalSeverityDeviceDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b5db0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fc4e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b5c30, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) hw_error_report_set_fatal_severity_device_driver;
    
    // [WheaHwErrorReportSetSectionNameDeviceDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b5e10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fc540, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b5c90, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) hw_error_report_set_section_name_device_driver;
    
    // [WheaHwErrorReportSetSeverityDeviceDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b5e60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fc590, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b5ce0, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) hw_error_report_set_severity_device_driver;
    
    // [WheaHwErrorReportSubmitDeviceDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b5ea0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fc5d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b5d20, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) hw_error_report_submit_device_driver;
    
    // [WheaLogInternalEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b60a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3908f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b6950, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) log_internal_event;
    
    // [WheaPersistBadPageToBcd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b6670, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fcf80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b64f0, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) persist_bad_page_to_bcd;
    
    // [WheaRemoveErrorSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x959bf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fabd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9584d0, 0x1fe000 bytes
    //
    _s3(sdk::function<void(uint32_t)>*) remove_error_source;
    
    // [WheaRemoveErrorSourceDeviceDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x959dc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fadb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9586a0, 0x1fe000 bytes
    //
    _s4(sdk::function<void(uint32_t)>*) remove_error_source_device_driver;
    
    // [WheaReportFatalHwErrorDeviceDriverEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b5fb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fc6f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b5e30, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) report_fatal_hw_error_device_driver_ex;
    
    // [WheaReportHwErrorDeviceDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x959ef0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9faef0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9587d0, 0x1fe000 bytes
    //
    _s6(sdk::function<int32_t(uint32_t, struct nt::device_object_t*, uint8_t*, uint32_t, struct nt::guid_t*, enum whea::error_severity_t, uint8_t*)>*) report_hw_error_device_driver;
    
    // [WheaReportHwErrorDeviceDriverEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b60d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fc810, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b5f50, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) report_hw_error_device_driver_ex;
    
    // [WheaSelLogErrorPkt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b7fbc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fb1cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b7e3c, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) sel_log_error_pkt;
    
    // [WheaSelLogEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b80a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fb2b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b7f28, 0x1fe000 bytes
    //
    _s9(sdk::unknown_ptr) sel_log_event;
    
    // [WheaUnconfigureErrorSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x9b0b30, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa974a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9afaa0, 0x1fe000 bytes
    //
    _t0(sdk::function<int32_t(enum whea::error_source_type_t)>*) unconfigure_error_source;
    
    // [WheaAddErrorSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6bce7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78cde0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x808fa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x796b80, 0x1fe000 bytes
    //
    _t1(sdk::function<int32_t(struct whea::error_source_descriptor_t*, void*)>*) add_error_source;
    
    // [WheaAttemptPhysicalPageOffline]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6bcff0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x95a000, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fb090, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9588e0, 0x1fe000 bytes
    //
    _t2(sdk::function<int32_t(uint64_t, uint8_t, uint8_t)>*) attempt_physical_page_offline;
    
    // [WHEA_BUSCHECK_GUID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x41d40, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x2feb0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3e1c0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x301f0, 0x1fe000 bytes
    //
    _t3(sdk::unknown_ptr) buscheck_guid;
    
    // [WHEA_CACHECHECK_GUID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x41d20, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x2fe90, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3e190, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x301d0, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) cachecheck_guid;
    
    // [WheaConfigureErrorSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d63b8, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x99c300, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7c980, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99b380, 0x1fe000 bytes
    //
    _t5(sdk::function<int32_t(enum whea::error_source_type_t, struct whea::error_source_configuration_t*)>*) configure_error_source;
    
    // [WheaCrashDumpInitializationComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571714, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b5df4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86f19c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bd9f0, 0x1fe000 bytes
    //
    _t6(sdk::unknown_ptr) crash_dump_initialization_complete;
    
    // [WheaDeferredRecoveryService]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x230484, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b6f70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fde50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b6df0, 0x1fe000 bytes
    //
    _t7(sdk::function<void()>*) deferred_recovery_service;
    
    // [WheaDrsDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fbae0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc15d60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c5a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15d80, 0x1fe000 bytes
    //
    _t8(sdk::unknown_ptr) drs_dpc;
    
    // [WheaDrsInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a341, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdaf51, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7611, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdaf11, 0x1fe000 bytes
    //
    _t9(sdk::unknown_ptr) drs_initialized;
    
    // [WheaDrsItemsToProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x359258, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9e90, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b940, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9e80, 0x1fe000 bytes
    //
    _u0(sdk::unknown_ptr) drs_items_to_process;
    
    // [WheaDrsList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x359248, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9e88, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b948, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9e88, 0x1fe000 bytes
    //
    _u1(sdk::unknown_ptr) drs_list;
    
    // [WheaDrsWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fbac0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc15d20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c5e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15dc0, 0x1fe000 bytes
    //
    _u2(sdk::unknown_ptr) drs_work_item;
    
    // [WHEAErrorInjectionMethods_GUID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x279978, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x20a68, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x262a0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x209d8, 0x1fe000 bytes
    //
    _u3(sdk::unknown_ptr) error_injection_methods_guid;
    
    // [WHEA_ERROR_PACKET_SECTION_GUID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x286768, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2fe60, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3e160, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x301a0, 0x1fe000 bytes
    //
    _u4(sdk::unknown_ptr) error_packet_section_guid;
    
    // [WHEAErrorSourceMethods_GUID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x279988, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x20a78, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x26290, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x209e8, 0x1fe000 bytes
    //
    _u5(sdk::unknown_ptr) error_source_methods_guid;
    
    // [WHEA_ETW_PROVIDER]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x260c70, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xdd00, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12798, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xd910, 0x1fe000 bytes
    //
    _u6(sdk::unknown_ptr) etw_provider;
    
    // [WheaGetErrPacketFromErrRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22f684, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b4f5c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x508020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b4ddc, 0x1fe000 bytes
    //
    _u7(sdk::unknown_ptr) get_err_packet_from_err_record;
    
    // [WheaGetErrorSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22f728, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b5010, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fb780, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b4e90, 0x1fe000 bytes
    //
    _u8(sdk::function<struct whea::error_source_descriptor_t*(uint32_t)>*) get_error_source;
    
    // [WheaInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x785420, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5b6fc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb27438, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5b59c, 0x1fe000 bytes
    //
    _u9(sdk::unknown_ptr) initialize;
    
    // [WheaInitializeDeferredRecoveryObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1481b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b6fb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fde90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b6e30, 0x1fe000 bytes
    //
    _v0(sdk::function<void(struct whea::drs_object_t*, void*, uint8_t)>*) initialize_deferred_recovery_object;
    
    // [WheaInitializeProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3dfe64, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9b0a64, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa973d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9af9d4, 0x1fe000 bytes
    //
    _v1(sdk::unknown_ptr) initialize_processor;
    
    // [WheaInitializeRecordHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2300c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b6920, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fd6e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b67a0, 0x1fe000 bytes
    //
    _v2(sdk::function<int32_t(struct whea::error_record_header_t*)>*) initialize_record_header;
    
    // [WheaInitializeServices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a342c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa691ac, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb547e8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa68884, 0x1fe000 bytes
    //
    _v3(sdk::unknown_ptr) initialize_services;
    
    // [WHEA_MSCHECK_GUID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x41cc0, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x2fe40, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3e140, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x30180, 0x1fe000 bytes
    //
    _v4(sdk::unknown_ptr) mscheck_guid;
    
    // [WheaPassiveDrsItemsToProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x35925c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9ea0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b930, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9e98, 0x1fe000 bytes
    //
    _v5(sdk::unknown_ptr) passive_drs_items_to_process;
    
    // [WheaPassiveDrsList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x359250, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9e98, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b938, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9e90, 0x1fe000 bytes
    //
    _v6(sdk::unknown_ptr) passive_drs_list;
    
    // [WheaPassiveDrsListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fbab8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc15d40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c600, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15d78, 0x1fe000 bytes
    //
    _v7(sdk::unknown_ptr) passive_drs_list_lock;
    
    // [WheaPendingDrsInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x359260, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9ea4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b92c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9e9c, 0x1fe000 bytes
    //
    _v8(sdk::unknown_ptr) pending_drs_interrupt;
    
    // [WHEAPolicyManagementMethods_GUID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x279968, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x20a58, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x262b0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x209c8, 0x1fe000 bytes
    //
    _v9(sdk::unknown_ptr) policy_management_methods_guid;
    
    // [WHEA_RECORD_CREATOR_GUID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2794e0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x1f8d8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x176f8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x1f858, 0x1fe000 bytes
    //
    _w0(sdk::unknown_ptr) record_creator_guid;
    
    // [WheaRegPolicyDisableOffline]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9cb0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc120d0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cdb8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12124, 0x1fe000 bytes
    //
    _w1(sdk::unknown_ptr) reg_policy_disable_offline;
    
    // [WheaRegPolicyIgnoreDummyWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9c98, 0x32828 bytes
    // ntoskrnl.exe .data:0xc120b8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd84, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1210c, 0x1fe000 bytes
    //
    _w2(sdk::unknown_ptr) reg_policy_ignore_dummy_write;
    
    // [WheaRegPolicyMemPersistOffline]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9cac, 0x32828 bytes
    // ntoskrnl.exe .data:0xc120d4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cda0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12118, 0x1fe000 bytes
    //
    _w3(sdk::unknown_ptr) reg_policy_mem_persist_offline;
    
    // [WheaRegPolicyMemPfaDisable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9ca8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc120c8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd94, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1211c, 0x1fe000 bytes
    //
    _w4(sdk::unknown_ptr) reg_policy_mem_pfa_disable;
    
    // [WheaRegPolicyMemPfaPageCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9ca4, 0x32828 bytes
    // ntoskrnl.exe .data:0xc120cc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cdb4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12110, 0x1fe000 bytes
    //
    _w5(sdk::unknown_ptr) reg_policy_mem_pfa_page_count;
    
    // [WheaRegPolicyMemPfaThreshold]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9ca0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc120c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd64, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12114, 0x1fe000 bytes
    //
    _w6(sdk::unknown_ptr) reg_policy_mem_pfa_threshold;
    
    // [WheaRegPolicyMemPfaTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9c9c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc120c4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd98, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12108, 0x1fe000 bytes
    //
    _w7(sdk::unknown_ptr) reg_policy_mem_pfa_timeout;
    
    // [WheaRegPolicyTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ecf00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981e20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa66430, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x980700, 0x1fe000 bytes
    //
    _w8(sdk::unknown_ptr) reg_policy_table;
    
    // [WheaRegPolicyTableChanged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a1d4, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b308, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51378, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b308, 0x1fe000 bytes
    //
    _w9(sdk::unknown_ptr) reg_policy_table_changed;
    
    // [WheaRegisterInUsePageOfflineNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6bd0b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x95a0d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fb230, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9589b0, 0x1fe000 bytes
    //
    _x0(sdk::function<int32_t(sdk::function<uint8_t(uint64_t, uint8_t, uint8_t, void*)>*, void*)>*) register_in_use_page_offline_notification;
    
    // [WheaRegistryKeysPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x359268, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9eac, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b95c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9ea4, 0x1fe000 bytes
    //
    _x1(sdk::unknown_ptr) registry_keys_present;
    
    // [WheaReportHwError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22f750, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b5040, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fb820, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b4ec0, 0x1fe000 bytes
    //
    _x2(sdk::function<int32_t(struct whea::error_packet_v2_t*)>*) report_hw_error;
    
    // [WheaRequestDeferredRecovery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2304b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b6fd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fdeb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b6e50, 0x1fe000 bytes
    //
    _x3(sdk::function<uint8_t(struct whea::drs_object_t*, void*)>*) request_deferred_recovery;
    
    // [WheaTerminateProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6bd1a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x95a1c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fb330, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x958aa4, 0x1fe000 bytes
    //
    _x4(sdk::unknown_ptr) terminate_process;
    
    // [WHEA_TLBCHECK_GUID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x41cf0, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x2fe70, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3e170, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x301b0, 0x1fe000 bytes
    //
    _x5(sdk::unknown_ptr) tlbcheck_guid;
    
    // [WheaUnregisterInUsePageOfflineNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6bd230, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x95a250, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9fb3b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x958b30, 0x1fe000 bytes
    //
    _x6(sdk::function<int32_t(sdk::function<uint8_t(uint64_t, uint8_t, uint8_t, void*)>*)>*) unregister_in_use_page_offline_notification;
    
    // [WheaWmiDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1493ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c7630, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e3290, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c8500, 0x1fe000 bytes
    //
    _x7(sdk::unknown_ptr) wmi_dispatch;
    
    // [WHEA_DPC_CAPABILITY_SECTION_GUID]
    // Ldr = [pci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .rdata:0x2cb28, 0x1cf0 bytes
    // pci.sys .rdata:0x30dc8, 0x1cf0 bytes
    // pci.sys .rdata:0x2bb20, 0x1cf0 bytes
    //
    _x8(sdk::unknown_ptr) dpc_capability_section_guid;
    
    // [WheaErrorData]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x678f0, 0x2be18 bytes
    // storport.sys .data:0x79c10, 0x440c8 bytes
    // storport.sys .data:0x678f0, 0x2be18 bytes
    //
    _x9(sdk::unknown_ptr) error_data;
    
    // [WheaPendingError]
    // Ldr = [storport.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .data:0x678e0, 0x2be18 bytes
    // storport.sys .data:0x79c04, 0x440c8 bytes
    // storport.sys .data:0x678e0, 0x2be18 bytes
    //
    _y0(sdk::unknown_ptr) pending_error;
};
#include "magic/api.end.hpp"
