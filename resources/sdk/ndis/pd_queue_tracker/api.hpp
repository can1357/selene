#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::pd_queue_tracker
{
    // [??0NDIS_PD_QUEUE_TRACKER@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xb4464, 0x1c8a8 bytes
    // ndis.sys PAGE:0x118d74, 0x1d2c0 bytes
    // ndis.sys PAGE:0x1236e0, 0x1e858 bytes
    // ndis.sys PAGE:0x119274, 0x1d2c0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
