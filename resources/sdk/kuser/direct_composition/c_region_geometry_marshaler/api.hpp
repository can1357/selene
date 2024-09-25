#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_region_geometry_marshaler
{
    // [ReleaseAllReferences@CRegionGeometryMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xc8230, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) release_all_references;
    
    // [EmitSetRectanglesCommand@CRegionGeometryMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1e2ea0, 0x243e0 bytes
    // win32kbase.sys .text:0x1e0c60, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_set_rectangles_command;
    
    // [EmitUpdateCommands@CRegionGeometryMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e4860, 0x243e0 bytes
    // win32kbase.sys .text:0x23cd00, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e2620, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_update_commands;
    
    // [SetRemarshalingFlags@CRegionGeometryMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e8a00, 0x243e0 bytes
    // win32kbase.sys .text:0x240780, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e67c0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
