#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::miniport_creation_config
{
    // [??1NDIS_MINIPORT_CREATION_CONFIG@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .text:0x31b34, 0x1d2c0 bytes
    // ndis.sys .text:0x337cc, 0x1e858 bytes
    // ndis.sys .text:0x31b54, 0x1d2c0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
