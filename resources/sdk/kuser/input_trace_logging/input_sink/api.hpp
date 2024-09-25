#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::input_trace_logging::input_sink
{
    // [Duplicate@InputSink@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x7ea08, 0x243e0 bytes
    // win32kbase.sys .text:0xa9f8, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) duplicate;
    
    // [AddMapping@InputSink@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x203e2c, 0x243e0 bytes
    // win32kbase.sys .text:0x2549d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x201bfc, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) add_mapping;
    
    // [MapPointsByVisualIdentifier@InputSink@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x12bff4, 0x243e0 bytes
    // win32kbase.sys .text:0x15f6c4, 0x27ef0 bytes
    // win32kbase.sys .text:0x129874, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) map_points_by_visual_identifier;
    
    // [MapVisualRelativePoint@InputSink@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x12c4d8, 0x243e0 bytes
    // win32kbase.sys .text:0x15fba8, 0x27ef0 bytes
    // win32kbase.sys .text:0x129d58, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) map_visual_relative_point;
    
    // [RemoveMapping@InputSink@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x204294, 0x243e0 bytes
    // win32kbase.sys .text:0x254e3c, 0x27ef0 bytes
    // win32kbase.sys .text:0x202064, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) remove_mapping;
};
#include "magic/api.end.hpp"
