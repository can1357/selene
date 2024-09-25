#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_host_projected_shadow_caster_marshaler
{
    // [IsOfType@CSharedHostProjectedShadowCasterMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x2027b0, 0x243e0 bytes
    // win32kbase.sys .text:0x200580, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) is_of_type;
    
    // [SetFloatProperty@CSharedHostProjectedShadowCasterMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xc9dc0, 0x243e0 bytes
    // win32kbase.sys .text:0xc8760, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) set_float_property;
    
    // [SetReferenceProperty@CSharedHostProjectedShadowCasterMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x202830, 0x243e0 bytes
    // win32kbase.sys .text:0x200600, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) set_reference_property;
    
    // [Create@CSharedHostProjectedShadowCasterMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2026d8, 0x243e0 bytes
    // win32kbase.sys .text:0x252d18, 0x27ef0 bytes
    // win32kbase.sys .text:0x2004a8, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) create;
    
    // [EmitCreationCommand@CSharedHostProjectedShadowCasterMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x202560, 0x243e0 bytes
    // win32kbase.sys .text:0x251c30, 0x27ef0 bytes
    // win32kbase.sys .text:0x200330, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_creation_command;
    
    // [OpenSharedHandle@CSharedHostProjectedShadowCasterMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2025b0, 0x243e0 bytes
    // win32kbase.sys .text:0x251c50, 0x27ef0 bytes
    // win32kbase.sys .text:0x200380, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) open_shared_handle;
    
    // [ReleaseAllReferences@CSharedHostProjectedShadowCasterMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2027e0, 0x243e0 bytes
    // win32kbase.sys .text:0x252ed0, 0x27ef0 bytes
    // win32kbase.sys .text:0x2005b0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) release_all_references;
};
#include "magic/api.end.hpp"
