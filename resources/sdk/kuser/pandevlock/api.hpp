#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::pandevlock
{
    // [vUnLock@PANDEVLOCK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x289d70, 0x13864 bytes
    // win32kfull.sys .text:0x297678, 0x1596d bytes
    // win32kfull.sys .text:0x2977dc, 0x1659e bytes
    // win32kfull.sys .text:0x2975e8, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) v_un_lock;
};
#include "magic/api.end.hpp"
