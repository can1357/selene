#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_802_11_SSID.SsidLength", ssid_length, 0x0, 0x20, true, 0xfa785382d028202f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_NDIS_802_11_SSID.Ssid", ssid, 0x20, 0x0, true, 0x22b1bfc8c1713b35)
#else
#define _m00
#define _m01
#endif