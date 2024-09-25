#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KCLOCK_TICK_TRACE.PerformanceCounter", performance_counter, 0x0, 0x0, false, 0x69ee9e0552c319ec)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KCLOCK_TICK_TRACE.PreInterruptTime", pre_interrupt_time, 0x0, 0x0, false, 0x4bbd2251904b658e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KCLOCK_TICK_TRACE.PostInterruptTime", post_interrupt_time, 0x0, 0x0, false, 0x57b1b9c499d9dfc0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KCLOCK_TICK_TRACE.TimeStampCounter", time_stamp_counter, 0x0, 0x0, false, 0xfe88a5343ed0aeda)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KCLOCK_TICK_TRACE.IsClockOwner", is_clock_owner, 0x0, 0x0, false, 0x295f98c09c557e6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif