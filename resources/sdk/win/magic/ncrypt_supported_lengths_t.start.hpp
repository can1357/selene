#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "__NCRYPT_SUPPORTED_LENGTHS.dwMinLength", dw_min_length, 0x0, 0x20, true, 0x9ae3f45f197a11f6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "__NCRYPT_SUPPORTED_LENGTHS.dwMaxLength", dw_max_length, 0x20, 0x20, true, 0xc8bb7f440db7c9b0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "__NCRYPT_SUPPORTED_LENGTHS.dwIncrement", dw_increment, 0x40, 0x20, true, 0x6a1da7b303a4dd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "__NCRYPT_SUPPORTED_LENGTHS.dwDefaultLength", dw_default_length, 0x60, 0x20, true, 0x31dbbe58fe9efdbe)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif