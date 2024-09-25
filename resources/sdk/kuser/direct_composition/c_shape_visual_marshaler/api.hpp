#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shape_visual_marshaler
{
    // [ClearShapes@CShapeVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1eee08, 0x243e0 bytes
    // win32kbase.sys .text:0x2342cc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ecbc8, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) clear_shapes;
    
    // [EmitShapes@CShapeVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1eee7c, 0x243e0 bytes
    // win32kbase.sys .text:0x234348, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ecc3c, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_shapes;
    
    // [EmitUpdateCommands@CShapeVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1eeed0, 0x243e0 bytes
    // win32kbase.sys .text:0x2343a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ecc90, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CShapeVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1eef50, 0x243e0 bytes
    // win32kbase.sys .text:0x234420, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ecd10, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) release_all_references;
    
    // [SetReferenceArrayProperty@CShapeVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1eefa0, 0x243e0 bytes
    // win32kbase.sys .text:0x234470, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ecd60, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_reference_array_property;
    
    // [SetReferenceProperty@CShapeVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ef0c0, 0x243e0 bytes
    // win32kbase.sys .text:0x234570, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ece80, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CShapeVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ef1b0, 0x243e0 bytes
    // win32kbase.sys .text:0x234660, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ecf70, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
