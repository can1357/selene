#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::grouped_process_foreground_boost
{
    // [ApplyBoost@GroupedProcessForegroundBoost]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x6e7b0, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) apply_boost;
    
    // [ApplyDeBoost@GroupedProcessForegroundBoost]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x6e790, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) apply_de_boost;
    
    // [Update@GroupedProcessForegroundBoost]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xe74dc, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) update;
};
#include "magic/api.end.hpp"
