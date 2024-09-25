#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_URL_ARRAY.cUrl", c_url, 0x0, 0x20, true, 0xfea2e6356a0c42d1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t**), "_CRYPT_URL_ARRAY.rgwszUrl", rgwsz_url, 0x40, 0x40, true, 0x55de2d14d8b2a58a)
#else
#define _m00
#define _m01
#endif