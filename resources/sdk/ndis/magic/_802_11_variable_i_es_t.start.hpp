#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_802_11_VARIABLE_IEs.ElementID", element_id, 0x0, 0x8, true, 0xf41877e832c189c0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_802_11_VARIABLE_IEs.Length", length, 0x8, 0x8, true, 0xd29d23d39064fa51)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_NDIS_802_11_VARIABLE_IEs.data", data, 0x10, 0x8, true, 0x34048700a661e812)
#else
#define _m00
#define _m01
#define _m02
#endif