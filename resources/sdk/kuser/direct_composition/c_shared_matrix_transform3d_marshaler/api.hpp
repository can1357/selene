#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_matrix_transform3d_marshaler
{
    // [InitializeFromSharedResource@CSharedMatrixTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2010b0, 0x243e0 bytes
    // win32kbase.sys .text:0x250ac0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fee80, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) initialize_from_shared_resource;
    
    // [Create@CSharedMatrixTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf5728, 0x1eb80 bytes
    // win32kbase.sys .text:0x200f40, 0x243e0 bytes
    // win32kbase.sys .text:0x250768, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fed10, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) create;
    
    // [EmitCreationCommand@CSharedMatrixTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf58a0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc7b60, 0x243e0 bytes
    // win32kbase.sys .text:0xbe6a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x59b0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_creation_command;
    
    // [OpenSharedHandle@CSharedMatrixTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf58c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x201170, 0x243e0 bytes
    // win32kbase.sys .text:0x250b80, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fef40, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) open_shared_handle;
    
    // [ReleaseAllReferences@CSharedMatrixTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf5900, 0x1eb80 bytes
    // win32kbase.sys .text:0x2011f0, 0x243e0 bytes
    // win32kbase.sys .text:0x250c00, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fefc0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) release_all_references;
};
#include "magic/api.end.hpp"
