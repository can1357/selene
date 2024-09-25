#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::input_trace_logging::input_config
{
    // [DisplayPath@InputConfig@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc7b0c, 0x243e0 bytes
    // win32kbase.sys .text:0xd9a20, 0x27ef0 bytes
    // win32kbase.sys .text:0xc075c, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) display_path;
};
#include "magic/api.end.hpp"
