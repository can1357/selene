#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::dlt_winevent
{
    // [getDLT@DLT_WINEVENT]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa63f0, 0x243e0 bytes
    // win32kbase.sys .text:0xb1de0, 0x27ef0 bytes
    // win32kbase.sys .text:0x956b0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) get_dlt;
};
#include "magic/api.end.hpp"
