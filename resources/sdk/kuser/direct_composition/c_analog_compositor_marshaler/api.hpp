#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_analog_compositor_marshaler
{
    // [EmitActiveExclusiveView@CAnalogCompositorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xf35c0, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) emit_active_exclusive_view;
    
    // [EmitCreate@CAnalogCompositorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xf3620, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) emit_create;
    
    // [EmitExclusiveOpacity@CAnalogCompositorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xf3680, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) emit_exclusive_opacity;
    
    // [EmitUpdateCommands@CAnalogCompositorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x7be80, 0x1eb80 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [GetFloatAnimatableProperty@CAnalogCompositorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xf36f0, 0x1eb80 bytes
    //
    _m4(sdk::unknown_ptr) get_float_animatable_property;
    
    // [GetType@CAnalogCompositorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8f4d0, 0x1eb80 bytes
    //
    _m5(sdk::unknown_ptr) get_type;
    
    // [Initialize@CAnalogCompositorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xf3710, 0x1eb80 bytes
    //
    _m6(sdk::unknown_ptr) initialize;
    
    // [IsPropertyAnimatable@CAnalogCompositorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xf3720, 0x1eb80 bytes
    //
    _m7(sdk::unknown_ptr) is_property_animatable;
    
    // [SetFloatProperty@CAnalogCompositorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xf3740, 0x1eb80 bytes
    //
    _m8(sdk::unknown_ptr) set_float_property;
    
    // [SetIntegerProperty@CAnalogCompositorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xf3760, 0x1eb80 bytes
    //
    _m9(sdk::unknown_ptr) set_integer_property;
    
    // [SetRemarshalingFlags@CAnalogCompositorMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xf3780, 0x1eb80 bytes
    //
    _n0(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
