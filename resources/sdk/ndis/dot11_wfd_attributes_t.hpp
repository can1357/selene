#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/dot11_wfd_attributes_t.start.hpp"
namespace ndis
{
    // [struct _DOT11_WFD_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_wfd_attributes_t                                                   
    {                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
        //                                                                          
        _m00 struct ndis::object_header_t header;                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     u_num_concurrent_go_role;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .uNumConcurrentGORole
        _m02 uint32_t                     u_num_concurrent_client_role;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .uNumConcurrentClientRole
        _m03 uint32_t                     wps_versions_supported;                     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .WPSVersionsSupported
        _m04 uint8_t                      b_service_discovery_supported;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .bServiceDiscoverySupported
        _m05 uint8_t                      b_client_discoverability_supported;         //{ +0x0011    +0x0011    +0x0011    +0x0011    } | .bClientDiscoverabilitySupported
        _m06 uint8_t                      b_infrastructure_management_supported;      //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .bInfrastructureManagementSupported
        _m07 uint32_t                     u_max_secondary_device_type_list_size;      //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .uMaxSecondaryDeviceTypeListSize
        _m08 sdk::array<uint8_t, 6>       device_address;                             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DeviceAddress
        _m09 uint32_t                     u_interface_address_list_count;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .uInterfaceAddressListCount
        _m10 sdk::array<uint8_t, 6>*      p_interface_address_list;                   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pInterfaceAddressList
        _m11 uint32_t                     u_num_supported_country_or_region_strings;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .uNumSupportedCountryOrRegionStrings
        _m12 sdk::array<uint8_t, 3>*      p_supported_country_or_region_strings;      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .pSupportedCountryOrRegionStrings
        _m13 uint32_t                     u_discovery_filter_list_size;               //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .uDiscoveryFilterListSize
        _m14 uint32_t                     u_go_role_client_table_size;                //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .uGORoleClientTableSize
                                                                                    
        SDK_MAGIC_PROPERTIES( "_DOT11_WFD_ATTRIBUTES.$", 0x48, true, 0x9e46231e1928758 );                                          
        SDK_FIXED_SIZE( dot11_wfd_attributes_t, 0x48 );                                          
    };                                                                              
};
#include "magic/dot11_wfd_attributes_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_wfd_attributes_t, 0x48 );
