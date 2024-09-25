#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW15_FEATURE_HOST_MEMORY_BUFFER.HMDLEC", hmdlec, 0x0, 0x0, false, 0xec112adfe939f643)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW15_FEATURE_HOST_MEMORY_BUFFER.AsUlong", as_ulong, 0x0, 0x0, false, 0xadc4f6de87c723d)
#else
#define _m00
#define _m01
#endif