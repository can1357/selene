#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_SSID.uSSIDLength", u_ssid_length, 0x0, 0x20, true, 0xf8edcbd350fdeb61)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_DOT11_SSID.ucSSID", uc_ssid, 0x20, 0x0, true, 0x1d6e7ea9323bc108)
#else
#define _m00
#define _m01
#endif