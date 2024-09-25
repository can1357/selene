#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WLAN_BSSID.Length", length, 0x0, 0x20, true, 0xb217ab9b1862ceb6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_NDIS_WLAN_BSSID.MacAddress", mac_address, 0x20, 0x30, true, 0xfae60bf1b4f81aaa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::_802_11_ssid_t), "_NDIS_WLAN_BSSID.Ssid", ssid, 0x60, 0x20, true, 0xf7f3d59fd10a664b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WLAN_BSSID.Privacy", privacy, 0x180, 0x20, true, 0x232091c9977cb7c3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_NDIS_WLAN_BSSID.Rssi", rssi, 0x1a0, 0x20, true, 0xd2dad3068997f86c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::_802_11_network_type_t), "_NDIS_WLAN_BSSID.NetworkTypeInUse", network_type_in_use, 0x1c0, 0x20, true, 0x98a0b330b947813a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::_802_11_configuration_t), "_NDIS_WLAN_BSSID.Configuration", configuration, 0x1e0, 0x0, true, 0x367e907f53c0db11)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::_802_11_network_infrastructure_t), "_NDIS_WLAN_BSSID.InfrastructureMode", infrastructure_mode, 0x2e0, 0x20, true, 0xea2aa61e7a8de694)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_NDIS_WLAN_BSSID.SupportedRates", supported_rates, 0x300, 0x40, true, 0x724c958857af7cde)
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
#endif