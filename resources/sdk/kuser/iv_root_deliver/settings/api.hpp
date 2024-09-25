#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::iv_root_deliver::settings
{
    // [SendSettingsUpdateToContainer@Settings@IVRootDeliver]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b93ec, 0x243e0 bytes
    // win32kbase.sys .text:0x200e48, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b71cc, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) send_settings_update_to_container;
};
#include "magic/api.end.hpp"
