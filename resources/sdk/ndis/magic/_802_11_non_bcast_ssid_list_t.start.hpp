#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_NON_BCAST_SSID_LIST.NumberOfItems", number_of_items, 0x0, 0x20, true, 0xb425fdfb41301976)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::_802_11_ssid_t, 1>), "_NDIS_802_11_NON_BCAST_SSID_LIST.Non_Bcast_Ssid", non_bcast_ssid, 0x20, 0x20, true, 0xb08f74f9d5953de8)
#else
#define _m00
#define _m01
#endif