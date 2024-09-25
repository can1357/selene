#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/dot11_extap_attributes_t.start.hpp"
namespace ndis
{
    struct dot11_auth_cipher_pair_t;

    // [struct _DOT11_EXTAP_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_extap_attributes_t                                                              
    {                                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
        //                                                                                       
        _m00 struct ndis::object_header_t           header;                                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                               u_scan_ssid_list_size;                         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .uScanSSIDListSize
        _m02 uint32_t                               u_desired_ssid_list_size;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .uDesiredSSIDListSize
        _m03 uint32_t                               u_privacy_exemption_list_size;                 //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .uPrivacyExemptionListSize
        _m04 uint32_t                               u_association_table_size;                      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .uAssociationTableSize
        _m05 uint32_t                               u_default_key_table_size;                      //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .uDefaultKeyTableSize
        _m06 uint32_t                               u_wep_key_value_max_length;                    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .uWEPKeyValueMaxLength
        _m07 uint8_t                                b_strictly_ordered_service_class_implemented;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .bStrictlyOrderedServiceClassImplemented
        _m08 uint32_t                               u_num_supported_country_or_region_strings;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .uNumSupportedCountryOrRegionStrings
        _m09 sdk::array<uint8_t, 3>*                p_supported_country_or_region_strings;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pSupportedCountryOrRegionStrings
        _m10 uint32_t                               u_infra_num_supported_ucast_algo_pairs;        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .uInfraNumSupportedUcastAlgoPairs
        _m11 struct ndis::dot11_auth_cipher_pair_t* p_infra_supported_ucast_algo_pairs;            //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .pInfraSupportedUcastAlgoPairs
        _m12 uint32_t                               u_infra_num_supported_mcast_algo_pairs;        //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .uInfraNumSupportedMcastAlgoPairs
        _m13 struct ndis::dot11_auth_cipher_pair_t* p_infra_supported_mcast_algo_pairs;            //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .pInfraSupportedMcastAlgoPairs
                                                                                                 
        SDK_MAGIC_PROPERTIES( "_DOT11_EXTAP_ATTRIBUTES.$", 0x50, true, 0xa52855e4cb3018f3 );                                             
        SDK_FIXED_SIZE( dot11_extap_attributes_t, 0x50 );                                             
    };                                                                                           
};
#include "magic/dot11_extap_attributes_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_extap_attributes_t, 0x50 );
