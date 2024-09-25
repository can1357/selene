#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_rotate_transform3d_marshaler
{
    // [GetType@CRotateTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f6b0, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CRotateTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe87e0, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitSetAngleCommand@CRotateTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1df63c, 0x243e0 bytes
    // win32kbase.sys .text:0x238180, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dd3fc, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_set_angle_command;
    
    // [EmitSetAxisXCommand@CRotateTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1dfbd8, 0x243e0 bytes
    // win32kbase.sys .text:0x238440, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dd998, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_set_axis_x_command;
    
    // [EmitSetAxisYCommand@CRotateTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1dfc48, 0x243e0 bytes
    // win32kbase.sys .text:0x2384b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dda08, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_set_axis_y_command;
    
    // [EmitSetAxisZCommand@CRotateTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1dfcb8, 0x243e0 bytes
    // win32kbase.sys .text:0x238520, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dda78, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) emit_set_axis_z_command;
    
    // [EmitSetCenterXCommand@CRotateTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e00f0, 0x243e0 bytes
    // win32kbase.sys .text:0x23887c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ddeb0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) emit_set_center_x_command;
    
    // [EmitSetCenterYCommand@CRotateTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e02b0, 0x243e0 bytes
    // win32kbase.sys .text:0x238a3c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1de070, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) emit_set_center_y_command;
    
    // [EmitSetCenterZCommand@CRotateTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e0470, 0x243e0 bytes
    // win32kbase.sys .text:0x238bfc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1de230, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) emit_set_center_z_command;
    
    // [GetFloatAnimatableProperty@CRotateTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xf2d90, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e52d0, 0x243e0 bytes
    // win32kbase.sys .text:0x1e3090, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) get_float_animatable_property;
    
    // [IsPropertyAnimatable@CRotateTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xf2e00, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e5770, 0x243e0 bytes
    // win32kbase.sys .text:0x1e3530, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) is_property_animatable;
    
    // [SetFloatProperty@CRotateTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xf2e20, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e6780, 0x243e0 bytes
    // win32kbase.sys .text:0x1e4540, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) set_float_property;
    
    // [EmitUpdateCommands@CRotateTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf2cd0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e48b0, 0x243e0 bytes
    // win32kbase.sys .text:0x23cd80, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e2670, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) emit_update_commands;
    
    // [Initialize@CRotateTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf2df0, 0x1eb80 bytes
    // win32kbase.sys .text:0xbb820, 0x243e0 bytes
    // win32kbase.sys .text:0xce900, 0x27ef0 bytes
    // win32kbase.sys .text:0xb5650, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) initialize;
    
    // [SetRemarshalingFlags@CRotateTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf2ef0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e8a50, 0x243e0 bytes
    // win32kbase.sys .text:0x2407d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e6810, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
