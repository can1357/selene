#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW12_FEATURE_HOST_MEMORY_BUFFER.HSIZE", hsize, 0x0, 0x0, false, 0xa525027edacc1a47)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW12_FEATURE_HOST_MEMORY_BUFFER.AsUlong", as_ulong, 0x0, 0x0, false, 0x731bc2d2d4d250ee)
#else
#define _m00
#define _m01
#endif