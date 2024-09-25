#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_write_animation_trigger_marshaler
{
    // [Create@CSharedWriteAnimationTriggerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x4ca4, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [EmitCreationCommand@CSharedWriteAnimationTriggerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xf5fa0, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) emit_creation_command;
    
    // [OpenSharedHandle@CSharedWriteAnimationTriggerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x4d40, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) open_shared_handle;
    
    // [ReleaseAllReferences@CSharedWriteAnimationTriggerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xf5fb0, 0x1eb80 bytes
    //
    _m3(sdk::unknown_ptr) release_all_references;
};
#include "magic/api.end.hpp"
