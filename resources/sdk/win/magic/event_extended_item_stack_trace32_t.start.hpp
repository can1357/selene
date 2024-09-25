#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_EXTENDED_ITEM_STACK_TRACE32.MatchId", match_id, 0x0, 0x40, true, 0x45c17c0db1b18f5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_EVENT_EXTENDED_ITEM_STACK_TRACE32.Address", address, 0x40, 0x20, true, 0xbb05560c6aa4ad09)
#else
#define _m00
#define _m01
#endif