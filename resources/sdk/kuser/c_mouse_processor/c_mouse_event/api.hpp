#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_mouse_processor::c_mouse_event
{
    // [GetButtonFlags@CMouseEvent@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xdac70, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) get_button_flags;
    
    // [CreateInputMessage@CMouseEvent@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) create_input_message;
    
    // [GetExtraInfoForHook@CMouseEvent@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x88a94, 0x243e0 bytes
    // win32kbase.sys .text:0xd604, 0x27ef0 bytes
    // win32kbase.sys .text:0x6852c, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) get_extra_info_for_hook;
    
    // [GetHitTestAttributes@CMouseEvent@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) get_hit_test_attributes;
    
    // [GetHitTestContext@CMouseEvent@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x71034, 0x243e0 bytes
    // win32kbase.sys .text:0x22818, 0x27ef0 bytes
    // win32kbase.sys .text:0x10c10, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) get_hit_test_context;
    
    // [UsingInjectorUIPI@CMouseEvent@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x89224, 0x243e0 bytes
    // win32kbase.sys .text:0xdf10, 0x27ef0 bytes
    // win32kbase.sys .text:0x5f81c, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) using_injector_uipi;
    
    // [WriteChunkMouseInputData@CMouseEvent@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9c90, 0x243e0 bytes
    // win32kbase.sys .text:0xdace0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8630, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) write_chunk_mouse_input_data;
};
#include "magic/api.end.hpp"
