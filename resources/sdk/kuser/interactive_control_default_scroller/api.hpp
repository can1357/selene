#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::interactive_control_default_scroller
{
    // [UpdateWindow@InteractiveControlDefaultScroller]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x241c0c, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) update_window;
    
    // [GenerateMessages@InteractiveControlDefaultScroller]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2412a4, 0x13864 bytes
    // win32kfull.sys .text:0x259968, 0x1596d bytes
    // win32kfull.sys .text:0x258b84, 0x1659e bytes
    // win32kfull.sys .text:0x259878, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) generate_messages;
    
    // [GenerateWheelDelta@InteractiveControlDefaultScroller]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2414d8, 0x13864 bytes
    // win32kfull.sys .text:0x259b38, 0x1596d bytes
    // win32kfull.sys .text:0x258db4, 0x1659e bytes
    // win32kfull.sys .text:0x259a48, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) generate_wheel_delta;
    
    // [GenerateWheelMessage@InteractiveControlDefaultScroller]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2415a8, 0x13864 bytes
    // win32kfull.sys .text:0x259c08, 0x1596d bytes
    // win32kfull.sys .text:0x258e84, 0x1659e bytes
    // win32kfull.sys .text:0x259b18, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) generate_wheel_message;
    
    // [Reset@InteractiveControlDefaultScroller]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x24179c, 0x13864 bytes
    // win32kfull.sys .text:0x259e38, 0x1596d bytes
    // win32kfull.sys .text:0x25909c, 0x1659e bytes
    // win32kfull.sys .text:0x259d48, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) reset;
    
    // [s_ballistics@InteractiveControlDefaultScroller]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x334680, 0x13864 bytes
    // win32kfull.sys .data:0x341900, 0x1596d bytes
    // win32kfull.sys .data:0x33ec90, 0x1659e bytes
    // win32kfull.sys .data:0x3418c0, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) s_ballistics;
    
    // [SendZoomHotkey@InteractiveControlDefaultScroller]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2418f0, 0x13864 bytes
    // win32kfull.sys .text:0x259f90, 0x1596d bytes
    // win32kfull.sys .text:0x2591f0, 0x1659e bytes
    // win32kfull.sys .text:0x259ea0, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) send_zoom_hotkey;
    
    // [SendZoomModifiers@InteractiveControlDefaultScroller]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2419a4, 0x13864 bytes
    // win32kfull.sys .text:0x25a068, 0x1596d bytes
    // win32kfull.sys .text:0x2592c8, 0x1659e bytes
    // win32kfull.sys .text:0x259f78, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) send_zoom_modifiers;
    
    // [SetBallisticsLevel@InteractiveControlDefaultScroller]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x241a9c, 0x13864 bytes
    // win32kfull.sys .text:0x25a1b8, 0x1596d bytes
    // win32kfull.sys .text:0x259418, 0x1659e bytes
    // win32kfull.sys .text:0x25a0c8, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) set_ballistics_level;
    
    // [UpdateBallistics@InteractiveControlDefaultScroller]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x241b0c, 0x13864 bytes
    // win32kfull.sys .text:0x25a22c, 0x1596d bytes
    // win32kfull.sys .text:0x259490, 0x1659e bytes
    // win32kfull.sys .text:0x25a13c, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) update_ballistics;
    
    // [UpdateTime@InteractiveControlDefaultScroller]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x241ba8, 0x13864 bytes
    // win32kfull.sys .text:0x25a2d4, 0x1596d bytes
    // win32kfull.sys .text:0x259538, 0x1659e bytes
    // win32kfull.sys .text:0x25a1e4, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) update_time;
};
#include "magic/api.end.hpp"
