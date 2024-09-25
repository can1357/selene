#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_LOAD.BusyPercentage", busy_percentage, 0x0, 0x8, true, 0x40135b42caca568d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROC_PERF_LOAD.FrequencyPercentage", frequency_percentage, 0x8, 0x8, true, 0xe2b8fc0b9a055a84)
#else
#define _m00
#define _m01
#endif