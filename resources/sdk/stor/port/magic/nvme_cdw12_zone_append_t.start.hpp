#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "NVME_CDW12_ZONE_APPEND.NLB", nlb, 0x0, 0x0, false, 0x6e2733bf4edab459, 16, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW12_ZONE_APPEND.PIREMAP", piremap, 0x0, 0x0, false, 0xf7a876b4d3de79f9, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "NVME_CDW12_ZONE_APPEND.PRINFO", prinfo, 0x0, 0x0, false, 0xc7d817fddf672ef2, 4, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW12_ZONE_APPEND.FUA", fua, 0x0, 0x0, false, 0x6ae7a92eeec8c93e, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW12_ZONE_APPEND.LR", lr, 0x0, 0x0, false, 0xdf770ed442be3b4b, 1, uint32_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW12_ZONE_APPEND.AsUlong", as_ulong, 0x0, 0x0, false, 0x8d616c3231c5100e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif