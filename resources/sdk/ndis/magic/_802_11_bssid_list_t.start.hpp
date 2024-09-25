#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_BSSID_LIST.NumberOfItems", number_of_items, 0x0, 0x20, true, 0xf101cca424aa1b6c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::wlan_bssid_t, 1>), "_NDIS_802_11_BSSID_LIST.Bssid", bssid, 0x20, 0x40, true, 0x2addbf6391d52f3a)
#else
#define _m00
#define _m01
#endif