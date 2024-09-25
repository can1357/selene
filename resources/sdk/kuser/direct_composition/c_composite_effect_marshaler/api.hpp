#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_composite_effect_marshaler
{
    // [GetType@CCompositeEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x83820, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CCompositeEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x3910, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitData@CCompositeEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3928, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eb718, 0x243e0 bytes
    // win32kbase.sys .text:0x2303e8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e94d8, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_data;
    
    // [EmitUpdateCommands@CCompositeEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3990, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eb780, 0x243e0 bytes
    // win32kbase.sys .text:0x230450, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e9540, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [GetMaxInputs@CCompositeEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f4c0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc6440, 0x243e0 bytes
    // win32kbase.sys .text:0xdae60, 0x27ef0 bytes
    // win32kbase.sys .text:0x72e60, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) get_max_inputs;
    
    // [Initialize@CCompositeEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3980, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eb7e0, 0x243e0 bytes
    // win32kbase.sys .text:0x2304b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e95a0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) initialize;
    
    // [SetIntegerProperty@CCompositeEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x39e0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eb800, 0x243e0 bytes
    // win32kbase.sys .text:0x2304d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e95c0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_integer_property;
    
    // [SetRemarshalingFlags@CCompositeEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4aa0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eb840, 0x243e0 bytes
    // win32kbase.sys .text:0x230510, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e9600, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
