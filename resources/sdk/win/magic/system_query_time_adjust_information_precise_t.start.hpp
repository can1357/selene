#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_QUERY_TIME_ADJUST_INFORMATION_PRECISE.TimeAdjustment", time_adjustment, 0x0, 0x40, true, 0x7acfd1404e0574ce)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_QUERY_TIME_ADJUST_INFORMATION_PRECISE.TimeIncrement", time_increment, 0x40, 0x40, true, 0x764949adfd280e5f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_QUERY_TIME_ADJUST_INFORMATION_PRECISE.Enable", enable, 0x80, 0x8, true, 0x2eb042e130bc40ec)
#else
#define _m00
#define _m01
#define _m02
#endif