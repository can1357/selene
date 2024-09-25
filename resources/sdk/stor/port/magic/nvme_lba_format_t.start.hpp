#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_LBA_FORMAT.MS", ms, 0x0, 0x0, false, 0xda4dac4db3935aa3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "NVME_LBA_FORMAT.LBADS", lbads, 0x0, 0x0, false, 0x179c88a650e0df2b)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "NVME_LBA_FORMAT.RP", rp, 0x0, 0x0, false, 0xc055e7b3192b2269, 2, uint8_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_LBA_FORMAT.AsUlong", as_ulong, 0x0, 0x0, false, 0xefdd43726905088e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif