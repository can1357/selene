#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::dxginversesemaphore
{
    // [AcquireInverseSemaphore@DXGINVERSESEMAPHORE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1d618, 0x158b bytes
    // dxgmms2.sys .text:0x23188, 0x1c52 bytes
    // dxgmms2.sys .text:0x1a268, 0x20ba bytes
    // dxgmms2.sys .text:0x23108, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) acquire_inverse_semaphore;
};
#include "magic/api.end.hpp"
