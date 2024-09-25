#pragma once
#include <sdkgen/support_library.hpp>
#include "_802_11_ssid_t.hpp"
#include "_802_11_network_type_t.hpp"
#include "_802_11_configuration_t.hpp"
#include "_802_11_network_infrastructure_t.hpp"

#include "magic/wlan_bssid_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WLAN_BSSID]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wlan_bssid_t                                                      
    {                                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                   
        _m00 uint32_t                                    length;               //{ +0x0000    +0x0000    +0x0000    } | .Length
        _m01 sdk::array<uint8_t, 6>                      mac_address;          //{ +0x0004    +0x0004    +0x0004    } | .MacAddress
        _m02 struct ndis::_802_11_ssid_t                 ssid;                 //{ +0x000c    +0x000c    +0x000c    } | .Ssid
        _m03 uint32_t                                    privacy;              //{ +0x0030    +0x0030    +0x0030    } | .Privacy
        _m04 int32_t                                     rssi;                 //{ +0x0034    +0x0034    +0x0034    } | .Rssi
        _m05 enum ndis::_802_11_network_type_t           network_type_in_use;  //{ +0x0038    +0x0038    +0x0038    } | .NetworkTypeInUse
        _m06 struct ndis::_802_11_configuration_t        configuration;        //{ +0x003c    +0x003c    +0x003c    } | .Configuration
        _m07 enum ndis::_802_11_network_infrastructure_t infrastructure_mode;  //{ +0x005c    +0x005c    +0x005c    } | .InfrastructureMode
        _m08 sdk::array<uint8_t, 8>                      supported_rates;      //{ +0x0060    +0x0060    +0x0060    } | .SupportedRates
                                                                             
        SDK_MAGIC_PROPERTIES( "_NDIS_WLAN_BSSID.$", 0x68, true, 0x69fb790703149e79 );                    
        SDK_FIXED_SIZE( wlan_bssid_t, 0x68 );                                
    };                                                                       
};
#include "magic/wlan_bssid_t.end.hpp"
SDK_VERIFY( struct ndis::wlan_bssid_t, 0x68 );
