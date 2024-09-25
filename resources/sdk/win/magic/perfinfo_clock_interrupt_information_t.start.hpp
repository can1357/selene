#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CLOCK_INTERRUPT_INFORMATION.InterruptTime", interrupt_time, 0x0, 0x40, true, 0x55a0ca6f328a213d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_PERFINFO_CLOCK_INTERRUPT_INFORMATION.Flags", flags, 0x40, 0x10, true, 0x83c0dcfe65e2b54e)
#else
#define _m00
#define _m01
#endif