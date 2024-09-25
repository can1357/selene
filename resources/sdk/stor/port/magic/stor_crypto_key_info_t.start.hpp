#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_CRYPTO_KEY_INFO.Version", version, 0x0, 0x20, true, 0x2080586cf6499873)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_CRYPTO_KEY_INFO.Size", size, 0x20, 0x20, true, 0x9f99733f7cf9d2e5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_CRYPTO_KEY_INFO.KeyIndex", key_index, 0x40, 0x20, true, 0xbcd3cdffb3515f95)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STOR_CRYPTO_KEY_INFO.Tweak", tweak, 0x80, 0x40, true, 0x245d34f07aed41d6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif