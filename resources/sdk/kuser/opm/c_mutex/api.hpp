#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::opm::c_mutex
{
    // [Lock@CMutex@OPM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa7560, 0x243e0 bytes
    // win32kbase.sys .text:0xb5f00, 0x27ef0 bytes
    // win32kbase.sys .text:0x96b50, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) lock;
    
    // [Unlock@CMutex@OPM]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x14e390, 0x243e0 bytes
    // win32kbase.sys .text:0x1812c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x14bbf0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) unlock;
};
#include "magic/api.end.hpp"
