#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_component_transform3d_marshaler
{
    // [GetType@CComponentTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6b530, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_type;
    
    // [IsOfType@CComponentTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x6b540, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) is_of_type;
    
    // [GetFloatAnimatableProperty@CComponentTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xf2350, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ee180, 0x243e0 bytes
    // win32kbase.sys .text:0x1ebf40, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) get_float_animatable_property;
    
    // [IsPropertyAnimatable@CComponentTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xf2410, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ee270, 0x243e0 bytes
    // win32kbase.sys .text:0x1ec030, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) is_property_animatable;
    
    // [EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6b3b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x76a20, 0x243e0 bytes
    // win32kbase.sys .text:0xb3c90, 0x27ef0 bytes
    // win32kbase.sys .text:0x8310, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_update_commands;
    
    // [Initialize@CComponentTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6b380, 0x1eb80 bytes
    // win32kbase.sys .text:0xb2900, 0x243e0 bytes
    // win32kbase.sys .text:0xc9e30, 0x27ef0 bytes
    // win32kbase.sys .text:0xa8920, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) initialize;
    
    // [SetBufferProperty@CComponentTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6b560, 0x1eb80 bytes
    // win32kbase.sys .text:0xaaa70, 0x243e0 bytes
    // win32kbase.sys .text:0xc34d0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa0580, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_buffer_property;
    
    // [SetFloatProperty@CComponentTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf2430, 0x1eb80 bytes
    // win32kbase.sys .text:0xb6430, 0x243e0 bytes
    // win32kbase.sys .text:0x233110, 0x27ef0 bytes
    // win32kbase.sys .text:0xafd70, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_float_property;
    
    // [SetRemarshalingFlags@CComponentTransform3DMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf2650, 0x1eb80 bytes
    // win32kbase.sys .text:0x1ee290, 0x243e0 bytes
    // win32kbase.sys .text:0x233140, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ec050, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
