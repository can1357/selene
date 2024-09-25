#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_TIMER_EXPIRATION_START_EVENT.InterruptTime", interrupt_time, 0x0, 0x40, true, 0x572a291f3f55ab09)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_TIMER_EXPIRATION_START_EVENT.HrTimerExpirationOnly", hr_timer_expiration_only, 0x40, 0x8, true, 0xab9ff925c17a9f88)
#else
#define _m00
#define _m01
#endif