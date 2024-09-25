#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_PERFINFO_PO_PRESLEEP.PerformanceCounter", performance_counter, 0x0, 0x40, true, 0xe1ce5ce3b1d092fc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_PERFINFO_PO_PRESLEEP.PerformanceFrequency", performance_frequency, 0x40, 0x40, true, 0x59ff3a54b43f9a5a)
#else
#define _m00
#define _m01
#endif