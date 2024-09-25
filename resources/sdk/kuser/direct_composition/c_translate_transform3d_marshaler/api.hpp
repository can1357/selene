#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_translate_transform3d_marshaler
{
    // [GetType@CTranslateTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f750, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CTranslateTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe88f0, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitSetOffsetXCommand@CTranslateTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e25b4, 0x243e0 bytes
    // win32kbase.sys .text:0x23ab60, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e0374, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_set_offset_x_command;
    
    // [EmitSetOffsetYCommand@CTranslateTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e2694, 0x243e0 bytes
    // win32kbase.sys .text:0x23ac40, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e0454, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_set_offset_y_command;
    
    // [EmitSetOffsetZCommand@CTranslateTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e2774, 0x243e0 bytes
    // win32kbase.sys .text:0x23ad20, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e0534, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_set_offset_z_command;
    
    // [GetFloatAnimatableProperty@CTranslateTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xf2c60, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e5330, 0x243e0 bytes
    // win32kbase.sys .text:0x1e30f0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) get_float_animatable_property;
    
    // [IsPropertyAnimatable@CTranslateTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x6fce0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e5790, 0x243e0 bytes
    // win32kbase.sys .text:0x1e3550, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) is_property_animatable;
    
    // [SetFloatProperty@CTranslateTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xf3460, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e6880, 0x243e0 bytes
    // win32kbase.sys .text:0x1e4640, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_float_property;
    
    // [EmitUpdateCommands@CTranslateTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf33d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e5050, 0x243e0 bytes
    // win32kbase.sys .text:0x23d650, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e2e10, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) emit_update_commands;
    
    // [SetRemarshalingFlags@CTranslateTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf34c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e8b00, 0x243e0 bytes
    // win32kbase.sys .text:0x240880, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e68c0, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
