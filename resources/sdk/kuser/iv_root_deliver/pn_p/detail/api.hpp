#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::iv_root_deliver::pn_p::detail
{
    // [SendPnP@Detail@PnP@IVRootDeliver]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c5948, 0x243e0 bytes
    // win32kbase.sys .text:0x20d3b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c3728, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) send_pn_p;
};
#include "magic/api.end.hpp"
