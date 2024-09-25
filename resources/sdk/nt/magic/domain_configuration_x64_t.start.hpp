#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_DOMAIN_CONFIGURATION_X64.FirstLevelPageTableRoot", first_level_page_table_root, 0x0, 0x0, false, 0x731e14dcc596a135)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DOMAIN_CONFIGURATION_X64.TranslationEnabled", translation_enabled, 0x0, 0x0, false, 0x70fda200b4c91a37)
#else
#define _m00
#define _m01
#endif