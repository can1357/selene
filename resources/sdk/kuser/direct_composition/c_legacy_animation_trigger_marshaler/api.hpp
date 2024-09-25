#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_legacy_animation_trigger_marshaler
{
    // [EmitUpdateCommands@CLegacyAnimationTriggerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f2b70, 0x243e0 bytes
    // win32kbase.sys .text:0x241690, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f0930, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_commands;
    
    // [SetBufferProperty@CLegacyAnimationTriggerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f2bf0, 0x243e0 bytes
    // win32kbase.sys .text:0x241710, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f09b0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) set_buffer_property;
    
    // [SetRemarshalingFlags@CLegacyAnimationTriggerMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f2c40, 0x243e0 bytes
    // win32kbase.sys .text:0x241760, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f0a00, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
