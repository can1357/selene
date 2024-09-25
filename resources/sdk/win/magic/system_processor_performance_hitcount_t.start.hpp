#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PROCESSOR_PERFORMANCE_HITCOUNT.Hits", hits, 0x0, 0x40, true, 0x66771d5a345ba546)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_PROCESSOR_PERFORMANCE_HITCOUNT.PercentFrequency", percent_frequency, 0x40, 0x8, true, 0x239aaf27032a034)
#else
#define _m00
#define _m01
#endif