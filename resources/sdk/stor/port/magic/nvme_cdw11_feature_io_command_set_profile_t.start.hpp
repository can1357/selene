#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW11_FEATURE_IO_COMMAND_SET_PROFILE.IOCSCI", iocsci, 0x0, 0x0, false, 0xa35a3ff9bca6174f, 8, uint32_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW11_FEATURE_IO_COMMAND_SET_PROFILE.AsUlong", as_ulong, 0x0, 0x0, false, 0x5c8259d3cb67daaa)
#else
#define _m00
#define _m01
#endif