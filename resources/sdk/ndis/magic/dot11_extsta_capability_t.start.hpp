#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "DOT11_EXTSTA_CAPABILITY.Header", header, 0x0, 0x20, true, 0xd994eecc3a62b929)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_EXTSTA_CAPABILITY.uScanSSIDListSize", u_scan_ssid_list_size, 0x20, 0x20, true, 0x28b459d1bc1dc7af)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_EXTSTA_CAPABILITY.uDesiredBSSIDListSize", u_desired_bssid_list_size, 0x40, 0x20, true, 0x5175cdf9d6935ce8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_EXTSTA_CAPABILITY.uDesiredSSIDListSize", u_desired_ssid_list_size, 0x60, 0x20, true, 0x2c630556d1f8c1fe)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_EXTSTA_CAPABILITY.uExcludedMacAddressListSize", u_excluded_mac_address_list_size, 0x80, 0x20, true, 0xf92ca5445b2cfa77)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_EXTSTA_CAPABILITY.uPrivacyExemptionListSize", u_privacy_exemption_list_size, 0xa0, 0x20, true, 0x2d252b0c2a888bb5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_EXTSTA_CAPABILITY.uKeyMappingTableSize", u_key_mapping_table_size, 0xc0, 0x20, true, 0x9c8a910760e5cac8)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_EXTSTA_CAPABILITY.uDefaultKeyTableSize", u_default_key_table_size, 0xe0, 0x20, true, 0x70d907c4ce25297b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_EXTSTA_CAPABILITY.uWEPKeyValueMaxLength", u_wep_key_value_max_length, 0x100, 0x20, true, 0xc68ee92a7cf24ef6)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_EXTSTA_CAPABILITY.uPMKIDCacheSize", u_pmkid_cache_size, 0x120, 0x20, true, 0x957d423820a15b95)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_EXTSTA_CAPABILITY.uMaxNumPerSTADefaultKeyTables", u_max_num_per_sta_default_key_tables, 0x140, 0x20, true, 0x76fc7e89f4d76168)
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
#endif