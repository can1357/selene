#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgthread
{
    // [GetCurrent@DXGTHREAD]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xed9d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x18a920, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xf99a0, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) get_current;
    
    // [m_LockOrderTrackerUpperBound@DXGTHREAD]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .data:0xaf008, 0x762b0 bytes
    // dxgkrnl.sys .data:0x1300d8, 0x84380 bytes
    // dxgkrnl.sys .data:0xaf008, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) m_lock_order_tracker_upper_bound;
};
#include "magic/api.end.hpp"
