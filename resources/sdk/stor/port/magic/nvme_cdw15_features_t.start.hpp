#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw15_feature_host_memory_buffer_t), "NVME_CDW15_FEATURES.HostMemoryBuffer", host_memory_buffer, 0x0, 0x0, false, 0xa67c6ebfffef4bde)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW15_FEATURES.AsUlong", as_ulong, 0x0, 0x0, false, 0x618c77afa4e0e84d)
#else
#define _m00
#define _m01
#endif