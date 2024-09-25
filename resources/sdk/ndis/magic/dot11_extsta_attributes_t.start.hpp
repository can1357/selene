#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "DOT11_EXTSTA_ATTRIBUTES.Header", header, 0x0, 0x20, true, 0xa77f43515bfb11e3)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_EXTSTA_ATTRIBUTES.uScanSSIDListSize", u_scan_ssid_list_size, 0x20, 0x20, true, 0xa9804f0be345d9b9)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_EXTSTA_ATTRIBUTES.uDesiredBSSIDListSize", u_desired_bssid_list_size, 0x40, 0x20, true, 0x463556af617c3d70)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_EXTSTA_ATTRIBUTES.uDesiredSSIDListSize", u_desired_ssid_list_size, 0x60, 0x20, true, 0x5061109eeac29074)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_EXTSTA_ATTRIBUTES.uExcludedMacAddressListSize", u_excluded_mac_address_list_size, 0x80, 0x20, true, 0x941ec31e37b5a6a7)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_EXTSTA_ATTRIBUTES.uPrivacyExemptionListSize", u_privacy_exemption_list_size, 0xa0, 0x20, true, 0xfe9c3dd4df663a82)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_EXTSTA_ATTRIBUTES.uKeyMappingTableSize", u_key_mapping_table_size, 0xc0, 0x20, true, 0xd845d3f9ef0aac8b)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_EXTSTA_ATTRIBUTES.uDefaultKeyTableSize", u_default_key_table_size, 0xe0, 0x20, true, 0xad84869bd6568c72)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_EXTSTA_ATTRIBUTES.uWEPKeyValueMaxLength", u_wep_key_value_max_length, 0x100, 0x20, true, 0x10eed7993d3ef105)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_EXTSTA_ATTRIBUTES.uPMKIDCacheSize", u_pmkid_cache_size, 0x120, 0x20, true, 0xc0e11fdde8bb9f9f)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_EXTSTA_ATTRIBUTES.uMaxNumPerSTADefaultKeyTables", u_max_num_per_sta_default_key_tables, 0x140, 0x20, true, 0x64571732e19325ad)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "DOT11_EXTSTA_ATTRIBUTES.bStrictlyOrderedServiceClassImplemented", b_strictly_ordered_service_class_implemented, 0x160, 0x8, true, 0x9bcfd144879c4c1a)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "DOT11_EXTSTA_ATTRIBUTES.ucSupportedQoSProtocolFlags", uc_supported_qo_s_protocol_flags, 0x168, 0x8, true, 0xb1d6106ff1516deb)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "DOT11_EXTSTA_ATTRIBUTES.bSafeModeImplemented", b_safe_mode_implemented, 0x170, 0x8, true, 0x51e06c6699102c50)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_EXTSTA_ATTRIBUTES.uNumSupportedCountryOrRegionStrings", u_num_supported_country_or_region_strings, 0x180, 0x20, true, 0xa1ce7712c018d8cb)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>*), "DOT11_EXTSTA_ATTRIBUTES.pSupportedCountryOrRegionStrings", p_supported_country_or_region_strings, 0x1c0, 0x40, true, 0xd1b79835983eab10)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_EXTSTA_ATTRIBUTES.uInfraNumSupportedUcastAlgoPairs", u_infra_num_supported_ucast_algo_pairs, 0x200, 0x20, true, 0x88271ae2cf032a84)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::dot11_auth_cipher_pair_t*), "DOT11_EXTSTA_ATTRIBUTES.pInfraSupportedUcastAlgoPairs", p_infra_supported_ucast_algo_pairs, 0x240, 0x40, true, 0xcd125ef1b19161f6)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_EXTSTA_ATTRIBUTES.uInfraNumSupportedMcastAlgoPairs", u_infra_num_supported_mcast_algo_pairs, 0x280, 0x20, true, 0xa9e62443b765dc55)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::dot11_auth_cipher_pair_t*), "DOT11_EXTSTA_ATTRIBUTES.pInfraSupportedMcastAlgoPairs", p_infra_supported_mcast_algo_pairs, 0x2c0, 0x40, true, 0x9f88b7ebbd836b35)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_EXTSTA_ATTRIBUTES.uAdhocNumSupportedUcastAlgoPairs", u_adhoc_num_supported_ucast_algo_pairs, 0x300, 0x20, true, 0xea696b1b5ec2c810)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::dot11_auth_cipher_pair_t*), "DOT11_EXTSTA_ATTRIBUTES.pAdhocSupportedUcastAlgoPairs", p_adhoc_supported_ucast_algo_pairs, 0x340, 0x40, true, 0x5c9d8e21e1e7c200)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_EXTSTA_ATTRIBUTES.uAdhocNumSupportedMcastAlgoPairs", u_adhoc_num_supported_mcast_algo_pairs, 0x380, 0x20, true, 0xe50d119f08aec11c)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::dot11_auth_cipher_pair_t*), "DOT11_EXTSTA_ATTRIBUTES.pAdhocSupportedMcastAlgoPairs", p_adhoc_supported_mcast_algo_pairs, 0x3c0, 0x40, true, 0xaf73c35bef569f12)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "DOT11_EXTSTA_ATTRIBUTES.bAutoPowerSaveMode", b_auto_power_save_mode, 0x400, 0x8, true, 0xfd180830e5c14830)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_EXTSTA_ATTRIBUTES.uMaxNetworkOffloadListSize", u_max_network_offload_list_size, 0x420, 0x20, true, 0x9cdad8203e23a1ab)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "DOT11_EXTSTA_ATTRIBUTES.bMFPCapable", b_mfp_capable, 0x440, 0x8, true, 0x84a9c7bf1f0b75a3)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_EXTSTA_ATTRIBUTES.uInfraNumSupportedMcastMgmtAlgoPairs", u_infra_num_supported_mcast_mgmt_algo_pairs, 0x460, 0x20, true, 0x78badd7bd86591d8)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::dot11_auth_cipher_pair_t*), "DOT11_EXTSTA_ATTRIBUTES.pInfraSupportedMcastMgmtAlgoPairs", p_infra_supported_mcast_mgmt_algo_pairs, 0x480, 0x40, true, 0xc4e90b428250aff8)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "DOT11_EXTSTA_ATTRIBUTES.bNeighborReportSupported", b_neighbor_report_supported, 0x4c0, 0x8, true, 0xbaae9431b87b5210)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "DOT11_EXTSTA_ATTRIBUTES.bAPChannelReportSupported", b_ap_channel_report_supported, 0x4c8, 0x8, true, 0x8d211698cf96882)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "DOT11_EXTSTA_ATTRIBUTES.bActionFramesSupported", b_action_frames_supported, 0x4d0, 0x8, true, 0x3b28a8279ec00e6e)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "DOT11_EXTSTA_ATTRIBUTES.bANQPQueryOffloadSupported", b_anqp_query_offload_supported, 0x4d8, 0x8, true, 0xa21760ab1970e01d)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "DOT11_EXTSTA_ATTRIBUTES.bHESSIDConnectionSupported", b_hessid_connection_supported, 0x4e0, 0x8, true, 0x8b25932dd75835b1)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#endif