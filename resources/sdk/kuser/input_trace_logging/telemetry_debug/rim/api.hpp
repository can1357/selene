#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::input_trace_logging::telemetry_debug::rim
{
    // [QueueFrame@RIM@TelemetryDebug@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1bfdf4, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) queue_frame;
    
    // [ReadComplete@RIM@TelemetryDebug@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x3f14, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) read_complete;
    
    // [StartFrame@RIM@TelemetryDebug@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1bc728, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) start_frame;
};
#include "magic/api.end.hpp"
