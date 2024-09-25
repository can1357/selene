#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/irp_t.hpp"
#include "../nt/guid_t.hpp"
#include "fx_device_v1_t.hpp"
#include "../nt/pohandle_t.hpp"
#include "../power/state_t.hpp"
#include "latency_hint_type_t.hpp"
#include "../io/status_block_t.hpp"
#include "../nt/device_object_t.hpp"
#include "../nt/driver_object_t.hpp"
#include "../power/state_type_t.hpp"
#include "fx_perf_state_change_t.hpp"
#include "sleep_disable_reason_t.hpp"
#include "thermal_request_type_t.hpp"
#include "../nt/work_queue_item_t.hpp"
#include "../power/request_type_t.hpp"
#include "fx_component_perf_info_t.hpp"
#include "../nt/device_power_state_t.hpp"
#include "../nt/counted_reason_context_t.hpp"
#include "../power/monitor_request_reason_t.hpp"

#include "magic/api.start.hpp"
namespace po
{
    struct fx_primary_device_t;

    // [PoClearPowerRequestInternalDeferred]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x12fa44, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) clear_power_request_internal_deferred;
    
    // [PoDelistPowerStateTransitionBlocker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa91d2c, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) delist_power_state_transition_blocker;
    
    // [PoDetectedHeteroSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc39f74, 0x1fd000 bytes
    //
    _m2(sdk::unknown_ptr) detected_hetero_system;
    
    // [PoDisableSkipTick]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe ALMOSTRO:0x3aa00f, 0x32828 bytes
    //
    _m3(sdk::unknown_ptr) disable_skip_tick;
    
    // [PoFxAddComponentRelation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x573140, 0x1fd000 bytes
    //
    _m4(sdk::unknown_ptr) fx_add_component_relation;
    
    // [PoFxAddDeviceRelation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x573560, 0x1fd000 bytes
    //
    _m5(sdk::unknown_ptr) fx_add_device_relation;
    
    // [PoFxRemoveComponentRelation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x573be0, 0x1fd000 bytes
    //
    _m6(sdk::unknown_ptr) fx_remove_component_relation;
    
    // [PoFxRemoveDeviceRelation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x573fd0, 0x1fd000 bytes
    //
    _m7(sdk::unknown_ptr) fx_remove_device_relation;
    
    // [PoGetProcessorPerformanceClass]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x20a57c, 0x32828 bytes
    //
    _m8(sdk::unknown_ptr) get_processor_performance_class;
    
    // [PoInitializePdc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004
    // ntoskrnl.exe INIT:0xa920dc, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) initialize_pdc;
    
    // [PoPushPowerStateTransitionRecordWithCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x57a564, 0x1fd000 bytes
    //
    _n0(sdk::unknown_ptr) push_power_state_transition_record_with_callback;
    
    // [PoSetCsSessionGoal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x2070f0, 0x32828 bytes
    //
    _n1(sdk::unknown_ptr) set_cs_session_goal;
    
    // [PoTraceSystemTimerResolutionIgnore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x57c6a8, 0x1fd000 bytes
    //
    _n2(sdk::unknown_ptr) trace_system_timer_resolution_ignore;
    
    // [PoAddPowerTriageData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x568cfc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x568aec, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) add_power_triage_data;
    
    // [PoArmStopWatchCollection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2163cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33ea08, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) arm_stop_watch_collection;
    
    // [PoDiagTraceDirectedDripsCandidateDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8e5084, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8e3824, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) diag_trace_directed_drips_candidate_device;
    
    // [PoInitializeStopWatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2711b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33ead8, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) initialize_stop_watch;
    
    // [PoIsArmedStopWatchCollection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x271018, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33eac8, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) is_armed_stop_watch_collection;
    
    // [PoIsInitializedStopWatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2135fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d5f84, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) is_initialized_stop_watch;
    
    // [PoIsRunningStopWatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x271064, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33e990, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) is_running_stop_watch;
    
    // [PoNotifyPnpActionQueueEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x570b90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x570980, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) notify_pnp_action_queue_event;
    
    // [PoPauseStopWatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2155e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33db0c, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) pause_stop_watch;
    
    // [PoQueryStopWatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x270500, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33e940, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) query_stop_watch;
    
    // [PoResetStopWatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x579d44, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x579b34, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) reset_stop_watch;
    
    // [PoStartStopWatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21360c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33da40, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) start_stop_watch;
    
    // [PoUnarmStopWatchCollection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21641c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33ea58, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) unarm_stop_watch_collection;
    
    // [PoUninitializeStopWatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x579d60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x579b50, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) uninitialize_stop_watch;
    
    // [PoClearPowerRequestInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1080c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x21400c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33d21c, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) clear_power_request_internal;
    
    // [PoDiagTraceIRTimerSleepStudyRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x569dcc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x57c344, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x569bbc, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) diag_trace_ir_timer_sleep_study_rundown;
    
    // [PoDirectedDripsClearDeviceFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5629f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x572910, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5627e0, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) directed_drips_clear_device_flags;
    
    // [PoDirectedDripsNotifyPagingDeviceUsage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7abd28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85f8e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b36a8, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) directed_drips_notify_paging_device_usage;
    
    // [PoDirectedDripsSetDeviceFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c49d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dfc50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c5740, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) directed_drips_set_device_flags;
    
    // [PoEnergyContextCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7051ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75dd04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65fe2c, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) energy_context_cleanup;
    
    // [PoEnergyContextInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66cb68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dc8d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e00c0, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) energy_context_initialize;
    
    // [PoEnergyContextStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6521f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75c340, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c6398, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) energy_context_start;
    
    // [PoEnergyContextUpdateComponentPower]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x682c00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75de94, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65ccd8, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) energy_context_update_component_power;
    
    // [PoExecuteIdleCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x30a750, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x395830, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x275c40, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) execute_idle_check;
    
    // [PoExecutePerfCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x58ac0, 0x32828 bytes
    // ntoskrnl.exe .text:0x30a6a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x275b90, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) execute_perf_check;
    
    // [PoFxCompleteDirectedPowerDown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x563250, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x573980, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x563040, 0x1fe000 bytes
    //
    _p8(sdk::function<void(struct nt::pohandle_t*)>*) fx_complete_directed_power_down;
    
    // [PoFxRegisterDripsWatchdogCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3c6100, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e7d30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c6fd0, 0x1fe000 bytes
    //
    _p9(sdk::function<void(struct nt::pohandle_t*, sdk::function<void(void*, struct nt::device_object_t*, uint32_t)>*, uint8_t, struct nt::driver_object_t*)>*) fx_register_drips_watchdog_callback;
    
    // [PoFxSetTargetDripsDevicePowerState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8e13c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9783d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8dfb60, 0x1fe000 bytes
    //
    _q0(sdk::function<int32_t(struct nt::pohandle_t*, enum nt::device_power_state_t)>*) fx_set_target_drips_device_power_state;
    
    // [PoGetFrequencyBucket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3ef4f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x207824, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f0b24, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) get_frequency_bucket;
    
    // [PoHiberFileRoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc22e20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3c340, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc22e40, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) hiber_file_root;
    
    // [PoModernStandbyActionInProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc22e12, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3d62a, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc22e33, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) modern_standby_action_in_progress;
    
    // [PoPowerResetActionInProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc22e11, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3d629, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc22e32, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) power_reset_action_in_progress;
    
    // [PoQueryProcessEnergyTrackingState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8efa88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x98c0e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ee178, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) query_process_energy_tracking_state;
    
    // [PoRtcWakeAllowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x305990, 0x32828 bytes
    // ntoskrnl.exe .data:0xc249d8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc24a70, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) rtc_wake_allowed;
    
    // [PoRunDownDeviceObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x211c48, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2edca0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33f958, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) run_down_device_object;
    
    // [PoSessionEngagementUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5762a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x58842c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x576090, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) session_engagement_update;
    
    // [PoSetPowerButtonHoldState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x562e80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x572c10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x562c70, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) set_power_button_hold_state;
    
    // [PoSetPowerRequestInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x107d9c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2141d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33d3e0, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) set_power_request_internal;
    
    // [PoSetProcessEnergyTrackingState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66f730, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c4434, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e2cf0, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) set_process_energy_tracking_state;
    
    // [PoSetProcessorQoS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5687fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x461210, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5685ec, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) set_processor_qo_s;
    
    // [PoSkipTickMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfa094, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c0c8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa094, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) skip_tick_mode;
    
    // [PoTraceForceIdleReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x569f68, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x57c4e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x569d58, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) trace_force_idle_reset;
    
    // [PoTraceForceIdleStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x56a080, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x57c604, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x569e70, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) trace_force_idle_state_change;
    
    // [PoTtmInitiatePowerStateTransition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8ecce8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x98b738, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8eb3b8, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) ttm_initiate_power_state_transition;
    
    // [PoAllProcIntrDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3043d0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc22e30, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3d080, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc22e50, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) all_proc_intr_disabled;
    
    // [PoAllProcessorsDeepIdle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8ed6c, 0x32828 bytes
    // ntoskrnl.exe .text:0x291704, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33bebc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x241a80, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) all_processors_deep_idle;
    
    // [PoBlockConsoleSwitch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a1ad0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60688c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97cee8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fd8b0, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) block_console_switch;
    
    // [PoBroadcastSystemState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3cc848, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98f5bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa92628, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98e5d0, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) broadcast_system_state;
    
