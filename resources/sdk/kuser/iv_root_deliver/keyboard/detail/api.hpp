#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::iv_root_deliver::keyboard::detail
{
    // [BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c4a34, 0x243e0 bytes
    // win32kbase.sys .text:0x20c3e4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c2814, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) broadcast_async_key_state;
    
    // [SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c4d40, 0x243e0 bytes
    // win32kbase.sys .text:0x20c6f4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c2b20, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) send_full_keyboard_states;
    
    // [SendKeyboardInput@Detail@Keyboard@IVRootDeliver]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c4eb4, 0x243e0 bytes
    // win32kbase.sys .text:0x20c848, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c2c94, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) send_keyboard_input;
    
    // [SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c66ac, 0x243e0 bytes
    // win32kbase.sys .text:0x20e39c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c448c, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) serialize_full_keyboard_states_for_container;
    
    // [SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c67d4, 0x243e0 bytes
    // win32kbase.sys .text:0x20e4bc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c45b4, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) serialize_keyboard_input_for_container;
};
#include "magic/api.end.hpp"
