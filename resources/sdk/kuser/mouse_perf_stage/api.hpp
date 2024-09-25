#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::mouse_perf_stage
{
    // [UpdatePerfData@MousePerfStage]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cca58, 0x243e0 bytes
    // win32kbase.sys .text:0xf8324, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ca838, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) update_perf_data;
};
#include "magic/api.end.hpp"
