#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "NVME_CDW11_FEATURE_SET_HOST_METADATA.EA", ea, 0x0, 0x0, false, 0x68dadfd7dc11754, 2, uint32_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW11_FEATURE_SET_HOST_METADATA.AsUlong", as_ulong, 0x0, 0x0, false, 0xca2dfe00781001c8)
#else
#define _m00
#define _m01
#endif