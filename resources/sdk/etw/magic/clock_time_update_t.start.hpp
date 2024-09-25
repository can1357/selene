#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_CLOCK_TIME_UPDATE.InterruptTime", interrupt_time, 0x0, 0x40, true, 0xd7c098d93548b115)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_CLOCK_TIME_UPDATE.ClockOwner", clock_owner, 0x40, 0x20, true, 0x67c196446f2cb0e7)
#else
#define _m00
#define _m01
#endif