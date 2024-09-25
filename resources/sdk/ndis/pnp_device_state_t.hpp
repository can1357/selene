#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_PNP_DEVICE_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pnp_device_state_t : int32_t
    {                                      
        added =            0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        started =          0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_stopped =    0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopped =          0x3,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_removed =    0x4,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        removed =          0x5,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        surprise_removed = 0x6,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
