#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW11_FEATURE_HOST_MEMORY_BUFFER.EHM", ehm, 0x0, 0x0, false, 0x53ff423d678aed8c, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW11_FEATURE_HOST_MEMORY_BUFFER.MR", mr, 0x0, 0x0, false, 0x624c3f9ac8babf09, 1, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW11_FEATURE_HOST_MEMORY_BUFFER.AsUlong", as_ulong, 0x0, 0x0, false, 0x1b828d2a0ecbc1b1)
#else
#define _m00
#define _m01
#define _m02
#endif