#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "NVME_CDW15_READ_WRITE.ELBAT", elbat, 0x0, 0x0, false, 0xf4730f40e8f3c778, 16, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "NVME_CDW15_READ_WRITE.ELBATM", elbatm, 0x0, 0x0, false, 0xddd8783b5d5a6971, 16, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW15_READ_WRITE.AsUlong", as_ulong, 0x0, 0x0, false, 0x52015b796a2d9186)
#else
#define _m00
#define _m01
#define _m02
#endif