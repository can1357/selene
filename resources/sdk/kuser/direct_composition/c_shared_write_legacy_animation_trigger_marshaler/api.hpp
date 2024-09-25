#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_write_legacy_animation_trigger_marshaler
{
    // [Create@CSharedWriteLegacyAnimationTriggerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4330, 0x243e0 bytes
    // win32kbase.sys .text:0xd0770, 0x27ef0 bytes
    // win32kbase.sys .text:0x4330, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [EmitCreationCommand@CSharedWriteLegacyAnimationTriggerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5930, 0x243e0 bytes
    // win32kbase.sys .text:0xbe680, 0x27ef0 bytes
    // win32kbase.sys .text:0x5930, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_creation_command;
    
    // [OpenSharedHandle@CSharedWriteLegacyAnimationTriggerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x54a0, 0x243e0 bytes
    // win32kbase.sys .text:0x9b010, 0x27ef0 bytes
    // win32kbase.sys .text:0x54a0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) open_shared_handle;
    
    // [ReleaseAllReferences@CSharedWriteLegacyAnimationTriggerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5720, 0x243e0 bytes
    // win32kbase.sys .text:0xd8740, 0x27ef0 bytes
    // win32kbase.sys .text:0x5720, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) release_all_references;
};
#include "magic/api.end.hpp"
