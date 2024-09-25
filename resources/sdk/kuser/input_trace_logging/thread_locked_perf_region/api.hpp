#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::input_trace_logging::thread_locked_perf_region
{
    // [Cleanup@ThreadLockedPerfRegion@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d53cc, 0x1596d bytes
    // win32kfull.sys .text:0x1d2f7c, 0x1659e bytes
    // win32kfull.sys .text:0x1d526c, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) cleanup;
    
    // [s_pLookaside@ThreadLockedPerfRegion@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x25a798, 0x243e0 bytes
    // win32kbase.sys .data:0x2af5b0, 0x27ef0 bytes
    // win32kbase.sys .data:0x2577b8, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) s_p_lookaside;
};
#include "magic/api.end.hpp"
