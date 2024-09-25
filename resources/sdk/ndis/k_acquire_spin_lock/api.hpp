#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::k_acquire_spin_lock
{
    // [??1KAcquireSpinLock@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys .text:0x4a80, 0x1e858 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
