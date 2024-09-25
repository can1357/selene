#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_composition_point_light_marshaler
{
    // [Create@CSharedCompositionPointLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2022a4, 0x243e0 bytes
    // win32kbase.sys .text:0x2527a4, 0x27ef0 bytes
    // win32kbase.sys .text:0x200074, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [EmitCreationCommand@CSharedCompositionPointLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x202350, 0x243e0 bytes
    // win32kbase.sys .text:0x252940, 0x27ef0 bytes
    // win32kbase.sys .text:0x200120, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_creation_command;
    
    // [InitializeFromSharedResource@CSharedCompositionPointLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x202370, 0x243e0 bytes
    // win32kbase.sys .text:0x252960, 0x27ef0 bytes
    // win32kbase.sys .text:0x200140, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) initialize_from_shared_resource;
    
    // [OpenSharedHandle@CSharedCompositionPointLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2023d0, 0x243e0 bytes
    // win32kbase.sys .text:0x2529c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x2001a0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) open_shared_handle;
    
    // [ReleaseAllReferences@CSharedCompositionPointLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x202410, 0x243e0 bytes
    // win32kbase.sys .text:0x252a00, 0x27ef0 bytes
    // win32kbase.sys .text:0x2001e0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) release_all_references;
};
#include "magic/api.end.hpp"
