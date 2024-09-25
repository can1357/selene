#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_POWER_STATE_DESC.MP", mp, 0x0, 0x0, false, 0xf64d67b49caf7454)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_POWER_STATE_DESC.MPS", mps, 0x0, 0x0, false, 0x97c8714b9fdd0aa9, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_POWER_STATE_DESC.NOPS", nops, 0x0, 0x0, false, 0x7a6902cb78dc9d34, 1, uint8_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_POWER_STATE_DESC.ENLAT", enlat, 0x0, 0x0, false, 0x431a53257253a091)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_POWER_STATE_DESC.EXLAT", exlat, 0x0, 0x0, false, 0xc86a23f6ff1c099f)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "NVME_POWER_STATE_DESC.RRT", rrt, 0x0, 0x0, false, 0x3af209fb5e5d3c36, 5, uint8_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "NVME_POWER_STATE_DESC.RRL", rrl, 0x0, 0x0, false, 0x90df61ec3becebbf, 5, uint8_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "NVME_POWER_STATE_DESC.RWT", rwt, 0x0, 0x0, false, 0x37ca4647bc276c41, 5, uint8_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "NVME_POWER_STATE_DESC.RWL", rwl, 0x0, 0x0, false, 0x3866c77eee2179ab, 5, uint8_t)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_POWER_STATE_DESC.IDLP", idlp, 0x0, 0x0, false, 0xf77327a08aae7699)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "NVME_POWER_STATE_DESC.IPS", ips, 0x0, 0x0, false, 0x57770b7192387a1d, 2, uint8_t)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_POWER_STATE_DESC.ACTP", actp, 0x0, 0x0, false, 0x139571db74b0b937)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "NVME_POWER_STATE_DESC.APW", apw, 0x0, 0x0, false, 0x26327a8cf4d7842c, 3, uint8_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "NVME_POWER_STATE_DESC.APS", aps, 0x0, 0x0, false, 0xeebf1ae3b46edf10, 2, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#endif