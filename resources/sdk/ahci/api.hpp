#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ahci
{
    // [AhciPortProcessDeviceErrorStats]
    // Ldr = [storahci.sys]
    // => Windows 11
    // storahci.sys .text:0x6bcc, 0x1125 bytes
    //
    _m0(sdk::unknown_ptr) port_process_device_error_stats;
    
    // [AhciPortProcessDeviceFailure]
    // Ldr = [storahci.sys]
    // => Windows 11
    // storahci.sys .text:0x6b7c, 0x1125 bytes
    //
    _m1(sdk::unknown_ptr) port_process_device_failure;
    
    // [AhciPortProcessErrorStats]
    // Ldr = [storahci.sys]
    // => Windows 11
    // storahci.sys .text:0x6c8c, 0x1125 bytes
    //
    _m2(sdk::unknown_ptr) port_process_error_stats;
    
    // [AhciZeroMemory]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607
    // storahci.sys .text:0x6850, 0x847 bytes
    //
    _m3(sdk::unknown_ptr) zero_memory;
    
    // [AhciAllocateDmaBuffer]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x7430, 0x116f bytes
    // storahci.sys .text:0x5900, 0x1125 bytes
    // storahci.sys .text:0x7430, 0x116f bytes
    //
    _m4(sdk::unknown_ptr) allocate_dma_buffer;
    
    // [AhciEnableThrottlingAdapter]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x10498, 0x116f bytes
    // storahci.sys .text:0xeacc, 0x1125 bytes
    // storahci.sys .text:0x10498, 0x116f bytes
    //
    _m5(sdk::unknown_ptr) enable_throttling_adapter;
    
    // [AhciEnableThrottlingChannel]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x10554, 0x116f bytes
    // storahci.sys .text:0xeb88, 0x1125 bytes
    // storahci.sys .text:0x10554, 0x116f bytes
    //
    _m6(sdk::unknown_ptr) enable_throttling_channel;
    
    // [AhciFillDeviceFailureLog]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x17664, 0x116f bytes
    // storahci.sys .text:0x172a8, 0x1125 bytes
    // storahci.sys .text:0x17664, 0x116f bytes
    //
    _m7(sdk::unknown_ptr) fill_device_failure_log;
    
    // [AhciIsEventAllowedWithinThrottleLimit]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1d40, 0x116f bytes
    // storahci.sys .text:0x6cc8, 0x1125 bytes
    // storahci.sys .text:0x1d40, 0x116f bytes
    //
    _m8(sdk::unknown_ptr) is_event_allowed_within_throttle_limit;
    
    // [AhciPortCheckIOStatusAndConfigureFastFail]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x177cc, 0x116f bytes
    // storahci.sys .text:0x174bc, 0x1125 bytes
    // storahci.sys .text:0x177cc, 0x116f bytes
    //
    _m9(sdk::unknown_ptr) port_check_io_status_and_configure_fast_fail;
    
    // [AhciPortLogDeviceReset]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x89e8, 0x116f bytes
    // storahci.sys .text:0x177f4, 0x1125 bytes
    // storahci.sys .text:0x89e8, 0x116f bytes
    //
    _n0(sdk::unknown_ptr) port_log_device_reset;
    
    // [AhciPortLogDeviceStartFailure]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x17b8c, 0x116f bytes
    // storahci.sys .text:0x17ddc, 0x1125 bytes
    // storahci.sys .text:0x17b8c, 0x116f bytes
    //
    _n1(sdk::unknown_ptr) port_log_device_start_failure;
    
    // [AhciPortLogIoFailureStatistics]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1f54, 0x116f bytes
    // storahci.sys .text:0x12e0, 0x1125 bytes
    // storahci.sys .text:0x1f54, 0x116f bytes
    //
    _n2(sdk::unknown_ptr) port_log_io_failure_statistics;
    
    // [AhciPortMarkDeviceFailed]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x17d20, 0x116f bytes
    // storahci.sys .text:0x17f70, 0x1125 bytes
    // storahci.sys .text:0x17d20, 0x116f bytes
    //
    _n3(sdk::unknown_ptr) port_mark_device_failed;
    
    // [AhciPortStartTelemetry]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x17fc4, 0x116f bytes
    // storahci.sys .text:0x181f0, 0x1125 bytes
    // storahci.sys .text:0x17fc4, 0x116f bytes
    //
    _n4(sdk::unknown_ptr) port_start_telemetry;
    
    // [AhciPortUpdateLogPageUsingCachedData]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x15318, 0x116f bytes
    // storahci.sys .text:0x13024, 0x1125 bytes
    // storahci.sys .text:0x15318, 0x116f bytes
    //
    _n5(sdk::unknown_ptr) port_update_log_page_using_cached_data;
    
    // [AhciRegistryWriteWorker]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x154d0, 0x116f bytes
    // storahci.sys .text:0x131e0, 0x1125 bytes
    // storahci.sys .text:0x154d0, 0x116f bytes
    //
    _n6(sdk::unknown_ptr) registry_write_worker;
    
    // [AhciSimulateThrottledEtwEvent]
    // Ldr = [storahci.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x11904, 0x116f bytes
    // storahci.sys .text:0xfe94, 0x1125 bytes
    // storahci.sys .text:0x11904, 0x116f bytes
    //
    _n7(sdk::unknown_ptr) simulate_throttled_etw_event;
    
    // [AhciAdapterEvaluateDSMMethod]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x8ccc, 0x847 bytes
    // storahci.sys .text:0x1209c, 0x116f bytes
    // storahci.sys .text:0x10654, 0x1125 bytes
    // storahci.sys .text:0x1209c, 0x116f bytes
    //
    _n8(sdk::unknown_ptr) adapter_evaluate_dsm_method;
    
    // [AhciAdapterPowerDown]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x11bc0, 0x847 bytes
    // storahci.sys .text:0x123d8, 0x116f bytes
    // storahci.sys .text:0x781c, 0x1125 bytes
    // storahci.sys .text:0x123d8, 0x116f bytes
    //
    _n9(sdk::unknown_ptr) adapter_power_down;
    
    // [AhciAdapterPowerSettingNotification]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xb324, 0x847 bytes
    // storahci.sys .text:0x1244c, 0x116f bytes
    // storahci.sys .text:0x10978, 0x1125 bytes
    // storahci.sys .text:0x1244c, 0x116f bytes
    //
    _o0(sdk::unknown_ptr) adapter_power_setting_notification;
    
    // [AhciAdapterPowerUp]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x11c30, 0x847 bytes
    // storahci.sys .text:0x1249c, 0x116f bytes
    // storahci.sys .text:0x7890, 0x1125 bytes
    // storahci.sys .text:0x1249c, 0x116f bytes
    //
    _o1(sdk::unknown_ptr) adapter_power_up;
    
    // [AhciAdapterPrepareForBusReScan]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xb664, 0x847 bytes
    // storahci.sys .text:0xfe0c, 0x116f bytes
    // storahci.sys .text:0xe3c8, 0x1125 bytes
    // storahci.sys .text:0xfe0c, 0x116f bytes
    //
    _o2(sdk::unknown_ptr) adapter_prepare_for_bus_re_scan;
    
    // [AhciAdapterRemoval]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x114e4, 0x847 bytes
    // storahci.sys .text:0xfe5c, 0x116f bytes
    // storahci.sys .text:0xe418, 0x1125 bytes
    // storahci.sys .text:0xfe5c, 0x116f bytes
    //
    _o3(sdk::unknown_ptr) adapter_removal;
    
    // [AhciAdapterReset]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1064, 0x847 bytes
    // storahci.sys .text:0x16e10, 0x116f bytes
    // storahci.sys .text:0x14d30, 0x1125 bytes
    // storahci.sys .text:0x16e10, 0x116f bytes
    //
    _o4(sdk::unknown_ptr) adapter_reset;
    
    // [AhciAdapterStop]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x11934, 0x847 bytes
    // storahci.sys .text:0x10440, 0x116f bytes
    // storahci.sys .text:0xea74, 0x1125 bytes
    // storahci.sys .text:0x10440, 0x116f bytes
    //
    _o5(sdk::unknown_ptr) adapter_stop;
    
    // [AhciAutoPartialToSlumber]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x11cb0, 0x847 bytes
    // storahci.sys .text:0x12520, 0x116f bytes
    // storahci.sys .text:0x7920, 0x1125 bytes
    // storahci.sys .text:0x12520, 0x116f bytes
    //
    _o6(sdk::unknown_ptr) auto_partial_to_slumber;
    
    // [AhciBusChangeCallback]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x140e0, 0x847 bytes
    // storahci.sys .text:0x17410, 0x116f bytes
    // storahci.sys .text:0x17030, 0x1125 bytes
    // storahci.sys .text:0x17410, 0x116f bytes
    //
    _o7(sdk::unknown_ptr) bus_change_callback;
    
    // [AhciBusChangeTimerCallback]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x14150, 0x847 bytes
    // storahci.sys .text:0x17490, 0x116f bytes
    // storahci.sys .text:0x170b0, 0x1125 bytes
    // storahci.sys .text:0x17490, 0x116f bytes
    //
    _o8(sdk::unknown_ptr) bus_change_timer_callback;
    
    // [AhciCancelF1IdleTimer]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x6d90, 0x847 bytes
    // storahci.sys .text:0x2f10, 0x116f bytes
    // storahci.sys .text:0x1f6c, 0x1125 bytes
    // storahci.sys .text:0x2f10, 0x116f bytes
    //
    _o9(sdk::unknown_ptr) cancel_f1_idle_timer;
    
    // [AhciCompleteIssuedSRBs]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x3cc0, 0x847 bytes
    // storahci.sys .text:0x4b60, 0x116f bytes
    // storahci.sys .text:0x3600, 0x1125 bytes
    // storahci.sys .text:0x4b60, 0x116f bytes
    //
    _p0(sdk::unknown_ptr) complete_issued_sr_bs;
    
    // [AhciCompleteJustSlottedRequest]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x14180, 0x847 bytes
    // storahci.sys .text:0x174c8, 0x116f bytes
    // storahci.sys .text:0x1710c, 0x1125 bytes
    // storahci.sys .text:0x174c8, 0x116f bytes
    //
    _p1(sdk::unknown_ptr) complete_just_slotted_request;
    
    // [AhciCompleteRequest]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x14304, 0x847 bytes
    // storahci.sys .text:0x5060, 0x116f bytes
    // storahci.sys .text:0x3ad0, 0x1125 bytes
    // storahci.sys .text:0x5060, 0x116f bytes
    //
    _p2(sdk::unknown_ptr) complete_request;
    
    // [AhciCOMRESET]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x134d4, 0x847 bytes
    // storahci.sys .text:0x8228, 0x116f bytes
    // storahci.sys .text:0x7d98, 0x1125 bytes
    // storahci.sys .text:0x8228, 0x116f bytes
    //
    _p3(sdk::unknown_ptr) comreset;
    
    // [AhciDeviceInitialize]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x9adc, 0x847 bytes
    // storahci.sys .text:0x12818, 0x116f bytes
    // storahci.sys .text:0x109c8, 0x1125 bytes
    // storahci.sys .text:0x12818, 0x116f bytes
    //
    _p4(sdk::unknown_ptr) device_initialize;
    
    // [AhciF1IdleTimerCallback]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x11f80, 0x847 bytes
    // storahci.sys .text:0x12c40, 0x116f bytes
    // storahci.sys .text:0x7bb0, 0x1125 bytes
    // storahci.sys .text:0x12c40, 0x116f bytes
    //
    _p5(sdk::unknown_ptr) f1_idle_timer_callback;
    
    // [AhciFormIo]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x5780, 0x847 bytes
    // storahci.sys .text:0x5d10, 0x116f bytes
    // storahci.sys .text:0x45b0, 0x1125 bytes
    // storahci.sys .text:0x5d10, 0x116f bytes
    //
    _p6(sdk::unknown_ptr) form_io;
    
    // [AhciGPLogPageIntoPrivate]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .data:0x1d000, 0x847 bytes
    // storahci.sys .data:0x2a010, 0x116f bytes
    // storahci.sys .data:0x29044, 0x1125 bytes
    // storahci.sys .data:0x2a010, 0x116f bytes
    //
    _p7(sdk::unknown_ptr) gp_log_page_into_private;
    
    // [AhciHwAdapterControl]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xaf90, 0x847 bytes
    // storahci.sys .text:0x10630, 0x116f bytes
    // storahci.sys .text:0xec60, 0x1125 bytes
    // storahci.sys .text:0x10630, 0x116f bytes
    //
    _p8(sdk::unknown_ptr) hw_adapter_control;
    
    // [AhciHwBuildIo]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x66a0, 0x847 bytes
    // storahci.sys .text:0x6300, 0x116f bytes
    // storahci.sys .text:0x4b50, 0x1125 bytes
    // storahci.sys .text:0x6300, 0x116f bytes
    //
    _p9(sdk::unknown_ptr) hw_build_io;
    
    // [AhciHwFindAdapter]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x2200, 0x847 bytes
    // storahci.sys .text:0x10a50, 0x116f bytes
    // storahci.sys .text:0xefd0, 0x1125 bytes
    // storahci.sys .text:0x10a50, 0x116f bytes
    //
    _q0(sdk::unknown_ptr) hw_find_adapter;
    
    // [AhciHwInitialize]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x9ef0, 0x847 bytes
    // storahci.sys .text:0x11130, 0x116f bytes
    // storahci.sys .text:0xf6c0, 0x1125 bytes
    // storahci.sys .text:0x11130, 0x116f bytes
    //
    _q1(sdk::unknown_ptr) hw_initialize;
    
    // [AhciHwInterrupt]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x11990, 0x847 bytes
    // storahci.sys .text:0x4400, 0x116f bytes
    // storahci.sys .text:0x2ee0, 0x1125 bytes
    // storahci.sys .text:0x4400, 0x116f bytes
    //
    _q2(sdk::unknown_ptr) hw_interrupt;
    
    // [AhciHwMSIInterrupt]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x34e0, 0x847 bytes
    // storahci.sys .text:0x43d0, 0x116f bytes
    // storahci.sys .text:0x2eb0, 0x1125 bytes
    // storahci.sys .text:0x43d0, 0x116f bytes
    //
    _q3(sdk::unknown_ptr) hw_msi_interrupt;
    
    // [AhciHwPassiveInitialize]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xb730, 0x847 bytes
    // storahci.sys .text:0x112e0, 0x116f bytes
    // storahci.sys .text:0xf870, 0x1125 bytes
    // storahci.sys .text:0x112e0, 0x116f bytes
    //
    _q4(sdk::unknown_ptr) hw_passive_initialize;
    
    // [AhciHwResetBus]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x11a90, 0x847 bytes
    // storahci.sys .text:0x11580, 0x116f bytes
    // storahci.sys .text:0xfb10, 0x1125 bytes
    // storahci.sys .text:0x11580, 0x116f bytes
    //
    _q5(sdk::unknown_ptr) hw_reset_bus;
    
    // [AhciHwStartIo]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x5d20, 0x847 bytes
    // storahci.sys .text:0x5390, 0x116f bytes
    // storahci.sys .text:0x3d20, 0x1125 bytes
    // storahci.sys .text:0x5390, 0x116f bytes
    //
    _q6(sdk::unknown_ptr) hw_start_io;
    
    // [AhciHwTracingEnabled]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xc000, 0x847 bytes
    // storahci.sys .text:0x8f10, 0x116f bytes
    // storahci.sys .text:0x6e30, 0x1125 bytes
    // storahci.sys .text:0x8f10, 0x116f bytes
    //
    _q7(sdk::unknown_ptr) hw_tracing_enabled;
    
    // [AhciHwUnitControl]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x4930, 0x847 bytes
    // storahci.sys .text:0x2300, 0x116f bytes
    // storahci.sys .text:0x1d40, 0x1125 bytes
    // storahci.sys .text:0x2300, 0x116f bytes
    //
    _q8(sdk::unknown_ptr) hw_unit_control;
    
    // [AhciInterruptHandler]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x3510, 0x847 bytes
    // storahci.sys .text:0x4520, 0x116f bytes
    // storahci.sys .text:0x3000, 0x1125 bytes
    // storahci.sys .text:0x4520, 0x116f bytes
    //
    _q9(sdk::unknown_ptr) interrupt_handler;
    
    // [AhciInterruptSpinlockAcquire]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x6b50, 0x847 bytes
    // storahci.sys .text:0x42c4, 0x116f bytes
    // storahci.sys .text:0x2d78, 0x1125 bytes
    // storahci.sys .text:0x42c4, 0x116f bytes
    //
    _r0(sdk::unknown_ptr) interrupt_spinlock_acquire;
    
    // [AhciInterruptSpinlockRelease]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x69b0, 0x847 bytes
    // storahci.sys .text:0x41bc, 0x116f bytes
    // storahci.sys .text:0x2c7c, 0x1125 bytes
    // storahci.sys .text:0x41bc, 0x116f bytes
    //
    _r1(sdk::unknown_ptr) interrupt_spinlock_release;
    
    // [AhciKickDevslpIdleTimer]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x11fec, 0x847 bytes
    // storahci.sys .text:0x12cbc, 0x116f bytes
    // storahci.sys .text:0x10dec, 0x1125 bytes
    // storahci.sys .text:0x12cbc, 0x116f bytes
    //
    _r2(sdk::unknown_ptr) kick_devslp_idle_timer;
    
    // [AhciKickDevslpIdleTimerComplete]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x120e0, 0x847 bytes
    // storahci.sys .text:0x12de0, 0x116f bytes
    // storahci.sys .text:0x6e40, 0x1125 bytes
    // storahci.sys .text:0x12de0, 0x116f bytes
    //
    _r3(sdk::unknown_ptr) kick_devslp_idle_timer_complete;
    
    // [AhciLpmSettingsModes]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xae38, 0x847 bytes
    // storahci.sys .text:0x12e1c, 0x116f bytes
    // storahci.sys .text:0x10eec, 0x1125 bytes
    // storahci.sys .text:0x12e1c, 0x116f bytes
    //
    _r4(sdk::unknown_ptr) lpm_settings_modes;
    
    // [AhciNcqErrorRecovery]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x135b8, 0x847 bytes
    // storahci.sys .text:0x8764, 0x116f bytes
    // storahci.sys .text:0x14da8, 0x1125 bytes
    // storahci.sys .text:0x8764, 0x116f bytes
    //
    _r5(sdk::unknown_ptr) ncq_error_recovery;
    
    // [AhciNonQueuedErrorRecovery]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x89c4, 0x847 bytes
    // storahci.sys .text:0x77f0, 0x116f bytes
    // storahci.sys .text:0x5e0c, 0x1125 bytes
    // storahci.sys .text:0x77f0, 0x116f bytes
    //
    _r6(sdk::unknown_ptr) non_queued_error_recovery;
    
    // [AhciPortAcpiDSMControl]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x12110, 0x847 bytes
    // storahci.sys .text:0x1322c, 0x116f bytes
    // storahci.sys .text:0x112dc, 0x1125 bytes
    // storahci.sys .text:0x1322c, 0x116f bytes
    //
    _r7(sdk::unknown_ptr) port_acpi_dsm_control;
    
    // [AhciPortAhciDisableDevslpADSE]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x12264, 0x847 bytes
    // storahci.sys .text:0x133ac, 0x116f bytes
    // storahci.sys .text:0x1143c, 0x1125 bytes
    // storahci.sys .text:0x133ac, 0x116f bytes
    //
    _r8(sdk::unknown_ptr) port_ahci_disable_devslp_adse;
    
    // [AhciPortAhciDisableDevslpICC]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x12390, 0x847 bytes
    // storahci.sys .text:0x134fc, 0x116f bytes
    // storahci.sys .text:0x7bf8, 0x1125 bytes
    // storahci.sys .text:0x134fc, 0x116f bytes
    //
    _r9(sdk::unknown_ptr) port_ahci_disable_devslp_icc;
    
    // [AhciPortAhciEnableDevslpADSE]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x12534, 0x847 bytes
    // storahci.sys .text:0x13718, 0x116f bytes
    // storahci.sys .text:0x11548, 0x1125 bytes
    // storahci.sys .text:0x13718, 0x116f bytes
    //
    _s0(sdk::unknown_ptr) port_ahci_enable_devslp_adse;
    
    // [AhciPortAhciEnableDevslpICC]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x12674, 0x847 bytes
    // storahci.sys .text:0x13874, 0x116f bytes
    // storahci.sys .text:0x11640, 0x1125 bytes
    // storahci.sys .text:0x13874, 0x116f bytes
    //
    _s1(sdk::unknown_ptr) port_ahci_enable_devslp_icc;
    
    // [AhciPortBusChangeDpcRoutine]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x14450, 0x847 bytes
    // storahci.sys .text:0x17760, 0x116f bytes
    // storahci.sys .text:0x17410, 0x1125 bytes
    // storahci.sys .text:0x17760, 0x116f bytes
    //
    _s2(sdk::unknown_ptr) port_bus_change_dpc_routine;
    
    // [AhciPortErrorRecovery]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xb6d0, 0x847 bytes
    // storahci.sys .text:0x12c0, 0x116f bytes
    // storahci.sys .text:0x68f0, 0x1125 bytes
    // storahci.sys .text:0x12c0, 0x116f bytes
    //
    _s3(sdk::unknown_ptr) port_error_recovery;
    
    // [AhciPortEvaluateSDDMethod]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xa124, 0x847 bytes
    // storahci.sys .text:0x13e30, 0x116f bytes
    // storahci.sys .text:0x11b5c, 0x1125 bytes
    // storahci.sys .text:0x13e30, 0x116f bytes
    //
    _s4(sdk::unknown_ptr) port_evaluate_sdd_method;
    
    // [AhciPortFailAllIos]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x146b8, 0x847 bytes
    // storahci.sys .text:0x1a6f8, 0x116f bytes
    // storahci.sys .text:0x1ac04, 0x1125 bytes
    // storahci.sys .text:0x1a6f8, 0x116f bytes
    //
    _s5(sdk::unknown_ptr) port_fail_all_ios;
    
    // [AhciPortGetInitCommands]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x95cc, 0x847 bytes
    // storahci.sys .text:0x13f94, 0x116f bytes
    // storahci.sys .text:0x11cc0, 0x1125 bytes
    // storahci.sys .text:0x13f94, 0x116f bytes
    //
    _s6(sdk::unknown_ptr) port_get_init_commands;
    
    // [AhciPortIdentifyDevice]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x83e0, 0x847 bytes
    // storahci.sys .text:0x14370, 0x116f bytes
    // storahci.sys .text:0x120a0, 0x1125 bytes
    // storahci.sys .text:0x14370, 0x116f bytes
    //
    _s7(sdk::unknown_ptr) port_identify_device;
    
    // [AhciPortInitialize]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x18fc, 0x847 bytes
    // storahci.sys .text:0x14670, 0x116f bytes
    // storahci.sys .text:0x123bc, 0x1125 bytes
    // storahci.sys .text:0x14670, 0x116f bytes
    //
    _s8(sdk::unknown_ptr) port_initialize;
    
    // [AhciPortIssueInitCommands]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xacc4, 0x847 bytes
    // storahci.sys .text:0x17ae4, 0x116f bytes
    // storahci.sys .text:0x1774c, 0x1125 bytes
    // storahci.sys .text:0x17ae4, 0x116f bytes
    //
    _s9(sdk::unknown_ptr) port_issue_init_commands;
    
    // [AhciPortNVCacheCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x12be0, 0x847 bytes
    // storahci.sys .text:0x149b0, 0x116f bytes
    // storahci.sys .text:0x126f0, 0x1125 bytes
    // storahci.sys .text:0x149b0, 0x116f bytes
    //
    _t0(sdk::unknown_ptr) port_nv_cache_completion;
    
    // [AhciPortPowerDown]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x12ce8, 0x847 bytes
    // storahci.sys .text:0x14ad0, 0x116f bytes
    // storahci.sys .text:0x12810, 0x1125 bytes
    // storahci.sys .text:0x14ad0, 0x116f bytes
    //
    _t1(sdk::unknown_ptr) port_power_down;
    
    // [AhciPortPowerSettingNotification]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0xb36c, 0x847 bytes
    // storahci.sys .text:0x14b7c, 0x116f bytes
    // storahci.sys .text:0x128cc, 0x1125 bytes
    // storahci.sys .text:0x14b7c, 0x116f bytes
    //
    _t2(sdk::unknown_ptr) port_power_setting_notification;
    
    // [AhciPortPowerUp]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x12d6c, 0x847 bytes
    // storahci.sys .text:0x14e98, 0x116f bytes
    // storahci.sys .text:0x12be8, 0x1125 bytes
    // storahci.sys .text:0x14e98, 0x116f bytes
    //
    _t3(sdk::unknown_ptr) port_power_up;
    
    // [AhciPortReset]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x1375c, 0x847 bytes
    // storahci.sys .text:0x17b4, 0x116f bytes
    // storahci.sys .text:0x15424, 0x1125 bytes
    // storahci.sys .text:0x17b4, 0x116f bytes
    //
    _t4(sdk::unknown_ptr) port_reset;
    
    // [AhciPortSetDevslpDetoAndMdat]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x12e88, 0x847 bytes
    // storahci.sys .text:0x1504c, 0x116f bytes
    // storahci.sys .text:0x12d9c, 0x1125 bytes
    // storahci.sys .text:0x1504c, 0x116f bytes
    //
    _t5(sdk::unknown_ptr) port_set_devslp_deto_and_mdat;
    
    // [AhciPortSetDevslpIdleTimeout]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x12f5c, 0x847 bytes
    // storahci.sys .text:0x15124, 0x116f bytes
    // storahci.sys .text:0x12e74, 0x1125 bytes
    // storahci.sys .text:0x15124, 0x116f bytes
    //
    _t6(sdk::unknown_ptr) port_set_devslp_idle_timeout;
    
    // [AhciPortSmartCompletion]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x7ec0, 0x847 bytes
    // storahci.sys .text:0x3030, 0x116f bytes
    // storahci.sys .text:0x2010, 0x1125 bytes
    // storahci.sys .text:0x3030, 0x116f bytes
    //
    _t7(sdk::unknown_ptr) port_smart_completion;
    
    // [AhciPortSrbCompletionDpcRoutine]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x4740, 0x847 bytes
    // storahci.sys .text:0x3ec0, 0x116f bytes
    // storahci.sys .text:0x2a30, 0x1125 bytes
    // storahci.sys .text:0x3ec0, 0x116f bytes
    //
    _t8(sdk::unknown_ptr) port_srb_completion_dpc_routine;
    
    // [AhciPortStop]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x13084, 0x847 bytes
    // storahci.sys .text:0x15258, 0x116f bytes
    // storahci.sys .text:0x12f64, 0x1125 bytes
    // storahci.sys .text:0x15258, 0x116f bytes
    //
    _t9(sdk::unknown_ptr) port_stop;
    
    // [AhciProcessIo]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x54e0, 0x847 bytes
    // storahci.sys .text:0x5970, 0x116f bytes
    // storahci.sys .text:0x4290, 0x1125 bytes
    // storahci.sys .text:0x5970, 0x116f bytes
    //
    _u0(sdk::unknown_ptr) process_io;
    
    // [AhciPublicGPLogTableAddresses]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .data:0x1d010, 0x847 bytes
    // storahci.sys .rdata:0x258a0, 0x116f bytes
    // storahci.sys .rdata:0x25100, 0x1125 bytes
    // storahci.sys .rdata:0x258a0, 0x116f bytes
    //
    _u1(sdk::unknown_ptr) public_gp_log_table_addresses;
    
    // [AhciSetF1IdleTimer]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x6d40, 0x847 bytes
    // storahci.sys .text:0x2f50, 0x116f bytes
    // storahci.sys .text:0x1f04, 0x1125 bytes
    // storahci.sys .text:0x2f50, 0x116f bytes
    //
    _u2(sdk::unknown_ptr) set_f1_idle_timer;
    
    // [AhciSetSenseData]
    // Ldr = [storahci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // storahci.sys .text:0x14be0, 0x847 bytes
    // storahci.sys .text:0x1abe0, 0x116f bytes
    // storahci.sys .text:0x1b0c4, 0x1125 bytes
    // storahci.sys .text:0x1abe0, 0x116f bytes
    //
    _u3(sdk::unknown_ptr) set_sense_data;
};
#include "magic/api.end.hpp"
