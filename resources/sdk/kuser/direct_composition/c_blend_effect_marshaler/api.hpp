#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_blend_effect_marshaler
{
    // [GetType@CBlendEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f530, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CBlendEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe85a0, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitData@CBlendEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4ab8, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eca04, 0x243e0 bytes
    // win32kbase.sys .text:0x23175c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ea7c4, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_data;
    
    // [EmitUpdateCommands@CBlendEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4b10, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eca70, 0x243e0 bytes
    // win32kbase.sys .text:0x2317c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ea830, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [GetMaxInputs@CBlendEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f4c0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc6440, 0x243e0 bytes
    // win32kbase.sys .text:0xdae60, 0x27ef0 bytes
    // win32kbase.sys .text:0x72e60, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) get_max_inputs;
    
    // [Initialize@CBlendEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3980, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eb7e0, 0x243e0 bytes
    // win32kbase.sys .text:0x2304b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e95a0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) initialize;
    
    // [SetIntegerProperty@CBlendEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4b60, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ecad0, 0x243e0 bytes
    // win32kbase.sys .text:0x231820, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ea890, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_integer_property;
    
    // [SetRemarshalingFlags@CBlendEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4aa0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eb840, 0x243e0 bytes
    // win32kbase.sys .text:0x230510, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e9600, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
