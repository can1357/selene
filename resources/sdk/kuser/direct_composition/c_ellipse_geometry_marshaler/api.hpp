#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_ellipse_geometry_marshaler
{
    // [EmitUpdateCommands@CEllipseGeometryMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f1bb0, 0x243e0 bytes
    // win32kbase.sys .text:0x237250, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ef970, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_commands;
    
    // [SetBufferProperty@CEllipseGeometryMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f1c40, 0x243e0 bytes
    // win32kbase.sys .text:0x2372e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1efa00, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) set_buffer_property;
    
    // [SetRemarshalingFlags@CEllipseGeometryMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f1cb0, 0x243e0 bytes
    // win32kbase.sys .text:0x237350, 0x27ef0 bytes
    // win32kbase.sys .text:0x1efa70, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
