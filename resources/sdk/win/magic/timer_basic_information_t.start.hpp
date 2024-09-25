#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_TIMER_BASIC_INFORMATION.RemainingTime", remaining_time, 0x0, 0x40, true, 0xec12c0bf06d5e3c1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TIMER_BASIC_INFORMATION.TimerState", timer_state, 0x40, 0x8, true, 0x2860ca14713cce93)
#else
#define _m00
#define _m01
#endif