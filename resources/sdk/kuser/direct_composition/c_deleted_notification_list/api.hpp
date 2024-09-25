#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_deleted_notification_list
{
    // [EnsureTagAllocation@CDeletedNotificationList@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xabe14, 0x243e0 bytes
    // win32kbase.sys .text:0xbc318, 0x27ef0 bytes
    // win32kbase.sys .text:0xa1ae4, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) ensure_tag_allocation;
};
#include "magic/api.end.hpp"
