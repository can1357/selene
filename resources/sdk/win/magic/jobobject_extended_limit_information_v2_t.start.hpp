#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::jobobject_basic_limit_information_t), "_JOBOBJECT_EXTENDED_LIMIT_INFORMATION_V2.BasicLimitInformation", basic_limit_information, 0x0, 0x0, true, 0x1754f078ab98114e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::counters_t), "_JOBOBJECT_EXTENDED_LIMIT_INFORMATION_V2.IoInfo", io_info, 0x200, 0x80, true, 0x9c6fb957a6b1d287)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_EXTENDED_LIMIT_INFORMATION_V2.ProcessMemoryLimit", process_memory_limit, 0x380, 0x40, true, 0x52ef1fd58b947f80)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_EXTENDED_LIMIT_INFORMATION_V2.JobMemoryLimit", job_memory_limit, 0x3c0, 0x40, true, 0xb06cd5313ec9c0d7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_EXTENDED_LIMIT_INFORMATION_V2.PeakProcessMemoryUsed", peak_process_memory_used, 0x400, 0x40, true, 0xb2a5c43b855d4f21)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_EXTENDED_LIMIT_INFORMATION_V2.PeakJobMemoryUsed", peak_job_memory_used, 0x440, 0x40, true, 0xe370c72430166a6f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_EXTENDED_LIMIT_INFORMATION_V2.JobTotalMemoryLimit", job_total_memory_limit, 0x480, 0x40, true, 0x3e6d2aa0a0e1be45)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif