#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_accessibility_timer
{
    // [ExecuteTimer@CAccessibilityTimer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b2270, 0x243e0 bytes
    // win32kbase.sys .text:0x1f8be0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b0020, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) execute_timer;
    
    // [ForwardInputToISMTimers@CAccessibilityTimer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b2334, 0x243e0 bytes
    // win32kbase.sys .text:0x1f8ca4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b00e4, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) forward_input_to_ism_timers;
    
    // [GetTimerId@CAccessibilityTimer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b237c, 0x243e0 bytes
    // win32kbase.sys .text:0x1f8cec, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b012c, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) get_timer_id;
    
    // [KillTimer@CAccessibilityTimer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b2430, 0x243e0 bytes
    // win32kbase.sys .text:0x1f8da0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b01e0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) kill_timer;
    
    // [SetTimer@CAccessibilityTimer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b2480, 0x243e0 bytes
    // win32kbase.sys .text:0x1f8df0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b0230, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_timer;
    
    // [_timersState@CAccessibilityTimer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x262498, 0x243e0 bytes
    // win32kbase.sys .data:0x2b94c0, 0x27ef0 bytes
    // win32kbase.sys .data:0x25f4d8, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) timers_state;
};
#include "magic/api.end.hpp"
