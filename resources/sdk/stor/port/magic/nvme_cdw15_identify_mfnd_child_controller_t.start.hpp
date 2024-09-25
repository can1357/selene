#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW15_IDENTIFY_MFND_CHILD_CONTROLLER.MCID", mcid, 0x0, 0x0, false, 0x374f8d8b83f13889, 8, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "NVME_CDW15_IDENTIFY_MFND_CHILD_CONTROLLER.CCID", ccid, 0x0, 0x0, false, 0xe184f7488e44193c, 16, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW15_IDENTIFY_MFND_CHILD_CONTROLLER.AsUlong", as_ulong, 0x0, 0x0, false, 0x4ad83e561b704aa7)
#else
#define _m00
#define _m01
#define _m02
#endif