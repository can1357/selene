#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_NETWORK_TYPE_LIST.NumberOfItems", number_of_items, 0x0, 0x20, true, 0x416eb4bca9bf297f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<enum ndis::_802_11_network_type_t, 1>), "_NDIS_802_11_NETWORK_TYPE_LIST.NetworkType", network_type, 0x20, 0x20, true, 0x433860b16a8885a6)
#else
#define _m00
#define _m01
#endif