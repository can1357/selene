#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_GFT_COUNTER_UPDATE_FREQUENCY]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class gft_counter_update_frequency_t : int32_t
    {                                                  
        undefined =         0x0,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        on_query =          0x1,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        per_update_period = 0x2,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        per_packet =        0x3,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =               0x4,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
