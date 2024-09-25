#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_holographic_exclusive_mode_marshaler
{
    // [EmitExclusiveOpacity@CHolographicExclusiveModeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f655c, 0x243e0 bytes
    // win32kbase.sys .text:0x244e6c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f431c, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_exclusive_opacity;
    
    // [EmitUpdateCommands@CHolographicExclusiveModeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f65d0, 0x243e0 bytes
    // win32kbase.sys .text:0x244ee0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f4390, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_update_commands;
    
    // [GetFloatAnimatableProperty@CHolographicExclusiveModeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f6660, 0x243e0 bytes
    // win32kbase.sys .text:0x244f70, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f4420, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) get_float_animatable_property;
    
    // [Initialize@CHolographicExclusiveModeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f6690, 0x243e0 bytes
    // win32kbase.sys .text:0x244fb0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f4450, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) initialize;
    
    // [IsPropertyAnimatable@CHolographicExclusiveModeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f66b0, 0x243e0 bytes
    // win32kbase.sys .text:0x244fd0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f4470, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) is_property_animatable;
    
    // [SetFloatProperty@CHolographicExclusiveModeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f66d0, 0x243e0 bytes
    // win32kbase.sys .text:0x245000, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f4490, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_float_property;
    
    // [SetIntegerProperty@CHolographicExclusiveModeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f6700, 0x243e0 bytes
    // win32kbase.sys .text:0x245030, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f44c0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_integer_property;
    
    // [SetRemarshalingFlags@CHolographicExclusiveModeMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f6740, 0x243e0 bytes
    // win32kbase.sys .text:0x245070, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f4500, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
