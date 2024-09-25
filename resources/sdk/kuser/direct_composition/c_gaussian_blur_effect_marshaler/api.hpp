#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_gaussian_blur_effect_marshaler
{
    // [GetType@CGaussianBlurEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f620, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CGaussianBlurEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe86f0, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitData@CGaussianBlurEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf37b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e91a4, 0x243e0 bytes
    // win32kbase.sys .text:0x22da90, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e6f64, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_data;
    
    // [EmitUpdateCommands@CGaussianBlurEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf3820, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9220, 0x243e0 bytes
    // win32kbase.sys .text:0x22db10, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e6fe0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [GetFloatAnimatableProperty@CGaussianBlurEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf3870, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9280, 0x243e0 bytes
    // win32kbase.sys .text:0x22db70, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7040, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) get_float_animatable_property;
    
    // [Initialize@CGaussianBlurEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf3890, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e92a0, 0x243e0 bytes
    // win32kbase.sys .text:0x22dba0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7060, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) initialize;
    
    // [IsPropertyAnimatable@CGaussianBlurEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7ac30, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e92e0, 0x243e0 bytes
    // win32kbase.sys .text:0x22dbe0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e70a0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) is_property_animatable;
    
    // [SetFloatProperty@CGaussianBlurEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4130, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9300, 0x243e0 bytes
    // win32kbase.sys .text:0x22dc10, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e70c0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_float_property;
    
    // [SetIntegerProperty@CGaussianBlurEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf38c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9330, 0x243e0 bytes
    // win32kbase.sys .text:0x22dc50, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e70f0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_integer_property;
    
    // [SetRemarshalingFlags@CGaussianBlurEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf38f0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9380, 0x243e0 bytes
    // win32kbase.sys .text:0x22dca0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7140, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
