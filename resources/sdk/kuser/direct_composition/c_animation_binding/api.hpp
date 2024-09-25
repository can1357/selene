#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_animation_binding
{
    // [RemovingToBound@CAnimationBinding@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1df2c4, 0x243e0 bytes
    // win32kbase.sys .text:0x22d7a8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dd084, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) removing_to_bound;
    
    // [Create@CAnimationBinding@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6e6e8, 0x1eb80 bytes
    // win32kbase.sys .text:0x7ef20, 0x243e0 bytes
    // win32kbase.sys .text:0x9e2a8, 0x27ef0 bytes
    // win32kbase.sys .text:0x7f844, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) create;
    
    // [DetachAndDelete@CAnimationBinding@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6e350, 0x1eb80 bytes
    // win32kbase.sys .text:0x7fa18, 0x243e0 bytes
    // win32kbase.sys .text:0x9fc38, 0x27ef0 bytes
    // win32kbase.sys .text:0x80098, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) detach_and_delete;
    
    // [Initialize@CAnimationBinding@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x6e3f8, 0x1eb80 bytes
    // win32kbase.sys .text:0x7ef9c, 0x243e0 bytes
    // win32kbase.sys .text:0x9e34c, 0x27ef0 bytes
    // win32kbase.sys .text:0x7f8c0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) initialize;
    
    // [Reassign@CAnimationBinding@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xe8e60, 0x1eb80 bytes
    // win32kbase.sys .text:0x1df22c, 0x243e0 bytes
    // win32kbase.sys .text:0x22d710, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dcfec, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) reassign;
    
    // [SetTargetProperty@CAnimationBinding@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x474c, 0x1eb80 bytes
    // win32kbase.sys .text:0xc7f70, 0x243e0 bytes
    // win32kbase.sys .text:0x22d7dc, 0x27ef0 bytes
    // win32kbase.sys .text:0xc0b70, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_target_property;
};
#include "magic/api.end.hpp"
