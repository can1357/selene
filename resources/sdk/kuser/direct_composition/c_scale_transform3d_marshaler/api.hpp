#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_scale_transform3d_marshaler
{
    // [GetType@CScaleTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f6e0, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CScaleTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe8830, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitSetCenterXCommand@CScaleTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e01d0, 0x243e0 bytes
    // win32kbase.sys .text:0x23895c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ddf90, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_set_center_x_command;
    
    // [EmitSetCenterYCommand@CScaleTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e0390, 0x243e0 bytes
    // win32kbase.sys .text:0x238b1c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1de150, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_set_center_y_command;
    
    // [EmitSetCenterZCommand@CScaleTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e04e0, 0x243e0 bytes
    // win32kbase.sys .text:0x238c6c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1de2a0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_set_center_z_command;
    
    // [EmitSetScaleXCommand@CScaleTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e31e4, 0x243e0 bytes
    // win32kbase.sys .text:0x23b6bc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e0fa4, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) emit_set_scale_x_command;
    
    // [EmitSetScaleYCommand@CScaleTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e3254, 0x243e0 bytes
    // win32kbase.sys .text:0x23b72c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e1014, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) emit_set_scale_y_command;
    
    // [EmitSetScaleZCommand@CScaleTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e32c4, 0x243e0 bytes
    // win32kbase.sys .text:0x23b79c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e1084, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) emit_set_scale_z_command;
    
    // [GetFloatAnimatableProperty@CScaleTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xf3080, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e5370, 0x243e0 bytes
    // win32kbase.sys .text:0x1e3130, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) get_float_animatable_property;
    
    // [IsPropertyAnimatable@CScaleTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xf30f0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e57b0, 0x243e0 bytes
    // win32kbase.sys .text:0x1e3570, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) is_property_animatable;
    
    // [SetFloatProperty@CScaleTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xf3110, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e68f0, 0x243e0 bytes
    // win32kbase.sys .text:0x1e46b0, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_float_property;
    
    // [EmitUpdateCommands@CScaleTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf2ff0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e49d0, 0x243e0 bytes
    // win32kbase.sys .text:0x23cea0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e2790, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) emit_update_commands;
    
    // [Initialize@CScaleTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf30d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e5600, 0x243e0 bytes
    // win32kbase.sys .text:0x23d8e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e33c0, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) initialize;
    
    // [SetRemarshalingFlags@CScaleTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf31c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e8b70, 0x243e0 bytes
    // win32kbase.sys .text:0x2408f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e6930, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
