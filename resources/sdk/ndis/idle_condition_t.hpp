#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_IDLE_CONDITION]
    //  Windows 11
    //
    enum class idle_condition_t : int32_t
    {                                    
        any_low_latency =   0x0,           // Windows 11
        any =               0x1,           // Windows 11
        unicast_only =      0x2,           // Windows 11
        l2_connected_only = 0x3,           // Windows 11
    };                                   
};
