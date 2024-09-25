#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_ink_marshaler
{
    // [GetType@CInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f7c0, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe93e0, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [AddSegments@CInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe8f78, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eb85c, 0x243e0 bytes
    // win32kbase.sys .text:0x23055c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e961c, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) add_segments;
    
    // [EmitBasicStateUpdate@CInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe9018, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eb900, 0x243e0 bytes
    // win32kbase.sys .text:0x230600, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e96c0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_basic_state_update;
    
    // [EmitSegmentCountUpdate@CInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe90b8, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eb994, 0x243e0 bytes
    // win32kbase.sys .text:0x230694, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e9754, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_segment_count_update;
    
    // [EmitSegmentUpdate@CInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe911c, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eba08, 0x243e0 bytes
    // win32kbase.sys .text:0x230708, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e97c8, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) emit_segment_update;
    
    // [EmitStartPointUpdate@CInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe92f8, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ebbe8, 0x243e0 bytes
    // win32kbase.sys .text:0x2308cc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e99a8, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) emit_start_point_update;
    
    // [EmitUpdateCommands@CInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe9370, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ebc70, 0x243e0 bytes
    // win32kbase.sys .text:0x230950, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e9a30, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    // win32kbase.sys .text:0xa8860, 0x243e0 bytes
    // win32kbase.sys .text:0xad750, 0x27ef0 bytes
    // win32kbase.sys .text:0x15eb0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) release_all_references;
    
    // [RemoveSegmentsAtEnd@CInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe93e8, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ebcd8, 0x243e0 bytes
    // win32kbase.sys .text:0x2309b8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e9a98, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) remove_segments_at_end;
    
    // [SetBufferProperty@CInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe9440, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ebd30, 0x243e0 bytes
    // win32kbase.sys .text:0x230a10, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e9af0, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_buffer_property;
    
    // [SetIntegerProperty@CInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe95d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ebed0, 0x243e0 bytes
    // win32kbase.sys .text:0x230bb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e9c90, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) set_integer_property;
    
    // [SetRemarshalingFlags@CInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f7d0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9e90, 0x243e0 bytes
    // win32kbase.sys .text:0xdaf20, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8830, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) set_remarshaling_flags;
    
    // [SetSegments@CInkMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe95f0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ebf00, 0x243e0 bytes
    // win32kbase.sys .text:0x230be0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e9cc0, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) set_segments;
};
#include "magic/api.end.hpp"
