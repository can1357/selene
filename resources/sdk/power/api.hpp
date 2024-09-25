#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace power
{
    // [PowerMetaProviderContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x8148, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) meta_provider_context;
    
    // [PowerMetaProviderMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x1d1e0, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) meta_provider_map;
    
    // [PowerReqestStatsLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1eca0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc1ec80, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) reqest_stats_lock;
    
    // [PowerRequestStatsDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc1ecc0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc1eca0, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) request_stats_database;
    
    // [PowerIrpNames]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x6fa170, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b9190, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa2188, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b8190, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) irp_names;
    
    // [PowerStateDisableReasonListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x304bb0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc23b90, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3d140, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc23b80, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) state_disable_reason_list_head;
    
    // [PowerOf2]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0xcaf1c, 0x13864 bytes
    //
    _m6(sdk::unknown_ptr) of2;
    
    // [PowerUpdateBrightnessLevels]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x9320, 0x1eb80 bytes
    //
    _m7(sdk::unknown_ptr) update_brightness_levels;
    
    // [PowerInputEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xdc30, 0x1eb80 bytes
    // win32kbase.sys .text:0x91b50, 0x243e0 bytes
    // win32kbase.sys .text:0x6eee0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) input_event;
    
    // [PowerMonitorDimStateTelemetry]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x92368, 0x243e0 bytes
    // win32kbase.sys .text:0x6adc0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc2dd8, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) monitor_dim_state_telemetry;
    
    // [PowerConnectionEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc714, 0x1eb80 bytes
    // win32kbase.sys .text:0x2c83c, 0x243e0 bytes
    // win32kbase.sys .text:0x684a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x8a8ec, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) connection_event;
    
    // [PowerDimMonitor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb9fb0, 0x1eb80 bytes
    // win32kbase.sys .text:0x12edb4, 0x243e0 bytes
    // win32kbase.sys .text:0x162184, 0x27ef0 bytes
    // win32kbase.sys .text:0x12c634, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) dim_monitor;
    
    // [PowerDimUndimResend]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xeb74, 0x1eb80 bytes
    // win32kbase.sys .text:0x92230, 0x243e0 bytes
    // win32kbase.sys .text:0x681e8, 0x27ef0 bytes
    // win32kbase.sys .text:0xc2ca0, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) dim_undim_resend;
    
    // [PowerDisplayBurst]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb916c, 0x1eb80 bytes
    // win32kbase.sys .text:0x12d420, 0x243e0 bytes
    // win32kbase.sys .text:0x161028, 0x27ef0 bytes
    // win32kbase.sys .text:0x12aca0, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) display_burst;
    
    // [PowerDisplayEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x105f80, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x218b90, 0x243e0 bytes
    // win32kbase.sys .rdata:0x26a060, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x216b90, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) display_event;
    
    // [PowerIsDimTimeOutManual]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x93a0, 0x1eb80 bytes
    // win32kbase.sys .text:0xbfce4, 0x243e0 bytes
    // win32kbase.sys .text:0xd1170, 0x27ef0 bytes
    // win32kbase.sys .text:0xb9564, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) is_dim_time_out_manual;
    
    // [PowerIsDisplayBurstActive]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xba0a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x12ef40, 0x243e0 bytes
    // win32kbase.sys .text:0x162300, 0x27ef0 bytes
    // win32kbase.sys .text:0x12c7c0, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) is_display_burst_active;
    
    // [PowerIsDisplayIdleExpired]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x76ec0, 0x1eb80 bytes
    // win32kbase.sys .text:0xa4730, 0x243e0 bytes
    // win32kbase.sys .text:0x6a830, 0x27ef0 bytes
    // win32kbase.sys .text:0x93ca0, 0x243e0 bytes
    //
    _n7(sdk::unknown_ptr) is_display_idle_expired;
    
    // [PowerIsDisplayRequired]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xba150, 0x1eb80 bytes
    // win32kbase.sys .text:0x12efe0, 0x243e0 bytes
    // win32kbase.sys .text:0x1623a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x12c860, 0x243e0 bytes
    //
    _n8(sdk::unknown_ptr) is_display_required;
    
    // [PowerOffGdi]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1448a0, 0x13864 bytes
    // win32kfull.sys .text:0x152050, 0x1596d bytes
    // win32kfull.sys .text:0x1466a0, 0x1659e bytes
    // win32kfull.sys .text:0x152f90, 0x1596d bytes
    //
    _n9(sdk::unknown_ptr) off_gdi;
    
    // [PowerOffMonitor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x878c0, 0x1eb80 bytes
    // win32kbase.sys .text:0xcf800, 0x243e0 bytes
    // win32kbase.sys .text:0xe0b10, 0x27ef0 bytes
    // win32kbase.sys .text:0xce6c0, 0x243e0 bytes
    //
    _o0(sdk::unknown_ptr) off_monitor;
    
    // [PowerOffSession]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb9238, 0x1eb80 bytes
    // win32kbase.sys .text:0x12d500, 0x243e0 bytes
    // win32kbase.sys .text:0x161108, 0x27ef0 bytes
    // win32kbase.sys .text:0x12ad80, 0x243e0 bytes
    //
    _o1(sdk::unknown_ptr) off_session;
    
    // [PowerOnGdi]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x144420, 0x13864 bytes
    // win32kfull.sys .text:0x151e10, 0x1596d bytes
    // win32kfull.sys .text:0x146470, 0x1659e bytes
    // win32kfull.sys .text:0x152d50, 0x1596d bytes
    //
    _o2(sdk::unknown_ptr) on_gdi;
    
    // [PowerOnGdiBegin]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x1091c0, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x22c5a8, 0x243e0 bytes
    // win32kbase.sys .rdata:0x2801e8, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22a5e8, 0x243e0 bytes
    //
    _o3(sdk::unknown_ptr) on_gdi_begin;
    
    // [PowerOnGdiEnd]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x1091b0, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x22bd00, 0x243e0 bytes
    // win32kbase.sys .rdata:0x27f860, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x229d40, 0x243e0 bytes
    //
    _o4(sdk::unknown_ptr) on_gdi_end;
    
    // [PowerOnMonitor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xd790, 0x1eb80 bytes
    // win32kbase.sys .text:0x91d90, 0x243e0 bytes
    // win32kbase.sys .text:0x6a940, 0x27ef0 bytes
    // win32kbase.sys .text:0xc2800, 0x243e0 bytes
    //
    _o5(sdk::unknown_ptr) on_monitor;
    
    // [PowerOnMonitorBegin]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x109180, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x22c778, 0x243e0 bytes
    // win32kbase.sys .rdata:0x2803c8, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22a7b8, 0x243e0 bytes
    //
    _o6(sdk::unknown_ptr) on_monitor_begin;
    
    // [PowerOnMonitorEnd]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x109170, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x22bd90, 0x243e0 bytes
    // win32kbase.sys .rdata:0x27f8f0, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x229dd0, 0x243e0 bytes
    //
    _o7(sdk::unknown_ptr) on_monitor_end;
    
    // [PowerOnSession]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb92e4, 0x1eb80 bytes
    // win32kbase.sys .text:0x12d5c0, 0x243e0 bytes
    // win32kbase.sys .text:0x1611c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x12ae40, 0x243e0 bytes
    //
    _o8(sdk::unknown_ptr) on_session;
    
    // [PowerResumeSuspendEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x877c0, 0x1eb80 bytes
    // win32kbase.sys .text:0xcf4c0, 0x243e0 bytes
    // win32kbase.sys .text:0xe0880, 0x27ef0 bytes
    // win32kbase.sys .text:0xce380, 0x243e0 bytes
    //
    _o9(sdk::unknown_ptr) resume_suspend_event;
    
    // [PowerStateTasksAllowed]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xc2c0, 0x13864 bytes
    // win32kfull.sys .text:0x7950, 0x1596d bytes
    // win32kfull.sys .text:0x39f0, 0x1659e bytes
    // win32kfull.sys .text:0x7d00, 0x1596d bytes
    //
    _p0(sdk::unknown_ptr) state_tasks_allowed;
    
    // [PowerUnDimMonitor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xdaf0, 0x1eb80 bytes
    // win32kbase.sys .text:0x920b0, 0x243e0 bytes
    // win32kbase.sys .text:0x6ac4c, 0x27ef0 bytes
    // win32kbase.sys .text:0xc2b20, 0x243e0 bytes
    //
    _p1(sdk::unknown_ptr) un_dim_monitor;
    
    // [PowerCallbackObj]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x234b8, 0x1d08 bytes
    // pci.sys .data:0x346d8, 0x1cf0 bytes
    // pci.sys .data:0x38738, 0x1cf0 bytes
    // pci.sys .data:0x326d8, 0x1cf0 bytes
    //
    _p2(sdk::unknown_ptr) callback_obj;
    
    // [PowerDelayedCancelRoutine]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x13350, 0x1a48 bytes
    // hidclass.sys .text:0x1d1b0, 0x2bf0 bytes
    // hidclass.sys .text:0x1fe30, 0x2bf0 bytes
    // hidclass.sys .text:0x1d1b0, 0x2bf0 bytes
    //
    _p3(sdk::unknown_ptr) delayed_cancel_routine;
    
    // [PowerEventCancelRoutine]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x133f0, 0x1a48 bytes
    // hidclass.sys .text:0x1d280, 0x2bf0 bytes
    // hidclass.sys .text:0x1ff00, 0x2bf0 bytes
    // hidclass.sys .text:0x1d280, 0x2bf0 bytes
    //
    _p4(sdk::unknown_ptr) event_cancel_routine;
    
    // [PowerDisableWakeup]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .rdata:0x7a5a8, 0x1c8a8 bytes
    // ndis.sys .rdata:0xcb9a0, 0x1d2c0 bytes
    // ndis.sys .rdata:0xd77a0, 0x1e858 bytes
    // ndis.sys .rdata:0xcb918, 0x1d2c0 bytes
    //
    _p5(sdk::unknown_ptr) disable_wakeup;
    
    // [PowerDownFailed]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .rdata:0x7a228, 0x1c8a8 bytes
    // ndis.sys .rdata:0xd00f0, 0x1d2c0 bytes
    // ndis.sys .rdata:0xd7388, 0x1e858 bytes
    // ndis.sys .rdata:0xd02a0, 0x1d2c0 bytes
    //
    _p6(sdk::unknown_ptr) down_failed;
    
    // [PowerDownFailedCannotReinitialize]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .rdata:0x7a0e8, 0x1c8a8 bytes
    // ndis.sys .rdata:0xcffa0, 0x1d2c0 bytes
    // ndis.sys .rdata:0xd71e0, 0x1e858 bytes
    // ndis.sys .rdata:0xd0170, 0x1d2c0 bytes
    //
    _p7(sdk::unknown_ptr) down_failed_cannot_reinitialize;
    
    // [PowerHaltMiniport]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .rdata:0x7a118, 0x1c8a8 bytes
    // ndis.sys .rdata:0xcffe0, 0x1d2c0 bytes
    // ndis.sys .rdata:0xd0050, 0x1e858 bytes
    // ndis.sys .rdata:0xd01b0, 0x1d2c0 bytes
    //
    _p8(sdk::unknown_ptr) halt_miniport;
    
    // [PowerHibernateOrShutdown]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .rdata:0x7a648, 0x1c8a8 bytes
    // ndis.sys .rdata:0xcb9c0, 0x1d2c0 bytes
    // ndis.sys .rdata:0xd7860, 0x1e858 bytes
    // ndis.sys .rdata:0xcb938, 0x1d2c0 bytes
    //
    _p9(sdk::unknown_ptr) hibernate_or_shutdown;
    
    // [PowerIrpComplete]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .rdata:0x7a4b8, 0x1c8a8 bytes
    // ndis.sys .rdata:0xd0368, 0x1d2c0 bytes
    // ndis.sys .rdata:0xd7660, 0x1e858 bytes
    // ndis.sys .rdata:0xd0510, 0x1d2c0 bytes
    //
    _q0(sdk::unknown_ptr) irp_complete;
    
    // [PowerOnMiniportNotStarted]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .rdata:0x778a8, 0x1c8a8 bytes
    // ndis.sys .rdata:0xd0468, 0x1d2c0 bytes
    // ndis.sys .rdata:0xd77d0, 0x1e858 bytes
    // ndis.sys .rdata:0xd0610, 0x1d2c0 bytes
    //
    _q1(sdk::unknown_ptr) on_miniport_not_started;
    
    // [PowerOnMiniportRemoved]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .rdata:0x77888, 0x1c8a8 bytes
    // ndis.sys .rdata:0xd0310, 0x1d2c0 bytes
    // ndis.sys .rdata:0xd75f0, 0x1e858 bytes
    // ndis.sys .rdata:0xd04b8, 0x1d2c0 bytes
    //
    _q2(sdk::unknown_ptr) on_miniport_removed;
    
    // [PowerPolicyError]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .rdata:0x7a168, 0x1c8a8 bytes
    // ndis.sys .rdata:0xcb940, 0x1d2c0 bytes
    // ndis.sys .rdata:0xd7270, 0x1e858 bytes
    // ndis.sys .rdata:0xcb870, 0x1d2c0 bytes
    //
    _q3(sdk::unknown_ptr) policy_error;
    
    // [PowerPolicyPatternNotEnabled]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .rdata:0x7a3d8, 0x1c8a8 bytes
    // ndis.sys .rdata:0xcb960, 0x1d2c0 bytes
    // ndis.sys .rdata:0xd7570, 0x1e858 bytes
    // ndis.sys .rdata:0xcb8d0, 0x1d2c0 bytes
    //
    _q4(sdk::unknown_ptr) policy_pattern_not_enabled;
    
    // [PowerPolicySetD3]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .rdata:0x7a338, 0x1c8a8 bytes
    // ndis.sys .rdata:0xcb950, 0x1d2c0 bytes
    // ndis.sys .rdata:0xd74a0, 0x1e858 bytes
    // ndis.sys .rdata:0xcb8a0, 0x1d2c0 bytes
    //
    _q5(sdk::unknown_ptr) policy_set_d3;
    
    // [PowerPolicyStates]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .rdata:0x7a548, 0x1c8a8 bytes
    // ndis.sys .rdata:0xcb980, 0x1d2c0 bytes
    // ndis.sys .rdata:0xd7720, 0x1e858 bytes
    // ndis.sys .rdata:0xcb8f8, 0x1d2c0 bytes
    //
    _q6(sdk::unknown_ptr) policy_states;
    
    // [PowerShutdownMiniport]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .rdata:0x7a4e8, 0x1c8a8 bytes
    // ndis.sys .rdata:0xcb970, 0x1d2c0 bytes
    // ndis.sys .rdata:0xd7690, 0x1e858 bytes
    // ndis.sys .rdata:0xcb8e8, 0x1d2c0 bytes
    //
    _q7(sdk::unknown_ptr) shutdown_miniport;
    
    // [PowerWakeNotEnabled]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .rdata:0x7a6c8, 0x1c8a8 bytes
    // ndis.sys .rdata:0xcb9d0, 0x1d2c0 bytes
    // ndis.sys .rdata:0xd7910, 0x1e858 bytes
    // ndis.sys .rdata:0xcb948, 0x1d2c0 bytes
    //
    _q8(sdk::unknown_ptr) wake_not_enabled;
    
    // [PowerWakeUpDevice]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .rdata:0x79fa0, 0x1c8a8 bytes
    // ndis.sys .rdata:0xcb910, 0x1d2c0 bytes
    // ndis.sys .rdata:0xd7030, 0x1e858 bytes
    // ndis.sys .rdata:0xcb820, 0x1d2c0 bytes
    //
    _q9(sdk::unknown_ptr) wake_up_device;
};
#include "magic/api.end.hpp"
