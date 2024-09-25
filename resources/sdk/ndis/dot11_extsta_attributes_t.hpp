#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/dot11_extsta_attributes_t.start.hpp"
namespace ndis
{
    struct dot11_auth_cipher_pair_t;

    // [struct DOT11_EXTSTA_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_extsta_attributes_t                                                              
    {                                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
        //                                                                                        
        _m000 struct ndis::object_header_t           header;                                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m001 uint32_t                               u_scan_ssid_list_size;                         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .uScanSSIDListSize
        _m002 uint32_t                               u_desired_bssid_list_size;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .uDesiredBSSIDListSize
        _m003 uint32_t                               u_desired_ssid_list_size;                      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .uDesiredSSIDListSize
        _m004 uint32_t                               u_excluded_mac_address_list_size;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .uExcludedMacAddressListSize
        _m005 uint32_t                               u_privacy_exemption_list_size;                 //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .uPrivacyExemptionListSize
        _m006 uint32_t                               u_key_mapping_table_size;                      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .uKeyMappingTableSize
        _m007 uint32_t                               u_default_key_table_size;                      //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .uDefaultKeyTableSize
        _m008 uint32_t                               u_wep_key_value_max_length;                    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .uWEPKeyValueMaxLength
        _m009 uint32_t                               u_pmkid_cache_size;                            //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .uPMKIDCacheSize
        _m010 uint32_t                               u_max_num_per_sta_default_key_tables;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .uMaxNumPerSTADefaultKeyTables
        _m011 uint8_t                                b_strictly_ordered_service_class_implemented;  //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .bStrictlyOrderedServiceClassImplemented
        _m012 uint8_t                                uc_supported_qo_s_protocol_flags;              //{ +0x002d    +0x002d    +0x002d    +0x002d    } | .ucSupportedQoSProtocolFlags
        _m013 uint8_t                                b_safe_mode_implemented;                       //{ +0x002e    +0x002e    +0x002e    +0x002e    } | .bSafeModeImplemented
        _m014 uint32_t                               u_num_supported_country_or_region_strings;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .uNumSupportedCountryOrRegionStrings
        _m015 sdk::array<uint8_t, 3>*                p_supported_country_or_region_strings;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .pSupportedCountryOrRegionStrings
        _m016 uint32_t                               u_infra_num_supported_ucast_algo_pairs;        //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .uInfraNumSupportedUcastAlgoPairs
        _m017 struct ndis::dot11_auth_cipher_pair_t* p_infra_supported_ucast_algo_pairs;            //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .pInfraSupportedUcastAlgoPairs
        _m018 uint32_t                               u_infra_num_supported_mcast_algo_pairs;        //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .uInfraNumSupportedMcastAlgoPairs
        _m019 struct ndis::dot11_auth_cipher_pair_t* p_infra_supported_mcast_algo_pairs;            //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .pInfraSupportedMcastAlgoPairs
        _m020 uint32_t                               u_adhoc_num_supported_ucast_algo_pairs;        //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .uAdhocNumSupportedUcastAlgoPairs
        _m021 struct ndis::dot11_auth_cipher_pair_t* p_adhoc_supported_ucast_algo_pairs;            //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .pAdhocSupportedUcastAlgoPairs
        _m022 uint32_t                               u_adhoc_num_supported_mcast_algo_pairs;        //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .uAdhocNumSupportedMcastAlgoPairs
        _m023 struct ndis::dot11_auth_cipher_pair_t* p_adhoc_supported_mcast_algo_pairs;            //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .pAdhocSupportedMcastAlgoPairs
        _m024 uint8_t                                b_auto_power_save_mode;                        //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .bAutoPowerSaveMode
        _m025 uint32_t                               u_max_network_offload_list_size;               //{ +0x0084    +0x0084    +0x0084    +0x0084    } | .uMaxNetworkOffloadListSize
        _m026 uint8_t                                b_mfp_capable;                                 //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .bMFPCapable
        _m027 uint32_t                               u_infra_num_supported_mcast_mgmt_algo_pairs;   //{ +0x008c    +0x008c    +0x008c    +0x008c    } | .uInfraNumSupportedMcastMgmtAlgoPairs
        _m028 struct ndis::dot11_auth_cipher_pair_t* p_infra_supported_mcast_mgmt_algo_pairs;       //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .pInfraSupportedMcastMgmtAlgoPairs
        _m029 uint8_t                                b_neighbor_report_supported;                   //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .bNeighborReportSupported
        _m030 uint8_t                                b_ap_channel_report_supported;                 //{ +0x0099    +0x0099    +0x0099    +0x0099    } | .bAPChannelReportSupported
        _m031 uint8_t                                b_action_frames_supported;                     //{ +0x009a    +0x009a    +0x009a    +0x009a    } | .bActionFramesSupported
        _m032 uint8_t                                b_anqp_query_offload_supported;                //{ +0x009b    +0x009b    +0x009b    +0x009b    } | .bANQPQueryOffloadSupported
        _m033 uint8_t                                b_hessid_connection_supported;                 //{ +0x009c    +0x009c    +0x009c    +0x009c    } | .bHESSIDConnectionSupported
                                                                                                  
        SDK_MAGIC_PROPERTIES( "DOT11_EXTSTA_ATTRIBUTES.$", 0xa0, true, 0xe7e79c45a55b53d1 );                                             
        SDK_FIXED_SIZE( dot11_extsta_attributes_t, 0xa0 );                                             
    };                                                                                            
};
#include "magic/dot11_extsta_attributes_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_extsta_attributes_t, 0xa0 );
