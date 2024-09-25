#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_radial_gradient_brush_marshaler
{
    // [EmitUpdateCommands@CRadialGradientBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f0030, 0x243e0 bytes
    // win32kbase.sys .text:0x235600, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eddf0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_commands;
    
    // [Initialize@CRadialGradientBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f00f0, 0x243e0 bytes
    // win32kbase.sys .text:0x2356c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1edeb0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) initialize;
    
    // [SetBufferProperty@CRadialGradientBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f0110, 0x243e0 bytes
    // win32kbase.sys .text:0x2356e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eded0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) set_buffer_property;
    
    // [SetRemarshalingFlags@CRadialGradientBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f01a0, 0x243e0 bytes
    // win32kbase.sys .text:0x235770, 0x27ef0 bytes
    // win32kbase.sys .text:0x1edf60, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
