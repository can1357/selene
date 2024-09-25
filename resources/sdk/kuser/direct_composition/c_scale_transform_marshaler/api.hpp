#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_scale_transform_marshaler
{
    // [GetType@CScaleTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7fba0, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CScaleTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x3620, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitSetCenterYCommand@CScaleTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7bb38, 0x243e0 bytes
    // win32kbase.sys .text:0xbac68, 0x27ef0 bytes
    // win32kbase.sys .text:0x5dd8, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_set_center_y_command;
    
    // [EmitSetScaleXCommand@CScaleTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7ba50, 0x243e0 bytes
    // win32kbase.sys .text:0xbad00, 0x27ef0 bytes
    // win32kbase.sys .text:0x5e70, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_set_scale_x_command;
    
    // [EmitSetScaleYCommand@CScaleTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7bb60, 0x243e0 bytes
    // win32kbase.sys .text:0xbac90, 0x27ef0 bytes
    // win32kbase.sys .text:0x5e00, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_set_scale_y_command;
    
    // [GetFloatAnimatableProperty@CScaleTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xf2f60, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e53d0, 0x243e0 bytes
    // win32kbase.sys .text:0x1e3190, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) get_float_animatable_property;
    
    // [IsPropertyAnimatable@CScaleTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x3650, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e57d0, 0x243e0 bytes
    // win32kbase.sys .text:0x1e3590, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) is_property_animatable;
    
    // [SetFloatProperty@CScaleTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x35a0, 0x1eb80 bytes
    // win32kbase.sys .text:0xaf190, 0x243e0 bytes
    // win32kbase.sys .text:0xa54d0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_float_property;
    
    // [EmitUpdateCommands@CScaleTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3510, 0x1eb80 bytes
    // win32kbase.sys .text:0x7bac0, 0x243e0 bytes
    // win32kbase.sys .text:0xbabf0, 0x27ef0 bytes
    // win32kbase.sys .text:0x5d60, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) emit_update_commands;
    
    // [Initialize@CScaleTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3500, 0x1eb80 bytes
    // win32kbase.sys .text:0xbaae0, 0x243e0 bytes
    // win32kbase.sys .text:0xcc8d0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb4400, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) initialize;
    
    // [SetRemarshalingFlags@CScaleTransformMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf2fa0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e8c10, 0x243e0 bytes
    // win32kbase.sys .text:0x240990, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e69d0, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
