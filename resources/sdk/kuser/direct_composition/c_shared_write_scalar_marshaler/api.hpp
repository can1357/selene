#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_write_scalar_marshaler
{
    // [Create@CSharedWriteScalarMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf5d54, 0x1eb80 bytes
    // win32kbase.sys .text:0x201710, 0x243e0 bytes
    // win32kbase.sys .text:0x2513fc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ff4e0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [EmitCreationCommand@CSharedWriteScalarMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf5fa0, 0x1eb80 bytes
    // win32kbase.sys .text:0x5930, 0x243e0 bytes
    // win32kbase.sys .text:0xbe680, 0x27ef0 bytes
    // win32kbase.sys .text:0x5930, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_creation_command;
    
    // [OpenSharedHandle@CSharedWriteScalarMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4d40, 0x1eb80 bytes
    // win32kbase.sys .text:0x200dc0, 0x243e0 bytes
    // win32kbase.sys .text:0x2505d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1feb90, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) open_shared_handle;
    
    // [ReleaseAllReferences@CSharedWriteScalarMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf5fb0, 0x1eb80 bytes
    // win32kbase.sys .text:0x5720, 0x243e0 bytes
    // win32kbase.sys .text:0xd8740, 0x27ef0 bytes
    // win32kbase.sys .text:0x5720, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) release_all_references;
};
#include "magic/api.end.hpp"
