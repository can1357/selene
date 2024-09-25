#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_DSA_KEY_BLOB.dwMagic", dw_magic, 0x0, 0x20, true, 0xe281ba860ab0f224)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_DSA_KEY_BLOB.cbKey", cb_key, 0x20, 0x20, true, 0x2e2a34152c5959f1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_BCRYPT_DSA_KEY_BLOB.Count", count, 0x40, 0x20, true, 0xe4a6f18373588892)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 20>), "_BCRYPT_DSA_KEY_BLOB.Seed", seed, 0x60, 0xa0, true, 0x3838d9efad0f899d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 20>), "_BCRYPT_DSA_KEY_BLOB.q", q, 0x100, 0xa0, true, 0x709bec90a7ec91d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif