#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_CONTEXT_FUNCTIONS.cFunctions", c_functions, 0x0, 0x20, true, 0xd3593fcad9ef0073)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t**), "_CRYPT_CONTEXT_FUNCTIONS.rgpszFunctions", rgpsz_functions, 0x40, 0x40, true, 0x5a8b0006da513c59)
#else
#define _m00
#define _m01
#endif