#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_cpinfoexW.MaxCharSize", max_char_size, 0x0, 0x20, true, 0xa14c612a05d492e1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_cpinfoexW.DefaultChar", default_char, 0x20, 0x10, true, 0x9f0742e657c4ea95)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 12>), "_cpinfoexW.LeadByte", lead_byte, 0x30, 0x60, true, 0x3482f91bf27fc0ab)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t), "_cpinfoexW.UnicodeDefaultChar", unicode_default_char, 0x90, 0x10, true, 0x1b22825547a37b56)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_cpinfoexW.CodePage", code_page, 0xa0, 0x20, true, 0x8cff777bf99643c4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 260>), "_cpinfoexW.CodePageName", code_page_name, 0xc0, 0x40, true, 0x146c6bfdcc134aa2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif