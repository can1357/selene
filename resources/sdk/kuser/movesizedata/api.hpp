#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::movesizedata
{
    // [CreateMoveSizeData@MOVESIZEDATA]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x24d8bc, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) create_move_size_data;
    
    // [FreeMoveSizeData@MOVESIZEDATA]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x24d964, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) free_move_size_data;
    
    // [SHData_StoreSafetyZone@MOVESIZEDATA]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x24d9ec, 0x1659e bytes
    //
    _m2(sdk::unknown_ptr) sh_data_store_safety_zone;
};
#include "magic/api.end.hpp"
