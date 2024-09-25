#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW11_DATASET_MANAGEMENT.IDR", idr, 0x0, 0x0, false, 0x1be2f74b878ea05c, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW11_DATASET_MANAGEMENT.IDW", idw, 0x0, 0x0, false, 0x63529eeb129dc7c2, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW11_DATASET_MANAGEMENT.AD", ad, 0x0, 0x0, false, 0x50ca51fadd016a9b, 1, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW11_DATASET_MANAGEMENT.AsUlong", as_ulong, 0x0, 0x0, false, 0xda288addd1be6593)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif