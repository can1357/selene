#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::iv_root_deliver::pointer
{
    // [SendPTPInertiaInput@Pointer@IVRootDeliver]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c55c8, 0x243e0 bytes
    // win32kbase.sys .text:0x20cf8c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c33a8, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) send_ptp_inertia_input;
    
    // [SendTouchInput@Pointer@IVRootDeliver]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c614c, 0x243e0 bytes
    // win32kbase.sys .text:0x20dd3c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c3f2c, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) send_touch_input;
};
#include "magic/api.end.hpp"
