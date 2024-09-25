#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_DEVICE_PNP_EVENT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class device_pnp_event_t : int32_t
    {                                      
        query_removed =         0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        removed =               0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        surprise_removed =      0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_stopped =         0x3,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stopped =               0x4,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_profile_changed = 0x5,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        filter_list_changed =   0x6,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =               0x7,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
