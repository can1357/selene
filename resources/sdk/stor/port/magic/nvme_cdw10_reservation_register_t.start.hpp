#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "NVME_CDW10_RESERVATION_REGISTER.RREGA", rrega, 0x0, 0x0, false, 0x7cc04b6fdc04ae8b, 3, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW10_RESERVATION_REGISTER.IEKEY", iekey, 0x0, 0x0, false, 0x41ece973f3ba33d4, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "NVME_CDW10_RESERVATION_REGISTER.CPTPL", cptpl, 0x0, 0x0, false, 0xf6253d52c8804402, 2, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW10_RESERVATION_REGISTER.AsUlong", as_ulong, 0x0, 0x0, false, 0x33debd90731ed113)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif