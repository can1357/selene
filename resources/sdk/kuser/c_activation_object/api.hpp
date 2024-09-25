#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_activation_object
{
    // [Destroy@CActivationObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x90bf0, 0x243e0 bytes
    // win32kbase.sys .text:0x6def0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) destroy;
    
    // [notifyISM@CActivationObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x8e6ec, 0x243e0 bytes
    // win32kbase.sys .text:0x6c77c, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) notify_ism;
    
    // [Create@CActivationObject]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f028, 0x243e0 bytes
    // win32kbase.sys .text:0xaade0, 0x27ef0 bytes
    // win32kbase.sys .text:0x6d084, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) create;
};
#include "magic/api.end.hpp"
