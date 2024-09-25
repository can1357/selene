#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PROCESSOR_IDLE_TIMES.StartTime", start_time, 0x0, 0x40, true, 0x58febff947a2bacd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PROCESSOR_IDLE_TIMES.EndTime", end_time, 0x40, 0x40, true, 0x8446dd4c6387f7f3)
#else
#define _m00
#define _m01
#endif