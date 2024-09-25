#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_component_transform2d_marshaler
{
    // [GetType@CComponentTransform2DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f580, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CComponentTransform2DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe8630, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitUpdateCommands@CComponentTransform2DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf1ff0, 0x1eb80 bytes
    // win32kbase.sys .text:0x76e00, 0x243e0 bytes
    // win32kbase.sys .text:0x7390, 0x27ef0 bytes
    // win32kbase.sys .text:0x86f0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_update_commands;
    
    // [Initialize@CComponentTransform2DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf2100, 0x1eb80 bytes
    // win32kbase.sys .text:0xb3350, 0x243e0 bytes
    // win32kbase.sys .text:0x9900, 0x27ef0 bytes
    // win32kbase.sys .text:0xaba40, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) initialize;
    
    // [SetBufferProperty@CComponentTransform2DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf2120, 0x1eb80 bytes
    // win32kbase.sys .text:0xaa9c0, 0x243e0 bytes
    // win32kbase.sys .text:0x232ed0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa04d0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_buffer_property;
    
    // [SetFloatProperty@CComponentTransform2DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf2210, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ee030, 0x243e0 bytes
    // win32kbase.sys .text:0x232fc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ebdf0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_float_property;
    
    // [SetRemarshalingFlags@CComponentTransform2DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf2250, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ee060, 0x243e0 bytes
    // win32kbase.sys .text:0x232ff0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ebe20, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
