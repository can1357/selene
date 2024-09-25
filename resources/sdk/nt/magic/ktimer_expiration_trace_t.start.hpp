#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KTIMER_EXPIRATION_TRACE.InterruptTime", interrupt_time, 0x0, 0x40, true, 0xc4dd16a0cbe55668)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_KTIMER_EXPIRATION_TRACE.PerformanceCounter", performance_counter, 0x40, 0x40, true, 0x6e39757b5790630e)
#else
#define _m00
#define _m01
#endif