#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::iv_root_deliver::mouse
{
    // [SendMouseInput@Mouse@IVRootDeliver]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c5134, 0x243e0 bytes
    // win32kbase.sys .text:0x20cb24, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c2f14, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) send_mouse_input;
};
#include "magic/api.end.hpp"
