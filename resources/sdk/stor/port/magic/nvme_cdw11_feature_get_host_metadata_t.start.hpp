#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW11_FEATURE_GET_HOST_METADATA.GDHM", gdhm, 0x0, 0x0, false, 0x75a95ce186b1c1d6, 1, uint32_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW11_FEATURE_GET_HOST_METADATA.AsUlong", as_ulong, 0x0, 0x0, false, 0xac4cd7a0a7529729)
#else
#define _m00
#define _m01
#endif