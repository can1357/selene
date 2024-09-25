#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW15_MFND_MANAGEMENT.MCID", mcid, 0x0, 0x0, false, 0xa9433aa046ddb678, 8, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "NVME_CDW15_MFND_MANAGEMENT.CCID", ccid, 0x0, 0x0, false, 0x9ed7e4d1ad7584f9, 16, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "NVME_CDW15_MFND_MANAGEMENT.SEL", sel, 0x0, 0x0, false, 0xe43c3174ee7537f8, 4, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW15_MFND_MANAGEMENT.AsUlong", as_ulong, 0x0, 0x0, false, 0x12421023e58ab6a4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif