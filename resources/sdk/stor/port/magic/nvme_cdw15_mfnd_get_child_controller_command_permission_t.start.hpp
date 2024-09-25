#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW15_MFND_GET_CHILD_CONTROLLER_COMMAND_PERMISSION.MCID", mcid, 0x0, 0x0, false, 0xe38ffb2750a620f, 8, uint32_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW15_MFND_GET_CHILD_CONTROLLER_COMMAND_PERMISSION.AsUlong", as_ulong, 0x0, 0x0, false, 0xdd6f6529eb98643a)
#else
#define _m00
#define _m01
#endif