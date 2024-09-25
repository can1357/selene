#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_holographic_interop_texture_marshaler
{
    // [Create@CSharedHolographicInteropTextureMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x201c60, 0x243e0 bytes
    // win32kbase.sys .text:0x251d60, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ffa30, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [EmitCreationCommand@CSharedHolographicInteropTextureMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x201090, 0x243e0 bytes
    // win32kbase.sys .text:0x250aa0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fee60, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_creation_command;
    
    // [OpenSharedHandle@CSharedHolographicInteropTextureMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2011b0, 0x243e0 bytes
    // win32kbase.sys .text:0x250bc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fef80, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) open_shared_handle;
    
    // [ReleaseAllReferences@CSharedHolographicInteropTextureMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x201b90, 0x243e0 bytes
    // win32kbase.sys .text:0x2520c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ff960, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) release_all_references;
};
#include "magic/api.end.hpp"
