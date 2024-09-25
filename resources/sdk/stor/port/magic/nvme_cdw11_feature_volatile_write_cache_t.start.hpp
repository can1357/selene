#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW11_FEATURE_VOLATILE_WRITE_CACHE.WCE", wce, 0x0, 0x0, false, 0x561de5a2891e9cc3, 1, uint32_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW11_FEATURE_VOLATILE_WRITE_CACHE.AsUlong", as_ulong, 0x0, 0x0, false, 0xa854d84f1ed91f9d)
#else
#define _m00
#define _m01
#endif