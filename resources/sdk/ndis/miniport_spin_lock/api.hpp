#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::miniport_spin_lock
{
    // [??1MiniportSpinLock@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys .text:0x381ec, 0x1e858 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
