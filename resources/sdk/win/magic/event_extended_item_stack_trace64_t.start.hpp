#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_EXTENDED_ITEM_STACK_TRACE64.MatchId", match_id, 0x0, 0x40, true, 0x7d35810f3c9fe430)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 1>), "_EVENT_EXTENDED_ITEM_STACK_TRACE64.Address", address, 0x40, 0x40, true, 0x6fea06c1be0c3388)
#else
#define _m00
#define _m01
#endif