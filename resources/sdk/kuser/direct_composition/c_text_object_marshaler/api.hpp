#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_text_object_marshaler
{
    // [EmitSetBaselineOriginCommand@CTextObjectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1dfe28, 0x243e0 bytes
    // win32kbase.sys .text:0x238704, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ddbe8, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_set_baseline_origin_command;
    
    // [EmitSetBrushCommand@CTextObjectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e0070, 0x243e0 bytes
    // win32kbase.sys .text:0x2387fc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dde30, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_set_brush_command;
    
    // [EmitSetSnappingOffsetCommand@CTextObjectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e33b8, 0x243e0 bytes
    // win32kbase.sys .text:0x23b890, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e1178, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_set_snapping_offset_command;
    
    // [EmitUpdateCommands@CTextObjectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e4f34, 0x243e0 bytes
    // win32kbase.sys .text:0x23d48c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e2cf4, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CTextObjectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e5c00, 0x243e0 bytes
    // win32kbase.sys .text:0x23dd20, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e39c0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) release_all_references;
    
    // [SetBufferProperty@CTextObjectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e6330, 0x243e0 bytes
    // win32kbase.sys .text:0x23e520, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e40f0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_buffer_property;
    
    // [SetReferenceProperty@CTextObjectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e83d0, 0x243e0 bytes
    // win32kbase.sys .text:0x23ffd0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e6190, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CTextObjectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1e9020, 0x243e0 bytes
    // win32kbase.sys .text:0x240dc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e6de0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
