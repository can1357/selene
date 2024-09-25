#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dmrp
{
    // [DmrpRmrrTreeAddNewScope]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e2bb8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bef80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e2aa8, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) rmrr_tree_add_new_scope;
    
    // [DmrpRmrrTreeAddRegionToDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4e2c58, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3bf020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e2b48, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) rmrr_tree_add_region_to_device;
};
#include "magic/api.end.hpp"
