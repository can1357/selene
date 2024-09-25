#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw13_feature_host_memory_buffer_t), "NVME_CDW13_FEATURES.HostMemoryBuffer", host_memory_buffer, 0x0, 0x0, false, 0x6e99a7e109635067)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW13_FEATURES.AsUlong", as_ulong, 0x0, 0x0, false, 0x5a7b300ce4f22017)
#else
#define _m00
#define _m01
#endif