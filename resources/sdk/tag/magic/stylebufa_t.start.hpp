#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSTYLEBUFA.dwStyle", dw_style, 0x0, 0x20, true, 0x75705dc5b27db607)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 32>), "tagSTYLEBUFA.szDescription", sz_description, 0x20, 0x0, true, 0x6279116666323b03)
#else
#define _m00
#define _m01
#endif