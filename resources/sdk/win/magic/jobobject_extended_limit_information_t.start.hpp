#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::jobobject_basic_limit_information_t), "_JOBOBJECT_EXTENDED_LIMIT_INFORMATION.BasicLimitInformation", basic_limit_information, 0x0, 0x0, true, 0xfada317a36e2add9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::counters_t), "_JOBOBJECT_EXTENDED_LIMIT_INFORMATION.IoInfo", io_info, 0x200, 0x80, true, 0x7ad4c6e5f3a323a8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_EXTENDED_LIMIT_INFORMATION.ProcessMemoryLimit", process_memory_limit, 0x380, 0x40, true, 0xf3bea0339a6b3d54)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_EXTENDED_LIMIT_INFORMATION.JobMemoryLimit", job_memory_limit, 0x3c0, 0x40, true, 0xc67cffb758d076fd)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_EXTENDED_LIMIT_INFORMATION.PeakProcessMemoryUsed", peak_process_memory_used, 0x400, 0x40, true, 0xefd02aef46a83ef7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_EXTENDED_LIMIT_INFORMATION.PeakJobMemoryUsed", peak_job_memory_used, 0x440, 0x40, true, 0xf59a4c9fa505d00a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif