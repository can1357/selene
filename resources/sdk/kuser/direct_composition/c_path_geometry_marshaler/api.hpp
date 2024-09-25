#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_path_geometry_marshaler
{
    // [EmitUpdateCommands@CPathGeometryMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f1ef0, 0x243e0 bytes
    // win32kbase.sys .text:0x237590, 0x27ef0 bytes
    // win32kbase.sys .text:0x1efcb0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CPathGeometryMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f1f60, 0x243e0 bytes
    // win32kbase.sys .text:0x237600, 0x27ef0 bytes
    // win32kbase.sys .text:0x1efd20, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) release_all_references;
    
    // [SetIntegerProperty@CPathGeometryMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f1fb0, 0x243e0 bytes
    // win32kbase.sys .text:0x237650, 0x27ef0 bytes
    // win32kbase.sys .text:0x1efd70, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CPathGeometryMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f2000, 0x243e0 bytes
    // win32kbase.sys .text:0x2376a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1efdc0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CPathGeometryMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f20c0, 0x243e0 bytes
    // win32kbase.sys .text:0x237760, 0x27ef0 bytes
    // win32kbase.sys .text:0x1efe80, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
