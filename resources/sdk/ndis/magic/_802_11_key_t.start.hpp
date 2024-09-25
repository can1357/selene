#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_KEY.Length", length, 0x0, 0x20, true, 0xb252dc2525470c63)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_KEY.KeyIndex", key_index, 0x20, 0x20, true, 0x12a452720ac1ed72)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_KEY.KeyLength", key_length, 0x40, 0x20, true, 0x1aba17793adc745e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_NDIS_802_11_KEY.BSSID", bssid, 0x60, 0x30, true, 0x8fd15091c1e35a16)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_802_11_KEY.KeyRSC", key_rsc, 0xc0, 0x40, true, 0x412791cc1c5705fa)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_NDIS_802_11_KEY.KeyMaterial", key_material, 0x100, 0x8, true, 0x2bfffa87e3787b91)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif