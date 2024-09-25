#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagLC_ID.wLanguage", w_language, 0x0, 0x10, true, 0x7d8dfaf6ad0242d8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagLC_ID.wCountry", w_country, 0x10, 0x10, true, 0xec3cc885fa31ba62)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagLC_ID.wCodePage", w_code_page, 0x20, 0x10, true, 0xfd88a7b5d4237b49)
#else
#define _m00
#define _m01
#define _m02
#endif