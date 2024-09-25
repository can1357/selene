#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_linear_gradient_brush_marshaler
{
    // [EmitUpdateTransformCommand@CLinearGradientBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xef8f4, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_transform_command;
    
    // [GetType@CLinearGradientBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f650, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CLinearGradientBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe8740, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) is_of_type;
    
    // [ReleaseAllReferences@CLinearGradientBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xef990, 0x1eb80 bytes
    //
    _m3(sdk::unknown_ptr) release_all_references;
    
    // [SetReferenceProperty@CLinearGradientBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xefa80, 0x1eb80 bytes
    //
    _m4(sdk::unknown_ptr) set_reference_property;
    
    // [EmitUpdateCommands@CLinearGradientBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xef850, 0x1eb80 bytes
    // win32kbase.sys .text:0x1efd90, 0x243e0 bytes
    // win32kbase.sys .text:0x235360, 0x27ef0 bytes
    // win32kbase.sys .text:0x1edb50, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) emit_update_commands;
    
    // [Initialize@CLinearGradientBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xef960, 0x1eb80 bytes
    // win32kbase.sys .text:0x1efe20, 0x243e0 bytes
    // win32kbase.sys .text:0x2353f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1edbe0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) initialize;
    
    // [SetBufferProperty@CLinearGradientBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xef9c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1efe40, 0x243e0 bytes
    // win32kbase.sys .text:0x235410, 0x27ef0 bytes
    // win32kbase.sys .text:0x1edc00, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_buffer_property;
    
    // [SetRemarshalingFlags@CLinearGradientBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xefb20, 0x1eb80 bytes
    // win32kbase.sys .text:0x1efeb0, 0x243e0 bytes
    // win32kbase.sys .text:0x235480, 0x27ef0 bytes
    // win32kbase.sys .text:0x1edc70, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
