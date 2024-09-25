#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t), "_CHAR_INFO.Char.UnicodeChar", unicode_char, 0x0, 0x10, true, 0x6b2b54cdbab2ec4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_CHAR_INFO.Char.AsciiChar", ascii_char, 0x0, 0x8, true, 0x727ad26d132a8152)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0__char_t), "_CHAR_INFO.Char", _char, 0x0, 0x10, true, 0x2c77846549c8697f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CHAR_INFO.Attributes", attributes, 0x10, 0x10, true, 0x127ab5d9a6f5f2cb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif