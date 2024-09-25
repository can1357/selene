#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_affine_transform2d_effect_marshaler
{
    // [GetType@CAffineTransform2DEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x83830, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CAffineTransform2DEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x3690, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitData@CAffineTransform2DEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x36a8, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eccc8, 0x243e0 bytes
    // win32kbase.sys .text:0x231a18, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eaa88, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_data;
    
    // [EmitUpdateCommands@CAffineTransform2DEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x37f0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ecd80, 0x243e0 bytes
    // win32kbase.sys .text:0x231ad0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eab40, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [GetFloatAnimatableProperty@CAffineTransform2DEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4e10, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ecde0, 0x243e0 bytes
    // win32kbase.sys .text:0x231b30, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eaba0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) get_float_animatable_property;
    
    // [GetMaxInputs@CAffineTransform2DEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7d4a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x9e360, 0x243e0 bytes
    // win32kbase.sys .text:0xb3c80, 0x27ef0 bytes
    // win32kbase.sys .text:0x8d1e0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) get_max_inputs;
    
    // [Initialize@CAffineTransform2DEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x37a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ece30, 0x243e0 bytes
    // win32kbase.sys .text:0x231b80, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eabf0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) initialize;
    
    // [IsPropertyAnimatable@CAffineTransform2DEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4e50, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ece80, 0x243e0 bytes
    // win32kbase.sys .text:0x231bd0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eac40, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) is_property_animatable;
    
    // [SetBufferProperty@CAffineTransform2DEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3880, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ecea0, 0x243e0 bytes
    // win32kbase.sys .text:0x231c00, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eac60, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_buffer_property;
    
    // [SetFloatProperty@CAffineTransform2DEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4e70, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ecf00, 0x243e0 bytes
    // win32kbase.sys .text:0x231c60, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eacc0, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_float_property;
    
    // [SetIntegerProperty@CAffineTransform2DEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3840, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ecf80, 0x243e0 bytes
    // win32kbase.sys .text:0x231ce0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ead40, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_integer_property;
    
    // [SetMatrixHelper@CAffineTransform2DEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x373c, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ecfc4, 0x243e0 bytes
    // win32kbase.sys .text:0x231d24, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ead84, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) set_matrix_helper;
    
    // [SetRemarshalingFlags@CAffineTransform2DEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4ee0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ed040, 0x243e0 bytes
    // win32kbase.sys .text:0x231da0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eae00, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
