#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_linear_transfer_effect_marshaler
{
    // [GetType@CLinearTransferEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f660, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CLinearTransferEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xe8760, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitData@CLinearTransferEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf462c, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eab00, 0x243e0 bytes
    // win32kbase.sys .text:0x22f780, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e88c0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_data;
    
    // [EmitUpdateCommands@CLinearTransferEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4700, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eac00, 0x243e0 bytes
    // win32kbase.sys .text:0x22f880, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e89c0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [GetFloatAnimatableProperty@CLinearTransferEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4750, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eac60, 0x243e0 bytes
    // win32kbase.sys .text:0x22f8e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e8a20, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) get_float_animatable_property;
    
    // [Initialize@CLinearTransferEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf47c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eace0, 0x243e0 bytes
    // win32kbase.sys .text:0x22f960, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e8aa0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) initialize;
    
    // [IsPropertyAnimatable@CLinearTransferEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4800, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ead30, 0x243e0 bytes
    // win32kbase.sys .text:0x22f9b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e8af0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) is_property_animatable;
    
    // [SetFloatProperty@CLinearTransferEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4830, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ead70, 0x243e0 bytes
    // win32kbase.sys .text:0x22f9f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e8b30, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_float_property;
    
    // [SetIntegerProperty@CLinearTransferEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4910, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eae80, 0x243e0 bytes
    // win32kbase.sys .text:0x22fb10, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e8c40, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_integer_property;
    
    // [SetRemarshalingFlags@CLinearTransferEffectMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf4a00, 0x1eb80 bytes
    // win32kbase.sys .text:0x1eaf90, 0x243e0 bytes
    // win32kbase.sys .text:0x22fc20, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e8d50, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
