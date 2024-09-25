#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_AUTHENTICATION_REQUEST.Length", length, 0x0, 0x20, true, 0x6cd935c953823b0e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_NDIS_802_11_AUTHENTICATION_REQUEST.Bssid", bssid, 0x20, 0x30, true, 0xccb2afb594dfc8c6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_AUTHENTICATION_REQUEST.Flags", flags, 0x60, 0x20, true, 0xb1350c5257c8ac81)
#else
#define _m00
#define _m01
#define _m02
#endif