#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_mouse_processor::c_move_event
{
    // [GetButtonFlags@CMoveEvent@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) get_button_flags;
    
    // [CreateInputMessage@CMoveEvent@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c8b50, 0x243e0 bytes
    // win32kbase.sys .text:0x211d60, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c6930, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) create_input_message;
    
    // [GetHitTestAttributes@CMoveEvent@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) get_hit_test_attributes;
    
    // [WriteChunkMouseInputData@CMoveEvent@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9cd0, 0x243e0 bytes
    // win32kbase.sys .text:0xdad20, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8670, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) write_chunk_mouse_input_data;
};
#include "magic/api.end.hpp"
