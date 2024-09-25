#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_DH_KEY_BLOB.dwMagic", dw_magic, 0x0, 0x20, true, 0x4650c31e67ae1e35)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_DH_KEY_BLOB.cbKey", cb_key, 0x20, 0x20, true, 0x5c4ef3b42adad62a)
#else
#define _m00
#define _m01
#endif