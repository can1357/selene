#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidsch_sync_object
{
    // [SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x11d0, 0x1c52 bytes
    // dxgmms2.sys .text:0x189ac, 0x20ba bytes
    // dxgmms2.sys .text:0x11d0, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) set_to_always_signaled;
};
#include "magic/api.end.hpp"
