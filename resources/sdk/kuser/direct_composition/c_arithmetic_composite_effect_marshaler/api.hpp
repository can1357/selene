#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_arithmetic_composite_effect_marshaler
{
    // [GetType@CArithmeticCompositeEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f4b0, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CArithmeticCompositeEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe8570, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitData@CArithmeticCompositeEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4b98, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ecb10, 0x243e0 bytes
    // win32kbase.sys .text:0x231860, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ea8d0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_data;
    
    // [EmitUpdateCommands@CArithmeticCompositeEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4c10, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ecba0, 0x243e0 bytes
    // win32kbase.sys .text:0x2318f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ea960, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [GetFloatAnimatableProperty@CArithmeticCompositeEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf39e0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e99d0, 0x243e0 bytes
    // win32kbase.sys .text:0x22e600, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7790, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) get_float_animatable_property;
    
    // [GetMaxInputs@CArithmeticCompositeEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f980, 0x1eb80 bytes
    // win32kbase.sys .text:0xabbf0, 0x243e0 bytes
    // win32kbase.sys .text:0xc9c80, 0x27ef0 bytes
    // win32kbase.sys .text:0xa18c0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) get_max_inputs;
    
    // [Initialize@CArithmeticCompositeEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4c60, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ecc00, 0x243e0 bytes
    // win32kbase.sys .text:0x231950, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ea9c0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) initialize;
    
    // [IsPropertyAnimatable@CArithmeticCompositeEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4c90, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9a60, 0x243e0 bytes
    // win32kbase.sys .text:0x22e690, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7820, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) is_property_animatable;
    
    // [SetBufferProperty@CArithmeticCompositeEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4cb0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eaa40, 0x243e0 bytes
    // win32kbase.sys .text:0x22f6c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e8800, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_buffer_property;
    
    // [SetFloatProperty@CArithmeticCompositeEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4d20, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9b00, 0x243e0 bytes
    // win32kbase.sys .text:0x22e740, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e78c0, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_float_property;
    
    // [SetIntegerProperty@CArithmeticCompositeEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4da0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ecc40, 0x243e0 bytes
    // win32kbase.sys .text:0x231990, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eaa00, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_integer_property;
    
    // [SetRemarshalingFlags@CArithmeticCompositeEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4dd0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ecc80, 0x243e0 bytes
    // win32kbase.sys .text:0x2319d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eaa40, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
