#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_read_base_animation_marshaler
{
    // [GetBaseAnimation@CSharedReadBaseAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f8a0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9d90, 0x243e0 bytes
    // win32kbase.sys .text:0xdae30, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8730, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) get_base_animation;
    
    // [GetExpressionType@CSharedReadBaseAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f4b0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9db0, 0x243e0 bytes
    // win32kbase.sys .text:0xdae50, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8750, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) get_expression_type;
    
    // [GetResourceMarshaler@CSharedReadBaseAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6e320, 0x1eb80 bytes
    // win32kbase.sys .text:0xb47a0, 0x243e0 bytes
    // win32kbase.sys .text:0xce4d0, 0x27ef0 bytes
    // win32kbase.sys .text:0xade00, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) get_resource_marshaler;
    
    // [IsOfType@CSharedReadBaseAnimationMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf5e10, 0x1eb80 bytes
    // win32kbase.sys .text:0x2017f0, 0x243e0 bytes
    // win32kbase.sys .text:0x2515c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ff5c0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) is_of_type;
};
#include "magic/api.end.hpp"
