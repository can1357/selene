#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::dlodcobj
{
    // [vLockForDPIScaledClipping@DLODCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x44318, 0x1596d bytes
    // win32kfull.sys .text:0x62c2c, 0x1659e bytes
    // win32kfull.sys .text:0x44728, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) v_lock_for_dpi_scaled_clipping;
    
    // [vUnlock@DLODCOBJ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x414ec, 0x1596d bytes
    // win32kfull.sys .text:0xcc88, 0x1659e bytes
    // win32kfull.sys .text:0x418fc, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) v_unlock;
};
#include "magic/api.end.hpp"
