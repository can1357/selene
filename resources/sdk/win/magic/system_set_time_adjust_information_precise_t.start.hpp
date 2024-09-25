#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_SET_TIME_ADJUST_INFORMATION_PRECISE.TimeAdjustment", time_adjustment, 0x0, 0x40, true, 0xd9ac1a2d7a1821e3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_SET_TIME_ADJUST_INFORMATION_PRECISE.Enable", enable, 0x40, 0x8, true, 0x5a8f7ef7c9e202f6)
#else
#define _m00
#define _m01
#endif