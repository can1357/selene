#pragma once
#include <sdkgen/support_library.hpp>
#include "dot11_power_mode_t.hpp"
#include "dot11_auth_algorithm_t.hpp"
#include "dot11_peer_statistics_t.hpp"
#include "dot11_cipher_algorithm_t.hpp"
#include "dot11_association_state_t.hpp"

#include "magic/dot11_peer_info_t.start.hpp"
namespace ndis
{
    // [struct _DOT11_PEER_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_peer_info_t                                                
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                  
        _m00 sdk::array<uint8_t, 6>               mac_address;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MacAddress
        _m01 uint16_t                             us_capability_information;  //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .usCapabilityInformation
        _m02 enum ndis::dot11_auth_algorithm_t    auth_algo;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AuthAlgo
        _m03 enum ndis::dot11_cipher_algorithm_t  unicast_cipher_algo;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .UnicastCipherAlgo
        _m04 enum ndis::dot11_cipher_algorithm_t  multicast_cipher_algo;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MulticastCipherAlgo
        _m05 uint8_t                              b_wps_enabled;              //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .bWpsEnabled
        _m06 uint16_t                             us_listen_interval;         //{ +0x0016    +0x0016    +0x0016    +0x0016    } | .usListenInterval
        _m07 sdk::array<uint8_t, 255>             uc_supported_rates;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ucSupportedRates
        _m08 uint16_t                             us_association_id;          //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .usAssociationID
        _m09 enum ndis::dot11_association_state_t association_state;          //{ +0x011c    +0x011c    +0x011c    +0x011c    } | .AssociationState
        _m10 enum ndis::dot11_power_mode_t        power_mode;                 //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .PowerMode
        _m11 int64_t                              li_association_up_time;     //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .liAssociationUpTime
        _m12 struct ndis::dot11_peer_statistics_t statistics;                 //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .Statistics
                                                                            
        SDK_MAGIC_PROPERTIES( "_DOT11_PEER_INFO.$", 0x160, true, 0x600e61ee7f6b540f );                          
        SDK_FIXED_SIZE( dot11_peer_info_t, 0x160 );                          
    };                                                                      
};
#include "magic/dot11_peer_info_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_peer_info_t, 0x160 );
