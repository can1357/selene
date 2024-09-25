#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::find_next_top_window
{
    // [NextTopWindow@FindNextTopWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xeb8e8, 0x1596d bytes
    // win32kfull.sys .text:0xd1448, 0x1659e bytes
    // win32kfull.sys .text:0xec628, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) next_top_window;
};
#include "magic/api.end.hpp"
