#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_BSSID_INFO.BSSID", bssid, 0x0, 0x30, true, 0x3d8a7585f0796525)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_BSSID_INFO.PMKID", pmkid, 0x30, 0x80, true, 0x539129bb19a1f2c2)
#else
#define _m00
#define _m01
#endif