#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_color_matrix_effect_marshaler
{
    // [GetType@CColorMatrixEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f570, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CColorMatrixEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe8610, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitData@CColorMatrixEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf3b0c, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9bd0, 0x243e0 bytes
    // win32kbase.sys .text:0x22e820, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7990, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_data;
    
    // [EmitUpdateCommands@CColorMatrixEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf3bb0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9c90, 0x243e0 bytes
    // win32kbase.sys .text:0x22e8e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7a50, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [GetFloatAnimatableProperty@CColorMatrixEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf3c00, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9cf0, 0x243e0 bytes
    // win32kbase.sys .text:0x22e940, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7ab0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) get_float_animatable_property;
    
    // [Initialize@CColorMatrixEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf3c40, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9d30, 0x243e0 bytes
    // win32kbase.sys .text:0x22e980, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7af0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) initialize;
    
    // [IsPropertyAnimatable@CColorMatrixEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf3cb0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9db0, 0x243e0 bytes
    // win32kbase.sys .text:0x22ea00, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7b70, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) is_property_animatable;
    
    // [SetBufferProperty@CColorMatrixEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf3cd0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9dd0, 0x243e0 bytes
    // win32kbase.sys .text:0x22ea30, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7b90, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_buffer_property;
    
    // [SetFloatProperty@CColorMatrixEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf3d80, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9e90, 0x243e0 bytes
    // win32kbase.sys .text:0x22eaf0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7c50, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_float_property;
    
    // [SetIntegerProperty@CColorMatrixEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf3dd0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9ef0, 0x243e0 bytes
    // win32kbase.sys .text:0x22eb50, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7cb0, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_integer_property;
    
    // [SetRemarshalingFlags@CColorMatrixEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf3e10, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9f40, 0x243e0 bytes
    // win32kbase.sys .text:0x22eba0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7d00, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
