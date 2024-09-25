#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_content_rects
{
    // [Get@CContentRects]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x15e8a0, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) get;
    
    // [GetContentRects@CContentRects]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x15ea10, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) get_content_rects;
    
    // [GetCount@CContentRects]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x15ead0, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) get_count;
    
    // [GetInstance@CContentRects]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xd9580, 0x27ef0 bytes
    //
    _m3(sdk::unknown_ptr) get_instance;
    
    // [Set@CContentRects]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x15eb64, 0x27ef0 bytes
    //
    _m4(sdk::unknown_ptr) set;
    
    // [SetContentRects@CContentRects]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x15ec28, 0x27ef0 bytes
    //
    _m5(sdk::unknown_ptr) set_content_rects;
};
#include "magic/api.end.hpp"
