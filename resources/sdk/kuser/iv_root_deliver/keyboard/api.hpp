#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::iv_root_deliver::keyboard
{
    // [VirtualizeKeyboardInput@Keyboard@IVRootDeliver]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1c69e0, 0x243e0 bytes
    // win32kbase.sys .text:0x1c47c0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) virtualize_keyboard_input;
    
    // [VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c6914, 0x243e0 bytes
    // win32kbase.sys .text:0x20e650, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c46f4, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) virtualize_full_keyboard_states;
};
#include "magic/api.end.hpp"
