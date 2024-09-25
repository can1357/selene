#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_ECCKEY_BLOB.dwMagic", dw_magic, 0x0, 0x20, true, 0x360e3d265c9bca89)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_ECCKEY_BLOB.cbKey", cb_key, 0x20, 0x20, true, 0xde84d8bd5a1caf61)
#else
#define _m00
#define _m01
#endif