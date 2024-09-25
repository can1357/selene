#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::k_push_lock
{
    // [??0KPushLock@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xb4530, 0x1c8a8 bytes
    // ndis.sys PAGE:0x121e90, 0x1d2c0 bytes
    // ndis.sys PAGE:0x12cc8c, 0x1e858 bytes
    // ndis.sys PAGE:0x122390, 0x1d2c0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
