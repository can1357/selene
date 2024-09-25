#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_client_projected_shadow_caster_marshaler
{
    // [InitializeFromSharedResource@CSharedClientProjectedShadowCasterMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xc3750, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) initialize_from_shared_resource;
    
    // [EmitCreationCommand@CSharedClientProjectedShadowCasterMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x202560, 0x243e0 bytes
    // win32kbase.sys .text:0x200330, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_creation_command;
    
    // [IsOfType@CSharedClientProjectedShadowCasterMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x202580, 0x243e0 bytes
    // win32kbase.sys .text:0x200350, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) is_of_type;
    
    // [Create@CSharedClientProjectedShadowCasterMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x202490, 0x243e0 bytes
    // win32kbase.sys .text:0x252a80, 0x27ef0 bytes
    // win32kbase.sys .text:0x200260, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) create;
    
    // [OpenSharedHandle@CSharedClientProjectedShadowCasterMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2025b0, 0x243e0 bytes
    // win32kbase.sys .text:0x252c30, 0x27ef0 bytes
    // win32kbase.sys .text:0x200380, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) open_shared_handle;
    
    // [ReleaseAllReferences@CSharedClientProjectedShadowCasterMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2025f0, 0x243e0 bytes
    // win32kbase.sys .text:0x252c70, 0x27ef0 bytes
    // win32kbase.sys .text:0x2003c0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) release_all_references;
    
    // [SetIntegerProperty@CSharedClientProjectedShadowCasterMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9dc0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaee0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8760, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CSharedClientProjectedShadowCasterMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x202640, 0x243e0 bytes
    // win32kbase.sys .text:0xdaee0, 0x27ef0 bytes
    // win32kbase.sys .text:0x200410, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_reference_property;
};
#include "magic/api.end.hpp"
