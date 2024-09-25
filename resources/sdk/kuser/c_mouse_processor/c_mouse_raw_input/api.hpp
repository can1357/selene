#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_mouse_processor::c_mouse_raw_input
{
    // [Initialize@CMouseRawInput@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6bca0, 0x243e0 bytes
    // win32kbase.sys .text:0x2230c, 0x27ef0 bytes
    // win32kbase.sys .text:0x644b4, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) initialize;
    
    // [PostRawMouse@CMouseRawInput@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x88da8, 0x243e0 bytes
    // win32kbase.sys .text:0xd9b4, 0x27ef0 bytes
    // win32kbase.sys .text:0x5e16c, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) post_raw_mouse;
};
#include "magic/api.end.hpp"
