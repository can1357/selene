#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_hwnd_bitmap_prop
{
    // [Delete@CHwndBitmapProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x2ddd90, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) _delete;
    
    // [GetAtom@CHwndBitmapProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x119990, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) get_atom;
    
    // [Initialize@CHwndBitmapProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x2dddd0, 0x1659e bytes
    //
    _m2(sdk::unknown_ptr) initialize;
    
    // [s_atom@CHwndBitmapProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .data:0x338c18, 0x1659e bytes
    //
    _m3(sdk::unknown_ptr) s_atom;
};
#include "magic/api.end.hpp"
