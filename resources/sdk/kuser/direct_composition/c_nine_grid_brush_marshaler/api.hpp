#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_nine_grid_brush_marshaler
{
    // [EmitUpdateInsetPropertyCommand@CNineGridBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xefde8, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) emit_update_inset_property_command;
    
    // [EmitUpdateIsCenterHollowCommand@CNineGridBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xefe3c, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) emit_update_is_center_hollow_command;
    
    // [EmitUpdateSourceCommand@CNineGridBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xefe78, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) emit_update_source_command;
    
    // [GetType@CNineGridBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f690, 0x1eb80 bytes
    //
    _m3(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CNineGridBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe87b0, 0x1eb80 bytes
    //
    _m4(sdk::unknown_ptr) is_of_type;
    
    // [TryGetBrushSourceNoRef@CNineGridBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f0330, 0x243e0 bytes
    // win32kbase.sys .text:0x2358b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ee0f0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) try_get_brush_source_no_ref;
    
    // [EmitUpdateCommands@CNineGridBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xefc60, 0x1eb80 bytes
    // win32kbase.sys .text:0x76600, 0x243e0 bytes
    // win32kbase.sys .text:0xb63a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x7ef0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) emit_update_commands;
    
    // [Initialize@CNineGridBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xefec0, 0x1eb80 bytes
    // win32kbase.sys .text:0xbb7d0, 0x243e0 bytes
    // win32kbase.sys .text:0xcf0d0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb5600, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) initialize;
    
    // [ReleaseAllReferences@CNineGridBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xefee0, 0x1eb80 bytes
    // win32kbase.sys .text:0xbc0b0, 0x243e0 bytes
    // win32kbase.sys .text:0xcf120, 0x27ef0 bytes
    // win32kbase.sys .text:0xb60b0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) release_all_references;
    
    // [SetFloatProperty@CNineGridBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xeff10, 0x1eb80 bytes
    // win32kbase.sys .text:0xac440, 0x243e0 bytes
    // win32kbase.sys .text:0xc2630, 0x27ef0 bytes
    // win32kbase.sys .text:0xa2380, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_float_property;
    
    // [SetIntegerProperty@CNineGridBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xeffc0, 0x1eb80 bytes
    // win32kbase.sys .text:0xb57b0, 0x243e0 bytes
    // win32kbase.sys .text:0xc7920, 0x27ef0 bytes
    // win32kbase.sys .text:0xaee30, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CNineGridBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xefff0, 0x1eb80 bytes
    // win32kbase.sys .text:0xa3860, 0x243e0 bytes
    // win32kbase.sys .text:0xb0d00, 0x27ef0 bytes
    // win32kbase.sys .text:0x929f0, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CNineGridBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf0090, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f01c0, 0x243e0 bytes
    // win32kbase.sys .text:0x235790, 0x27ef0 bytes
    // win32kbase.sys .text:0x1edf80, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
