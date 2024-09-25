#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_composition_ambient_light_marshaler
{
    // [Create@CSharedCompositionAmbientLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb6fd0, 0x243e0 bytes
    // win32kbase.sys .text:0xc9210, 0x27ef0 bytes
    // win32kbase.sys .text:0xb0ec0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [EmitCreationCommand@CSharedCompositionAmbientLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc8010, 0x243e0 bytes
    // win32kbase.sys .text:0xbe660, 0x27ef0 bytes
    // win32kbase.sys .text:0x5990, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_creation_command;
    
    // [InitializeFromSharedResource@CSharedCompositionAmbientLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb7420, 0x243e0 bytes
    // win32kbase.sys .text:0xc96c0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb1310, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) initialize_from_shared_resource;
    
    // [OpenSharedHandle@CSharedCompositionAmbientLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7fc40, 0x243e0 bytes
    // win32kbase.sys .text:0x9af50, 0x27ef0 bytes
    // win32kbase.sys .text:0xbf5d0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) open_shared_handle;
    
    // [ReleaseAllReferences@CSharedCompositionAmbientLightMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbb100, 0x243e0 bytes
    // win32kbase.sys .text:0xcea10, 0x27ef0 bytes
    // win32kbase.sys .text:0xb4b20, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) release_all_references;
};
#include "magic/api.end.hpp"
