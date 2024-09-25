#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "NVME_CDW11_FEATURE_LBA_RANGE_TYPE.NUM", num, 0x0, 0x0, false, 0x45b570248754e6ab, 6, uint32_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW11_FEATURE_LBA_RANGE_TYPE.AsUlong", as_ulong, 0x0, 0x0, false, 0x7c88b68ca3354aa1)
#else
#define _m00
#define _m01
#endif