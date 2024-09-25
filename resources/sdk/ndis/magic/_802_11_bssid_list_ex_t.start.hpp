#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_BSSID_LIST_EX.NumberOfItems", number_of_items, 0x0, 0x20, true, 0x56ed26c0586d104c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::wlan_bssid_ex_t, 1>), "_NDIS_802_11_BSSID_LIST_EX.Bssid", bssid, 0x20, 0xc0, true, 0xf62280c803d9bc2f)
#else
#define _m00
#define _m01
#endif