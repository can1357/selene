#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_CYCLE_TIME_INFORMATION.AccumulatedCycles", accumulated_cycles, 0x0, 0x40, true, 0x17d9681f3c2f78e1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_CYCLE_TIME_INFORMATION.CurrentCycleCount", current_cycle_count, 0x40, 0x40, true, 0x5266fbfb2ba7925c)
#else
#define _m00
#define _m01
#endif