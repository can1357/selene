#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_device_identity
{
    // [Initialize@CDeviceIdentity]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x26558, 0x243e0 bytes
    // win32kbase.sys .text:0x858ec, 0x27ef0 bytes
    // win32kbase.sys .text:0x7917c, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) initialize;
    
    // [IssueIdentityOnDeviceArrival@CDeviceIdentity]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc2504, 0x243e0 bytes
    // win32kbase.sys .text:0xd62c0, 0x27ef0 bytes
    // win32kbase.sys .text:0xbc914, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) issue_identity_on_device_arrival;
    
    // [SendNewIdentityCreated@CDeviceIdentity]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2a040, 0x243e0 bytes
    // win32kbase.sys .text:0x72598, 0x27ef0 bytes
    // win32kbase.sys .text:0x7ccf0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) send_new_identity_created;
};
#include "magic/api.end.hpp"
