#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_FILTER_LEVEL_KW.MatchAnyKeyword", match_any_keyword, 0x0, 0x40, true, 0xd34674eb320f2813)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_FILTER_LEVEL_KW.MatchAllKeyword", match_all_keyword, 0x40, 0x40, true, 0x817e0303e70b0a05)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_FILTER_LEVEL_KW.Level", level, 0x80, 0x8, true, 0xebdc0fc28e6424cc)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_FILTER_LEVEL_KW.FilterIn", filter_in, 0x88, 0x8, true, 0x242774655dd2f746)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif