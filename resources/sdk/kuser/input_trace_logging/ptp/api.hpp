#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::input_trace_logging::ptp
{
    // [DownlevelInput@PTP@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1af7c0, 0x243e0 bytes
    // win32kbase.sys .text:0x1f5fa8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ad570, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) downlevel_input;
    
    // [EngineInput@PTP@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1afa90, 0x243e0 bytes
    // win32kbase.sys .text:0xf6fba, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ad840, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) engine_input;
    
    // [GestureOutput@PTP@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1afb8c, 0x243e0 bytes
    // win32kbase.sys .text:0x1f6414, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ad93c, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) gesture_output;
    
    // [MouseOutput@PTP@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1affc4, 0x243e0 bytes
    // win32kbase.sys .text:0xf7122, 0x27ef0 bytes
    // win32kbase.sys .text:0x1add74, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) mouse_output;
};
#include "magic/api.end.hpp"
