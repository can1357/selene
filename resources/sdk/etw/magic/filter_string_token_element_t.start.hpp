#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ETW_FILTER_STRING_TOKEN_ELEMENT.Length", length, 0x0, 0x10, true, 0x4cc842c0d67f37e9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_ETW_FILTER_STRING_TOKEN_ELEMENT.String", string, 0x40, 0x40, true, 0xd7971d13b927cdc1)
#else
#define _m00
#define _m01
#endif