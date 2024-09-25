#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW11_FEATURE_NON_OPERATIONAL_POWER_STATE.NOPPME", noppme, 0x0, 0x0, false, 0xa7ae9948e3003149, 1, uint32_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW11_FEATURE_NON_OPERATIONAL_POWER_STATE.AsUlong", as_ulong, 0x0, 0x0, false, 0xa296b10ef816753b)
#else
#define _m00
#define _m01
#endif