#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::iv_root_deliver::mouse::detail
{
    // [SendMouseInputToContainer@Detail@Mouse@IVRootDeliver]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c52dc, 0x243e0 bytes
    // win32kbase.sys .text:0x20cc34, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c30bc, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) send_mouse_input_to_container;
    
    // [SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c6554, 0x243e0 bytes
    // win32kbase.sys .text:0x20e1a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c4334, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) serialize_container_mouse_input;
};
#include "magic/api.end.hpp"
