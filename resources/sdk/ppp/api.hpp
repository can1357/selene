#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ppp
{
    // [pppUserModeCallback]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x20e87c, 0x13864 bytes
    // win32kfull.sys .text:0x13e0c4, 0x1596d bytes
    // win32kfull.sys .text:0x120328, 0x1659e bytes
    // win32kfull.sys .text:0x13f004, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) user_mode_callback;
};
#include "magic/api.end.hpp"
