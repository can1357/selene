#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_geometry_marshaler
{
    // [EmitUpdateCommands@CGeometryMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x78d70, 0x243e0 bytes
    // win32kbase.sys .text:0xb8e70, 0x27ef0 bytes
    // win32kbase.sys .text:0x70f0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_commands;
    
    // [Initialize@CGeometryMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbb820, 0x243e0 bytes
    // win32kbase.sys .text:0xce900, 0x27ef0 bytes
    // win32kbase.sys .text:0xb5650, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) initialize;
    
    // [ReleaseAllReferences@CGeometryMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb6320, 0x243e0 bytes
    // win32kbase.sys .text:0xc8270, 0x27ef0 bytes
    // win32kbase.sys .text:0xafc60, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) release_all_references;
    
    // [SetFloatProperty@CGeometryMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f1a40, 0x243e0 bytes
    // win32kbase.sys .text:0x2370d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ef800, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_float_property;
    
    // [SetReferenceProperty@CGeometryMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb2a00, 0x243e0 bytes
    // win32kbase.sys .text:0x91e0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa8ff0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CGeometryMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f1a90, 0x243e0 bytes
    // win32kbase.sys .text:0x237130, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ef850, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
