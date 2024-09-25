#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NET_DEVICE_POWER_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class net_device_power_state_t : int32_t
    {                                            
        unspecified = 0x0,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d0 =          0x1,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d1 =          0x2,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d2 =          0x3,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        d3 =          0x4,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =     0x5,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
