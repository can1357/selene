#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_rotation_mgr
{
    // [GetActivePpiPreference@CRotationMgr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d1790, 0x1596d bytes
    // win32kfull.sys .text:0x1cfb78, 0x1659e bytes
    // win32kfull.sys .text:0x1d1630, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) get_active_ppi_preference;
    
    // [IsActivePpi@CRotationMgr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x8958, 0x1596d bytes
    // win32kfull.sys .text:0x50f8, 0x1659e bytes
    // win32kfull.sys .text:0x8d08, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) is_active_ppi;
};
#include "magic/api.end.hpp"
