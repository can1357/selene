#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_saturation_effect_marshaler
{
    // [GetType@CSaturationEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f6c0, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CSaturationEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe8800, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitData@CSaturationEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4180, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ea514, 0x243e0 bytes
    // win32kbase.sys .text:0x22f194, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e82d4, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_data;
    
    // [EmitUpdateCommands@CSaturationEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf41e0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ea580, 0x243e0 bytes
    // win32kbase.sys .text:0x22f200, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e8340, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [GetFloatAnimatableProperty@CSaturationEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf3870, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9280, 0x243e0 bytes
    // win32kbase.sys .text:0x22db70, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e7040, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) get_float_animatable_property;
    
    // [Initialize@CSaturationEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4230, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ea5e0, 0x243e0 bytes
    // win32kbase.sys .text:0x22f260, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e83a0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) initialize;
    
    // [IsPropertyAnimatable@CSaturationEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7ac30, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e92e0, 0x243e0 bytes
    // win32kbase.sys .text:0x22dbe0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e70a0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) is_property_animatable;
    
    // [SetFloatProperty@CSaturationEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4130, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e9300, 0x243e0 bytes
    // win32kbase.sys .text:0x22dc10, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e70c0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_float_property;
    
    // [SetRemarshalingFlags@CSaturationEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4260, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ea610, 0x243e0 bytes
    // win32kbase.sys .text:0x22f290, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e83d0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
