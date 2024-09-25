#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW14_FEATURE_HOST_MEMORY_BUFFER.HMDLUA", hmdlua, 0x0, 0x0, false, 0x5c69fc2e3810827)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW14_FEATURE_HOST_MEMORY_BUFFER.AsUlong", as_ulong, 0x0, 0x0, false, 0x305580982537b244)
#else
#define _m00
#define _m01
#endif