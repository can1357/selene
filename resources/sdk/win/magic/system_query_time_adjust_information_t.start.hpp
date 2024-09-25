#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_QUERY_TIME_ADJUST_INFORMATION.TimeAdjustment", time_adjustment, 0x0, 0x20, true, 0x1660b99565f45235)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_QUERY_TIME_ADJUST_INFORMATION.TimeIncrement", time_increment, 0x20, 0x20, true, 0x267bd969adeff79f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_QUERY_TIME_ADJUST_INFORMATION.Enable", enable, 0x40, 0x8, true, 0x1f40fd6d2b077f3b)
#else
#define _m00
#define _m01
#define _m02
#endif