#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW14_MFND_MANAGEMENT.CCC", ccc, 0x0, 0x0, false, 0xa4298daa2d774e0, 8, uint32_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW14_MFND_MANAGEMENT.AsUlong", as_ulong, 0x0, 0x0, false, 0x3dd7bce129c21073)
#else
#define _m00
#define _m01
#endif