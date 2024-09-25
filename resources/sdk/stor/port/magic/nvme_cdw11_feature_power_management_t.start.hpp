#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "NVME_CDW11_FEATURE_POWER_MANAGEMENT.PS", ps, 0x0, 0x0, false, 0xf98fc221fd789672, 5, uint32_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW11_FEATURE_POWER_MANAGEMENT.AsUlong", as_ulong, 0x0, 0x0, false, 0x67cb0b4eba5ed0ad)
#else
#define _m00
#define _m01
#endif