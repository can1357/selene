#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_cpinfoexA.MaxCharSize", max_char_size, 0x0, 0x20, true, 0x280113456c9536f9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_cpinfoexA.DefaultChar", default_char, 0x20, 0x10, true, 0xf294b2f9c04f879a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 12>), "_cpinfoexA.LeadByte", lead_byte, 0x30, 0x60, true, 0xb89c3f8289a24695)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t), "_cpinfoexA.UnicodeDefaultChar", unicode_default_char, 0x90, 0x10, true, 0xde0a5b8972cbe178)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_cpinfoexA.CodePage", code_page, 0xa0, 0x20, true, 0xd322a801a2e2bea2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 260>), "_cpinfoexA.CodePageName", code_page_name, 0xc0, 0x20, true, 0x7f953e1061f80ea3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif