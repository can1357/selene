#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "NVME_CDW10_FORMAT_NVM.LBAF", lbaf, 0x0, 0x0, false, 0xeb84b6bb8eb6d4e2, 4, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW10_FORMAT_NVM.MS", ms, 0x0, 0x0, false, 0x74417d56fad158b, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "NVME_CDW10_FORMAT_NVM.PI", pi, 0x0, 0x0, false, 0x54c4be92d597e02c, 3, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW10_FORMAT_NVM.PIL", pil, 0x0, 0x0, false, 0x44ae981d6b61643b, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "NVME_CDW10_FORMAT_NVM.SES", ses, 0x0, 0x0, false, 0x31f43279e612336b, 3, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "NVME_CDW10_FORMAT_NVM.ZF", zf, 0x0, 0x0, false, 0x76549361814c9244, 2, uint32_t)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW10_FORMAT_NVM.AsUlong", as_ulong, 0x0, 0x0, false, 0x58e38c8f55ae64c7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif