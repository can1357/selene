#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../tlg/provider_t.hpp"
#include "logging_metadata_t.hpp"
#include "../nt/event_filter_descriptor_t.hpp"

#include "magic/api.start.hpp"
namespace trace
{
    // [TraceLoggingProviderEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x8ad20, 0x32828 bytes
    //
    _m0(sdk::function<uint8_t(const struct tlg::provider_t*, uint8_t, uint64_t)>*) logging_provider_enabled;
    
    // [TraceLoggingRegisterEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x536d74, 0x32828 bytes
    //
    _m1(sdk::function<sdk::hresult(const struct tlg::provider_t*, sdk::function<void(const struct nt::guid_t*, uint32_t, uint8_t, uint64_t, uint64_t, struct nt::event_filter_descriptor_t*, void*)>*, void*)>*) logging_register_ex;
    
    // [TraceLoggingRegisterEx_EtwRegister_EtwSetInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x770584, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a13c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x777ff4, 0x1fe000 bytes
    //
    _m2(sdk::function<int32_t(const struct tlg::provider_t*, sdk::function<void(const struct nt::guid_t*, uint32_t, uint8_t, uint64_t, uint64_t, struct nt::event_filter_descriptor_t*, void*)>*, void*)>*) logging_register_ex_etw_register_etw_set_information;
    
    // [_TraceLoggingMetadata]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27a7e8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x21670, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x28f78, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x215d0, 0x1fe000 bytes
    //
    _m3(struct trace::logging_metadata_t*) logging_metadata;
    
    // [_TraceLoggingMetadataEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27ef69, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d3c1, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3af51, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d703, 0x1fe000 bytes
    //
    _m4(const uint8_t*) logging_metadata_end;
    
    // [TraceGreAcquireSemaphoreEx]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x25cee8, 0x13864 bytes
    //
    _m5(sdk::unknown_ptr) gre_acquire_semaphore_ex;
    
    // [TraceGreReleaseSemaphore]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1494a8, 0x13864 bytes
    //
    _m6(sdk::unknown_ptr) gre_release_semaphore;
    
    // [TraceLoggingAutoRotationStateEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xcd020, 0x1659e bytes
    //
    _m7(sdk::unknown_ptr) logging_auto_rotation_state_event;
    
    // [TraceLoggingDesktopAllocFailureEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x2216e0, 0x13864 bytes
    //
    _m8(sdk::unknown_ptr) logging_desktop_alloc_failure_event;
    
    // [TraceLoggingDesktopAllocFailureEventForSession]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x221818, 0x13864 bytes
    //
    _m9(sdk::unknown_ptr) logging_desktop_alloc_failure_event_for_session;
    
    // [TraceLoggingEdgePalmRejection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x220068, 0x13864 bytes
    //
    _n0(sdk::unknown_ptr) logging_edge_palm_rejection;
    
    // [TraceLoggingGlobalDCsInUse]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x17fef8, 0x27ef0 bytes
    //
    _n1(sdk::unknown_ptr) logging_global_d_cs_in_use;
    
    // [TraceLoggingHidConfigEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x178e0, 0x13864 bytes
    //
    _n2(sdk::unknown_ptr) logging_hid_config_event;
    
    // [TraceLoggingHotkey]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x4c4c, 0x1659e bytes
    //
    _n3(sdk::unknown_ptr) logging_hotkey;
    
    // [TraceLoggingProcessDCsInUse]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x9878, 0x27ef0 bytes
    //
    _n4(sdk::unknown_ptr) logging_process_d_cs_in_use;
    
    // [TraceLoggingRapidHpdComplete]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x221654, 0x1659e bytes
    //
    _n5(sdk::unknown_ptr) logging_rapid_hpd_complete;
    
    // [TraceLoggingRimHidDeviceArrivedEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x17f64, 0x13864 bytes
    //
    _n6(sdk::unknown_ptr) logging_rim_hid_device_arrived_event;
    
    // [TraceLoggingRimHidDeviceRemovedEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x17dbc, 0x13864 bytes
    //
    _n7(sdk::unknown_ptr) logging_rim_hid_device_removed_event;
    
    // [TraceLoggingStartingRecalc]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xcd940, 0x1659e bytes
    //
    _n8(sdk::unknown_ptr) logging_starting_recalc;
    
    // [TraceLoggingStubInvalidParamEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x2213d4, 0x13864 bytes
    //
    _n9(sdk::unknown_ptr) logging_stub_invalid_param_event;
    
    // [TraceLoggingUpdateProcessedRecalcCounters]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xc4578, 0x1659e bytes
    //
    _o0(sdk::unknown_ptr) logging_update_processed_recalc_counters;
    
    // [TraceLoggingLargeDeviceParallelCount]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x14cd7c, 0x243e0 bytes
    // win32kbase.sys .text:0x14a39c, 0x243e0 bytes
    //
    _o1(sdk::unknown_ptr) logging_large_device_parallel_count;
    
    // [TraceLoggingMouseWheelRoutingValueAtStartup]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 11
    // win32kfull.sys .text:0x126f88, 0x13864 bytes
    // win32kfull.sys .text:0xccfa0, 0x1659e bytes
    //
    _o2(sdk::unknown_ptr) logging_mouse_wheel_routing_value_at_startup;
    
    // [TraceLoggingProcessUsageOnTerminationEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 11
    // win32kfull.sys .text:0x18298, 0x13864 bytes
    // win32kfull.sys .text:0xcdda4, 0x1659e bytes
    //
    _o3(sdk::unknown_ptr) logging_process_usage_on_termination_event;
    
    // [TraceWindowResizeTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x20cff8, 0x1596d bytes
    // win32kfull.sys .text:0x20ce68, 0x1596d bytes
    //
    _o4(sdk::unknown_ptr) window_resize_telemetry;
    
    // [TraceChildWindowDpiTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x710c, 0x1596d bytes
    // win32kfull.sys .text:0x2da0, 0x1659e bytes
    // win32kfull.sys .text:0x74bc, 0x1596d bytes
    //
    _o5(sdk::unknown_ptr) child_window_dpi_telemetry;
    
    // [TraceLoggingCreateWindowFailed]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2256e4, 0x1596d bytes
    // win32kfull.sys .text:0x220ecc, 0x1659e bytes
    // win32kfull.sys .text:0x2255a4, 0x1596d bytes
    //
    _o6(sdk::unknown_ptr) logging_create_window_failed;
    
    // [TraceLoggingDeadLowLevelHook]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x14cd10, 0x243e0 bytes
    // win32kbase.sys .text:0x17fe8c, 0x27ef0 bytes
    // win32kbase.sys .text:0x14a330, 0x243e0 bytes
    //
    _o7(sdk::unknown_ptr) logging_dead_low_level_hook;
    
    // [TraceLoggingDrawMenuBarTempCalled]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x225764, 0x1596d bytes
    // win32kfull.sys .text:0x220f4c, 0x1659e bytes
    // win32kfull.sys .text:0x225624, 0x1596d bytes
    //
    _o8(sdk::unknown_ptr) logging_draw_menu_bar_temp_called;
    
    // [TraceLoggingGDIScaledAppEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x150234, 0x1596d bytes
    // win32kfull.sys .text:0x143d84, 0x1659e bytes
    // win32kfull.sys .text:0x151174, 0x1596d bytes
    //
    _o9(sdk::unknown_ptr) logging_gdi_scaled_app_event;
    
    // [TraceLoggingPenHotkey]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x225e00, 0x1596d bytes
    // win32kfull.sys .text:0x2215c8, 0x1659e bytes
    // win32kfull.sys .text:0x225cc0, 0x1596d bytes
    //
    _p0(sdk::unknown_ptr) logging_pen_hotkey;
    
    // [TraceLoggingPTPAAPKeyPress]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2265d0, 0x1596d bytes
    // win32kfull.sys .text:0x221dd0, 0x1659e bytes
    // win32kfull.sys .text:0x226490, 0x1596d bytes
    //
    _p1(sdk::unknown_ptr) logging_ptpaap_key_press;
    
    // [TraceLoggingSendMixedModeTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x17f10, 0x13864 bytes
    // win32kfull.sys .text:0xd9a50, 0x1596d bytes
    // win32kfull.sys .text:0xda710, 0x1596d bytes
    //
    _p2(sdk::unknown_ptr) logging_send_mixed_mode_telemetry;
    
    // [TraceLoggingSlowLowLevelHook]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x226130, 0x1596d bytes
    // win32kfull.sys .text:0x221a70, 0x1659e bytes
    // win32kfull.sys .text:0x225ff0, 0x1596d bytes
    //
    _p3(sdk::unknown_ptr) logging_slow_low_level_hook;
    
    // [TraceLoggingSuppressQuickLaunch]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22621c, 0x1596d bytes
    // win32kfull.sys .text:0x221b58, 0x1659e bytes
    // win32kfull.sys .text:0x2260dc, 0x1596d bytes
    //
    _p4(sdk::unknown_ptr) logging_suppress_quick_launch;
    
    // [TraceLoggingTouchInjection]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x221554, 0x13864 bytes
    // win32kfull.sys .text:0x226338, 0x1596d bytes
    // win32kfull.sys .text:0x2261f8, 0x1596d bytes
    //
    _p5(sdk::unknown_ptr) logging_touch_injection;
    
    // [TraceLoggingYieldedHotkey]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x226508, 0x1596d bytes
    // win32kfull.sys .text:0x221d08, 0x1659e bytes
    // win32kfull.sys .text:0x2263c8, 0x1596d bytes
    //
    _p6(sdk::unknown_ptr) logging_yielded_hotkey;
    
    // [TraceLoggingBSDRRaceConditionEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x21ffdc, 0x13864 bytes
    // win32kfull.sys .text:0x22566c, 0x1596d bytes
    // win32kfull.sys .text:0x220e54, 0x1659e bytes
    // win32kfull.sys .text:0x22552c, 0x1596d bytes
    //
    _p7(sdk::unknown_ptr) logging_bsdr_race_condition_event;
    
    // [TraceLoggingHitTestWindowTargeting]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x220144, 0x13864 bytes
    // win32kfull.sys .text:0x225808, 0x1596d bytes
    // win32kfull.sys .text:0x220fe8, 0x1659e bytes
    // win32kfull.sys .text:0x2256c8, 0x1596d bytes
    //
    _p8(sdk::unknown_ptr) logging_hit_test_window_targeting;
    
    // [TraceLoggingIntObjUsageSummaryEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x220244, 0x13864 bytes
    // win32kfull.sys .text:0x2258dc, 0x1596d bytes
    // win32kfull.sys .text:0x2210c0, 0x1659e bytes
    // win32kfull.sys .text:0x22579c, 0x1596d bytes
    //
    _p9(sdk::unknown_ptr) logging_int_obj_usage_summary_event;
    
    // [TraceLoggingMouseWheelRoutingModeChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2205a0, 0x13864 bytes
    // win32kfull.sys .text:0x225b58, 0x1596d bytes
    // win32kfull.sys .text:0x221330, 0x1659e bytes
    // win32kfull.sys .text:0x225a18, 0x1596d bytes
    //
    _q0(sdk::unknown_ptr) logging_mouse_wheel_routing_mode_change;
    
    // [TraceLoggingProcessMonitorInfoUpdateHelper]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3e784, 0x13864 bytes
    // win32kfull.sys .text:0x4c4b8, 0x1596d bytes
    // win32kfull.sys .text:0xfc5ec, 0x1659e bytes
    // win32kfull.sys .text:0x4c8c8, 0x1596d bytes
    //
    _q1(sdk::unknown_ptr) logging_process_monitor_info_update_helper;
    
    // [TraceLoggingProcessUsageDataAggregationHelper]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x40ce8, 0x13864 bytes
    // win32kfull.sys .text:0x4f310, 0x1596d bytes
    // win32kfull.sys .text:0x9f41c, 0x1659e bytes
    // win32kfull.sys .text:0x4f730, 0x1596d bytes
    //
    _q2(sdk::unknown_ptr) logging_process_usage_data_aggregation_helper;
    
    // [TraceLoggingPTPGestureUsageEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x22062c, 0x13864 bytes
    // win32kbase.sys .text:0x1b1658, 0x243e0 bytes
    // win32kbase.sys .text:0x1f8028, 0x27ef0 bytes
    // win32kbase.sys .text:0x1af400, 0x243e0 bytes
    //
    _q3(sdk::unknown_ptr) logging_ptp_gesture_usage_event;
    
    // [TraceLoggingPTPKeyToAATimeDeltas]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2207f4, 0x13864 bytes
    // win32kfull.sys .text:0x225bcc, 0x1596d bytes
    // win32kfull.sys .text:0x22139c, 0x1659e bytes
    // win32kfull.sys .text:0x225a8c, 0x1596d bytes
    //
    _q4(sdk::unknown_ptr) logging_ptp_key_to_aa_time_deltas;
    
    // [TraceLoggingPTPKeyToGestureTiming]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x220904, 0x13864 bytes
    // win32kfull.sys .text:0x225c8c, 0x1596d bytes
    // win32kfull.sys .text:0x221464, 0x1659e bytes
    // win32kfull.sys .text:0x225b4c, 0x1596d bytes
    //
    _q5(sdk::unknown_ptr) logging_ptp_key_to_gesture_timing;
    
    // [TraceLoggingPTPSettingsConfigEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x220bd0, 0x13864 bytes
    // win32kbase.sys .text:0x1b1854, 0x243e0 bytes
    // win32kbase.sys .text:0x1f8224, 0x27ef0 bytes
    // win32kbase.sys .text:0x1af5fc, 0x243e0 bytes
    //
    _q6(sdk::unknown_ptr) logging_ptp_settings_config_event;
    
    // [TraceLoggingPTPUsageDetailsEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x220dd4, 0x13864 bytes
    // win32kbase.sys .text:0x1b19dc, 0x243e0 bytes
    // win32kbase.sys .text:0x1f8430, 0x27ef0 bytes
    // win32kbase.sys .text:0x1af784, 0x243e0 bytes
    //
    _q7(sdk::unknown_ptr) logging_ptp_usage_details_event;
    
    // [TraceLoggingPTPWarpBack]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x220f24, 0x13864 bytes
    // win32kfull.sys .text:0x226780, 0x1596d bytes
    // win32kfull.sys .text:0x221f80, 0x1659e bytes
    // win32kfull.sys .text:0x226640, 0x1596d bytes
    //
    _q8(sdk::unknown_ptr) logging_ptp_warp_back;
    
    // [TraceLoggingScreenOrientationArStateChangeEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x221228, 0x13864 bytes
    // win32kfull.sys .text:0x226004, 0x1596d bytes
    // win32kfull.sys .text:0x221938, 0x1659e bytes
    // win32kfull.sys .text:0x225ec4, 0x1596d bytes
    //
    _q9(sdk::unknown_ptr) logging_screen_orientation_ar_state_change_event;
    
    // [TraceLoggingScreenOrientationChangeEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x221300, 0x13864 bytes
    // win32kfull.sys .text:0x226098, 0x1596d bytes
    // win32kfull.sys .text:0x2219d8, 0x1659e bytes
    // win32kfull.sys .text:0x225f58, 0x1596d bytes
    //
    _r0(sdk::unknown_ptr) logging_screen_orientation_change_event;
    
    // [TraceLoggingShowWindowDPIAwarenessEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1814c, 0x13864 bytes
    // win32kfull.sys .text:0xd997c, 0x1596d bytes
    // win32kfull.sys .text:0xcda44, 0x1659e bytes
    // win32kfull.sys .text:0xda63c, 0x1596d bytes
    //
    _r1(sdk::unknown_ptr) logging_show_window_dpi_awareness_event;
    
    // [TraceLoggingSPISetDesktopDPIOverrideEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x221018, 0x13864 bytes
    // win32kfull.sys .text:0x225e8c, 0x1596d bytes
    // win32kfull.sys .text:0x2217c8, 0x1659e bytes
    // win32kfull.sys .text:0x225d4c, 0x1596d bytes
    //
    _r2(sdk::unknown_ptr) logging_spi_set_desktop_dpi_override_event;
    
    // [TraceLoggingSPISetMenuDropAlignmentEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2db80, 0x13864 bytes
    // win32kfull.sys .text:0x127e60, 0x1596d bytes
    // win32kfull.sys .text:0xcd734, 0x1659e bytes
    // win32kfull.sys .text:0x128da0, 0x1596d bytes
    //
    _r3(sdk::unknown_ptr) logging_spi_set_menu_drop_alignment_event;
    
    // [TraceLoggingSPISetModernDPIOverrideEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2210c8, 0x13864 bytes
    // win32kfull.sys .text:0x225f0c, 0x1596d bytes
    // win32kfull.sys .text:0x221844, 0x1659e bytes
    // win32kfull.sys .text:0x225dcc, 0x1596d bytes
    //
    _r4(sdk::unknown_ptr) logging_spi_set_modern_dpi_override_event;
    
    // [TraceLoggingSPISetPenVisualizationEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x221178, 0x13864 bytes
    // win32kfull.sys .text:0x225f8c, 0x1596d bytes
    // win32kfull.sys .text:0x2218c0, 0x1659e bytes
    // win32kfull.sys .text:0x225e4c, 0x1596d bytes
    //
    _r5(sdk::unknown_ptr) logging_spi_set_pen_visualization_event;
    
    // [TraceLoggingSysQueueLockedRetryFailed]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2214a4, 0x13864 bytes
    // win32kfull.sys .text:0x2262c0, 0x1596d bytes
    // win32kfull.sys .text:0x221bf4, 0x1659e bytes
    // win32kfull.sys .text:0x226180, 0x1596d bytes
    //
    _r6(sdk::unknown_ptr) logging_sys_queue_locked_retry_failed;
    
    // [TraceLoggingUserIsActive]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x18310, 0x13864 bytes
    // win32kfull.sys .text:0xd7da0, 0x1596d bytes
    // win32kfull.sys .text:0xd0170, 0x1659e bytes
    // win32kfull.sys .text:0xd8a60, 0x1596d bytes
    //
    _r7(sdk::unknown_ptr) logging_user_is_active;
    
    // [TraceLoggingWinPHotKeyEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x221668, 0x13864 bytes
    // win32kfull.sys .text:0x226464, 0x1596d bytes
    // win32kfull.sys .text:0x221c6c, 0x1659e bytes
    // win32kfull.sys .text:0x226324, 0x1596d bytes
    //
    _r8(sdk::unknown_ptr) logging_win_p_hot_key_event;
    
    // [TraceLoggingIdleConfiguration]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .text:0x1335c, 0x2bf0 bytes
    //
    _r9(sdk::unknown_ptr) logging_idle_configuration;
    
    // [TraceLoggingIrpIoctlFailedWithStatus]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0xdd1c, 0x1a48 bytes
    //
    _s0(sdk::unknown_ptr) logging_irp_ioctl_failed_with_status;
    
    // [TraceLoggingIrpPnpFailed]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0x11ecc, 0x1a48 bytes
    //
    _s1(sdk::unknown_ptr) logging_irp_pnp_failed;
    
    // [TraceLoggingUnreadKeyboardReportsFlushed]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .text:0xfe9c, 0x2bf0 bytes
    //
    _s2(sdk::unknown_ptr) logging_unread_keyboard_reports_flushed;
    
    // [TraceLoggingCollectionFileClose]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1575c, 0x2bf0 bytes
    // hidclass.sys .text:0x1841c, 0x2bf0 bytes
    // hidclass.sys .text:0x1575c, 0x2bf0 bytes
    //
    _s3(sdk::unknown_ptr) logging_collection_file_close;
    
    // [TraceLoggingInputSuppressionEntry]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1da18, 0x2bf0 bytes
    // hidclass.sys .text:0x20698, 0x2bf0 bytes
    // hidclass.sys .text:0x1da18, 0x2bf0 bytes
    //
    _s4(sdk::unknown_ptr) logging_input_suppression_entry;
    
    // [TraceLoggingPrivilegeNotFoundForCreateWithSFAC]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1043c, 0x2bf0 bytes
    // hidclass.sys .text:0x1115c, 0x2bf0 bytes
    // hidclass.sys .text:0x1043c, 0x2bf0 bytes
    //
    _s5(sdk::unknown_ptr) logging_privilege_not_found_for_create_with_sfac;
    
    // [TraceLoggingRegister_EtwRegister_EtwSetInformation]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x2d0a4, 0x2bf0 bytes
    // hidclass.sys PAGE:0x310b8, 0x2bf0 bytes
    // hidclass.sys PAGE:0x2d0a4, 0x2bf0 bytes
    //
    _s6(sdk::function<int32_t(const struct tlg::provider_t*)>*) logging_register_etw_register_etw_set_information;
    
    // [TraceLoggingStateExit_Dx_NoWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x11cbc, 0x2bf0 bytes
    // hidclass.sys .text:0x13a20, 0x2bf0 bytes
    // hidclass.sys .text:0x11cbc, 0x2bf0 bytes
    //
    _s7(sdk::unknown_ptr) logging_state_exit_dx_no_wake;
    
    // [TraceLoggingStateExit_WaitingForRequiredCallback_Dx_NoWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x11dd8, 0x2bf0 bytes
    // hidclass.sys .text:0x13b5c, 0x2bf0 bytes
    // hidclass.sys .text:0x11dd8, 0x2bf0 bytes
    //
    _s8(sdk::unknown_ptr) logging_state_exit_waiting_for_required_callback_dx_no_wake;
    
    // [TraceLoggingStateMachineUnhandledEvent]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys .text:0x1428c, 0x1a48 bytes
    // hidclass.sys .text:0x1e000, 0x2bf0 bytes
    // hidclass.sys .text:0x1e000, 0x2bf0 bytes
    //
    _s9(sdk::unknown_ptr) logging_state_machine_unhandled_event;
    
    // [TraceLoggingWaitWakeCompletedInSuppressInput]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1d324, 0x2bf0 bytes
    // hidclass.sys .text:0x1ffa4, 0x2bf0 bytes
    // hidclass.sys .text:0x1d324, 0x2bf0 bytes
    //
    _t0(sdk::unknown_ptr) logging_wait_wake_completed_in_suppress_input;
    
    // [TraceLoggingAddDeviceFailed]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x11aa8, 0x1a48 bytes
    // hidclass.sys .text:0x1b558, 0x2bf0 bytes
    // hidclass.sys .text:0x1e3f8, 0x2bf0 bytes
    // hidclass.sys .text:0x1b558, 0x2bf0 bytes
    //
    _t1(sdk::unknown_ptr) logging_add_device_failed;
    
    // [TraceLoggingCopyDeviceRelationsFailed]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xfb84, 0x1a48 bytes
    // hidclass.sys .text:0x18d34, 0x2bf0 bytes
    // hidclass.sys .text:0x1bae0, 0x2bf0 bytes
    // hidclass.sys .text:0x18d34, 0x2bf0 bytes
    //
    _t2(sdk::unknown_ptr) logging_copy_device_relations_failed;
    
    // [TraceLoggingCreateFdoFailed]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x11b44, 0x1a48 bytes
    // hidclass.sys .text:0x1b5fc, 0x2bf0 bytes
    // hidclass.sys .text:0x1e4b8, 0x2bf0 bytes
    // hidclass.sys .text:0x1b5fc, 0x2bf0 bytes
    //
    _t3(sdk::unknown_ptr) logging_create_fdo_failed;
    
    // [TraceLoggingCreatePdoFailed]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x11be0, 0x1a48 bytes
    // hidclass.sys .text:0x1b6a0, 0x2bf0 bytes
    // hidclass.sys .text:0x1bb54, 0x2bf0 bytes
    // hidclass.sys .text:0x1b6a0, 0x2bf0 bytes
    //
    _t4(sdk::unknown_ptr) logging_create_pdo_failed;
    
    // [TraceLoggingDerefDriverExtFailed]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xceec, 0x1a48 bytes
    // hidclass.sys .text:0x14940, 0x2bf0 bytes
    // hidclass.sys .text:0x1769c, 0x2bf0 bytes
    // hidclass.sys .text:0x14940, 0x2bf0 bytes
    //
    _t5(sdk::unknown_ptr) logging_deref_driver_ext_failed;
    
    // [TraceLoggingDeviceResetNotificationFailed]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x15444, 0x1a48 bytes
    // hidclass.sys .text:0x1ed28, 0x2bf0 bytes
    // hidclass.sys .text:0x21a1c, 0x2bf0 bytes
    // hidclass.sys .text:0x1ed28, 0x2bf0 bytes
    //
    _t6(sdk::unknown_ptr) logging_device_reset_notification_failed;
    
    // [TraceLoggingEnqueueDriverExtFailed]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xcf44, 0x1a48 bytes
    // hidclass.sys .text:0x1499c, 0x2bf0 bytes
    // hidclass.sys .text:0x17710, 0x2bf0 bytes
    // hidclass.sys .text:0x1499c, 0x2bf0 bytes
    //
    _t7(sdk::unknown_ptr) logging_enqueue_driver_ext_failed;
    
    // [TraceLoggingGetClassCollectionFailed]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xfbdc, 0x1a48 bytes
    // hidclass.sys .text:0x18d90, 0x2bf0 bytes
    // hidclass.sys .text:0x1bc54, 0x2bf0 bytes
    // hidclass.sys .text:0x18d90, 0x2bf0 bytes
    //
    _t8(sdk::unknown_ptr) logging_get_class_collection_failed;
    
    // [TraceLoggingGetCollectionDescFailed]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xfca0, 0x1a48 bytes
    // hidclass.sys .text:0x18e54, 0x2bf0 bytes
    // hidclass.sys .text:0x1bd38, 0x2bf0 bytes
    // hidclass.sys .text:0x18e54, 0x2bf0 bytes
    //
    _t9(sdk::unknown_ptr) logging_get_collection_desc_failed;
    
    // [TraceLoggingGetImageBaseFailed]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xfd64, 0x1a48 bytes
    // hidclass.sys .text:0x18f18, 0x2bf0 bytes
    // hidclass.sys .text:0x1be1c, 0x2bf0 bytes
    // hidclass.sys .text:0x18f18, 0x2bf0 bytes
    //
    _u0(sdk::unknown_ptr) logging_get_image_base_failed;
    
    // [TraceLoggingGetReportIdentifierFailed]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x23f0, 0x1a48 bytes
    // hidclass.sys .text:0x18f90, 0x2bf0 bytes
    // hidclass.sys .text:0x1beb0, 0x2bf0 bytes
    // hidclass.sys .text:0x18f90, 0x2bf0 bytes
    //
    _u1(sdk::unknown_ptr) logging_get_report_identifier_failed;
    
    // [TraceLoggingGetSetReportFailed]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xfdd4, 0x1a48 bytes
    // hidclass.sys .text:0x19064, 0x2bf0 bytes
    // hidclass.sys .text:0x1bfa4, 0x2bf0 bytes
    // hidclass.sys .text:0x19064, 0x2bf0 bytes
    //
    _u2(sdk::unknown_ptr) logging_get_set_report_failed;
    
    // [TraceLoggingIntegerOverflow]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x11cbc, 0x1a48 bytes
    // hidclass.sys .text:0x1b780, 0x2bf0 bytes
    // hidclass.sys .text:0x1e578, 0x2bf0 bytes
    // hidclass.sys .text:0x1b780, 0x2bf0 bytes
    //
    _u3(sdk::unknown_ptr) logging_integer_overflow;
    
    // [TraceLoggingInterruptReadCompleteFailed]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xe9e0, 0x1a48 bytes
    // hidclass.sys .text:0x17084, 0x2bf0 bytes
    // hidclass.sys .text:0x19e3c, 0x2bf0 bytes
    // hidclass.sys .text:0x17084, 0x2bf0 bytes
    //
    _u4(sdk::unknown_ptr) logging_interrupt_read_complete_failed;
    
    // [TraceLoggingIoAllocateDriverObjectExtensionFailed]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xcfe4, 0x1a48 bytes
    // hidclass.sys .text:0x14a44, 0x2bf0 bytes
    // hidclass.sys .text:0x177d0, 0x2bf0 bytes
    // hidclass.sys .text:0x14a44, 0x2bf0 bytes
    //
    _u5(sdk::unknown_ptr) logging_io_allocate_driver_object_extension_failed;
    
    // [TraceLoggingIoAllocateIrpFailed]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xea98, 0x1a48 bytes
    // hidclass.sys .text:0x17140, 0x2bf0 bytes
    // hidclass.sys .text:0x19f1c, 0x2bf0 bytes
    // hidclass.sys .text:0x17140, 0x2bf0 bytes
    //
    _u6(sdk::unknown_ptr) logging_io_allocate_irp_failed;
    
    // [TraceLoggingIoAllocateWorkItemFailed]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xf1cc, 0x1a48 bytes
    // hidclass.sys .text:0x1775c, 0x2bf0 bytes
    // hidclass.sys .text:0x1a55c, 0x2bf0 bytes
    // hidclass.sys .text:0x1775c, 0x2bf0 bytes
    //
    _u7(sdk::unknown_ptr) logging_io_allocate_work_item_failed;
    
    // [TraceLoggingIoRegisterDeviceInterfaceFailed]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x11dd8, 0x1a48 bytes
    // hidclass.sys .text:0x1b89c, 0x2bf0 bytes
    // hidclass.sys .text:0x1e6b4, 0x2bf0 bytes
    // hidclass.sys .text:0x1b89c, 0x2bf0 bytes
    //
    _u8(sdk::unknown_ptr) logging_io_register_device_interface_failed;
    
    // [TraceLoggingIrpCloseFailed]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xd9ec, 0x1a48 bytes
    // hidclass.sys .text:0x15940, 0x2bf0 bytes
    // hidclass.sys .text:0x18624, 0x2bf0 bytes
    // hidclass.sys .text:0x15940, 0x2bf0 bytes
    //
    _u9(sdk::unknown_ptr) logging_irp_close_failed;
    
    // [TraceLoggingIrpCreateFailed]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xdaa4, 0x1a48 bytes
    // hidclass.sys .text:0x159fc, 0x2bf0 bytes
    // hidclass.sys .text:0x18704, 0x2bf0 bytes
    // hidclass.sys .text:0x159fc, 0x2bf0 bytes
    //
    _v0(sdk::unknown_ptr) logging_irp_create_failed;
    
    // [TraceLoggingIrpInternalIoctlFailed]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xdb5c, 0x1a48 bytes
    // hidclass.sys .text:0x15ab8, 0x2bf0 bytes
    // hidclass.sys .text:0x187e0, 0x2bf0 bytes
    // hidclass.sys .text:0x15ab8, 0x2bf0 bytes
    //
    _v1(sdk::unknown_ptr) logging_irp_internal_ioctl_failed;
    
    // [TraceLoggingIrpIoctlFailed]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xdc34, 0x1a48 bytes
    // hidclass.sys .text:0x15b90, 0x2bf0 bytes
    // hidclass.sys .text:0x188d8, 0x2bf0 bytes
    // hidclass.sys .text:0x15b90, 0x2bf0 bytes
    //
    _v2(sdk::unknown_ptr) logging_irp_ioctl_failed;
    
    // [TraceLoggingIrqlTooHigh]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xfec0, 0x1a48 bytes
    // hidclass.sys .text:0x19154, 0x2bf0 bytes
    // hidclass.sys .text:0x1c0c0, 0x2bf0 bytes
    // hidclass.sys .text:0x19154, 0x2bf0 bytes
    //
    _v3(sdk::unknown_ptr) logging_irql_too_high;
    
    // [TraceLoggingNoCollectionDescriptor]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x11fa8, 0x1a48 bytes
    // hidclass.sys .text:0x1b994, 0x2bf0 bytes
    // hidclass.sys .text:0x1e7c4, 0x2bf0 bytes
    // hidclass.sys .text:0x1b994, 0x2bf0 bytes
    //
    _v4(sdk::unknown_ptr) logging_no_collection_descriptor;
    
    // [TraceLoggingNoTopLevelCollection]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1206c, 0x1a48 bytes
    // hidclass.sys .text:0x1ba58, 0x2bf0 bytes
    // hidclass.sys .text:0x1e8a8, 0x2bf0 bytes
    // hidclass.sys .text:0x1ba58, 0x2bf0 bytes
    //
    _v5(sdk::unknown_ptr) logging_no_top_level_collection;
    
    // [TraceLoggingParserError]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xff78, 0x1a48 bytes
    // hidclass.sys .text:0x19210, 0x2bf0 bytes
    // hidclass.sys .text:0x1c1a0, 0x2bf0 bytes
    // hidclass.sys .text:0x19210, 0x2bf0 bytes
    //
    _v6(sdk::unknown_ptr) logging_parser_error;
    
    // [TraceLoggingParserErrorWithParam]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x10030, 0x1a48 bytes
    // hidclass.sys .text:0x192cc, 0x2bf0 bytes
    // hidclass.sys .text:0x1c27c, 0x2bf0 bytes
    // hidclass.sys .text:0x192cc, 0x2bf0 bytes
    //
    _v7(sdk::unknown_ptr) logging_parser_error_with_param;
    
    // [TraceLoggingPoFxRegisterDeviceFailed]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x14080, 0x1a48 bytes
    // hidclass.sys .text:0x1db30, 0x2bf0 bytes
    // hidclass.sys .text:0x207cc, 0x2bf0 bytes
    // hidclass.sys .text:0x1db30, 0x2bf0 bytes
    //
    _v8(sdk::unknown_ptr) logging_po_fx_register_device_failed;
    
    // [TraceLoggingPreparsedDataLengthTruncated]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x12114, 0x1a48 bytes
    // hidclass.sys .text:0x1bb10, 0x2bf0 bytes
    // hidclass.sys .text:0x1e980, 0x2bf0 bytes
    // hidclass.sys .text:0x1bb10, 0x2bf0 bytes
    //
    _v9(sdk::unknown_ptr) logging_preparsed_data_length_truncated;
    
    // [TraceLoggingRefDriverExtFailed]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xd05c, 0x1a48 bytes
    // hidclass.sys .text:0x14ac0, 0x2bf0 bytes
    // hidclass.sys .text:0x17864, 0x2bf0 bytes
    // hidclass.sys .text:0x14ac0, 0x2bf0 bytes
    //
    _w0(sdk::unknown_ptr) logging_ref_driver_ext_failed;
    
    // [TraceLoggingRevisionMismatch]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xd0b4, 0x1a48 bytes
    // hidclass.sys .text:0x14b1c, 0x2bf0 bytes
    // hidclass.sys .text:0x178d8, 0x2bf0 bytes
    // hidclass.sys .text:0x14b1c, 0x2bf0 bytes
    //
    _w1(sdk::unknown_ptr) logging_revision_mismatch;
    
    // [TraceLoggingStartDeviceFailed]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x12298, 0x1a48 bytes
    // hidclass.sys .text:0x1bc98, 0x2bf0 bytes
    // hidclass.sys .text:0x1eb30, 0x2bf0 bytes
    // hidclass.sys .text:0x1bc98, 0x2bf0 bytes
    //
    _w2(sdk::unknown_ptr) logging_start_device_failed;
    
    // [TraceLoggingStrSafeOverflow]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x10108, 0x1a48 bytes
    // hidclass.sys .text:0x193a8, 0x2bf0 bytes
    // hidclass.sys .text:0x1c378, 0x2bf0 bytes
    // hidclass.sys .text:0x193a8, 0x2bf0 bytes
    //
    _w3(sdk::unknown_ptr) logging_str_safe_overflow;
    
    // [TraceLoggingWppRecorderFailed]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xd168, 0x1a48 bytes
    // hidclass.sys .text:0x14bd8, 0x2bf0 bytes
    // hidclass.sys .text:0x179b0, 0x2bf0 bytes
    // hidclass.sys .text:0x14bd8, 0x2bf0 bytes
    //
    _w4(sdk::unknown_ptr) logging_wpp_recorder_failed;
    
    // [TraceLoggingZwOpenKeyFailed]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xd42c, 0x1a48 bytes
    // hidclass.sys .text:0x150e8, 0x2bf0 bytes
    // hidclass.sys .text:0x17d88, 0x2bf0 bytes
    // hidclass.sys .text:0x150e8, 0x2bf0 bytes
    //
    _w5(sdk::unknown_ptr) logging_zw_open_key_failed;
    
    // [traceInited]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .data:0x89640, 0x1c8a8 bytes
    // ndis.sys .data:0xe4320, 0x1d2c0 bytes
    // ndis.sys .data:0xeb5c8, 0x1e858 bytes
    // ndis.sys .data:0xe4360, 0x1d2c0 bytes
    //
    _w6(sdk::unknown_ptr) inited;
    
    // [TraceLoggingResetLatencyBuckets]
    // Ldr = [storport.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storport.sys .rdata:0x47e20, 0x1b430 bytes
    // storport.sys .rdata:0x605a8, 0x2be18 bytes
    // storport.sys .rdata:0x712f8, 0x440c8 bytes
    // storport.sys .rdata:0x605a8, 0x2be18 bytes
    //
    _w7(sdk::unknown_ptr) logging_reset_latency_buckets;
    
    // [TraceLoggingRegister]
    // Ldr = [ci.dll]
    // => Windows 10 v1607
    // ci.dll PAGE:0x22078, 0x8dc0 bytes
    //
    _w8(sdk::function<int32_t(const struct tlg::provider_t*)>*) logging_register;
    
    // [TraceFunc]
    // Ldr = [netio.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // netio.sys .text:0x141fc, 0x4dd3 bytes
    // netio.sys .text:0x147c4, 0x4e8c bytes
    // netio.sys .text:0x142ac, 0x4dd3 bytes
    //
    _w9(sdk::unknown_ptr) func;
    
    // [TraceFilterEnginepEvaluateBinaryRuleEx]
    // Ldr = [tcpip.sys]
    // => Windows 11
    // tcpip.sys .text:0x129178, 0x91370 bytes
    //
    _x0(sdk::unknown_ptr) filter_enginep_evaluate_binary_rule_ex;
    
    // [TraceFilterEnginepEvaluateListRule]
    // Ldr = [tcpip.sys]
    // => Windows 11
    // tcpip.sys .text:0x12931c, 0x91370 bytes
    //
    _x1(sdk::unknown_ptr) filter_enginep_evaluate_list_rule;
    
    // [TraceVailGuestPortFailure]
    // Ldr = [tcpip.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // tcpip.sys .text:0xf4df8, 0x7a898 bytes
    // tcpip.sys .text:0x12cf38, 0x91370 bytes
    // tcpip.sys .text:0xf44b8, 0x7a860 bytes
    //
    _x2(sdk::unknown_ptr) vail_guest_port_failure;
    
    // [TraceFilterEngineAllowedByRuleEx2]
    // Ldr = [tcpip.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // tcpip.sys .text:0x1965a8, 0x528a0 bytes
    // tcpip.sys .text:0x1b2fd0, 0x7a898 bytes
    // tcpip.sys .text:0x128d90, 0x91370 bytes
    // tcpip.sys .text:0x1b24d0, 0x7a860 bytes
    //
    _x3(sdk::unknown_ptr) filter_engine_allowed_by_rule_ex2;
    
    // [TraceFilterEngineEvaluateFilterExpression]
    // Ldr = [tcpip.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // tcpip.sys .text:0x196608, 0x528a0 bytes
    // tcpip.sys .text:0x1b3034, 0x7a898 bytes
    // tcpip.sys .text:0x128df4, 0x91370 bytes
    // tcpip.sys .text:0x1b2534, 0x7a860 bytes
    //
    _x4(sdk::unknown_ptr) filter_engine_evaluate_filter_expression;
    
    // [TraceFilterEngineStoreFilterRulesInternal]
    // Ldr = [tcpip.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // tcpip.sys .text:0x196758, 0x528a0 bytes
    // tcpip.sys .text:0x1b3188, 0x7a898 bytes
    // tcpip.sys .text:0x128f48, 0x91370 bytes
    // tcpip.sys .text:0x1b2688, 0x7a860 bytes
    //
    _x5(sdk::unknown_ptr) filter_engine_store_filter_rules_internal;
    
    // [TraceFilterEngineValidateAndStoreRules]
    // Ldr = [tcpip.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // tcpip.sys .text:0x196864, 0x528a0 bytes
    // tcpip.sys .text:0x1b32b0, 0x7a898 bytes
    // tcpip.sys .text:0x129070, 0x91370 bytes
    // tcpip.sys .text:0x1b27b0, 0x7a860 bytes
    //
    _x6(sdk::unknown_ptr) filter_engine_validate_and_store_rules;
    
