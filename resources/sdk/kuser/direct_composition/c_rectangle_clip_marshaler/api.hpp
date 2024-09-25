#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_rectangle_clip_marshaler
{
    // [EmitRectangle@CRectangleClipMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xe9570, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) emit_rectangle;
    
    // [GetType@CRectangleClipMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6b7d0, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CRectangleClipMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6b920, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) is_of_type;
    
    // [EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6b7e0, 0x1eb80 bytes
    // win32kbase.sys .text:0x78e10, 0x243e0 bytes
    // win32kbase.sys .text:0xb8cc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x6fd0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [GetFloatAnimatableProperty@CRectangleClipMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf34f0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f17f0, 0x243e0 bytes
    // win32kbase.sys .text:0x236d80, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ef5b0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) get_float_animatable_property;
    
    // [Initialize@CRectangleClipMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6b7b0, 0x1eb80 bytes
    // win32kbase.sys .text:0xb3e00, 0x243e0 bytes
    // win32kbase.sys .text:0xc9e80, 0x27ef0 bytes
    // win32kbase.sys .text:0xac290, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) initialize;
    
    // [IsPropertyAnimatable@CRectangleClipMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf3580, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f1890, 0x243e0 bytes
    // win32kbase.sys .text:0x236e30, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ef650, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) is_property_animatable;
    
    // [SetBufferProperty@CRectangleClipMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6b950, 0x1eb80 bytes
    // win32kbase.sys .text:0xa48e0, 0x243e0 bytes
    // win32kbase.sys .text:0xb8200, 0x27ef0 bytes
    // win32kbase.sys .text:0xac980, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_buffer_property;
    
    // [SetFloatProperty@CRectangleClipMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6b9a0, 0x1eb80 bytes
    // win32kbase.sys .text:0xa4b50, 0x243e0 bytes
    // win32kbase.sys .text:0xb8080, 0x27ef0 bytes
    // win32kbase.sys .text:0x96bc0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_float_property;
    
    // [SetIntegerProperty@CRectangleClipMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6b8e0, 0x1eb80 bytes
    // win32kbase.sys .text:0xb4010, 0x243e0 bytes
    // win32kbase.sys .text:0x236e60, 0x27ef0 bytes
    // win32kbase.sys .text:0xac310, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_integer_property;
    
    // [SetRectangleHelper@CRectangleClipMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6ba80, 0x1eb80 bytes
    // win32kbase.sys .text:0xa4928, 0x243e0 bytes
    // win32kbase.sys .text:0xb8248, 0x27ef0 bytes
    // win32kbase.sys .text:0x15c88, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_rectangle_helper;
    
    // [SetRemarshalingFlags@CRectangleClipMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf35a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f18b0, 0x243e0 bytes
    // win32kbase.sys .text:0x236f40, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ef670, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
