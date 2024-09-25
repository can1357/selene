#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_base_animation_marshaler
{
    // [GetBaseAnimation@CBaseAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9d90, 0x243e0 bytes
    // win32kbase.sys .text:0xdae30, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8730, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) get_base_animation;
    
    // [GetResourceMarshaler@CBaseAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xb47a0, 0x243e0 bytes
    // win32kbase.sys .text:0xce4d0, 0x27ef0 bytes
    // win32kbase.sys .text:0xade00, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) get_resource_marshaler;
};
#include "magic/api.end.hpp"
