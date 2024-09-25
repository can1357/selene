#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_rotate_transform_marshaler
{
    // [GetType@CRotateTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6fc60, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CRotateTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6fc30, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitSetAngleCommand@CRotateTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1df6ac, 0x243e0 bytes
    // win32kbase.sys .text:0x2381f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dd46c, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_set_angle_command;
    
    // [EmitSetCenterXCommand@CRotateTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e0160, 0x243e0 bytes
    // win32kbase.sys .text:0x2388ec, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ddf20, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_set_center_x_command;
    
    // [EmitSetCenterYCommand@CRotateTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e0320, 0x243e0 bytes
    // win32kbase.sys .text:0x238aac, 0x27ef0 bytes
    // win32kbase.sys .text:0x1de0e0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_set_center_y_command;
    
    // [GetFloatAnimatableProperty@CRotateTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xf2c60, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e5330, 0x243e0 bytes
    // win32kbase.sys .text:0x1e30f0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) get_float_animatable_property;
    
    // [IsPropertyAnimatable@CRotateTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x6fce0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e5790, 0x243e0 bytes
    // win32kbase.sys .text:0x1e3550, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) is_property_animatable;
    
    // [SetFloatProperty@CRotateTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x6fc70, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e6880, 0x243e0 bytes
    // win32kbase.sys .text:0x1e4640, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_float_property;
    
    // [EmitUpdateCommands@CRotateTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x89500, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e4960, 0x243e0 bytes
    // win32kbase.sys .text:0x23ce30, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e2720, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) emit_update_commands;
    
    // [SetRemarshalingFlags@CRotateTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf2c90, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e8b00, 0x243e0 bytes
    // win32kbase.sys .text:0x240880, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e68c0, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
