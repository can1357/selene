#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "NVME_CDW10_SANITIZE.SANACT", sanact, 0x0, 0x0, false, 0xe8de2e7c88ad2705, 3, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW10_SANITIZE.AUSE", ause, 0x0, 0x0, false, 0xe0d9d46afb5c58de, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "NVME_CDW10_SANITIZE.OWPASS", owpass, 0x0, 0x0, false, 0x737abf9436def875, 4, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW10_SANITIZE.OIPBP", oipbp, 0x0, 0x0, false, 0x66fab21d38b4d31d, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW10_SANITIZE.NDAS", ndas, 0x0, 0x0, false, 0xf14f6d811435a3f4, 1, uint32_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW10_SANITIZE.AsUlong", as_ulong, 0x0, 0x0, false, 0x58fe89e06415e365)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif