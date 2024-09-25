#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shadow_effect_marshaler
{
    // [GetType@CShadowEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x83810, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CShadowEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x3a00, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitData@CShadowEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3a18, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ea0f4, 0x243e0 bytes
    // win32kbase.sys .text:0x22ed54, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7eb4, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_data;
    
    // [EmitUpdateCommands@CShadowEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3ae0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ea180, 0x243e0 bytes
    // win32kbase.sys .text:0x22ede0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7f40, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [GetFloatAnimatableProperty@CShadowEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf3fb0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ea1e0, 0x243e0 bytes
    // win32kbase.sys .text:0x22ee40, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7fa0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) get_float_animatable_property;
    
    // [Initialize@CShadowEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3aa0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ea230, 0x243e0 bytes
    // win32kbase.sys .text:0x22eea0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7ff0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) initialize;
    
    // [IsPropertyAnimatable@CShadowEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4000, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ea270, 0x243e0 bytes
    // win32kbase.sys .text:0x22eee0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e8030, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) is_property_animatable;
    
    // [SetBufferProperty@CShadowEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3b60, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ea2a0, 0x243e0 bytes
    // win32kbase.sys .text:0x22ef10, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e8060, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_buffer_property;
    
    // [SetFloatProperty@CShadowEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3b30, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ea320, 0x243e0 bytes
    // win32kbase.sys .text:0x22ef90, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e80e0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_float_property;
    
    // [SetRemarshalingFlags@CShadowEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4020, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ea3c0, 0x243e0 bytes
    // win32kbase.sys .text:0x22f040, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e8180, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
