#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_color_brush_marshaler
{
    // [GetType@CColorBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f560, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CColorBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe8600, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [TryGetBrushSourceNoRef@CColorBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9e70, 0x243e0 bytes
    // win32kbase.sys .text:0xdaef0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8810, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) try_get_brush_source_no_ref;
    
    // [EmitUpdateCommands@CColorBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xea530, 0x1eb80 bytes
    // win32kbase.sys .text:0x79780, 0x243e0 bytes
    // win32kbase.sys .text:0xc0e00, 0x27ef0 bytes
    // win32kbase.sys .text:0xa1e0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [SetBufferProperty@CColorBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xea570, 0x1eb80 bytes
    // win32kbase.sys .text:0xaf150, 0x243e0 bytes
    // win32kbase.sys .text:0xc6140, 0x27ef0 bytes
    // win32kbase.sys .text:0xa5490, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_buffer_property;
    
    // [SetRemarshalingFlags@CColorBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f830, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9eb0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaf40, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8850, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
