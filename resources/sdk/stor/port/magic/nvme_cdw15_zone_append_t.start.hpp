#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "NVME_CDW15_ZONE_APPEND.LBAT", lbat, 0x0, 0x0, false, 0xad0f39dd94e9c40c, 16, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "NVME_CDW15_ZONE_APPEND.LBATM", lbatm, 0x0, 0x0, false, 0xb1c3cf0f373aa706, 16, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW15_ZONE_APPEND.AsUlong", as_ulong, 0x0, 0x0, false, 0x6e4bc9b88b734be5)
#else
#define _m00
#define _m01
#define _m02
#endif