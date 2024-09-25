#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::pd_global
{
    // [??0NDIS_PD_GLOBAL@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0x108364, 0x1d2c0 bytes
    // ndis.sys PAGE:0x11271c, 0x1e858 bytes
    // ndis.sys PAGE:0x108884, 0x1d2c0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
