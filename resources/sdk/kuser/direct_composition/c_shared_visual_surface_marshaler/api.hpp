#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_visual_surface_marshaler
{
    // [Create@CSharedVisualSurfaceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x25315c, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [EmitCreationCommand@CSharedVisualSurfaceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x250aa0, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) emit_creation_command;
    
    // [InitializeFromSharedResource@CSharedVisualSurfaceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x2532f8, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) initialize_from_shared_resource;
    
    // [OpenSharedHandle@CSharedVisualSurfaceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x250bc0, 0x27ef0 bytes
    //
    _m3(sdk::unknown_ptr) open_shared_handle;
    
    // [ReleaseAllReferences@CSharedVisualSurfaceMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x253370, 0x27ef0 bytes
    //
    _m4(sdk::unknown_ptr) release_all_references;
};
#include "magic/api.end.hpp"
