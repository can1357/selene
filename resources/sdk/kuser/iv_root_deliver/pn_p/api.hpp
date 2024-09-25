#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::iv_root_deliver::pn_p
{
    // [SendRootPnp@PnP@IVRootDeliver]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c5990, 0x243e0 bytes
    // win32kbase.sys .text:0x20d3dc, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c3770, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) send_root_pnp;
    
    // [SendRootPnpCreated@PnP@IVRootDeliver]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c5c30, 0x243e0 bytes
    // win32kbase.sys .text:0x20d730, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c3a10, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) send_root_pnp_created;
    
    // [SendRootPnpSyncState@PnP@IVRootDeliver]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c5fc8, 0x243e0 bytes
    // win32kbase.sys .text:0x20dbb4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c3da8, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) send_root_pnp_sync_state;
};
#include "magic/api.end.hpp"
