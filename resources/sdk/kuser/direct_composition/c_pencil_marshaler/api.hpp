#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_pencil_marshaler
{
    // [AddSegments@CPencilMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe974c, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) add_segments;
    
    // [EmitBasicStateUpdate@CPencilMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe97ec, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) emit_basic_state_update;
    
    // [EmitSegmentCountUpdate@CPencilMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe98bc, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) emit_segment_count_update;
    
    // [EmitSegmentUpdate@CPencilMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe9920, 0x1eb80 bytes
    //
    _m3(sdk::unknown_ptr) emit_segment_update;
    
    // [EmitStartPointUpdate@CPencilMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe99fc, 0x1eb80 bytes
    //
    _m4(sdk::unknown_ptr) emit_start_point_update;
    
    // [EmitUpdateCommands@CPencilMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe9a70, 0x1eb80 bytes
    //
    _m5(sdk::unknown_ptr) emit_update_commands;
    
    // [GetType@CPencilMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f7f0, 0x1eb80 bytes
    //
    _m6(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CPencilMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe9ae0, 0x1eb80 bytes
    //
    _m7(sdk::unknown_ptr) is_of_type;
    
    // [ReleaseAllReferences@CPencilMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe9af0, 0x1eb80 bytes
    //
    _m8(sdk::unknown_ptr) release_all_references;
    
    // [RemoveSegmentsAtEnd@CPencilMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe9b38, 0x1eb80 bytes
    //
    _m9(sdk::unknown_ptr) remove_segments_at_end;
    
    // [SetBufferProperty@CPencilMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe9b90, 0x1eb80 bytes
    //
    _n0(sdk::unknown_ptr) set_buffer_property;
    
    // [SetFloatProperty@CPencilMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe9d00, 0x1eb80 bytes
    //
    _n1(sdk::unknown_ptr) set_float_property;
    
    // [SetIntegerProperty@CPencilMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe9d50, 0x1eb80 bytes
    //
    _n2(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CPencilMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe9d70, 0x1eb80 bytes
    //
    _n3(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CPencilMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f800, 0x1eb80 bytes
    //
    _n4(sdk::unknown_ptr) set_remarshaling_flags;
    
    // [SetSegments@CPencilMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe9e1c, 0x1eb80 bytes
    //
    _n5(sdk::unknown_ptr) set_segments;
};
#include "magic/api.end.hpp"
