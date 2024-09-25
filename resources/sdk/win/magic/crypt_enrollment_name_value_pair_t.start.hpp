#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CRYPT_ENROLLMENT_NAME_VALUE_PAIR.pwszName", pwsz_name, 0x0, 0x40, true, 0x163de6849ab82844)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CRYPT_ENROLLMENT_NAME_VALUE_PAIR.pwszValue", pwsz_value, 0x40, 0x40, true, 0x441dd1ada2357d92)
#else
#define _m00
#define _m01
#endif