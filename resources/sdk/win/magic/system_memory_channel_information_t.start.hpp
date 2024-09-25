#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_MEMORY_CHANNEL_INFORMATION.ChannelNumber", channel_number, 0x0, 0x20, true, 0x5efa4f0513fb4b25)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_MEMORY_CHANNEL_INFORMATION.ChannelHeatIndex", channel_heat_index, 0x20, 0x20, true, 0xc0e71589d17e35e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_MEMORY_CHANNEL_INFORMATION.TotalPageCount", total_page_count, 0x40, 0x40, true, 0xf28b4335daac0bd6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_MEMORY_CHANNEL_INFORMATION.ZeroPageCount", zero_page_count, 0x80, 0x40, true, 0xc52603d6afce36a0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_MEMORY_CHANNEL_INFORMATION.FreePageCount", free_page_count, 0xc0, 0x40, true, 0xf6eeef83c55edb20)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_MEMORY_CHANNEL_INFORMATION.StandbyPageCount", standby_page_count, 0x100, 0x40, true, 0xcf6f3ca80c725c90)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif