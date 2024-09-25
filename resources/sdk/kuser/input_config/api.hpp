#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::input_config
{
    // [Broadcast@InputConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1daa4, 0x243e0 bytes
    // win32kbase.sys .text:0x64ef8, 0x27ef0 bytes
    // win32kbase.sys .text:0x56cb0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) broadcast;
    
    // [GetInputSpace@InputConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1bcc8c, 0x243e0 bytes
    // win32kbase.sys .text:0x1fbdc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1baa6c, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) get_input_space;
    
    // [GetPointerDeviceConfig@InputConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1bcd48, 0x243e0 bytes
    // win32kbase.sys .text:0x1fbe84, 0x27ef0 bytes
    // win32kbase.sys .text:0x1bab28, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) get_pointer_device_config;
    
    // [RegionFromPoint@InputConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1eea0, 0x243e0 bytes
    // win32kbase.sys .text:0x24194, 0x27ef0 bytes
    // win32kbase.sys .text:0x59318, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) region_from_point;
    
    // [TraceCurrentConfig@InputConfig]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1de28, 0x243e0 bytes
    // win32kbase.sys .text:0x64904, 0x27ef0 bytes
    // win32kbase.sys .text:0x57034, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) trace_current_config;
};
#include "magic/api.end.hpp"
