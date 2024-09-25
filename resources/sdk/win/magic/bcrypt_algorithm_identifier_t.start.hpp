#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_BCRYPT_ALGORITHM_IDENTIFIER.pszName", psz_name, 0x0, 0x40, true, 0xe45e027cc3b27d69)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_ALGORITHM_IDENTIFIER.dwClass", dw_class, 0x40, 0x20, true, 0x3b0cdf0d07477e41)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_ALGORITHM_IDENTIFIER.dwFlags", dw_flags, 0x60, 0x20, true, 0x8380d81ae421985c)
#else
#define _m00
#define _m01
#define _m02
#endif