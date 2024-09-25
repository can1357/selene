#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::input_trace_logging::keyboard
{
    // [ProcessInput@Keyboard@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1abc98, 0x243e0 bytes
    // win32kbase.sys .text:0x1aa3b8, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) process_input;
    
    // [DropInput@Keyboard@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ab5d8, 0x243e0 bytes
    // win32kbase.sys .text:0x1f2890, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a9cf4, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) drop_input;
};
#include "magic/api.end.hpp"
