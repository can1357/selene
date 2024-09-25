#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_color_gradient_stop_marshaler
{
    // [EmitUpdateCommands@CColorGradientStopMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ef4a0, 0x243e0 bytes
    // win32kbase.sys .text:0x234a50, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ed260, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_commands;
    
    // [GetFloatAnimatableProperty@CColorGradientStopMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ef520, 0x243e0 bytes
    // win32kbase.sys .text:0x234ad0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ed2e0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) get_float_animatable_property;
    
    // [IsPropertyAnimatable@CColorGradientStopMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ef540, 0x243e0 bytes
    // win32kbase.sys .text:0x234b00, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ed300, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) is_property_animatable;
    
    // [SetBufferProperty@CColorGradientStopMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ef560, 0x243e0 bytes
    // win32kbase.sys .text:0x234b30, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ed320, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_buffer_property;
    
    // [SetFloatProperty@CColorGradientStopMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ef5a0, 0x243e0 bytes
    // win32kbase.sys .text:0x234b70, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ed360, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_float_property;
    
    // [SetRemarshalingFlags@CColorGradientStopMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9ec0, 0x243e0 bytes
    // win32kbase.sys .text:0xdaf50, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8860, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
