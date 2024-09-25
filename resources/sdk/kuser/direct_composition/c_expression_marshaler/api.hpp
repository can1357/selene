#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_expression_marshaler
{
    // [GetType@CExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x63fe0, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x63c60, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitSetNodesInfo@CExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x63c78, 0x1eb80 bytes
    // win32kbase.sys .text:0x75df8, 0x243e0 bytes
    // win32kbase.sys .text:0xa9a08, 0x27ef0 bytes
    // win32kbase.sys .text:0x77e8, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_set_nodes_info;
    
    // [EmitSetReferenceInfo@CExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x63d78, 0x1eb80 bytes
    // win32kbase.sys .text:0x75f08, 0x243e0 bytes
    // win32kbase.sys .text:0xa9b18, 0x27ef0 bytes
    // win32kbase.sys .text:0x78f8, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_set_reference_info;
    
    // [EmitSetSources@CExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x63eac, 0x1eb80 bytes
    // win32kbase.sys .text:0x76064, 0x243e0 bytes
    // win32kbase.sys .text:0xa9c74, 0x27ef0 bytes
    // win32kbase.sys .text:0x7a54, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_set_sources;
    
    // [EmitUpdateCommands@CExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x63ff0, 0x1eb80 bytes
    // win32kbase.sys .text:0x75d90, 0x243e0 bytes
    // win32kbase.sys .text:0xa99a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x7780, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x64060, 0x1eb80 bytes
    // win32kbase.sys .text:0xa5c80, 0x243e0 bytes
    // win32kbase.sys .text:0xa8bf0, 0x27ef0 bytes
    // win32kbase.sys .text:0x94ca0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) release_all_references;
    
    // [SetBufferProperty@CExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x64140, 0x1eb80 bytes
    // win32kbase.sys .text:0xa78b0, 0x243e0 bytes
    // win32kbase.sys .text:0xb8a80, 0x27ef0 bytes
    // win32kbase.sys .text:0x96fe0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_buffer_property;
    
    // [SetIntegerProperty@CExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x64210, 0x1eb80 bytes
    // win32kbase.sys .text:0xa1990, 0x243e0 bytes
    // win32kbase.sys .text:0xb3670, 0x27ef0 bytes
    // win32kbase.sys .text:0x90dd0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x642f0, 0x1eb80 bytes
    // win32kbase.sys .text:0xa9440, 0x243e0 bytes
    // win32kbase.sys .text:0xbaa80, 0x27ef0 bytes
    // win32kbase.sys .text:0x9e520, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_reference_array_property;
    
    // [SetReferenceProperty@CExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x643e0, 0x1eb80 bytes
    // win32kbase.sys .text:0xa6230, 0x243e0 bytes
    // win32kbase.sys .text:0xb7530, 0x27ef0 bytes
    // win32kbase.sys .text:0x953c0, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf1d40, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f3960, 0x243e0 bytes
    // win32kbase.sys .text:0x242560, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f1720, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
