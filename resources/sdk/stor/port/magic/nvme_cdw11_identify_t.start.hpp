#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_CDW11_IDENTIFY.NVMSETID", nvmsetid, 0x0, 0x0, false, 0xe0e75960d3171efe)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "NVME_CDW11_IDENTIFY.CNSID", cnsid, 0x0, 0x0, false, 0x3ad4eec6d3d64399, 16, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW11_IDENTIFY.CSI", csi, 0x0, 0x0, false, 0xc4b6e303c3508593, 8, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW11_IDENTIFY.AsUlong", as_ulong, 0x0, 0x0, false, 0x77f7697b3e317be3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif