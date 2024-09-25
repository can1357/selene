#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSTYLEBUFW.dwStyle", dw_style, 0x0, 0x20, true, 0xe379473899d8a0fc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "tagSTYLEBUFW.szDescription", sz_description, 0x20, 0x0, true, 0xe3fa2efc5987099)
#else
#define _m00
#define _m01
#endif