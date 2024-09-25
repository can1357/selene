#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_natural_animation_marshaler
{
    // [EmitScenarioGUID@CNaturalAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x24b76c, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) emit_scenario_guid;
    
    // [SetBufferProperty@CNaturalAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x24ba90, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) set_buffer_property;
    
    // [EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fc3f0, 0x243e0 bytes
    // win32kbase.sys .text:0x24b7c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fa1c0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_update_commands;
    
    // [EmitUpdateMotionParameters@CNaturalAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fc4f8, 0x243e0 bytes
    // win32kbase.sys .text:0x24b8dc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fa2c8, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_motion_parameters;
    
    // [EnsureProperties@CNaturalAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fc568, 0x243e0 bytes
    // win32kbase.sys .text:0x24b94c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fa338, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) ensure_properties;
    
    // [FinalValueSetOrChanged@CNaturalAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fc5d8, 0x243e0 bytes
    // win32kbase.sys .text:0x24b9bc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fa3a8, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) final_value_set_or_changed;
    
    // [InitialValueSetOrChanged@CNaturalAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fc614, 0x243e0 bytes
    // win32kbase.sys .text:0x24b9f8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fa3e4, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) initial_value_set_or_changed;
    
    // [ReleaseAllReferences@CNaturalAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fc650, 0x243e0 bytes
    // win32kbase.sys .text:0x24ba40, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fa420, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) release_all_references;
    
    // [SetFloatProperty@CNaturalAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fc670, 0x243e0 bytes
    // win32kbase.sys .text:0x24bb50, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fa440, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_float_property;
    
    // [SetIntegerProperty@CNaturalAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fc840, 0x243e0 bytes
    // win32kbase.sys .text:0x24bd40, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fa610, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_integer_property;
    
    // [SetRemarshalingFlags@CNaturalAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fc8b0, 0x243e0 bytes
    // win32kbase.sys .text:0x24bdb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fa680, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
