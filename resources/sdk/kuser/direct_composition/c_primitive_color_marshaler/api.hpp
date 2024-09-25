#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_primitive_color_marshaler
{
    // [GetType@CPrimitiveColorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f6a0, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CPrimitiveColorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe87d0, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitUpdateCommands@CPrimitiveColorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4fb0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f2910, 0x243e0 bytes
    // win32kbase.sys .text:0x241420, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f06d0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_update_commands;
    
    // [GetFloatAnimatableProperty@CPrimitiveColorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf5010, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f2980, 0x243e0 bytes
    // win32kbase.sys .text:0x241490, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f0740, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) get_float_animatable_property;
    
    // [IsPropertyAnimatable@CPrimitiveColorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf5050, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f29d0, 0x243e0 bytes
    // win32kbase.sys .text:0x2414e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f0790, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) is_property_animatable;
    
    // [SetBufferProperty@CPrimitiveColorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf5070, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f29f0, 0x243e0 bytes
    // win32kbase.sys .text:0x241510, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f07b0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_buffer_property;
    
    // [SetFloatProperty@CPrimitiveColorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf50f0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f2a70, 0x243e0 bytes
    // win32kbase.sys .text:0x241590, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f0830, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_float_property;
    
    // [SetRemarshalingFlags@CPrimitiveColorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf5170, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f2af0, 0x243e0 bytes
    // win32kbase.sys .text:0x241610, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f08b0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
