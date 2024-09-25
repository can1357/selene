#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW10_GET_FEATURES.FID", fid, 0x0, 0x0, false, 0xc2791a2f36df86b4, 8, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "NVME_CDW10_GET_FEATURES.SEL", sel, 0x0, 0x0, false, 0x84f3109e1cbce543, 3, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW10_GET_FEATURES.AsUlong", as_ulong, 0x0, 0x0, false, 0x232ea88d8afe7f6c)
#else
#define _m00
#define _m01
#define _m02
#endif