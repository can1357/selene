#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_projected_shadow_caster_marshaler
{
    // [EmitUpdateCommands@CProjectedShadowCasterMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3fe0, 0x243e0 bytes
    // win32kbase.sys .text:0x7a70, 0x27ef0 bytes
    // win32kbase.sys .text:0x3fe0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CProjectedShadowCasterMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x54e0, 0x243e0 bytes
    // win32kbase.sys .text:0x9550, 0x27ef0 bytes
    // win32kbase.sys .text:0x54e0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) release_all_references;
    
    // [SetReferenceProperty@CProjectedShadowCasterMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4610, 0x243e0 bytes
    // win32kbase.sys .text:0x7d40, 0x27ef0 bytes
    // win32kbase.sys .text:0x4610, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CProjectedShadowCasterMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1feb10, 0x243e0 bytes
    // win32kbase.sys .text:0x24e150, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fc8e0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
