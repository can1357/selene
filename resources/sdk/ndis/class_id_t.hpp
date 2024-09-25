#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_CLASS_ID]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class class_id_t : int32_t             
    {                                           
        class802_3_priority =            0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        class_wireless_wan_mbx_mailbox = 0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        class_irda_packet_info =         0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        class_atm_aal_info =             0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
