#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_KEY_DATA_BLOB_HEADER.dwMagic", dw_magic, 0x0, 0x20, true, 0xa0834684949b2649)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_KEY_DATA_BLOB_HEADER.dwVersion", dw_version, 0x20, 0x20, true, 0xed0bd9c0dd7f539d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_KEY_DATA_BLOB_HEADER.cbKeyData", cb_key_data, 0x40, 0x20, true, 0xd94119910c3d54a6)
#else
#define _m00
#define _m01
#define _m02
#endif