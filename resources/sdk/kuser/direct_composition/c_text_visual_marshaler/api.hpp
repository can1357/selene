#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_text_visual_marshaler
{
    // [EmitSetGlyphRunsCommand@CTextVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1e12c0, 0x243e0 bytes
    // win32kbase.sys .text:0x1df080, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_set_glyph_runs_command;
    
    // [EmitSetStrikethroughsCommand@CTextVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1e3594, 0x243e0 bytes
    // win32kbase.sys .text:0x1e1354, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_set_strikethroughs_command;
    
    // [EmitSetUnderlinesCommand@CTextVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1e4040, 0x243e0 bytes
    // win32kbase.sys .text:0x1e1e00, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_set_underlines_command;
    
    // [EmitUpdateCommands@CTextVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e4f90, 0x243e0 bytes
    // win32kbase.sys .text:0x23d4f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e2d50, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CTextVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e5db0, 0x243e0 bytes
    // win32kbase.sys .text:0x23ded0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e3b70, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) release_all_references;
    
    // [SetReferenceArrayProperty@CTextVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e70d0, 0x243e0 bytes
    // win32kbase.sys .text:0x23ec40, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e4e90, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_reference_array_property;
    
    // [SetRemarshalingFlags@CTextVisualMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e9040, 0x243e0 bytes
    // win32kbase.sys .text:0x240de0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e6e00, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
