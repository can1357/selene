#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_surface_brush_marshaler
{
    // [EmitUpdateTransformCommand@CSurfaceBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xef268, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_transform_command;
    
    // [GetType@CSurfaceBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f720, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CSurfaceBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe8890, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) is_of_type;
    
    // [TryGetBrushSourceNoRef@CSurfaceBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9e70, 0x243e0 bytes
    // win32kbase.sys .text:0xdaef0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8810, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) try_get_brush_source_no_ref;
    
    // [EmitUpdateCommands@CSurfaceBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xef160, 0x1eb80 bytes
    // win32kbase.sys .text:0x77090, 0x243e0 bytes
    // win32kbase.sys .text:0x27840, 0x27ef0 bytes
    // win32kbase.sys .text:0x8980, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_update_commands;
    
    // [Initialize@CSurfaceBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xef2b0, 0x1eb80 bytes
    // win32kbase.sys .text:0xb3b40, 0x243e0 bytes
    // win32kbase.sys .text:0xc7960, 0x27ef0 bytes
    // win32kbase.sys .text:0xac040, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) initialize;
    
    // [ReleaseAllReferences@CSurfaceBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xef5e0, 0x1eb80 bytes
    // win32kbase.sys .text:0xb3140, 0x243e0 bytes
    // win32kbase.sys .text:0xc3920, 0x27ef0 bytes
    // win32kbase.sys .text:0xa97b0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) release_all_references;
    
    // [SetBufferProperty@CSurfaceBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xef2e0, 0x1eb80 bytes
    // win32kbase.sys .text:0xa95d0, 0x243e0 bytes
    // win32kbase.sys .text:0xbf6f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x9e6b0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_buffer_property;
    
    // [SetFloatProperty@CSurfaceBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xef320, 0x1eb80 bytes
    // win32kbase.sys .text:0xb1080, 0x243e0 bytes
    // win32kbase.sys .text:0xc2450, 0x27ef0 bytes
    // win32kbase.sys .text:0xa7510, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_float_property;
    
    // [SetIntegerProperty@CSurfaceBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xef370, 0x1eb80 bytes
    // win32kbase.sys .text:0xb17f0, 0x243e0 bytes
    // win32kbase.sys .text:0xc3830, 0x27ef0 bytes
    // win32kbase.sys .text:0xa7d00, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CSurfaceBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xef3c0, 0x1eb80 bytes
    // win32kbase.sys .text:0xa4350, 0x243e0 bytes
    // win32kbase.sys .text:0xb6290, 0x27ef0 bytes
    // win32kbase.sys .text:0x93a40, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CSurfaceBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xef480, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ef2e0, 0x243e0 bytes
    // win32kbase.sys .text:0x234890, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ed0a0, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
