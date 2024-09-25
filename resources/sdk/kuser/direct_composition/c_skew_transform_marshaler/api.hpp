#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_skew_transform_marshaler
{
    // [GetType@CSkewTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f6f0, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CSkewTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe8850, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitSetAngleXCommand@CSkewTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1df71c, 0x243e0 bytes
    // win32kbase.sys .text:0x238260, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dd4dc, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_set_angle_x_command;
    
    // [EmitSetAngleYCommand@CSkewTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1df78c, 0x243e0 bytes
    // win32kbase.sys .text:0x2382d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dd54c, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_set_angle_y_command;
    
    // [EmitSetCenterXCommand@CSkewTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e0240, 0x243e0 bytes
    // win32kbase.sys .text:0x2389cc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1de000, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_set_center_x_command;
    
    // [EmitSetCenterYCommand@CSkewTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e0400, 0x243e0 bytes
    // win32kbase.sys .text:0x238b8c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1de1c0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) emit_set_center_y_command;
    
    // [GetFloatAnimatableProperty@CSkewTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xf2f60, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e53d0, 0x243e0 bytes
    // win32kbase.sys .text:0x1e3190, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) get_float_animatable_property;
    
    // [IsPropertyAnimatable@CSkewTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x3650, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e57d0, 0x243e0 bytes
    // win32kbase.sys .text:0x1e3590, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) is_property_animatable;
    
    // [SetFloatProperty@CSkewTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xf32b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e6a90, 0x243e0 bytes
    // win32kbase.sys .text:0x1e4850, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_float_property;
    
    // [EmitUpdateCommands@CSkewTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf3220, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e4db0, 0x243e0 bytes
    // win32kbase.sys .text:0x23d2d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e2b70, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) emit_update_commands;
    
    // [SetRemarshalingFlags@CSkewTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf3330, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e8f30, 0x243e0 bytes
    // win32kbase.sys .text:0x240cb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e6cf0, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