    // [TraceFilterEngineValidateRule]
    // Ldr = [tcpip.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // tcpip.sys .text:0x1968ec, 0x528a0 bytes
    // tcpip.sys .text:0x1b3340, 0x7a898 bytes
    // tcpip.sys .text:0x129100, 0x91370 bytes
    // tcpip.sys .text:0x1b2840, 0x7a860 bytes
    //
    _x7(sdk::unknown_ptr) filter_engine_validate_rule;
    
    // [TraceLoggingWriteMiracastStartSessionTotalTimeMs]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x312ac, 0x60098 bytes
    //
    _x8(sdk::unknown_ptr) logging_write_miracast_start_session_total_time_ms;
    
    // [TraceAdapterLockAcquire]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xef0a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0xfb070, 0x762b0 bytes
    //
    _x9(sdk::unknown_ptr) adapter_lock_acquire;
    
    // [TraceAdapterLockRelease]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xef0a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0xfb070, 0x762b0 bytes
    //
    _y0(sdk::unknown_ptr) adapter_lock_release;
    
    // [TraceDxgkBlockThread]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x11940, 0x60098 bytes
    // dxgkrnl.sys .text:0x1a1b0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2b190, 0x84380 bytes
    // dxgkrnl.sys .text:0x1a8c0, 0x762b0 bytes
    //
    _y1(sdk::unknown_ptr) dxgk_block_thread;
    
    // [TraceDxgkContext]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x21450, 0x60098 bytes
    // dxgkrnl.sys .text:0x24040, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2bdf0, 0x84380 bytes
    // dxgkrnl.sys .text:0x24cd0, 0x762b0 bytes
    //
    _y2(sdk::unknown_ptr) dxgk_context;
    
    // [TraceDxgkDevice]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x21f20, 0x60098 bytes
    // dxgkrnl.sys .text:0x24220, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2bfa0, 0x84380 bytes
    // dxgkrnl.sys .text:0x24eb0, 0x762b0 bytes
    //
    _y3(sdk::unknown_ptr) dxgk_device;
    
    // [TraceDxgkFunctionProfiler]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x11970, 0x60098 bytes
    // dxgkrnl.sys .text:0x23600, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2b1c0, 0x84380 bytes
    // dxgkrnl.sys .text:0x24120, 0x762b0 bytes
    //
    _y4(sdk::unknown_ptr) dxgk_function_profiler;
    
    // [TraceDxgkPatchLocationList]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x22810, 0x60098 bytes
    // dxgkrnl.sys .text:0x41f68, 0x762b0 bytes
    // dxgkrnl.sys .text:0x51038, 0x84380 bytes
    // dxgkrnl.sys .text:0x42158, 0x762b0 bytes
    //
    _y5(sdk::unknown_ptr) dxgk_patch_location_list;
    
    // [TraceDxgkPerformanceWarning]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x25840, 0x60098 bytes
    // dxgkrnl.sys .text:0x23690, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2b2a0, 0x84380 bytes
    // dxgkrnl.sys .text:0x241b0, 0x762b0 bytes
    //
    _y6(sdk::unknown_ptr) dxgk_performance_warning;
    
    // [TraceLogDpiInfo]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x71a58, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x131348, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c2170, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x134674, 0x762b0 bytes
    //
    _y7(sdk::unknown_ptr) log_dpi_info;
    
    // [TraceLoggingWriteMiracastSessionStart]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x30894, 0x60098 bytes
    // dxgkrnl.sys .text:0x57abc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x672ec, 0x84380 bytes
    // dxgkrnl.sys .text:0x57c4c, 0x762b0 bytes
    //
    _y8(sdk::unknown_ptr) logging_write_miracast_session_start;
    
    // [TraceLoggingWriteMiracastSessionStop]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x30c54, 0x60098 bytes
    // dxgkrnl.sys .text:0x57d34, 0x762b0 bytes
    // dxgkrnl.sys .text:0x67564, 0x84380 bytes
    // dxgkrnl.sys .text:0x57ec4, 0x762b0 bytes
    //
    _y9(sdk::unknown_ptr) logging_write_miracast_session_stop;
    
    // [TraceLoggingWriteMiracastStartSessionEntry]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x31224, 0x60098 bytes
    // dxgkrnl.sys .text:0x580c8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x678f8, 0x84380 bytes
    // dxgkrnl.sys .text:0x58258, 0x762b0 bytes
    //
    _z0(sdk::unknown_ptr) logging_write_miracast_start_session_entry;
    
    // [TraceLoggingUnregister_EtwEventUnregister]
    // Ldr = [dxgi.dll]
    // => Windows 10 v20H2
    // dxgi.dll .text:0x4829c, 0x17e70 bytes
    //
    _z1(sdk::function<void(const struct tlg::provider_t*)>*) logging_unregister_etw_event_unregister;
    
    // [TraceLoggingRegisterEx_EventRegister_EventSetInformation]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004
    // dxgi.dll .text:0x7d568, 0x17e70 bytes
    // dxgi.dll .text:0x7d6e8, 0x17e70 bytes
    //
    _z2(sdk::function<sdk::hresult(const struct tlg::provider_t*, sdk::function<void(const struct nt::guid_t*, uint32_t, uint8_t, uint64_t, uint64_t, struct nt::event_filter_descriptor_t*, void*)>*, void*)>*) logging_register_ex_event_register_event_set_information;
    
    // [TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x9d20, 0x17e70 bytes
    // dxgi.dll .text:0x9d20, 0x17e70 bytes
    // dxgi.dll .text:0x24060, 0x18b10 bytes
    // dxgi.dll .text:0x1e530, 0x17e70 bytes
    //
    _z3(sdk::function<sdk::hresult(const struct tlg::provider_t*, sdk::function<void(const struct nt::guid_t*, uint32_t, uint8_t, uint64_t, uint64_t, struct nt::event_filter_descriptor_t*, void*)>*, void*)>*) logging_register_ex_etw_event_register_etw_event_set_information;
};
#include "magic/api.end.hpp"
