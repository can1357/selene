#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_window_backdrop_brush_marshaler
{
    // [EmitUpdateCommands@CWindowBackdropBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9ae0, 0x243e0 bytes
    // win32kbase.sys .text:0xdab10, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8480, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_commands;
    
    // [SetRemarshalingFlags@CWindowBackdropBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9ae0, 0x243e0 bytes
    // win32kbase.sys .text:0xdab10, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8480, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) set_remarshaling_flags;
    
    // [TryGetBrushSourceNoRef@CWindowBackdropBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9e70, 0x243e0 bytes
    // win32kbase.sys .text:0xdaef0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8810, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) try_get_brush_source_no_ref;
};
#include "magic/api.end.hpp"
