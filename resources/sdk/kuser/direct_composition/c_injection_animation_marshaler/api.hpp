#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_injection_animation_marshaler
{
    // [EmitSetInjectionData@CInjectionAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fb8bc, 0x243e0 bytes
    // win32kbase.sys .text:0x24abbc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f968c, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_set_injection_data;
    
    // [EmitUpdateCommands@CInjectionAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fb970, 0x243e0 bytes
    // win32kbase.sys .text:0x24ac70, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f9740, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CInjectionAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fb9c0, 0x243e0 bytes
    // win32kbase.sys .text:0x24acc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f9790, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) release_all_references;
    
    // [SetIntegerProperty@CInjectionAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fba20, 0x243e0 bytes
    // win32kbase.sys .text:0x24ad20, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f97f0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CInjectionAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fba90, 0x243e0 bytes
    // win32kbase.sys .text:0x24ad90, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f9860, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_reference_property;
};
#include "magic/api.end.hpp"
