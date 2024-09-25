#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_composition_spot_light_marshaler
{
    // [Create@CSharedCompositionSpotLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb71c0, 0x243e0 bytes
    // win32kbase.sys .text:0xc9430, 0x27ef0 bytes
    // win32kbase.sys .text:0xb10b0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [EmitCreationCommand@CSharedCompositionSpotLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc7b40, 0x243e0 bytes
    // win32kbase.sys .text:0xbe6c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x59d0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_creation_command;
    
    // [InitializeFromSharedResource@CSharedCompositionSpotLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb7258, 0x243e0 bytes
    // win32kbase.sys .text:0xc94f4, 0x27ef0 bytes
    // win32kbase.sys .text:0xb1148, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) initialize_from_shared_resource;
    
    // [OpenSharedHandle@CSharedCompositionSpotLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7d9e0, 0x243e0 bytes
    // win32kbase.sys .text:0x9afd0, 0x27ef0 bytes
    // win32kbase.sys .text:0xbd920, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) open_shared_handle;
    
    // [ReleaseAllReferences@CSharedCompositionSpotLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbb180, 0x243e0 bytes
    // win32kbase.sys .text:0xcea90, 0x27ef0 bytes
    // win32kbase.sys .text:0xb4ba0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) release_all_references;
};
#include "magic/api.end.hpp"
