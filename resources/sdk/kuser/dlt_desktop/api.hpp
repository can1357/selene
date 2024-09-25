#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::dlt_desktop
{
    // [getDLT@DLT_DESKTOP]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xabbf0, 0x243e0 bytes
    // win32kbase.sys .text:0xc9c80, 0x27ef0 bytes
    // win32kbase.sys .text:0xa18c0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) get_dlt;
};
#include "magic/api.end.hpp"
