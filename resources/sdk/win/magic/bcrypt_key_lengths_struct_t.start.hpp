#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "__BCRYPT_KEY_LENGTHS_STRUCT.dwMinLength", dw_min_length, 0x0, 0x20, true, 0x82bb9f4431de38dc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "__BCRYPT_KEY_LENGTHS_STRUCT.dwMaxLength", dw_max_length, 0x20, 0x20, true, 0x2ad5358c262209e8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "__BCRYPT_KEY_LENGTHS_STRUCT.dwIncrement", dw_increment, 0x40, 0x20, true, 0x1ae04e9fb80ae93e)
#else
#define _m00
#define _m01
#define _m02
#endif