#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_composition_glyph_run_marshaler
{
    // [EmitSetOffsetInSurfaceCommand@CCompositionGlyphRunMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e2540, 0x243e0 bytes
    // win32kbase.sys .text:0x23aaec, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e0300, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_set_offset_in_surface_command;
    
    // [EmitSetSurfaceScaleCommand@CCompositionGlyphRunMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e37a0, 0x243e0 bytes
    // win32kbase.sys .text:0x23bb64, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e1560, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_set_surface_scale_command;
    
    // [EmitUpdateCommands@CCompositionGlyphRunMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e42a0, 0x243e0 bytes
    // win32kbase.sys .text:0x23c580, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e2060, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_update_commands;
    
    // [Initialize@CCompositionGlyphRunMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e5490, 0x243e0 bytes
    // win32kbase.sys .text:0x23d740, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e3250, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) initialize;
    
    // [ReleaseAllReferences@CCompositionGlyphRunMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e58b0, 0x243e0 bytes
    // win32kbase.sys .text:0x23d9b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e3670, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) release_all_references;
    
    // [SetBufferProperty@CCompositionGlyphRunMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e5e30, 0x243e0 bytes
    // win32kbase.sys .text:0x23df30, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e3bf0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_buffer_property;
    
    // [SetRemarshalingFlags@CCompositionGlyphRunMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e84e0, 0x243e0 bytes
    // win32kbase.sys .text:0x240190, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e62a0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
