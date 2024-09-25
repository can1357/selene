#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_FILTER_EVENT_NAME_DATA.FilterIn", filter_in, 0x0, 0x8, true, 0xb8dec912dfb58cf4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_FILTER_EVENT_NAME_DATA.Level", level, 0x8, 0x8, true, 0x475ea8d420454f82)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_FILTER_EVENT_NAME_DATA.MatchAnyKeyword", match_any_keyword, 0x40, 0x40, true, 0xdb2a19a2d4aa2ed5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_FILTER_EVENT_NAME_DATA.MatchAllKeyword", match_all_keyword, 0x80, 0x40, true, 0x4a7b53617c0a1e00)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::hash_table_t), "_ETW_FILTER_EVENT_NAME_DATA.NameTable", name_table, 0xc0, 0x80, true, 0x326aa757b38029e2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif