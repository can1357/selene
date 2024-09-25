#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW13_ZONE_MANAGEMENT_RECEIVE.ZRA", zra, 0x0, 0x0, false, 0x4fcac6602c8a0517, 8, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW13_ZONE_MANAGEMENT_RECEIVE.ZRASpecific", zra_specific, 0x0, 0x0, false, 0xb08a3fdb3e10459a, 8, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW13_ZONE_MANAGEMENT_RECEIVE.Partial", partial, 0x0, 0x0, false, 0x581d196756fb9230, 1, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW13_ZONE_MANAGEMENT_RECEIVE.AsUlong", as_ulong, 0x0, 0x0, false, 0xe7b247b5b7916579)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif