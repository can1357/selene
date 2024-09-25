#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_matrix_transform_marshaler
{
    // [InitializeFromSharedResource@CSharedMatrixTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x201114, 0x243e0 bytes
    // win32kbase.sys .text:0x250b24, 0x27ef0 bytes
    // win32kbase.sys .text:0x1feee4, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) initialize_from_shared_resource;
    
    // [Create@CSharedMatrixTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf57e8, 0x1eb80 bytes
    // win32kbase.sys .text:0x200fe8, 0x243e0 bytes
    // win32kbase.sys .text:0x250900, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fedb8, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) create;
    
    // [EmitCreationCommand@CSharedMatrixTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf58b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x201090, 0x243e0 bytes
    // win32kbase.sys .text:0x250aa0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fee60, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_creation_command;
    
    // [OpenSharedHandle@CSharedMatrixTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf58e0, 0x1eb80 bytes
    // win32kbase.sys .text:0x2011b0, 0x243e0 bytes
    // win32kbase.sys .text:0x250bc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fef80, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) open_shared_handle;
    
    // [ReleaseAllReferences@CSharedMatrixTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf5930, 0x1eb80 bytes
    // win32kbase.sys .text:0x201230, 0x243e0 bytes
    // win32kbase.sys .text:0x250c40, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ff000, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) release_all_references;
};
#include "magic/api.end.hpp"
