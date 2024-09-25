#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_translate_transform_marshaler
{
    // [GetType@CTranslateTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6cd40, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CTranslateTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6cd50, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitSetOffsetXCommand@CTranslateTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e2624, 0x243e0 bytes
    // win32kbase.sys .text:0x23abd0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e03e4, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_set_offset_x_command;
    
    // [EmitSetOffsetYCommand@CTranslateTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e2704, 0x243e0 bytes
    // win32kbase.sys .text:0x23acb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e04c4, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_set_offset_y_command;
    
    // [GetFloatAnimatableProperty@CTranslateTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xf3370, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e5460, 0x243e0 bytes
    // win32kbase.sys .text:0x1e3220, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) get_float_animatable_property;
    
    // [IsPropertyAnimatable@CTranslateTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x6cd80, 0x1eb80 bytes
    // win32kbase.sys .text:0xc6fb0, 0x243e0 bytes
    // win32kbase.sys .text:0xbfc60, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) is_property_animatable;
    
    // [SetFloatProperty@CTranslateTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x6cda0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc81a0, 0x243e0 bytes
    // win32kbase.sys .text:0xc0d80, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_float_property;
    
    // [EmitUpdateCommands@CTranslateTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6ccd0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e50c0, 0x243e0 bytes
    // win32kbase.sys .text:0x23d6c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e2e80, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) emit_update_commands;
    
    // [SetRemarshalingFlags@CTranslateTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf33a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9110, 0x243e0 bytes
    // win32kbase.sys .text:0x240eb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e6ed0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
