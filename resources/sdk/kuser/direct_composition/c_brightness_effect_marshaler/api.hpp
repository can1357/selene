#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_brightness_effect_marshaler
{
    // [GetType@CBrightnessEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f540, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CBrightnessEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe85c0, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitData@CBrightnessEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf391c, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e98f8, 0x243e0 bytes
    // win32kbase.sys .text:0x22e528, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e76b8, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_data;
    
    // [EmitUpdateCommands@CBrightnessEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf3990, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9970, 0x243e0 bytes
    // win32kbase.sys .text:0x22e5a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7730, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [GetFloatAnimatableProperty@CBrightnessEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf39e0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e99d0, 0x243e0 bytes
    // win32kbase.sys .text:0x22e600, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7790, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) get_float_animatable_property;
    
    // [Initialize@CBrightnessEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf3a20, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9a20, 0x243e0 bytes
    // win32kbase.sys .text:0x22e650, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e77e0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) initialize;
    
    // [IsPropertyAnimatable@CBrightnessEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4c90, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9a60, 0x243e0 bytes
    // win32kbase.sys .text:0x22e690, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7820, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) is_property_animatable;
    
    // [SetBufferProperty@CBrightnessEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf3a50, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9a80, 0x243e0 bytes
    // win32kbase.sys .text:0x22e6c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7840, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_buffer_property;
    
    // [SetFloatProperty@CBrightnessEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4d20, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9b00, 0x243e0 bytes
    // win32kbase.sys .text:0x22e740, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e78c0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_float_property;
    
    // [SetRemarshalingFlags@CBrightnessEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf3ac0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9b80, 0x243e0 bytes
    // win32kbase.sys .text:0x22e7d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7940, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
