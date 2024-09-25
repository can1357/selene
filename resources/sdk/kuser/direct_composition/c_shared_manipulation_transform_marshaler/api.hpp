#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_manipulation_transform_marshaler
{
    // [InitializeFromSharedResource@CSharedManipulationTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xadc28, 0x243e0 bytes
    // win32kbase.sys .text:0xbbf94, 0x27ef0 bytes
    // win32kbase.sys .text:0xa13e8, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) initialize_from_shared_resource;
    
    // [Create@CSharedManipulationTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x345a4, 0x1eb80 bytes
    // win32kbase.sys .text:0xadb90, 0x243e0 bytes
    // win32kbase.sys .text:0xbbed0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa1350, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) create;
    
    // [EmitCreationCommand@CSharedManipulationTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x34680, 0x1eb80 bytes
    // win32kbase.sys .text:0xbd5b0, 0x243e0 bytes
    // win32kbase.sys .text:0xbe700, 0x27ef0 bytes
    // win32kbase.sys .text:0x5ba0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_creation_command;
    
    // [OpenSharedHandle@CSharedManipulationTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x346c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x7e230, 0x243e0 bytes
    // win32kbase.sys .text:0x9c150, 0x27ef0 bytes
    // win32kbase.sys .text:0xb21c0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) open_shared_handle;
    
    // [ReleaseAllReferences@CSharedManipulationTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x34690, 0x1eb80 bytes
    // win32kbase.sys .text:0xbab50, 0x243e0 bytes
    // win32kbase.sys .text:0xcf230, 0x27ef0 bytes
    // win32kbase.sys .text:0xb4470, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) release_all_references;
};
#include "magic/api.end.hpp"
