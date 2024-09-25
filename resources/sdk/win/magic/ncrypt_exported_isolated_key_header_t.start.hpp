#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_EXPORTED_ISOLATED_KEY_HEADER.Version", version, 0x0, 0x20, true, 0xf7874519d98e48f2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_EXPORTED_ISOLATED_KEY_HEADER.KeyUsage", key_usage, 0x20, 0x20, true, 0x8186d3c912af5f07)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_NCRYPT_EXPORTED_ISOLATED_KEY_HEADER.PerBootKey", per_boot_key, 0x40, 0x1, true, 0xc76b422d5fabb6ea, 1, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_EXPORTED_ISOLATED_KEY_HEADER.cbAlgName", cb_alg_name, 0x60, 0x20, true, 0x92b8ec784a37a823)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_EXPORTED_ISOLATED_KEY_HEADER.cbNonce", cb_nonce, 0x80, 0x20, true, 0x9a0c453dedb00703)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_EXPORTED_ISOLATED_KEY_HEADER.cbAuthTag", cb_auth_tag, 0xa0, 0x20, true, 0x38c4e825f487f030)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_EXPORTED_ISOLATED_KEY_HEADER.cbWrappingKey", cb_wrapping_key, 0xc0, 0x20, true, 0xb5bc0dc8f1d248fb)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_EXPORTED_ISOLATED_KEY_HEADER.cbIsolatedKey", cb_isolated_key, 0xe0, 0x20, true, 0x1576f3cc0dfd0edd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif