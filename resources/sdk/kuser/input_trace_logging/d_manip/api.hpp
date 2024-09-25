#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::input_trace_logging::d_manip
{
    // [HandleDelegatedInput@DManip@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e1008, 0x1596d bytes
    // win32kfull.sys .text:0x15a352, 0x1659e bytes
    // win32kfull.sys .text:0x1e0e74, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) handle_delegated_input;
    
    // [ReassignMessage@DManip@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e1660, 0x1596d bytes
    // win32kfull.sys .text:0x1de824, 0x1659e bytes
    // win32kfull.sys .text:0x1e14c0, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) reassign_message;
};
#include "magic/api.end.hpp"
