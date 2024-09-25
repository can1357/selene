#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_hue_rotation_effect_marshaler
{
    // [GetType@CHueRotationEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f630, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CHueRotationEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe8710, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitData@CHueRotationEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf407c, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ea428, 0x243e0 bytes
    // win32kbase.sys .text:0x22f0a8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e81e8, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_data;
    
    // [EmitUpdateCommands@CHueRotationEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf40e0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ea490, 0x243e0 bytes
    // win32kbase.sys .text:0x22f110, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e8250, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [GetFloatAnimatableProperty@CHueRotationEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf3870, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9280, 0x243e0 bytes
    // win32kbase.sys .text:0x22db70, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7040, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) get_float_animatable_property;
    
    // [IsPropertyAnimatable@CHueRotationEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7ac30, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e92e0, 0x243e0 bytes
    // win32kbase.sys .text:0x22dbe0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e70a0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) is_property_animatable;
    
    // [SetFloatProperty@CHueRotationEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4130, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9300, 0x243e0 bytes
    // win32kbase.sys .text:0x22dc10, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e70c0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_float_property;
    
    // [SetRemarshalingFlags@CHueRotationEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4160, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ea4f0, 0x243e0 bytes
    // win32kbase.sys .text:0x22f170, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e82b0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
