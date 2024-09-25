#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_RESOURCE_DIR_STRING_U.Length", length, 0x0, 0x10, true, 0x12b0078331561e3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_IMAGE_RESOURCE_DIR_STRING_U.NameString", name_string, 0x10, 0x10, true, 0x7c2e977be2dc9293)
#else
#define _m00
#define _m01
#endif