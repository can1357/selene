#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::entryobj
{
    // [bOwnedBy@ENTRYOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x4d490, 0x1eb80 bytes
    // win32kbase.sys .text:0x99da0, 0x243e0 bytes
    // win32kbase.sys .text:0x50b28, 0x27ef0 bytes
    // win32kbase.sys .text:0x82a80, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) b_owned_by;
    
    // [hSetup@ENTRYOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x5c710, 0x1eb80 bytes
    // win32kbase.sys .text:0x48ef0, 0x243e0 bytes
    // win32kbase.sys .text:0x47ef0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f3a0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) h_setup;
};
#include "magic/api.end.hpp"
