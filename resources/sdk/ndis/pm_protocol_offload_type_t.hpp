#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_PM_PROTOCOL_OFFLOAD_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pm_protocol_offload_type_t : int32_t
    {                                              
        offload_id_unspecified =   0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        offload_id_i_pv4arp =      0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        offload_id_i_pv6ns =       0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        offload80211rsn_rekey =    0x3,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        offload80211rsn_rekey_v2 = 0x4,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //offload_id_maximum =     0x4,              // Windows 10 v1607
        offload_id_maximum =       0x5,              // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
