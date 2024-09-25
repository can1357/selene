#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_DSA_PARAMETER_HEADER.cbLength", cb_length, 0x0, 0x20, true, 0xdd191f44aff2e6d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_DSA_PARAMETER_HEADER.dwMagic", dw_magic, 0x20, 0x20, true, 0x28357bfb95d27b25)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_DSA_PARAMETER_HEADER.cbKeyLength", cb_key_length, 0x40, 0x20, true, 0x2095e5069f36485f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_BCRYPT_DSA_PARAMETER_HEADER.Count", count, 0x60, 0x20, true, 0xe84f8ad7796669ae)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 20>), "_BCRYPT_DSA_PARAMETER_HEADER.Seed", seed, 0x80, 0xa0, true, 0x6302b99f4f0b985c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 20>), "_BCRYPT_DSA_PARAMETER_HEADER.q", q, 0x120, 0xa0, true, 0xdc2f026078d85139)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif