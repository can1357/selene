#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_FILTER_EVENT_NAME.MatchAnyKeyword", match_any_keyword, 0x0, 0x40, true, 0x2a66b5b651bf2a40)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_FILTER_EVENT_NAME.MatchAllKeyword", match_all_keyword, 0x40, 0x40, true, 0xffbfb73bb389982c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_FILTER_EVENT_NAME.Level", level, 0x80, 0x8, true, 0xa76340258c759983)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_FILTER_EVENT_NAME.FilterIn", filter_in, 0x88, 0x8, true, 0x2a92c805fc9d3a38)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_EVENT_FILTER_EVENT_NAME.NameCount", name_count, 0x90, 0x10, true, 0x3332f5625d3973c3)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_EVENT_FILTER_EVENT_NAME.Names", names, 0xa0, 0x8, true, 0xc07ad9c02128dd53)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif