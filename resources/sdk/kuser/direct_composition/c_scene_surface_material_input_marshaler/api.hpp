#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_scene_surface_material_input_marshaler
{
    // [EmitUpdateCommands@CSceneSurfaceMaterialInputMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2004e0, 0x243e0 bytes
    // win32kbase.sys .text:0x24f630, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fe2b0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_commands;
    
    // [Initialize@CSceneSurfaceMaterialInputMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2005b0, 0x243e0 bytes
    // win32kbase.sys .text:0x24f700, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fe380, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) initialize;
    
    // [ReleaseAllReferences@CSceneSurfaceMaterialInputMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e5c00, 0x243e0 bytes
    // win32kbase.sys .text:0x23dd20, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e39c0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) release_all_references;
    
    // [SetIntegerProperty@CSceneSurfaceMaterialInputMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2005d0, 0x243e0 bytes
    // win32kbase.sys .text:0x24f720, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fe3a0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CSceneSurfaceMaterialInputMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x200620, 0x243e0 bytes
    // win32kbase.sys .text:0x24f770, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fe3f0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CSceneSurfaceMaterialInputMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2006e0, 0x243e0 bytes
    // win32kbase.sys .text:0x24f850, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fe4b0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
