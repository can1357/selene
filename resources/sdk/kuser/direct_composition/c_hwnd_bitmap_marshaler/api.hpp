#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_hwnd_bitmap_marshaler
{
    // [GetType@CHwndBitmapMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f640, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CHwndBitmapMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe8730, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitUpdateCommands@CHwndBitmapMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xee430, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f2340, 0x243e0 bytes
    // win32kbase.sys .text:0x1f0100, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_update_commands;
    
    // [SetIntegerProperty@CHwndBitmapMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xee4a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f23b0, 0x243e0 bytes
    // win32kbase.sys .text:0x1f0170, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_integer_property;
    
    // [SetRemarshalingFlags@CHwndBitmapMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xee4d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f23f0, 0x243e0 bytes
    // win32kbase.sys .text:0x1f01b0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
