#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WLAN_BSSID_EX.Length", length, 0x0, 0x20, true, 0xc69c6d9fd4278137)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_NDIS_WLAN_BSSID_EX.MacAddress", mac_address, 0x20, 0x30, true, 0x4fb36c38233b88e0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::_802_11_ssid_t), "_NDIS_WLAN_BSSID_EX.Ssid", ssid, 0x60, 0x20, true, 0x2416fae5d40c60bf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WLAN_BSSID_EX.Privacy", privacy, 0x180, 0x20, true, 0x8c8cf4ca846e5396)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_WLAN_BSSID_EX.Rssi", rssi, 0x1a0, 0x20, true, 0x5c7e14cab3562c14)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::_802_11_network_type_t), "_NDIS_WLAN_BSSID_EX.NetworkTypeInUse", network_type_in_use, 0x1c0, 0x20, true, 0xdd6b46654ffaf1c7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::_802_11_configuration_t), "_NDIS_WLAN_BSSID_EX.Configuration", configuration, 0x1e0, 0x0, true, 0xaea20bf150b20241)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::_802_11_network_infrastructure_t), "_NDIS_WLAN_BSSID_EX.InfrastructureMode", infrastructure_mode, 0x2e0, 0x20, true, 0x16718db8669a62b6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_NDIS_WLAN_BSSID_EX.SupportedRates", supported_rates, 0x300, 0x80, true, 0x9bd19e030d881f53)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WLAN_BSSID_EX.IELength", ie_length, 0x380, 0x20, true, 0x952f72c85b17e3d0)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_NDIS_WLAN_BSSID_EX.IEs", i_es, 0x3a0, 0x8, true, 0x2a0f94735f86afb0)
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