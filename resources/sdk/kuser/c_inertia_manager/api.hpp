#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_inertia_manager
{
    // [AddInertiaInfo@CInertiaManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b25b4, 0x243e0 bytes
    // win32kbase.sys .text:0x1f8f24, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b0364, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) add_inertia_info;
    
    // [GetInstance@CInertiaManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3db0, 0x243e0 bytes
    // win32kbase.sys .text:0xe8fc0, 0x27ef0 bytes
    // win32kbase.sys .text:0x3db0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) get_instance;
    
    // [InertiaSourceFromPointerType@CInertiaManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b2b70, 0x243e0 bytes
    // win32kbase.sys .text:0x1f94e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b0920, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) inertia_source_from_pointer_type;
    
    // [InvalidateInertiaInfo@CInertiaManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3d80, 0x243e0 bytes
    // win32kbase.sys .text:0x2efc, 0x27ef0 bytes
    // win32kbase.sys .text:0x3d80, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) invalidate_inertia_info;
    
    // [PostInertiaMessage@CInertiaManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b2c04, 0x243e0 bytes
    // win32kbase.sys .text:0x1f9574, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b09b4, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) post_inertia_message;
    
    // [QueryInertia@CInertiaManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b2ea0, 0x243e0 bytes
    // win32kbase.sys .text:0x1f9950, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b0c50, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) query_inertia;
    
    // [RouteSyntheticTouchpadToMT@CInertiaManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b3068, 0x243e0 bytes
    // win32kbase.sys .text:0x1f9b18, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b0e18, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) route_synthetic_touchpad_to_mt;
    
    // [ValidateInertiaDest@CInertiaManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b31c0, 0x243e0 bytes
    // win32kbase.sys .text:0x1f9c84, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b0f70, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) validate_inertia_dest;
    
    // [ValidateInertiaInfo@CInertiaManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b3204, 0x243e0 bytes
    // win32kbase.sys .text:0x1f9cc8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b0fb4, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) validate_inertia_info;
};
#include "magic/api.end.hpp"
