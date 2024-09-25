#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIRTUALIZATION_INSTANCE_INFO_INPUT.Flags", flags, 0x20, 0x20, true, 0x52e316ad70d87a58)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIRTUALIZATION_INSTANCE_INFO_INPUT.NumberOfWorkerThreads", number_of_worker_threads, 0x0, 0x20, true, 0xe820c43bcf0a51c4)
#else
#define _m00
#define _m01
#endif