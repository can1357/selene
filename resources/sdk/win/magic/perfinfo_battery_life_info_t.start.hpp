#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_BATTERY_LIFE_INFO.RemainingCapacity", remaining_capacity, 0x0, 0x20, true, 0x4c1dc1302772b282)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_BATTERY_LIFE_INFO.Rate", rate, 0x20, 0x20, true, 0xc097225f40f00b47)
#else
#define _m00
#define _m01
#endif