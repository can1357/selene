#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/dot11_extsta_capability_t.start.hpp"
namespace ndis
{
    // [struct DOT11_EXTSTA_CAPABILITY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_extsta_capability_t                                           
    {                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                     
        _m00 struct ndis::object_header_t header;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     u_scan_ssid_list_size;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .uScanSSIDListSize
        _m02 uint32_t                     u_desired_bssid_list_size;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .uDesiredBSSIDListSize
        _m03 uint32_t                     u_desired_ssid_list_size;              //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .uDesiredSSIDListSize
        _m04 uint32_t                     u_excluded_mac_address_list_size;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .uExcludedMacAddressListSize
        _m05 uint32_t                     u_privacy_exemption_list_size;         //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .uPrivacyExemptionListSize
        _m06 uint32_t                     u_key_mapping_table_size;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .uKeyMappingTableSize
        _m07 uint32_t                     u_default_key_table_size;              //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .uDefaultKeyTableSize
        _m08 uint32_t                     u_wep_key_value_max_length;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .uWEPKeyValueMaxLength
        _m09 uint32_t                     u_pmkid_cache_size;                    //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .uPMKIDCacheSize
        _m10 uint32_t                     u_max_num_per_sta_default_key_tables;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .uMaxNumPerSTADefaultKeyTables
                                                                               
        SDK_MAGIC_PROPERTIES( "DOT11_EXTSTA_CAPABILITY.$", 0x2c, true, 0xfe16264ca16a5083 );                                     
        SDK_FIXED_SIZE( dot11_extsta_capability_t, 0x2c );                                     
    };                                                                         
};
#include "magic/dot11_extsta_capability_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_extsta_capability_t, 0x2c );
