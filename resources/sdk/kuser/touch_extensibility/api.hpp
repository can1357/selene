#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::touch_extensibility
{
    // [ghInjectionDevice@TouchExtensibility]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x25ed88, 0x243e0 bytes
    // win32kbase.sys .data:0x2b3c18, 0x27ef0 bytes
    // win32kbase.sys .data:0x25bdb8, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) gh_injection_device;
    
    // [hDeviceUser@TouchExtensibility]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x25eca8, 0x243e0 bytes
    // win32kbase.sys .data:0x2b3b18, 0x27ef0 bytes
    // win32kbase.sys .data:0x25bcd8, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) h_device_user;
    
    // [rcHimetricRect@TouchExtensibility]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x262330, 0x243e0 bytes
    // win32kbase.sys .data:0x2b70f0, 0x27ef0 bytes
    // win32kbase.sys .data:0x25f370, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) rc_himetric_rect;
    
    // [rcLogicalRect@TouchExtensibility]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x262320, 0x243e0 bytes
    // win32kbase.sys .data:0x2b7100, 0x27ef0 bytes
    // win32kbase.sys .data:0x25f360, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) rc_logical_rect;
};
#include "magic/api.end.hpp"
