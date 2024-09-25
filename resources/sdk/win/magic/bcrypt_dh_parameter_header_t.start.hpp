#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_DH_PARAMETER_HEADER.cbLength", cb_length, 0x0, 0x20, true, 0xe6c84df944c5e591)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_DH_PARAMETER_HEADER.dwMagic", dw_magic, 0x20, 0x20, true, 0xdf7a5e0c168bbf67)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_DH_PARAMETER_HEADER.cbKeyLength", cb_key_length, 0x40, 0x20, true, 0x786734c0f85befc)
#else
#define _m00
#define _m01
#define _m02
#endif