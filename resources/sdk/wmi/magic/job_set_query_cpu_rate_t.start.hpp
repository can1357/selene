#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_JOB_SET_QUERY_CPU_RATE.AllFlags", all_flags, 0x0, 0x20, true, 0x90326855a3534b6d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_JOB_SET_QUERY_CPU_RATE.Value", value, 0x20, 0x20, true, 0xf568c21ce04b16c)
#else
#define _m00
#define _m01
#endif