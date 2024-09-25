#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::input_trace_logging::telemetry_debug::pointer
{
    // [GenerateFrameMessages@Pointer@TelemetryDebug@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1ddd8c, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) generate_frame_messages;
    
    // [ProcessInput@Pointer@TelemetryDebug@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1e8ea8, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) process_input;
    
    // [RetrieveMessage@Pointer@TelemetryDebug@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x15b73a, 0x1659e bytes
    //
    _m2(sdk::unknown_ptr) retrieve_message;
    
    // [SendFrameToUserMode@Pointer@TelemetryDebug@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1eb4c8, 0x27ef0 bytes
    //
    _m3(sdk::unknown_ptr) send_frame_to_user_mode;
};
#include "magic/api.end.hpp"
