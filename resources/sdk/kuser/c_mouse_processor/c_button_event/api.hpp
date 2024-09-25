#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_mouse_processor::c_button_event
{
    // [GetButtonFlags@CButtonEvent@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xdac50, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) get_button_flags;
    
    // [CreateInputMessage@CButtonEvent@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c8ae0, 0x243e0 bytes
    // win32kbase.sys .text:0x211c00, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c68c0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) create_input_message;
    
    // [_dependentInfo@CButtonEvent@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x217230, 0x243e0 bytes
    // win32kbase.sys .rdata:0x266490, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x2141e0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) dependent_info;
    
    // [GetButtonMessage@CButtonEvent@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8ac8c, 0x243e0 bytes
    // win32kbase.sys .text:0xef84, 0x27ef0 bytes
    // win32kbase.sys .text:0x67964, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) get_button_message;
    
    // [GetHitTestAttributes@CButtonEvent@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb7ff0, 0x243e0 bytes
    // win32kbase.sys .text:0xcd0c0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb1f60, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) get_hit_test_attributes;
    
    // [GetMessageWParamInfo@CButtonEvent@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8ac64, 0x243e0 bytes
    // win32kbase.sys .text:0xef5c, 0x27ef0 bytes
    // win32kbase.sys .text:0x6793c, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) get_message_w_param_info;
    
    // [GetVKey@CButtonEvent@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x88ffc, 0x243e0 bytes
    // win32kbase.sys .text:0xdc98, 0x27ef0 bytes
    // win32kbase.sys .text:0x6a624, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) get_v_key;
    
    // [WriteChunkMouseInputData@CButtonEvent@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9c50, 0x243e0 bytes
    // win32kbase.sys .text:0xdaca0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc85f0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) write_chunk_mouse_input_data;
};
#include "magic/api.end.hpp"
