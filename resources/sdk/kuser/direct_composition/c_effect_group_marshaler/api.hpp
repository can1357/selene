#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_effect_group_marshaler
{
    // [GetType@CEffectGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f7a0, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CEffectGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7ac40, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [EmitSetOpacityCommand@CEffectGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xba2d0, 0x243e0 bytes
    // win32kbase.sys .text:0xd4500, 0x27ef0 bytes
    // win32kbase.sys .text:0xb3bf0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_set_opacity_command;
    
    // [GetFloatAnimatableProperty@CEffectGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x4dd0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e5160, 0x243e0 bytes
    // win32kbase.sys .text:0x1e2f20, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) get_float_animatable_property;
    
    // [IsPropertyAnimatable@CEffectGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x7ac30, 0x1eb80 bytes
    // win32kbase.sys .text:0x4980, 0x243e0 bytes
    // win32kbase.sys .text:0x4980, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) is_property_animatable;
    
    // [SetFloatProperty@CEffectGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x7abf0, 0x1eb80 bytes
    // win32kbase.sys .text:0xbdf30, 0x243e0 bytes
    // win32kbase.sys .text:0xb7d40, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_float_property;
    
    // [EmitUpdateCommands@CEffectGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7aca0, 0x1eb80 bytes
    // win32kbase.sys .text:0xba260, 0x243e0 bytes
    // win32kbase.sys .text:0xd4490, 0x27ef0 bytes
    // win32kbase.sys .text:0xb3b80, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) emit_update_commands;
    
    // [Initialize@CEffectGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7ad20, 0x1eb80 bytes
    // win32kbase.sys .text:0xc34b0, 0x243e0 bytes
    // win32kbase.sys .text:0xd9750, 0x27ef0 bytes
    // win32kbase.sys .text:0xbc840, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) initialize;
    
    // [ReleaseAllReferences@CEffectGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7ac50, 0x1eb80 bytes
    // win32kbase.sys .text:0xc1fd0, 0x243e0 bytes
    // win32kbase.sys .text:0xd8780, 0x27ef0 bytes
    // win32kbase.sys .text:0xbb720, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) release_all_references;
    
    // [SetIntegerProperty@CEffectGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f780, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e6b20, 0x243e0 bytes
    // win32kbase.sys .text:0x23e5e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e48e0, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CEffectGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4d60, 0x1eb80 bytes
    // win32kbase.sys .text:0xbfeb0, 0x243e0 bytes
    // win32kbase.sys .text:0x23ee20, 0x27ef0 bytes
    // win32kbase.sys .text:0xb9820, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CEffectGroupMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xedec0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1e8590, 0x243e0 bytes
    // win32kbase.sys .text:0x240290, 0x27ef0 bytes
    // win32kbase.sys .text:0x1e6350, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
