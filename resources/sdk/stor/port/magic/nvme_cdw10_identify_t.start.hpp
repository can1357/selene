#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW10_IDENTIFY.CNS", cns, 0x0, 0x0, false, 0x555a9706965ba01e, 8, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "NVME_CDW10_IDENTIFY.CNTID", cntid, 0x0, 0x0, false, 0x1c4d4734355971f4, 16, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW10_IDENTIFY.AsUlong", as_ulong, 0x0, 0x0, false, 0x3c85b3a262bb1608)
#else
#define _m00
#define _m01
#define _m02
#endif