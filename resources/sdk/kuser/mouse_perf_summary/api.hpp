#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::mouse_perf_summary
{
    // [LogMouseLatencyEvents@MousePerfSummary]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1e288, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) log_mouse_latency_events;
    
    // [SampleRandomPickEnd@MousePerfSummary]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x6b9fc, 0x243e0 bytes
    // win32kbase.sys .text:0x64410, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) sample_random_pick_end;
    
    // [CalculateLatencyInMicroseconds@MousePerfSummary]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6b934, 0x243e0 bytes
    // win32kbase.sys .text:0x215b8, 0x27ef0 bytes
    // win32kbase.sys .text:0x64348, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) calculate_latency_in_microseconds;
    
    // [CollectMousePacketPerfTelemetry@MousePerfSummary]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6b82c, 0x243e0 bytes
    // win32kbase.sys .text:0x214b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x64240, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) collect_mouse_packet_perf_telemetry;
    
    // [CollectMousePerfTelemetry@MousePerfSummary]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6b718, 0x243e0 bytes
    // win32kbase.sys .text:0x213a4, 0x27ef0 bytes
    // win32kbase.sys .text:0x6412c, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) collect_mouse_perf_telemetry;
    
    // [??0MousePerfSummary@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x26c2c, 0x243e0 bytes
    // win32kbase.sys .text:0x887fc, 0x27ef0 bytes
    // win32kbase.sys .text:0x7984c, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) construct_instance;
    
    // [Reset@MousePerfSummary]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cc2d4, 0x243e0 bytes
    // win32kbase.sys .text:0x216ce4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ca0b4, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) reset;
    
    // [SampleRandomPickStart@MousePerfSummary]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6b960, 0x243e0 bytes
    // win32kbase.sys .text:0x215e4, 0x27ef0 bytes
    // win32kbase.sys .text:0x64374, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) sample_random_pick_start;
    
    // [SendMouseLatencyTelemetryRandomPick@MousePerfSummary]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cc408, 0x243e0 bytes
    // win32kbase.sys .text:0xf7d10, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ca1e8, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) send_mouse_latency_telemetry_random_pick;
    
    // [SendMousePerfSummaryTelemetry@MousePerfSummary]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cc5f0, 0x243e0 bytes
    // win32kbase.sys .text:0xf7ebc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ca3d0, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) send_mouse_perf_summary_telemetry;
};
#include "magic/api.end.hpp"
