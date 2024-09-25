#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_KEY_BLOB_HEADER.cbSize", cb_size, 0x0, 0x20, true, 0xf2fe5c1314938cb8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_KEY_BLOB_HEADER.dwMagic", dw_magic, 0x20, 0x20, true, 0xcd58cf9cb6b25c08)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_KEY_BLOB_HEADER.cbAlgName", cb_alg_name, 0x40, 0x20, true, 0x9b978ac533e6cc38)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NCRYPT_KEY_BLOB_HEADER.cbKeyData", cb_key_data, 0x60, 0x20, true, 0xf47c07a286651a9f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif