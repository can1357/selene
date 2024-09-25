#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_DELAY_EXECUTION.ThreadId", thread_id, 0x0, 0x20, true, 0x509f57df3bc2cfa6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WMI_DELAY_EXECUTION.Delta", delta, 0x40, 0x40, true, 0x4c2a619c4e5a5f2f)
#else
#define _m00
#define _m01
#endif