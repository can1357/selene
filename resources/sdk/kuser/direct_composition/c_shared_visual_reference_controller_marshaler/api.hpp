#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_visual_reference_controller_marshaler
{
    // [Create@CSharedVisualReferenceControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x200cc4, 0x243e0 bytes
    // win32kbase.sys .text:0x2503ec, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fea94, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [EmitCreationCommand@CSharedVisualReferenceControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5930, 0x243e0 bytes
    // win32kbase.sys .text:0xbe680, 0x27ef0 bytes
    // win32kbase.sys .text:0x5930, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_creation_command;
    
    // [OpenSharedHandle@CSharedVisualReferenceControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x200dc0, 0x243e0 bytes
    // win32kbase.sys .text:0x2505d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1feb90, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) open_shared_handle;
    
    // [ReleaseAllReferences@CSharedVisualReferenceControllerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x200e00, 0x243e0 bytes
    // win32kbase.sys .text:0x250610, 0x27ef0 bytes
    // win32kbase.sys .text:0x1febd0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) release_all_references;
};
#include "magic/api.end.hpp"
