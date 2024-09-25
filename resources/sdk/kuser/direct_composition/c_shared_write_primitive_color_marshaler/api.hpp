#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_write_primitive_color_marshaler
{
    // [Create@CSharedWritePrimitiveColorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf5ab0, 0x1eb80 bytes
    // win32kbase.sys .text:0x2013d4, 0x243e0 bytes
    // win32kbase.sys .text:0x250edc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ff1a4, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [EmitCreationCommand@CSharedWritePrimitiveColorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf5b60, 0x1eb80 bytes
    // win32kbase.sys .text:0x2014b0, 0x243e0 bytes
    // win32kbase.sys .text:0x2510a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ff280, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_creation_command;
    
    // [OpenSharedHandle@CSharedWritePrimitiveColorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf5b70, 0x1eb80 bytes
    // win32kbase.sys .text:0x2014d0, 0x243e0 bytes
    // win32kbase.sys .text:0x2510c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ff2a0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) open_shared_handle;
    
    // [ReleaseAllReferences@CSharedWritePrimitiveColorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf5b90, 0x1eb80 bytes
    // win32kbase.sys .text:0x201510, 0x243e0 bytes
    // win32kbase.sys .text:0x251100, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ff2e0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) release_all_references;
};
#include "magic/api.end.hpp"
