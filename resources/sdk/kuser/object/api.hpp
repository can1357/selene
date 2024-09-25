#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::object
{
    // [SwapShareCount@OBJECT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1ba2c, 0x243e0 bytes
    // win32kbase.sys .text:0x9438c, 0x27ef0 bytes
    // win32kbase.sys .text:0x419bc, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) swap_share_count;
};
#include "magic/api.end.hpp"
