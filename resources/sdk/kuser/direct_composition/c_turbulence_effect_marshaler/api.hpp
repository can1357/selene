#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_turbulence_effect_marshaler
{
    // [GetType@CTurbulenceEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f4c0, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CTurbulenceEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe8910, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitData@CTurbulenceEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4280, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ea634, 0x243e0 bytes
    // win32kbase.sys .text:0x22f2b4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e83f4, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_data;
    
    // [EmitUpdateCommands@CTurbulenceEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4320, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ea6f0, 0x243e0 bytes
    // win32kbase.sys .text:0x22f370, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e84b0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [GetMaxInputs@CTurbulenceEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) get_max_inputs;
    
    // [Initialize@CTurbulenceEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4370, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ea750, 0x243e0 bytes
    // win32kbase.sys .text:0x22f3d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e8510, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) initialize;
    
    // [SetBufferProperty@CTurbulenceEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf43b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ea7a0, 0x243e0 bytes
    // win32kbase.sys .text:0x22f420, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e8560, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_buffer_property;
    
    // [SetIntegerProperty@CTurbulenceEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4430, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ea830, 0x243e0 bytes
    // win32kbase.sys .text:0x22f4b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e85f0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_integer_property;
    
    // [SetRemarshalingFlags@CTurbulenceEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4480, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ea8a0, 0x243e0 bytes
    // win32kbase.sys .text:0x22f520, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e8660, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
