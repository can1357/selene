#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW15_MFND_SET_CHILD_CONTROLLER_COMMAND_PERMISSION.MCID", mcid, 0x0, 0x0, false, 0x4278cc0c2d2171e2, 8, uint32_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW15_MFND_SET_CHILD_CONTROLLER_COMMAND_PERMISSION.AsUlong", as_ulong, 0x0, 0x0, false, 0xcd83fd8c5d6bdf71)
#else
#define _m00
#define _m01
#endif