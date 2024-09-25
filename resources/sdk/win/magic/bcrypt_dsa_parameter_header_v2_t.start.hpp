#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_DSA_PARAMETER_HEADER_V2.cbLength", cb_length, 0x0, 0x20, true, 0x6d1d78551a35827d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_DSA_PARAMETER_HEADER_V2.dwMagic", dw_magic, 0x20, 0x20, true, 0x56128c69424b329)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_DSA_PARAMETER_HEADER_V2.cbKeyLength", cb_key_length, 0x40, 0x20, true, 0xa0bc5fcf355aeae)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::hashalgorithm_enum_t), "_BCRYPT_DSA_PARAMETER_HEADER_V2.hashAlgorithm", hash_algorithm, 0x60, 0x20, true, 0x4c4a5a7c34371059)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::dsafipsversion_enum_t), "_BCRYPT_DSA_PARAMETER_HEADER_V2.standardVersion", standard_version, 0x80, 0x20, true, 0x3f0be669ec7d87b0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_DSA_PARAMETER_HEADER_V2.cbSeedLength", cb_seed_length, 0xa0, 0x20, true, 0x20f19e7ccba71479)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_DSA_PARAMETER_HEADER_V2.cbGroupSize", cb_group_size, 0xc0, 0x20, true, 0x800b2c2bc536e0a6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_BCRYPT_DSA_PARAMETER_HEADER_V2.Count", count, 0xe0, 0x20, true, 0x8718eec3868e381a)
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