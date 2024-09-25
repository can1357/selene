#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_PM_WOL_PACKET]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pm_wol_packet_t : int32_t  
    {                                     
        unspecified =              0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bitmap_pattern =           0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        magic_packet =             0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i_pv4_tcp_syn =            0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        i_pv6_tcp_syn =            0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        eapol_request_id_message = 0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =                  0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
