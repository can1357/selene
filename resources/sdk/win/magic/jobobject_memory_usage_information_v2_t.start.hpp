#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::jobobject_memory_usage_information_t), "_JOBOBJECT_MEMORY_USAGE_INFORMATION_V2.BasicInfo", basic_info, 0x0, 0x80, true, 0xc6d9f5c922fc5d18)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOBOBJECT_MEMORY_USAGE_INFORMATION_V2.JobSharedMemory", job_shared_memory, 0x80, 0x40, true, 0xe848a9f9c28c87e9)
#else
#define _m00
#define _m01
#endif