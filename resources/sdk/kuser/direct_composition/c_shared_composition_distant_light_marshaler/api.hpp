#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_composition_distant_light_marshaler
{
    // [Create@CSharedCompositionDistantLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb70e0, 0x243e0 bytes
    // win32kbase.sys .text:0xc9320, 0x27ef0 bytes
    // win32kbase.sys .text:0xb0fd0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [EmitCreationCommand@CSharedCompositionDistantLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc7b60, 0x243e0 bytes
    // win32kbase.sys .text:0xbe6a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x59b0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_creation_command;
    
    // [InitializeFromSharedResource@CSharedCompositionDistantLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb735c, 0x243e0 bytes
    // win32kbase.sys .text:0xc95fc, 0x27ef0 bytes
    // win32kbase.sys .text:0xb124c, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) initialize_from_shared_resource;
    
    // [OpenSharedHandle@CSharedCompositionDistantLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7d9a0, 0x243e0 bytes
    // win32kbase.sys .text:0x9af90, 0x27ef0 bytes
    // win32kbase.sys .text:0xbd960, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) open_shared_handle;
    
    // [ReleaseAllReferences@CSharedCompositionDistantLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbb140, 0x243e0 bytes
    // win32kbase.sys .text:0xcea50, 0x27ef0 bytes
    // win32kbase.sys .text:0xb4b60, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) release_all_references;
};
#include "magic/api.end.hpp"
