#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_REMOVE_KEY.Length", length, 0x0, 0x20, true, 0xf4ba3f352a841fed)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_REMOVE_KEY.KeyIndex", key_index, 0x20, 0x20, true, 0x3be632f063f6cb32)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_NDIS_802_11_REMOVE_KEY.BSSID", bssid, 0x40, 0x30, true, 0xb2c4d4c1c2fe0a95)
#else
#define _m00
#define _m01
#define _m02
#endif