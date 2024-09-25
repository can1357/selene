#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::restart_information
{
    // [??1NDIS_RESTART_INFORMATION@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa7f20, 0x1c8a8 bytes
    // ndis.sys PAGE:0x1049fc, 0x1d2c0 bytes
    // ndis.sys PAGE:0x109fdc, 0x1e858 bytes
    // ndis.sys PAGE:0x104f1c, 0x1d2c0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
