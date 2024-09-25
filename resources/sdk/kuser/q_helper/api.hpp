#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::q_helper
{
    // [SetPtiMouse@QHelper]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x89d8c, 0x243e0 bytes
    // win32kbase.sys .text:0x64d60, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) set_pti_mouse;
    
    // [GetInputDestFromForegroundCapture@QHelper]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8818c, 0x243e0 bytes
    // win32kbase.sys .text:0xcc20, 0x27ef0 bytes
    // win32kbase.sys .text:0xa9ac8, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) get_input_dest_from_foreground_capture;
    
    // [GetInputDestFromForegroundFocus@QHelper]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c98cc, 0x243e0 bytes
    // win32kbase.sys .text:0x212a3c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c76ac, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) get_input_dest_from_foreground_focus;
    
    // [GetInputMessageSource@QHelper]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8a4e8, 0x243e0 bytes
    // win32kbase.sys .text:0xe674, 0x27ef0 bytes
    // win32kbase.sys .text:0x65a00, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) get_input_message_source;
    
    // [GetPendingMouseMovePoint@QHelper]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x87d80, 0x243e0 bytes
    // win32kbase.sys .text:0xdf448, 0x27ef0 bytes
    // win32kbase.sys .text:0xb7eb8, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) get_pending_mouse_move_point;
    
    // [HasPendingMouseMove@QHelper]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8ade4, 0x243e0 bytes
    // win32kbase.sys .text:0xf080, 0x27ef0 bytes
    // win32kbase.sys .text:0x5dfb0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) has_pending_mouse_move;
    
    // [SetMouseMovePoint@QHelper]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x89bfc, 0x243e0 bytes
    // win32kbase.sys .text:0x149cc, 0x27ef0 bytes
    // win32kbase.sys .text:0x5f91c, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_mouse_move_point;
};
#include "magic/api.end.hpp"
