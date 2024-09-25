#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_flood_effect_marshaler
{
    // [GetType@CFloodEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f610, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CFloodEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe86d0, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitData@CFloodEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf44f8, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ea930, 0x243e0 bytes
    // win32kbase.sys .text:0x22f5b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e86f0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_data;
    
    // [EmitUpdateCommands@CFloodEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4570, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ea9b0, 0x243e0 bytes
    // win32kbase.sys .text:0x22f630, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e8770, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [GetMaxInputs@CFloodEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9b00, 0x243e0 bytes
    // win32kbase.sys .text:0xdab00, 0x27ef0 bytes
    // win32kbase.sys .text:0xc84a0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) get_max_inputs;
    
    // [Initialize@CFloodEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf45c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eaa10, 0x243e0 bytes
    // win32kbase.sys .text:0x22f690, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e87d0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) initialize;
    
    // [SetBufferProperty@CFloodEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4cb0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eaa40, 0x243e0 bytes
    // win32kbase.sys .text:0x22f6c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e8800, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_buffer_property;
    
    // [SetRemarshalingFlags@CFloodEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf45f0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eaac0, 0x243e0 bytes
    // win32kbase.sys .text:0x22f740, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e8880, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
