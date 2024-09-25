#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_event
{
    // [Create@CEvent@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x79fd4, 0x1eb80 bytes
    // win32kbase.sys .text:0x1de108, 0x243e0 bytes
    // win32kbase.sys .text:0x22c8b8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1dbec8, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [Initialize@CEvent@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x7a100, 0x1eb80 bytes
    // win32kbase.sys .text:0x7acbc, 0x243e0 bytes
    // win32kbase.sys .text:0xa27b4, 0x27ef0 bytes
    // win32kbase.sys .text:0x81b84, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) initialize;
};
#include "magic/api.end.hpp"
