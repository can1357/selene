#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "NVME_CDW11_FEATURE_ERROR_RECOVERY.TLER", tler, 0x0, 0x0, false, 0x7454cdef1da3550a, 16, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW11_FEATURE_ERROR_RECOVERY.DULBE", dulbe, 0x0, 0x0, false, 0x85c39f3ab6698e78, 1, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW11_FEATURE_ERROR_RECOVERY.AsUlong", as_ulong, 0x0, 0x0, false, 0x3cf29ad889936470)
#else
#define _m00
#define _m01
#define _m02
#endif