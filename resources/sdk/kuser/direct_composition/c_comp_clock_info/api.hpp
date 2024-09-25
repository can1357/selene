#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_comp_clock_info
{
    // [Create@CCompClockInfo@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xe92b4, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [Initialize@CCompClockInfo@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xe940c, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) initialize;
    
    // [Release@CCompClockInfo@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x229284, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) release;
    
    // [WaitForTick@CCompClockInfo@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x2292b0, 0x27ef0 bytes
    //
    _m3(sdk::unknown_ptr) wait_for_tick;
};
#include "magic/api.end.hpp"
