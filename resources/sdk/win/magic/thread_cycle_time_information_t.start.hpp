#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_THREAD_CYCLE_TIME_INFORMATION.AccumulatedCycles", accumulated_cycles, 0x0, 0x40, true, 0x2246997d9b8a2cef)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_THREAD_CYCLE_TIME_INFORMATION.CurrentCycleCount", current_cycle_count, 0x40, 0x40, true, 0x628bbbdc42dc1710)
#else
#define _m00
#define _m01
#endif