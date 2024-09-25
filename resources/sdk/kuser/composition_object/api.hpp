#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::composition_object
{
    // [AddRef@CompositionObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x437a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x1db3e0, 0x243e0 bytes
    // win32kbase.sys .text:0x228f20, 0x27ef0 bytes
    // win32kbase.sys .text:0x1d91a0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) add_ref;
    
    // [Create@CompositionObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3476c, 0x1eb80 bytes
    // win32kbase.sys .text:0xa9150, 0x243e0 bytes
    // win32kbase.sys .text:0xb7bac, 0x27ef0 bytes
    // win32kbase.sys .text:0x9e418, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) create;
    
    // [CreateHandle@CompositionObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x437c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x7ea60, 0x243e0 bytes
    // win32kbase.sys .text:0x9ca00, 0x27ef0 bytes
    // win32kbase.sys .text:0xaa50, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) create_handle;
    
    // [OkToClose@CompositionObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x43754, 0x1eb80 bytes
    // win32kbase.sys .text:0x8da1c, 0x243e0 bytes
    // win32kbase.sys .text:0xb91dc, 0x27ef0 bytes
    // win32kbase.sys .text:0x6baac, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) ok_to_close;
    
    // [Open@CompositionObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x436e8, 0x1eb80 bytes
    // win32kbase.sys .text:0x8d8ac, 0x243e0 bytes
    // win32kbase.sys .text:0x14b34, 0x27ef0 bytes
    // win32kbase.sys .text:0x6b93c, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) open;
    
    // [OpenDwmHandle@CompositionObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x43810, 0x1eb80 bytes
    // win32kbase.sys .text:0x7eff0, 0x243e0 bytes
    // win32kbase.sys .text:0xab3f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x408a0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) open_dwm_handle;
    
    // [Release@CompositionObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x43840, 0x1eb80 bytes
    // win32kbase.sys .text:0xb0850, 0x243e0 bytes
    // win32kbase.sys .text:0xc2610, 0x27ef0 bytes
    // win32kbase.sys .text:0xa6df0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) release;
    
    // [ResolveHandle@CompositionObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x37028, 0x1eb80 bytes
    // win32kbase.sys .text:0xa11b4, 0x243e0 bytes
    // win32kbase.sys .text:0xb05f8, 0x27ef0 bytes
    // win32kbase.sys .text:0x8fe14, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) resolve_handle;
};
#include "magic/api.end.hpp"
