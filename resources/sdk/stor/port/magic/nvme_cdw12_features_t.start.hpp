#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw12_feature_host_memory_buffer_t), "NVME_CDW12_FEATURES.HostMemoryBuffer", host_memory_buffer, 0x0, 0x0, false, 0x130042a6f173a69f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW12_FEATURES.AsUlong", as_ulong, 0x0, 0x0, false, 0x8b9fada64ee027b8)
#else
#define _m00
#define _m01
#endif