    // [PoCallDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12e9bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x396270, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a8ed0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3972d0, 0x1fe000 bytes
    //
    _s1(sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*)>*) call_driver;
    
    // [PoCancelDeviceNotify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) cancel_device_notify;
    
    // [PoCaptureReasonContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1092c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x215620, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38d630, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33debc, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) capture_reason_context;
    
    // [PoClearBroadcast]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x521694, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75b4e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97f88c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x762f30, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) clear_broadcast;
    
    // [PoClearPowerRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1109e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x213fb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a8440, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33d1c0, 0x1fe000 bytes
    //
    _s5(sdk::function<int32_t(void*, enum power::request_type_t)>*) clear_power_request;
    
    // [PoClearTransitionMarker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x570928, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x777d24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x818d6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x779fbc, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) clear_transition_marker;
    
    // [PoCopyDeepIdleMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7bc4, 0x32828 bytes
    // ntoskrnl.exe .text:0x204d90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33a280, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3268f0, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) copy_deep_idle_mask;
    
    // [PoCpuIdledSinceLastCallImprecise]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10e904, 0x32828 bytes
    // ntoskrnl.exe .text:0x3680d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37cf00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x369480, 0x1fe000 bytes
    //
    _s8(sdk::function<uint8_t(uint32_t, uint64_t*)>*) cpu_idled_since_last_call_imprecise;
    
    // [PoCreatePowerRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fd940, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x755950, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38df20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75d3a0, 0x1fe000 bytes
    //
    _s9(sdk::function<int32_t(void**, struct nt::device_object_t*, struct nt::counted_reason_context_t*)>*) create_power_request;
    
    // [PoCreateThermalRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53e5c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x778270, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x859cb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77a510, 0x1fe000 bytes
    //
    _t0(sdk::function<int32_t(void**, struct nt::device_object_t*, struct nt::device_object_t*, struct nt::counted_reason_context_t*, uint32_t)>*) create_thermal_request;
    
    // [PoDeletePowerRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48d094, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x679d40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73c5b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fec70, 0x1fe000 bytes
    //
    _t1(sdk::function<void(void*)>*) delete_power_request;
    
    // [PoDeleteThermalRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6700e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8df800, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x976720, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8de000, 0x1fe000 bytes
    //
    _t2(sdk::function<void(void*)>*) delete_thermal_request;
    
    // [PoDestroyReasonContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x108dfc, 0x32828 bytes
    // ntoskrnl.exe .text:0x213ef8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fd734, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33d178, 0x1fe000 bytes
    //
    _t3(sdk::unknown_ptr) destroy_reason_context;
    
    // [PoDeviceAcquireIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12a4fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x378684, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a4d44, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x379a04, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) device_acquire_irp;
    
    // [PoDeviceReleaseIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12a424, 0x32828 bytes
    // ntoskrnl.exe .text:0x378db4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a4ca8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37a134, 0x1fe000 bytes
    //
    _t5(sdk::unknown_ptr) device_release_irp;
    
    // [PoDiagCaptureUsermodeStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a2f88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x607834, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d2ca4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ceda8, 0x1fe000 bytes
    //
    _t6(sdk::unknown_ptr) diag_capture_usermode_stack;
    
    // [PoDiagFreeUsermodeStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4846cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7170d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97fab4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71eb14, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) diag_free_usermode_stack;
    
    // [PoDiagTraceDeviceRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51c0d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66dca0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97fad0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x710ff4, 0x1fe000 bytes
    //
    _t8(sdk::unknown_ptr) diag_trace_device_rundown;
    
    // [PoDisableSleepStates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6707cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8e0a50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x977ad0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8df250, 0x1fe000 bytes
    //
    _t9(sdk::function<int32_t(enum po::sleep_disable_reason_t, uint32_t, void**)>*) disable_sleep_states;
    
    // [PoEndDeviceBusy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x202450, 0x32828 bytes
    // ntoskrnl.exe .text:0x563170, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x572ec0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x562f60, 0x1fe000 bytes
    //
    _u0(sdk::function<void(uint32_t*)>*) end_device_busy;
    
    // [PoEndPartitionReplace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6733ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8e4634, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97cf40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8e2dd4, 0x1fe000 bytes
    //
    _u1(sdk::unknown_ptr) end_partition_replace;
    
    // [PoEndPowerStateTasks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5241e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7580c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97cf68, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75fb14, 0x1fe000 bytes
    //
    _u2(sdk::unknown_ptr) end_power_state_tasks;
    
    // [PoEnergyEstimationEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x97164, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d92c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x292d70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25a340, 0x1fe000 bytes
    //
    _u3(sdk::function<uint8_t()>*) energy_estimation_enabled;
    
    // [PoFxAbandonDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x430b28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72bb08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fb304, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x733b90, 0x1fe000 bytes
    //
    _u4(sdk::unknown_ptr) fx_abandon_device;
    
    // [PoFxActivateComponent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8ef80, 0x32828 bytes
    // ntoskrnl.exe .text:0x246970, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28b410, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2374c0, 0x1fe000 bytes
    //
    _u5(sdk::function<void(struct nt::pohandle_t*, uint32_t, uint32_t)>*) fx_activate_component;
    
    // [PoFxActivateDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8e9c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x36a194, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fa838, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36b514, 0x1fe000 bytes
    //
    _u6(sdk::unknown_ptr) fx_activate_device;
    
    // [PoFxActivateDeviceForSystemTransition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1121dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x37f918, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x573124, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x380708, 0x1fe000 bytes
    //
    _u7(sdk::unknown_ptr) fx_activate_device_for_system_transition;
    
    // [PoFxCompleteDevicePowerNotRequired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1303b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a2c30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e6530, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a4180, 0x1fe000 bytes
    //
    _u8(sdk::function<void(struct nt::pohandle_t*)>*) fx_complete_device_power_not_required;
    
    // [PoFxCompleteIdleCondition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xccf38, 0x32828 bytes
    // ntoskrnl.exe .text:0x264530, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36bac0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x314980, 0x1fe000 bytes
    //
    _u9(sdk::function<void(struct nt::pohandle_t*, uint32_t)>*) fx_complete_idle_condition;
    
    // [PoFxCompleteIdleState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12fb18, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a1cd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x387fd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a3190, 0x1fe000 bytes
    //
    _v0(sdk::function<void(struct nt::pohandle_t*, uint32_t)>*) fx_complete_idle_state;
    
    // [PoFxEnableDStateReporting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x670c78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8e10e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x978230, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8df880, 0x1fe000 bytes
    //
    _v1(sdk::function<int32_t(struct nt::device_object_t*)>*) fx_enable_d_state_reporting;
    
    // [PoFxIdleComponent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8f998, 0x32828 bytes
    // ntoskrnl.exe .text:0x2928b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28aeb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x237150, 0x1fe000 bytes
    //
    _v2(sdk::function<void(struct nt::pohandle_t*, uint32_t, uint32_t)>*) fx_idle_component;
    
    // [PoFxIdleDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8e8a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x36a014, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2faa14, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36b394, 0x1fe000 bytes
    //
    _v3(sdk::unknown_ptr) fx_idle_device;
    
    // [PoFxInitPowerManagement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a3bc4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6a25c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5450c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa69934, 0x1fe000 bytes
    //
    _v4(sdk::unknown_ptr) fx_init_power_management;
    
    // [PoFxIssueComponentPerfStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2024bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x563270, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5739a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x563060, 0x1fe000 bytes
    //
    _v5(sdk::function<void(struct nt::pohandle_t*, uint32_t, uint32_t, struct po::fx_perf_state_change_t*, void*)>*) fx_issue_component_perf_state_change;
    
    // [PoFxIssueComponentPerfStateChangeMultiple]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2024e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x5632a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5739d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x563090, 0x1fe000 bytes
    //
    _v6(sdk::function<void(struct nt::pohandle_t*, uint32_t, uint32_t, uint32_t, struct po::fx_perf_state_change_t*, void*)>*) fx_issue_component_perf_state_change_multiple;
    
    // [PoFxNotifySurprisePowerOn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x123540, 0x32828 bytes
    // ntoskrnl.exe .text:0x3877e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x573a80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x388090, 0x1fe000 bytes
    //
    _v7(sdk::function<void(struct nt::device_object_t*)>*) fx_notify_surprise_power_on;
    
    // [PoFxPlatformRequestHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x145e88, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c2500, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d8790, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c3310, 0x1fe000 bytes
    //
    _v8(sdk::unknown_ptr) fx_platform_request_handler;
    
    // [PoFxPowerControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x123e40, 0x32828 bytes
    // ntoskrnl.exe .text:0x3887b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e8160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x389220, 0x1fe000 bytes
    //
    _v9(sdk::function<int32_t(struct nt::pohandle_t*, const struct nt::guid_t*, void*, uint64_t, void*, uint64_t, uint64_t*)>*) fx_power_control;
    
    // [PoFxPowerOnCrashdumpDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20256c, 0x32828 bytes
    // ntoskrnl.exe .text:0x563350, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x573b20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x563140, 0x1fe000 bytes
    //
    _w0(sdk::function<int32_t(struct nt::pohandle_t*, void*)>*) fx_power_on_crashdump_device;
    
    // [PoFxPrepareDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8e0e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3697f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38b398, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36aba0, 0x1fe000 bytes
    //
    _w1(sdk::unknown_ptr) fx_prepare_device;
    
    // [PoFxProcessorNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x149824, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c9120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e6c60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ca010, 0x1fe000 bytes
    //
    _w2(sdk::function<int32_t(struct nt::pohandle_t*, uint32_t, void*)>*) fx_processor_notification;
    
    // [PoFxQueryCurrentComponentPerfState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2025c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x5633b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x573b80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5631a0, 0x1fe000 bytes
    //
    _w3(sdk::function<int32_t(struct nt::pohandle_t*, uint32_t, uint32_t, uint32_t, uint64_t*)>*) fx_query_current_component_perf_state;
    
    // [PoFxRegisterComponentPerfStates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x670d4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8e11e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x978330, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8df980, 0x1fe000 bytes
    //
    _w4(sdk::function<int32_t(struct nt::pohandle_t*, uint32_t, uint64_t, sdk::function<void(void*, uint32_t, uint8_t, void*)>*, struct po::fx_component_perf_info_t*, struct po::fx_component_perf_info_t**)>*) fx_register_component_perf_states;
    
    // [PoFxRegisterCoreDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55aa5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x796030, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x853bc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79bb80, 0x1fe000 bytes
    //
    _w5(sdk::unknown_ptr) fx_register_core_device;
    
    // [PoFxRegisterCrashdumpDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x538b20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7721e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86c3b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x779be0, 0x1fe000 bytes
    //
    _w6(sdk::function<int32_t(struct nt::pohandle_t*)>*) fx_register_crashdump_device;
    
    // [PoFxRegisterDebugger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79acdc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa70704, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb50e00, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6fa48, 0x1fe000 bytes
    //
    _w7(sdk::unknown_ptr) fx_register_debugger;
    
    // [PoFxRegisterDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55ab70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x796160, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ee270, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79bcb0, 0x1fe000 bytes
    //
    _w8(sdk::function<int32_t(struct nt::device_object_t*, struct po::fx_device_v1_t*, struct nt::pohandle_t**)>*) fx_register_device;
    
    // [PoFxRegisterPlugin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x670dac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8e1260, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9783b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8dfa00, 0x1fe000 bytes
    //
    _w9(sdk::unknown_ptr) fx_register_plugin;
    
    // [PoFxRegisterPluginEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x202620, 0x32828 bytes
    // ntoskrnl.exe .text:0x563410, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dc7f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x563200, 0x1fe000 bytes
    //
    _x0(sdk::unknown_ptr) fx_register_plugin_ex;
    
    // [PoFxRegisterPrimaryDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x670db8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8e1280, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x853a90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8dfa20, 0x1fe000 bytes
    //
    _x1(sdk::function<int32_t(struct nt::device_object_t*, struct po::fx_primary_device_t*, struct nt::pohandle_t**)>*) fx_register_primary_device;
    
    // [PoFxReportDevicePoweredOn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x122270, 0x32828 bytes
    // ntoskrnl.exe .text:0x39b180, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d4a00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39c640, 0x1fe000 bytes
    //
    _x2(sdk::function<void(struct nt::pohandle_t*)>*) fx_report_device_powered_on;
    
    // [PoFxSendSystemLatencyUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10689c, 0x32828 bytes
    // ntoskrnl.exe .text:0x27f818, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x351828, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35d0b8, 0x1fe000 bytes
    //
    _x3(sdk::unknown_ptr) fx_send_system_latency_update;
    
    // [PoFxSetComponentLatency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13ec38, 0x32828 bytes
    // ntoskrnl.exe .text:0x563430, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x389d40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x563220, 0x1fe000 bytes
    //
    _x4(sdk::function<void(struct nt::pohandle_t*, uint32_t, uint64_t)>*) fx_set_component_latency;
    
    // [PoFxSetComponentResidency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x149f88, 0x32828 bytes
    // ntoskrnl.exe .text:0x563480, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e7680, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x563270, 0x1fe000 bytes
    //
    _x5(sdk::function<void(struct nt::pohandle_t*, uint32_t, uint64_t)>*) fx_set_component_residency;
    
    // [PoFxSetComponentWake]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x202628, 0x32828 bytes
    // ntoskrnl.exe .text:0x5634d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x574360, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5632c0, 0x1fe000 bytes
    //
    _x6(sdk::function<void(struct nt::pohandle_t*, uint32_t, uint8_t)>*) fx_set_component_wake;
    
    // [PoFxSetDeviceIdleTimeout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x146da8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c2fa0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36d9b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c3db0, 0x1fe000 bytes
    //
    _x7(sdk::function<void(struct nt::pohandle_t*, uint64_t)>*) fx_set_device_idle_timeout;
    
    // [PoFxStartDevicePowerManagement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13eaa4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b9260, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3895b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b9c10, 0x1fe000 bytes
    //
    _x8(sdk::function<void(struct nt::pohandle_t*)>*) fx_start_device_power_management;
    
    // [PoFxSystemLatencyNotify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x106994, 0x32828 bytes
    // ntoskrnl.exe .text:0x280b50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3519ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35d1d8, 0x1fe000 bytes
    //
    _x9(sdk::unknown_ptr) fx_system_latency_notify;
    
    // [PoFxUnregisterDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x670ec0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b6830, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x678e10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be410, 0x1fe000 bytes
    //
    _y0(sdk::function<void(struct nt::pohandle_t*)>*) fx_unregister_device;
    
    // [PoGetIdleTimes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xee614, 0x32828 bytes
    // ntoskrnl.exe .text:0x27fe90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28f1cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2056d8, 0x1fe000 bytes
    //
    _y1(sdk::unknown_ptr) get_idle_times;
    
    // [PoGetLightestSystemStateForEject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66eb98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ddd6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x973dfc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8dc56c, 0x1fe000 bytes
    //
    _y2(sdk::unknown_ptr) get_lightest_system_state_for_eject;
    
    // [PoGetPerfStateAndParkingInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20a394, 0x32828 bytes
    // ntoskrnl.exe .text:0x2637b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36b7ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x313e08, 0x1fe000 bytes
    //
    _y3(sdk::unknown_ptr) get_perf_state_and_parking_info;
    
    // [PoGetProcessorIdleAccounting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ff878, 0x32828 bytes
    // ntoskrnl.exe .text:0x55f720, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56f590, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x55f500, 0x1fe000 bytes
    //
    _y4(sdk::unknown_ptr) get_processor_idle_accounting;
    
    // [PoGetRequester]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1093d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x215748, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38de00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33dfe4, 0x1fe000 bytes
    //
    _y5(sdk::unknown_ptr) get_requester;
    
    // [PoGetSystemWake]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x124634, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a2cc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56f370, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a41f0, 0x1fe000 bytes
    //
    _y6(sdk::function<uint8_t(struct nt::irp_t*)>*) get_system_wake;
    
    // [PoGetThermalRequestSupport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56d5a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7aa010, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86b1a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b1990, 0x1fe000 bytes
    //
    _y7(sdk::function<uint8_t(void*, enum po::thermal_request_type_t)>*) get_thermal_request_support;
    
    // [PoHandleIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12a344, 0x32828 bytes
    // ntoskrnl.exe .text:0x394004, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a4b08, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x395064, 0x1fe000 bytes
    //
    _y8(sdk::unknown_ptr) handle_irp;
    
    // [PoHiberInProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x304ff9, 0x32828 bytes
    // ntoskrnl.exe .data:0xc22e13, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3d62b, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc22e34, 0x1fe000 bytes
    //
    _y9(sdk::unknown_ptr) hiber_in_progress;
    
    // [PoIdle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x557a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x306c70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x225bf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26fde0, 0x1fe000 bytes
    //
    _z0(sdk::unknown_ptr) idle;
    
    // [PoInitDriverServices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a8240, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6e8b4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5d410, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6de6c, 0x1fe000 bytes
    //
    _z1(sdk::unknown_ptr) init_driver_services;
    
    // [PoInitHiberServices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53dfa4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7785c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x819a68, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77a868, 0x1fe000 bytes
    //
    _z2(sdk::unknown_ptr) init_hiber_services;
    
    // [PoInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79475c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa3b99c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2b89c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3be4c, 0x1fe000 bytes
    //
    _z3(sdk::unknown_ptr) init_system;
    
    // [PoInitializeBroadcast]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x521d8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75b538, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97f8e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x762f88, 0x1fe000 bytes
    //
    _z4(sdk::unknown_ptr) initialize_broadcast;
    
    // [PoInitializePrcb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d5a80, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x99a09c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa76390, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x999854, 0x1fe000 bytes
    //
    _z5(sdk::unknown_ptr) initialize_prcb;
    
    // [PoInitiateProcessorWake]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ff8a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x55f750, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56f5c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x55f530, 0x1fe000 bytes
    //
    _z6(sdk::unknown_ptr) initiate_processor_wake;
    
    // [PoIssueCoalescingNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x205554, 0x32828 bytes
    // ntoskrnl.exe .text:0x568d18, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x578c64, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x568b08, 0x1fe000 bytes
    //
    _z7(sdk::unknown_ptr) issue_coalescing_notification;
    
    // [PoLatencySensitivityHint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11018c, 0x32828 bytes
    // ntoskrnl.exe .text:0x379980, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ae2b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37ad00, 0x1fe000 bytes
    //
    _z8(sdk::function<void(enum po::latency_hint_type_t)>*) latency_sensitivity_hint;
    
    // [PoNotifyMediaBuffering]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10c7b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3684e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e3c20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x369890, 0x1fe000 bytes
    //
    _z9(sdk::function<void(uint8_t)>*) notify_media_buffering;
    
    // [PoNotifySystemTimeSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1302d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a2d74, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e9da4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a42a4, 0x1fe000 bytes
    //
    _a0(sdk::unknown_ptr) notify_system_time_set;
    
    // [PoNotifyVSyncChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x106830, 0x32828 bytes
    // ntoskrnl.exe .text:0x27f7e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3514b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35d080, 0x1fe000 bytes
    //
    _a1(sdk::function<void(uint8_t)>*) notify_v_sync_change;
    
    // [PoOffCrashConfigTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x305c00, 0x32828 bytes
    // ntoskrnl.exe .data:0xc24f80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3f180, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc24f40, 0x1fe000 bytes
    //
    _a2(sdk::unknown_ptr) off_crash_config_table;
    
    // [PoPdcCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x329fa0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc541b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6aaa0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc54170, 0x1fe000 bytes
    //
    _a3(sdk::unknown_ptr) pdc_callbacks;
    
    // [PoPowerDownActionInProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x304ff8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc22e10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3d628, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc22e31, 0x1fe000 bytes
    //
    _a4(sdk::unknown_ptr) power_down_action_in_progress;
    
    // [PoPowerOffMonitor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x124374, 0x32828 bytes
    // ntoskrnl.exe .text:0x37ecf8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x57a720, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37fb00, 0x1fe000 bytes
    //
    _a5(sdk::unknown_ptr) power_off_monitor;
    
    // [PoPowerSequence]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3041dc, 0x32828 bytes
    // ntoskrnl.exe .data:0xc22e14, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3d62c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc22e38, 0x1fe000 bytes
    //
    _a6(sdk::unknown_ptr) power_sequence;
    
    // [PoQueryWatchdogTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12427c, 0x32828 bytes
    // ntoskrnl.exe .text:0x34ea00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32e2f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x231b90, 0x1fe000 bytes
    //
    _a7(sdk::function<uint8_t(struct nt::device_object_t*, uint32_t*)>*) query_watchdog_time;
    
    // [PoQueueShutdownWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x672800, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8e3500, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97a710, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8e1ca0, 0x1fe000 bytes
    //
    _a8(sdk::function<int32_t(struct nt::work_queue_item_t*)>*) queue_shutdown_work_item;
    
    // [PoReenableSleepStates]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x670888, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8e0b10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x977b90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8df310, 0x1fe000 bytes
    //
    _a9(sdk::function<void(void*)>*) reenable_sleep_states;
    
    // [PoRegisterCoalescingCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x551f64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x777350, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x825840, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x787730, 0x1fe000 bytes
    //
    _b0(sdk::unknown_ptr) register_coalescing_callback;
    
    // [PoRegisterDeviceForIdleDetection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x237c, 0x32828 bytes
    // ntoskrnl.exe .text:0x211f60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2edd90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33fc70, 0x1fe000 bytes
    //
    _b1(sdk::function<uint32_t*(struct nt::device_object_t*, uint32_t, uint32_t, enum nt::device_power_state_t)>*) register_device_for_idle_detection;
    
    // [PoRegisterDeviceNotify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ad90, 0x32828 bytes
    // ntoskrnl.exe .text:0x369380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a730, 0x1fe000 bytes
    //
    _b2(sdk::unknown_ptr) register_device_notify;
    
    // [PoRegisterPowerSettingCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3f0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x602ee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7226e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x710d20, 0x1fe000 bytes
    //
    _b3(sdk::function<int32_t(struct nt::device_object_t*, const struct nt::guid_t*, sdk::function<int32_t(const struct nt::guid_t*, void*, uint32_t, void*)>*, void*, void**)>*) register_power_setting_callback;
    
    // [PoRegisterSystemState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2058cc, 0x32828 bytes
    // ntoskrnl.exe .text:0x5691b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x579100, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x568fa0, 0x1fe000 bytes
    //
    _b4(sdk::function<void*(void*, uint32_t)>*) register_system_state;
    
    // [PoRequestPowerIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x128f80, 0x32828 bytes
    // ntoskrnl.exe .text:0x36ba80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a3e30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36ccf0, 0x1fe000 bytes
    //
    _b5(sdk::function<int32_t(struct nt::device_object_t*, uint8_t, union power::state_t, sdk::function<void(struct nt::device_object_t*, uint8_t, union power::state_t, void*, struct io::status_block_t*)>*, void*, struct nt::irp_t**)>*) request_power_irp;
    
    // [PoRequestShutdownEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5575ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78b220, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83da40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x794fc0, 0x1fe000 bytes
    //
    _b6(sdk::function<int32_t(void**)>*) request_shutdown_event;
    
    // [PoResumeFromHibernate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x304ae8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc22f44, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3c488, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc22f48, 0x1fe000 bytes
    //
    _b7(sdk::unknown_ptr) resume_from_hibernate;
    
    // [PoRundownSystemTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51c970, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6072c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97fbbc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cebc8, 0x1fe000 bytes
    //
    _b8(sdk::unknown_ptr) rundown_system_timer;
    
    // [PoSessionBuiltinPanelState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x20d304, 0x32828 bytes
    // ntoskrnl.exe .text:0x576210, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5883a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x576000, 0x1fe000 bytes
    //
    _b9(sdk::unknown_ptr) session_builtin_panel_state;
    
    // [PoSessionPowerControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x679788, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8f258c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x98f5cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8f0c7c, 0x1fe000 bytes
    //
    _c0(sdk::unknown_ptr) session_power_control;
    
    // [PoSetDeviceBusyEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x202458, 0x32828 bytes
    // ntoskrnl.exe .text:0x563180, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x461140, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x562f70, 0x1fe000 bytes
    //
    _c1(sdk::function<void(uint32_t*)>*) set_device_busy_ex;
    
    // [PoSetFixedWakeSource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d01b0, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9ae620, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8c9d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9ad590, 0x1fe000 bytes
    //
    _c2(sdk::unknown_ptr) set_fixed_wake_source;
    
    // [PoSetHiberRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x124d40, 0x32828 bytes
    // ntoskrnl.exe .text:0x383910, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x579d00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3846d0, 0x1fe000 bytes
    //
    _c3(sdk::function<void(void*, uint32_t, void*, uint64_t, uint32_t)>*) set_hiber_range;
    
    // [PoSetPowerRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1109c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x213fe0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a8410, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33d1f0, 0x1fe000 bytes
    //
    _c4(sdk::function<int32_t(void*, enum power::request_type_t)>*) set_power_request;
    
    // [PoSetPowerState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12c534, 0x32828 bytes
    // ntoskrnl.exe .text:0x3786c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37d7f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x379a40, 0x1fe000 bytes
    //
    _c5(sdk::function<union power::state_t(struct nt::device_object_t*, enum power::state_type_t, union power::state_t)>*) set_power_state;
    
    // [PoSetSystemState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2059a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x569290, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5791d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x569080, 0x1fe000 bytes
    //
    _c6(sdk::function<void(uint32_t)>*) set_system_state;
    
    // [PoSetSystemWake]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ff7f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x55f5e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56f3a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x55f3c0, 0x1fe000 bytes
    //
    _c7(sdk::function<void(struct nt::irp_t*)>*) set_system_wake;
    
    // [PoSetSystemWakeDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ff81c, 0x32828 bytes
    // ntoskrnl.exe .text:0x55f610, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56f3d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x55f3f0, 0x1fe000 bytes
    //
    _c8(sdk::unknown_ptr) set_system_wake_device;
    
    // [PoSetThermalActiveCooling]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x670114, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a9ec0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x976760, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b1840, 0x1fe000 bytes
    //
    _c9(sdk::function<int32_t(void*, uint8_t)>*) set_thermal_active_cooling;
    
    // [PoSetThermalPassiveCooling]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6701ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8df840, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x976810, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8de040, 0x1fe000 bytes
    //
    _d0(sdk::function<int32_t(void*, uint8_t)>*) set_thermal_passive_cooling;
    
    // [PoSetUserPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd1aa0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a1460, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x579220, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a2920, 0x1fe000 bytes
    //
    _d1(sdk::function<void(enum power::monitor_request_reason_t)>*) set_user_present;
    
    // [PoShutdownBugCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67340c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8e4660, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97cf90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8e2e00, 0x1fe000 bytes
    //
    _d2(sdk::unknown_ptr) shutdown_bug_check;
    
    // [PoStartDeviceBusy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x202460, 0x32828 bytes
    // ntoskrnl.exe .text:0x563190, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x572ed0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x562f80, 0x1fe000 bytes
    //
    _d3(sdk::function<void(uint32_t*)>*) start_device_busy;
    
    // [PoStartNextPowerIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _d4(sdk::function<void(struct nt::irp_t*)>*) start_next_power_irp;
    
    // [PoStartPartitionReplace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6734f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8e4758, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97d088, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8e2ef8, 0x1fe000 bytes
    //
    _d5(sdk::unknown_ptr) start_partition_replace;
    
    // [PoStartPowerStateTasks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5241f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7580e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97d0c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75fb34, 0x1fe000 bytes
    //
    _d6(sdk::unknown_ptr) start_power_state_tasks;
    
    // [PoStoreDiagnosticContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ff340, 0x32828 bytes
    // ntoskrnl.exe .text:0x38653c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fd9d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3872fc, 0x1fe000 bytes
    //
    _d7(sdk::unknown_ptr) store_diagnostic_context;
    
    // [PoStoreRequester]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x108554, 0x32828 bytes
    // ntoskrnl.exe .text:0x213764, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fc9c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33ca04, 0x1fe000 bytes
    //
    _d8(sdk::unknown_ptr) store_requester;
    
    // [PoThermalCounterSetCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x674d4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8e4a60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97e8e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8e3200, 0x1fe000 bytes
    //
    _d9(sdk::unknown_ptr) thermal_counter_set_callback;
    
    // [PoTraceDynamicTickDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x207604, 0x32828 bytes
    // ntoskrnl.exe .text:0x569ec4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x57c43c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x569cb4, 0x1fe000 bytes
    //
    _e0(sdk::unknown_ptr) trace_dynamic_tick_disabled;
    
    // [PoTraceSystemTimerResolution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x417898, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x607778, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d2c10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cf1c8, 0x1fe000 bytes
    //
    _e1(sdk::unknown_ptr) trace_system_timer_resolution;
    
    // [PoTraceSystemTimerResolutionKernel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcacb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x291180, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32bf8c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30af1c, 0x1fe000 bytes
    //
    _e2(sdk::unknown_ptr) trace_system_timer_resolution_kernel;
    
    // [PoTraceSystemTimerResolutionUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x73c84, 0x32828 bytes
    // ntoskrnl.exe .text:0x216dc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x377e38, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x202b8c, 0x1fe000 bytes
    //
    _e3(sdk::unknown_ptr) trace_system_timer_resolution_update;
    
    // [PoUnblockConsoleSwitch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5241c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7580a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97d0e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75faec, 0x1fe000 bytes
    //
    _e4(sdk::unknown_ptr) unblock_console_switch;
    
    // [PoUnregisterCoalescingCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67286c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8e3580, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97a790, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8e1d20, 0x1fe000 bytes
    //
    _e5(sdk::unknown_ptr) unregister_coalescing_callback;
    
    // [PoUnregisterPowerSettingCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51ed38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x755890, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6756c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75d2e0, 0x1fe000 bytes
    //
    _e6(sdk::function<int32_t(void*)>*) unregister_power_setting_callback;
    
    // [PoUnregisterSystemState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2059e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x5692e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5792c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5690d0, 0x1fe000 bytes
    //
    _e7(sdk::function<void(void*)>*) unregister_system_state;
    
    // [PoUserShutdownCancelled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5211e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75d1b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97e600, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x764c00, 0x1fe000 bytes
    //
    _e8(sdk::function<void()>*) user_shutdown_cancelled;
    
    // [PoUserShutdownInitiated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x523f64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7594a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97e630, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x760ef0, 0x1fe000 bytes
    //
    _e9(sdk::function<void()>*) user_shutdown_initiated;
    
    // [PoVolumeDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53e560, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76378c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x813eb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76aa2c, 0x1fe000 bytes
    //
    _f0(sdk::unknown_ptr) volume_device;
    
    // [PoWakeState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x33ef70, 0x32828 bytes
    // ntoskrnl.exe .data:0xcecb50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17cf0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcecb50, 0x1fe000 bytes
    //
    _f1(sdk::unknown_ptr) wake_state;
};
#include "magic/api.end.hpp"
