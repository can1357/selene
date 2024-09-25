#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_mouse_processor::c_wheel_event
{
    // [GetButtonFlags@CWheelEvent@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xdac80, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) get_button_flags;
    
    // [CreateInputMessage@CWheelEvent@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c8bc0, 0x243e0 bytes
    // win32kbase.sys .text:0x211ec0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c69a0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) create_input_message;
    
    // [GetHitTestAttributes@CWheelEvent@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c9870, 0x243e0 bytes
    // win32kbase.sys .text:0x2129e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c7650, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) get_hit_test_attributes;
    
    // [GetWheelMessage@CWheelEvent@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c9ad8, 0x243e0 bytes
    // win32kbase.sys .text:0x212c48, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c78b8, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) get_wheel_message;
    
    // [WriteChunkMouseInputData@CWheelEvent@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9cf0, 0x243e0 bytes
    // win32kbase.sys .text:0xdad40, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8690, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) write_chunk_mouse_input_data;
};
#include "magic/api.end.hpp"
