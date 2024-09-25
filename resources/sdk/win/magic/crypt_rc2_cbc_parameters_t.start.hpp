#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_RC2_CBC_PARAMETERS.dwVersion", dw_version, 0x0, 0x20, true, 0x4665a1b1aa1755f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CRYPT_RC2_CBC_PARAMETERS.fIV", f_iv, 0x20, 0x20, true, 0x7e7fa0c3cf6dc2d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_CRYPT_RC2_CBC_PARAMETERS.rgbIV", rgb_iv, 0x40, 0x40, true, 0x24a1525f6fd9d27e)
#else
#define _m00
#define _m01
#define _m02
#endif