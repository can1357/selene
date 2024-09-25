#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::input_trace_logging::perf
{
    // [s_userCritLoggingEnabled@Perf@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x25a790, 0x243e0 bytes
    // win32kbase.sys .data:0x2af5a8, 0x27ef0 bytes
    // win32kbase.sys .data:0x2577b0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) s_user_crit_logging_enabled;
};
#include "magic/api.end.hpp"
