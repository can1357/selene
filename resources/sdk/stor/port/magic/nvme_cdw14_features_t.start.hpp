#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw14_feature_host_memory_buffer_t), "NVME_CDW14_FEATURES.HostMemoryBuffer", host_memory_buffer, 0x0, 0x0, false, 0x3827d3427ff37443)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW14_FEATURES.AsUlong", as_ulong, 0x0, 0x0, false, 0xa042812758e27aa7)
#else
#define _m00
#define _m01
#endif