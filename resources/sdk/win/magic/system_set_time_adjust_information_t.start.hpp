#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_SET_TIME_ADJUST_INFORMATION.TimeAdjustment", time_adjustment, 0x0, 0x20, true, 0xa6bb836793ea60ee)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_SET_TIME_ADJUST_INFORMATION.Enable", enable, 0x20, 0x8, true, 0x823d9dea716ade67)
#else
#define _m00
#define _m01
#endif