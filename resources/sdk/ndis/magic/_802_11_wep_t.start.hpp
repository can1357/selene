#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_WEP.Length", length, 0x0, 0x20, true, 0x468ba967a99ed716)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_WEP.KeyIndex", key_index, 0x20, 0x20, true, 0x8c954230aad6a62a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_WEP.KeyLength", key_length, 0x40, 0x20, true, 0xfaef70d6425c4f2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_NDIS_802_11_WEP.KeyMaterial", key_material, 0x60, 0x8, true, 0x615270b78b69e267)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif