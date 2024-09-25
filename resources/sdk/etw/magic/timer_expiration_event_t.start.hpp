#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_TIMER_EXPIRATION_EVENT.ExpectedDueTime", expected_due_time, 0x0, 0x40, true, 0xf96e84f2a110e496)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_TIMER_EXPIRATION_EVENT.TimerAddress", timer_address, 0x40, 0x40, true, 0x2a588abf4c47f80c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_TIMER_EXPIRATION_EVENT.DeferredRoutine", deferred_routine, 0x80, 0x40, true, 0x6dce36c02a7400e0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_TIMER_EXPIRATION_EVENT.EncodedDelay", encoded_delay, 0xc0, 0x8, true, 0x3b5ae73caf996766)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif