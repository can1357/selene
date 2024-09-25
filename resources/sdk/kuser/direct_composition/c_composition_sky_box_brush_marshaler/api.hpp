#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_composition_sky_box_brush_marshaler
{
    // [SetBufferProperty@CCompositionSkyBoxBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x24c8c0, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) set_buffer_property;
    
    // [EmitUpdateCommands@CCompositionSkyBoxBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fd0f0, 0x243e0 bytes
    // win32kbase.sys .text:0x24c730, 0x27ef0 bytes
    // win32kbase.sys .text:0x1faec0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_update_commands;
    
    // [Initialize@CCompositionSkyBoxBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fd210, 0x243e0 bytes
    // win32kbase.sys .text:0x24c850, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fafe0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) initialize;
    
    // [ReleaseAllReferences@CCompositionSkyBoxBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fd230, 0x243e0 bytes
    // win32kbase.sys .text:0x24c870, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fb000, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) release_all_references;
    
    // [SetFloatProperty@CCompositionSkyBoxBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fd280, 0x243e0 bytes
    // win32kbase.sys .text:0x24c910, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fb050, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_float_property;
    
    // [SetIntegerProperty@CCompositionSkyBoxBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fd300, 0x243e0 bytes
    // win32kbase.sys .text:0x24c950, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fb0d0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CCompositionSkyBoxBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fd360, 0x243e0 bytes
    // win32kbase.sys .text:0x24c9b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fb130, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CCompositionSkyBoxBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fd440, 0x243e0 bytes
    // win32kbase.sys .text:0x24ca90, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fb210, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_remarshaling_flags;
    
    // [TryGetBrushSourceNoRef@CCompositionSkyBoxBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9e70, 0x243e0 bytes
    // win32kbase.sys .text:0xdaef0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8810, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) try_get_brush_source_no_ref;
};
#include "magic/api.end.hpp"
