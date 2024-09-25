#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_mouse_processor::c_mouse_queue
{
    // [Dequeue@CMouseQueue@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6b2d0, 0x243e0 bytes
    // win32kbase.sys .text:0x1ed54, 0x27ef0 bytes
    // win32kbase.sys .text:0x63ce4, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) dequeue;
    
    // [GetItemForWrite@CMouseQueue@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6aba4, 0x243e0 bytes
    // win32kbase.sys .text:0x21ff0, 0x27ef0 bytes
    // win32kbase.sys .text:0x63600, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) get_item_for_write;
};
#include "magic/api.end.hpp"
