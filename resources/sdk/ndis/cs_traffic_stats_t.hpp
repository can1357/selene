#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_CS_TRAFFIC_STATS]
    //  Windows 10 v1607
    //
    enum class cs_traffic_stats_t : int32_t
    {                                      
        latest =   0x0,                      // Windows 10 v1607
        total_d0 = 0x1,                      // Windows 10 v1607
        total_dx = 0x2,                      // Windows 10 v1607
        maximum =  0x3,                      // Windows 10 v1607
    };                                     
};
