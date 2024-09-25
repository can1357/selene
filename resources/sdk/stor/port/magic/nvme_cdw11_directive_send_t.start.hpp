#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW11_DIRECTIVE_SEND.DOPER", doper, 0x0, 0x0, false, 0x9b10e9f58999dc67, 8, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW11_DIRECTIVE_SEND.DTYPE", dtype, 0x0, 0x0, false, 0x50f3d7f1bafc6810, 8, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "NVME_CDW11_DIRECTIVE_SEND.DSPEC", dspec, 0x0, 0x0, false, 0xc0ba1864835e77a4, 16, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW11_DIRECTIVE_SEND.AsUlong", as_ulong, 0x0, 0x0, false, 0x326bad341d2487e5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif