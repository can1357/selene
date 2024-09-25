#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_mask_brush_marshaler
{
    // [GetType@CMaskBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f680, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CMaskBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe8790, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [TryGetBrushSourceNoRef@CMaskBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ef370, 0x243e0 bytes
    // win32kbase.sys .text:0x234920, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ed130, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) try_get_brush_source_no_ref;
    
    // [EmitUpdateCommands@CMaskBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xef570, 0x1eb80 bytes
    // win32kbase.sys .text:0x78c10, 0x243e0 bytes
    // win32kbase.sys .text:0xb76f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x7270, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CMaskBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xef5e0, 0x1eb80 bytes
    // win32kbase.sys .text:0xb3140, 0x243e0 bytes
    // win32kbase.sys .text:0xc3920, 0x27ef0 bytes
    // win32kbase.sys .text:0xa97b0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) release_all_references;
    
    // [SetReferenceProperty@CMaskBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xef620, 0x1eb80 bytes
    // win32kbase.sys .text:0xa3bd0, 0x243e0 bytes
    // win32kbase.sys .text:0xb10c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x92d60, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CMaskBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xef6e0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ef350, 0x243e0 bytes
    // win32kbase.sys .text:0x234900, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ed110, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
