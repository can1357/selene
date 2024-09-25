#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_effect_brush_marshaler
{
    // [GetType@CEffectBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f5f0, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CEffectBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe86c0, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [TryGetBrushSourceNoRef@CEffectBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xba1e0, 0x243e0 bytes
    // win32kbase.sys .text:0xcf080, 0x27ef0 bytes
    // win32kbase.sys .text:0xb3ac0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) try_get_brush_source_no_ref;
    
    // [EmitSetInputs@CEffectBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xea674, 0x1eb80 bytes
    // win32kbase.sys .text:0xae4dc, 0x243e0 bytes
    // win32kbase.sys .text:0xc06a8, 0x27ef0 bytes
    // win32kbase.sys .text:0xa47fc, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_set_inputs;
    
    // [EmitUpdateCommands@CEffectBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xea710, 0x1eb80 bytes
    // win32kbase.sys .text:0xae330, 0x243e0 bytes
    // win32kbase.sys .text:0xc0620, 0x27ef0 bytes
    // win32kbase.sys .text:0xa4650, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CEffectBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xea790, 0x1eb80 bytes
    // win32kbase.sys .text:0xb1170, 0x243e0 bytes
    // win32kbase.sys .text:0xc1600, 0x27ef0 bytes
    // win32kbase.sys .text:0xa7600, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) release_all_references;
    
    // [SetReferenceProperty@CEffectBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xea820, 0x1eb80 bytes
    // win32kbase.sys .text:0xa3960, 0x243e0 bytes
    // win32kbase.sys .text:0xb0e00, 0x27ef0 bytes
    // win32kbase.sys .text:0x92af0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CEffectBrushMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xea9f0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ef320, 0x243e0 bytes
    // win32kbase.sys .text:0x2348d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ed0e0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
