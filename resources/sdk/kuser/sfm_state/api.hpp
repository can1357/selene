#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::sfm_state
{
    // [Initialize@SfmState]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbe0c, 0x1eb80 bytes
    // win32kbase.sys .text:0x5dc8, 0x243e0 bytes
    // win32kbase.sys .text:0xc8ff8, 0x27ef0 bytes
    // win32kbase.sys .text:0x85124, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) initialize;
};
#include "magic/api.end.hpp"
