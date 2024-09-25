#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_PM_WAKE_REASON_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pm_wake_reason_type_t : int32_t  
    {                                           
        unspecified =                 0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        packet =                      0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        media_disconnect =            0x2,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        media_connect =               0x3,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wlan_nlo_discovery =          0x1000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wlan_ap_association_lost =    0x1001,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wlan_gtk_handshake_error =    0x1002,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wlan4_way_handshake_request = 0x1003,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wwan_register_state =         0x2000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wwan_sms_receive =            0x2001,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wwan_ussd_receive =           0x2002,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wwan_packet_state =           0x2004,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wwan_uicc_change =            0x2005,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
