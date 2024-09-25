#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::dxgprocess
{
    // [GetKmdProcessHandle@DXGPROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x18a20, 0x20ba bytes
    //
    _m0(sdk::unknown_ptr) get_kmd_process_handle;
    
    // [IsHighPriorityProcess@DXGPROCESS]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x325c, 0x158b bytes
    // dxgmms2.sys .text:0x1f00, 0x1c52 bytes
    // dxgmms2.sys .text:0x13ec8, 0x20ba bytes
    // dxgmms2.sys .text:0x1f00, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) is_high_priority_process;
};
#include "magic/api.end.hpp"
