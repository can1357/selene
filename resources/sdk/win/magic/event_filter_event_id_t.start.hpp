#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_FILTER_EVENT_ID.FilterIn", filter_in, 0x0, 0x8, true, 0x381ead80b24cf940)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_EVENT_FILTER_EVENT_ID.Count", count, 0x10, 0x10, true, 0x18d35796801e9222)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 1>), "_EVENT_FILTER_EVENT_ID.Events", events, 0x20, 0x10, true, 0xed67b9f7618918da)
#else
#define _m00
#define _m01
#define _m02
#endif