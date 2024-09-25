#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::acquire_spin_lock
{
    // [Acquire@AcquireSpinLock]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1ca0, 0x1c52 bytes
    // dxgmms2.sys .text:0x14d70, 0x20ba bytes
    // dxgmms2.sys .text:0x1ca0, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) acquire;
    
    // [Release@AcquireSpinLock]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x144c, 0x1c52 bytes
    // dxgmms2.sys .text:0x15444, 0x20ba bytes
    // dxgmms2.sys .text:0x144c, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
