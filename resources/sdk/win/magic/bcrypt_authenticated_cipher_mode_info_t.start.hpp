#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_AUTHENTICATED_CIPHER_MODE_INFO.cbSize", cb_size, 0x0, 0x20, true, 0xaf72bf79cee95e49)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_AUTHENTICATED_CIPHER_MODE_INFO.dwInfoVersion", dw_info_version, 0x20, 0x20, true, 0x8491ae55f543568)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_BCRYPT_AUTHENTICATED_CIPHER_MODE_INFO.pbNonce", pb_nonce, 0x40, 0x40, true, 0x87a87b0af18f5664)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_AUTHENTICATED_CIPHER_MODE_INFO.cbNonce", cb_nonce, 0x80, 0x20, true, 0x11b3c316f4b987f6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_BCRYPT_AUTHENTICATED_CIPHER_MODE_INFO.pbAuthData", pb_auth_data, 0xc0, 0x40, true, 0x468392c7dd0dd052)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_AUTHENTICATED_CIPHER_MODE_INFO.cbAuthData", cb_auth_data, 0x100, 0x20, true, 0x9ee87f77f8b45849)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_BCRYPT_AUTHENTICATED_CIPHER_MODE_INFO.pbTag", pb_tag, 0x140, 0x40, true, 0x7a20d3097ac5121f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_AUTHENTICATED_CIPHER_MODE_INFO.cbTag", cb_tag, 0x180, 0x20, true, 0x3af1f5a913e39b57)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_BCRYPT_AUTHENTICATED_CIPHER_MODE_INFO.pbMacContext", pb_mac_context, 0x1c0, 0x40, true, 0xf7269da944be1b8d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_AUTHENTICATED_CIPHER_MODE_INFO.cbMacContext", cb_mac_context, 0x200, 0x20, true, 0x61a92b5b7812f1b8)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_AUTHENTICATED_CIPHER_MODE_INFO.cbAAD", cb_aad, 0x220, 0x20, true, 0x9ecffbda8ddb76c5)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_BCRYPT_AUTHENTICATED_CIPHER_MODE_INFO.cbData", cb_data, 0x240, 0x40, true, 0xf6f16aecd4918914)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_AUTHENTICATED_CIPHER_MODE_INFO.dwFlags", dw_flags, 0x280, 0x20, true, 0x9c830fd6e0fb1ede)
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
#define _m10
#define _m11
#define _m12
#endif