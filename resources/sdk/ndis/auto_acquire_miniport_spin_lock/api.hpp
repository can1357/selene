#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::auto_acquire_miniport_spin_lock
{
    // [??1AutoAcquireMiniportSpinLock@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // ndis.sys .text:0x5e434, 0x1d2c0 bytes
    // ndis.sys .text:0x5ec74, 0x1d2c0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
