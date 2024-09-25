#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_WAN_QUALITY]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wan_quality_t : int32_t
    {                                 
        raw =           0x0,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        error_control = 0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reliable =      0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
