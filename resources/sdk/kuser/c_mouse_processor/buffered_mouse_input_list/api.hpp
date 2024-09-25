#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_mouse_processor::buffered_mouse_input_list
{
    // [AddInputToList@BufferedMouseInputList@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c8418, 0x243e0 bytes
    // win32kbase.sys .text:0x211594, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c61f8, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) add_input_to_list;
    
    // [DropAllMouseInput@BufferedMouseInputList@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc56ac, 0x243e0 bytes
    // win32kbase.sys .text:0xd8b24, 0x27ef0 bytes
    // win32kbase.sys .text:0xbe69c, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) drop_all_mouse_input;
    
    // [ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1cb41c, 0x243e0 bytes
    // win32kbase.sys .text:0x214878, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c91fc, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) resolve_id_to_message;
};
#include "magic/api.end.hpp"
