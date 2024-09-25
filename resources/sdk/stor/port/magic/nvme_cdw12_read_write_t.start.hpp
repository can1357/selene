#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "NVME_CDW12_READ_WRITE.NLB", nlb, 0x0, 0x0, false, 0x164eac17cb3cd683, 16, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "NVME_CDW12_READ_WRITE.DTYPE", dtype, 0x0, 0x0, false, 0x937b535f546552ec, 4, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "NVME_CDW12_READ_WRITE.PRINFO", prinfo, 0x0, 0x0, false, 0x5009ff17fdf7cfab, 4, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW12_READ_WRITE.FUA", fua, 0x0, 0x0, false, 0x942c2ecae7f30e58, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW12_READ_WRITE.LR", lr, 0x0, 0x0, false, 0xc169df2b8bc2e39d, 1, uint32_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW12_READ_WRITE.AsUlong", as_ulong, 0x0, 0x0, false, 0xc758e52871fde2a3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif