#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_gradient_brush_marshaler
{
    // [ClearStops@CGradientBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ef8c0, 0x243e0 bytes
    // win32kbase.sys .text:0x234ea0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ed680, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) clear_stops;
    
    // [EmitUpdateCommands@CGradientBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ef924, 0x243e0 bytes
    // win32kbase.sys .text:0x234f08, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ed6e4, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CGradientBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1efa30, 0x243e0 bytes
    // win32kbase.sys .text:0x235010, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ed7f0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) release_all_references;
    
    // [SetIntegerProperty@CGradientBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1efa70, 0x243e0 bytes
    // win32kbase.sys .text:0x235050, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ed830, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceArrayProperty@CGradientBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1efac0, 0x243e0 bytes
    // win32kbase.sys .text:0x2350a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ed880, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_reference_array_property;
    
    // [SetReferenceProperty@CGradientBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1efbb0, 0x243e0 bytes
    // win32kbase.sys .text:0x235180, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ed970, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CGradientBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1efc78, 0x243e0 bytes
    // win32kbase.sys .text:0x235248, 0x27ef0 bytes
    // win32kbase.sys .text:0x1eda38, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_remarshaling_flags;
    
    // [TryGetBrushSourceNoRef@CGradientBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9e70, 0x243e0 bytes
    // win32kbase.sys .text:0xdaef0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8810, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) try_get_brush_source_no_ref;
};
#include "magic/api.end.hpp"
