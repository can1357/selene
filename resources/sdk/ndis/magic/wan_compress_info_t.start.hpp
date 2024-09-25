#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_NDIS_WAN_COMPRESS_INFO.SessionKey", session_key, 0x0, 0x40, true, 0xb9ffb78309e3a58)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_COMPRESS_INFO.MSCompType", ms_comp_type, 0x40, 0x20, true, 0x8ec1409ae30cfe98)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_WAN_COMPRESS_INFO.CompType", comp_type, 0x60, 0x8, true, 0xff7c716059485dd7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_WAN_COMPRESS_INFO.CompLength", comp_length, 0x70, 0x10, true, 0x7f76f3d6acb6758f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_NDIS_WAN_COMPRESS_INFO.Proprietary.CompOUI", comp_oui, 0x0, 0x18, true, 0x7176b828e684ec97)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_WAN_COMPRESS_INFO.Proprietary.CompSubType", comp_sub_type, 0x18, 0x8, true, 0xd6586837ee1e24b8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_NDIS_WAN_COMPRESS_INFO.Proprietary.CompValues", comp_values, 0x20, 0x0, true, 0x254006b74178df30)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_proprietary_t), "_NDIS_WAN_COMPRESS_INFO.Proprietary", proprietary, 0x80, 0x20, true, 0x76caa4f01bfeb858)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_NDIS_WAN_COMPRESS_INFO.Public.CompValues", comp_values, 0x0, 0x0, true, 0x71a25d3ab1c86eaf)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4__public_t), "_NDIS_WAN_COMPRESS_INFO.Public", _public, 0x80, 0x0, true, 0xb17688c2d3c836e2)
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
#endif