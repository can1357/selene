#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_DSA_KEY_BLOB_V2.dwMagic", dw_magic, 0x0, 0x20, true, 0xd9be6714e0c80d93)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_DSA_KEY_BLOB_V2.cbKey", cb_key, 0x20, 0x20, true, 0xa78d3825a2703b92)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::hashalgorithm_enum_t), "_BCRYPT_DSA_KEY_BLOB_V2.hashAlgorithm", hash_algorithm, 0x40, 0x20, true, 0x1abf789c33e8d5a8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::dsafipsversion_enum_t), "_BCRYPT_DSA_KEY_BLOB_V2.standardVersion", standard_version, 0x60, 0x20, true, 0x7e9698e0c795f338)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_DSA_KEY_BLOB_V2.cbSeedLength", cb_seed_length, 0x80, 0x20, true, 0x5083f9aecc140ba2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_DSA_KEY_BLOB_V2.cbGroupSize", cb_group_size, 0xa0, 0x20, true, 0x4ebe85d7f277fa8b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_BCRYPT_DSA_KEY_BLOB_V2.Count", count, 0xc0, 0x20, true, 0x334d412e59fcd9da)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif