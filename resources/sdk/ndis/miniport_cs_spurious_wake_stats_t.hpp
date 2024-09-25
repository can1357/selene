#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/miniport_cs_spurious_wake_stats_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS]
    // => Windows 10 v1607
    //
    struct miniport_cs_spurious_wake_stats_t                  
    {                                                         
        // Windows 10 v1607                                        
        //                                                    
        _m00 uint32_t wake_reason_unspec;                       //{ +0x0000    } | .WakeReasonUnspec
        _m01 uint32_t wake_reason_packet;                       //{ +0x0004    } | .WakeReasonPacket
        _m02 uint32_t wake_reason_media_disconnect;             //{ +0x0008    } | .WakeReasonMediaDisconnect
        _m03 uint32_t wake_reason_media_connect;                //{ +0x000c    } | .WakeReasonMediaConnect
        _m04 uint32_t wake_reason_wlan_nlo_discovery;           //{ +0x0010    } | .WakeReasonWlanNLODiscovery
        _m05 uint32_t wake_reason_wlan_ap_association_lost;     //{ +0x0014    } | .WakeReasonWlanApAssociationLost
        _m06 uint32_t wake_reason_wlan_gtk_handshake_error;     //{ +0x0018    } | .WakeReasonWlanGTKHandshakeError
        _m07 uint32_t wake_reason_wlan4_way_handshake_request;  //{ +0x001c    } | .WakeReasonWlan4WayHandshakeRequest
        _m08 uint32_t wake_reason_wwan_register_state;          //{ +0x0020    } | .WakeReasonWwanRegisterState
        _m09 uint32_t wake_reason_wwan_sms_receive;             //{ +0x0024    } | .WakeReasonWwanSMSReceive
        _m10 uint32_t wake_reason_wwan_ussd_receive;            //{ +0x0028    } | .WakeReasonWwanUSSDReceive
                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS.$", 0x0, false, 0x9750bb818e54d8fb );                                        
        SDK_FIXED_SIZE( miniport_cs_spurious_wake_stats_t, 0x2c );                                        
    };                                                        
};
#include "magic/miniport_cs_spurious_wake_stats_t.end.hpp"
SDK_VERIFY( struct ndis::miniport_cs_spurious_wake_stats_t, 0x2c );
