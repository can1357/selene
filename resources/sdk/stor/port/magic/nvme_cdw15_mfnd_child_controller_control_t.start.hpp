#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW15_MFND_CHILD_CONTROLLER_CONTROL.MCID", mcid, 0x0, 0x0, false, 0x2638a91740123cc3, 8, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "NVME_CDW15_MFND_CHILD_CONTROLLER_CONTROL.CCID", ccid, 0x0, 0x0, false, 0xdc8b38f6a66a1bc, 16, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "NVME_CDW15_MFND_CHILD_CONTROLLER_CONTROL.SEL", sel, 0x0, 0x0, false, 0xf0df5b7e4426454, 4, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW15_MFND_CHILD_CONTROLLER_CONTROL.AsUlong", as_ulong, 0x0, 0x0, false, 0x44188d26e76bf743)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif