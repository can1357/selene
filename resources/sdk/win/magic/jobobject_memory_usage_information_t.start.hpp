#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_MEMORY_USAGE_INFORMATION.JobMemory", job_memory, 0x0, 0x40, true, 0xd367bba9c73bb8b8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_MEMORY_USAGE_INFORMATION.PeakJobMemoryUsed", peak_job_memory_used, 0x40, 0x40, true, 0xf7f5022834767d9a)
#else
#define _m00
#define _m01
#endif