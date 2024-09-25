#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_DOT11_EXTAP_ATTRIBUTES.Header", header, 0x0, 0x20, true, 0x22f64641b2351319)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_EXTAP_ATTRIBUTES.uScanSSIDListSize", u_scan_ssid_list_size, 0x20, 0x20, true, 0xc1d8c5c6bc083c56)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_EXTAP_ATTRIBUTES.uDesiredSSIDListSize", u_desired_ssid_list_size, 0x40, 0x20, true, 0x21971f038cc4ec18)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_EXTAP_ATTRIBUTES.uPrivacyExemptionListSize", u_privacy_exemption_list_size, 0x60, 0x20, true, 0x2299cbecec9ef53f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_EXTAP_ATTRIBUTES.uAssociationTableSize", u_association_table_size, 0x80, 0x20, true, 0x475288abb5b00c83)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_EXTAP_ATTRIBUTES.uDefaultKeyTableSize", u_default_key_table_size, 0xa0, 0x20, true, 0xa8aa6b191c4c640a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_EXTAP_ATTRIBUTES.uWEPKeyValueMaxLength", u_wep_key_value_max_length, 0xc0, 0x20, true, 0xb73d342fb9818fd4)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DOT11_EXTAP_ATTRIBUTES.bStrictlyOrderedServiceClassImplemented", b_strictly_ordered_service_class_implemented, 0xe0, 0x8, true, 0x933d14adc4889288)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_EXTAP_ATTRIBUTES.uNumSupportedCountryOrRegionStrings", u_num_supported_country_or_region_strings, 0x100, 0x20, true, 0x324b2cdbaba7307e)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>*), "_DOT11_EXTAP_ATTRIBUTES.pSupportedCountryOrRegionStrings", p_supported_country_or_region_strings, 0x140, 0x40, true, 0x7997e8c3c1a0f83b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_EXTAP_ATTRIBUTES.uInfraNumSupportedUcastAlgoPairs", u_infra_num_supported_ucast_algo_pairs, 0x180, 0x20, true, 0xd875700faa56712b)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::dot11_auth_cipher_pair_t*), "_DOT11_EXTAP_ATTRIBUTES.pInfraSupportedUcastAlgoPairs", p_infra_supported_ucast_algo_pairs, 0x1c0, 0x40, true, 0x6d0c549474945e4e)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_EXTAP_ATTRIBUTES.uInfraNumSupportedMcastAlgoPairs", u_infra_num_supported_mcast_algo_pairs, 0x200, 0x20, true, 0x3eb39925dfa6a460)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::dot11_auth_cipher_pair_t*), "_DOT11_EXTAP_ATTRIBUTES.pInfraSupportedMcastAlgoPairs", p_infra_supported_mcast_algo_pairs, 0x240, 0x40, true, 0x2e010e93c7a84892)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#endif