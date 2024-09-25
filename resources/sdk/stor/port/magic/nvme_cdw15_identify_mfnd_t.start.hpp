#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW15_IDENTIFY_MFND.MCID", mcid, 0x0, 0x0, false, 0x84873f46c080d519, 8, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW15_IDENTIFY_MFND.MFNDS", mfnds, 0x0, 0x0, false, 0xe147f45e550c8c7c, 8, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW15_IDENTIFY_MFND.AsUlong", as_ulong, 0x0, 0x0, false, 0xfb92c43de5f0e5ca)
#else
#define _m00
#define _m01
#define _m02
#endif