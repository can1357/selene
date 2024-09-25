#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_generic_ink_marshaler
{
    // [AddSegments@CGenericInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ec1d4, 0x243e0 bytes
    // win32kbase.sys .text:0x230eac, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e9f94, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) add_segments;
    
    // [EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ec280, 0x243e0 bytes
    // win32kbase.sys .text:0x230f58, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ea040, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_segment_update;
    
    // [EmitUpdateCommands@CGenericInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ec400, 0x243e0 bytes
    // win32kbase.sys .text:0x2310f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ea1c0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_update_commands;
    
    // [GetSegmentCount@CGenericInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ec520, 0x243e0 bytes
    // win32kbase.sys .text:0x231210, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ea2e0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) get_segment_count;
    
    // [NeedsSegmentUpdate@CGenericInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ec544, 0x243e0 bytes
    // win32kbase.sys .text:0x231234, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ea304, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) needs_segment_update;
    
    // [ReleaseAllReferences@CGenericInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ec580, 0x243e0 bytes
    // win32kbase.sys .text:0x231270, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ea340, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) release_all_references;
    
    // [RemoveSegmentsAtEnd@CGenericInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ec5cc, 0x243e0 bytes
    // win32kbase.sys .text:0x2312f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ea38c, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) remove_segments_at_end;
    
    // [SetBufferProperty@CGenericInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ec660, 0x243e0 bytes
    // win32kbase.sys .text:0x231380, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ea420, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_buffer_property;
    
    // [SetIntegerProperty@CGenericInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ec700, 0x243e0 bytes
    // win32kbase.sys .text:0x231420, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ea4c0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_integer_property;
    
    // [SetProperties@CGenericInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ec800, 0x243e0 bytes
    // win32kbase.sys .text:0x23154c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ea5c0, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_properties;
    
    // [SetReferenceProperty@CGenericInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ec890, 0x243e0 bytes
    // win32kbase.sys .text:0x2315e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ea650, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CGenericInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ec9b0, 0x243e0 bytes
    // win32kbase.sys .text:0x231700, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ea770, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
