#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_base_expression_marshaler
{
    // [GetType@CBaseExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f520, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CBaseExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x634f0, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [SetReferenceArrayProperty@CBaseExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f39c0, 0x243e0 bytes
    // win32kbase.sys .text:0x2425c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f1780, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) set_reference_array_property;
    
    // [EmitSetBindingBroken@CBaseExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x63504, 0x1eb80 bytes
    // win32kbase.sys .text:0x762c0, 0x243e0 bytes
    // win32kbase.sys .text:0xa9ec0, 0x27ef0 bytes
    // win32kbase.sys .text:0x7cb0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_set_binding_broken;
    
    // [EmitSetTarget@CBaseExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x635f0, 0x1eb80 bytes
    // win32kbase.sys .text:0x763c4, 0x243e0 bytes
    // win32kbase.sys .text:0xa9fc4, 0x27ef0 bytes
    // win32kbase.sys .text:0x7db4, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_set_target;
    
    // [EmitSetTracingCookie@CBaseExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x63584, 0x1eb80 bytes
    // win32kbase.sys .text:0x76348, 0x243e0 bytes
    // win32kbase.sys .text:0xa9f48, 0x27ef0 bytes
    // win32kbase.sys .text:0x7d38, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) emit_set_tracing_cookie;
    
    // [EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x63980, 0x1eb80 bytes
    // win32kbase.sys .text:0x761b0, 0x243e0 bytes
    // win32kbase.sys .text:0xa9dc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x7ba0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x63950, 0x1eb80 bytes
    // win32kbase.sys .text:0xa5d70, 0x243e0 bytes
    // win32kbase.sys .text:0xa8cf0, 0x27ef0 bytes
    // win32kbase.sys .text:0x94d90, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) release_all_references;
    
    // [SetBufferProperty@CBaseExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x638c0, 0x1eb80 bytes
    // win32kbase.sys .text:0xa79a0, 0x243e0 bytes
    // win32kbase.sys .text:0xb8b70, 0x27ef0 bytes
    // win32kbase.sys .text:0x970d0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_buffer_property;
    
    // [SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x63790, 0x1eb80 bytes
    // win32kbase.sys .text:0xa1a60, 0x243e0 bytes
    // win32kbase.sys .text:0xb3740, 0x27ef0 bytes
    // win32kbase.sys .text:0x90ea0, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x63700, 0x1eb80 bytes
    // win32kbase.sys .text:0xa6350, 0x243e0 bytes
    // win32kbase.sys .text:0xb7650, 0x27ef0 bytes
    // win32kbase.sys .text:0x954e0, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xeabb0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f3ab0, 0x243e0 bytes
    // win32kbase.sys .text:0x242690, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f1870, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
