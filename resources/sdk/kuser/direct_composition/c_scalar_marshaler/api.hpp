#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_scalar_marshaler
{
    // [GetType@CScalarMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f6d0, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CScalarMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe8820, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitUpdateCommands@CScalarMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf1c90, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f2850, 0x243e0 bytes
    // win32kbase.sys .text:0x241360, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f0610, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_update_commands;
    
    // [GetExpressionType@CScalarMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f4b0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9db0, 0x243e0 bytes
    // win32kbase.sys .text:0xdae50, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8750, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) get_expression_type;
    
    // [SetFloatProperty@CScalarMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf1cf0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f28c0, 0x243e0 bytes
    // win32kbase.sys .text:0x2413d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f0680, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) set_float_property;
    
    // [SetRemarshalingFlags@CScalarMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf1d20, 0x1eb80 bytes
    // win32kbase.sys .text:0x1f28f0, 0x243e0 bytes
    // win32kbase.sys .text:0x241400, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f06b0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
