#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gfp_ethernet_header_fields_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFP_ETHERNET_HEADER_FIELDS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gfp_ethernet_header_fields_t                     
    {                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                  
        _m00 sdk::array<uint8_t, 6> destination_mac_address;  //{ +0x0000    +0x0000    +0x0000    } | .DestinationMacAddress
        _m01 sdk::array<uint8_t, 6> source_mac_address;       //{ +0x0006    +0x0006    +0x0006    } | .SourceMacAddress
        _m02 uint16_t               eth_type;                 //{ +0x000c    +0x000c    +0x000c    } | .EthType
        _m03 uint16_t               customer_vlan_id;         //{ +0x000e    +0x000e    +0x000e    } | .CustomerVlanId
        _m04 uint16_t               provider_vlan_id;         //{ +0x0010    +0x0010    +0x0010    } | .ProviderVlanId
        _m05 uint8_t                priority;                 //{ +0x0012    +0x0012    +0x0012    } | .Priority
                                                            
        SDK_MAGIC_PROPERTIES( "_NDIS_GFP_ETHERNET_HEADER_FIELDS.$", 0x14, true, 0xa0669050dfec20d4 );                        
        SDK_FIXED_SIZE( gfp_ethernet_header_fields_t, 0x14 );                        
    };                                                      
};
#include "magic/gfp_ethernet_header_fields_t.end.hpp"
SDK_VERIFY( struct ndis::gfp_ethernet_header_fields_t, 0x14 );
