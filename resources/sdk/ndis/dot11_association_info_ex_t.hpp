#pragma once
#include <sdkgen/support_library.hpp>
#include "dot11_power_mode_t.hpp"
#include "dot11_association_state_t.hpp"

#include "magic/dot11_association_info_ex_t.start.hpp"
namespace ndis
{
    // [struct _DOT11_ASSOCIATION_INFO_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_association_info_ex_t                                           
    {                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                       
        _m00 sdk::array<uint8_t, 6>               peer_mac_address;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PeerMacAddress
        _m01 sdk::array<uint8_t, 6>               bssid;                           //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .BSSID
        _m02 uint16_t                             us_capability_information;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .usCapabilityInformation
        _m03 uint16_t                             us_listen_interval;              //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .usListenInterval
        _m04 sdk::array<uint8_t, 255>             uc_peer_supported_rates;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ucPeerSupportedRates
        _m05 uint16_t                             us_association_id;               //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .usAssociationID
        _m06 enum ndis::dot11_association_state_t dot11_association_state;         //{ +0x0114    +0x0114    +0x0114    +0x0114    } | .dot11AssociationState
        _m07 enum ndis::dot11_power_mode_t        dot11_power_mode;                //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .dot11PowerMode
        _m08 int64_t                              li_association_up_time;          //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .liAssociationUpTime
        _m09 uint64_t                             ull_num_of_tx_packet_successes;  //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .ullNumOfTxPacketSuccesses
        _m10 uint64_t                             ull_num_of_tx_packet_failures;   //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .ullNumOfTxPacketFailures
        _m11 uint64_t                             ull_num_of_rx_packet_successes;  //{ +0x0138    +0x0138    +0x0138    +0x0138    } | .ullNumOfRxPacketSuccesses
        _m12 uint64_t                             ull_num_of_rx_packet_failures;   //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .ullNumOfRxPacketFailures
                                                                                 
        SDK_MAGIC_PROPERTIES( "_DOT11_ASSOCIATION_INFO_EX.$", 0x148, true, 0x554019c00b53e72c );                               
        SDK_FIXED_SIZE( dot11_association_info_ex_t, 0x148 );                               
    };                                                                           
};
#include "magic/dot11_association_info_ex_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_association_info_ex_t, 0x148 );
