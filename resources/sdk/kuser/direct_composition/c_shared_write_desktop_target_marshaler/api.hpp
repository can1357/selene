#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_write_desktop_target_marshaler
{
    // [Create@CSharedWriteDesktopTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7bd44, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [EmitCreationCommand@CSharedWriteDesktopTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7be10, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) emit_creation_command;
    
    // [OpenSharedHandle@CSharedWriteDesktopTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7be60, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) open_shared_handle;
    
    // [ReleaseAllReferences@CSharedWriteDesktopTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7be20, 0x1eb80 bytes
    //
    _m3(sdk::unknown_ptr) release_all_references;
};
#include "magic/api.end.hpp"
