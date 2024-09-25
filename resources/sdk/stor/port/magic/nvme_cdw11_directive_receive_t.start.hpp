#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW11_DIRECTIVE_RECEIVE.DOPER", doper, 0x0, 0x0, false, 0xcb6a2f03eeb87ae9, 8, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW11_DIRECTIVE_RECEIVE.DTYPE", dtype, 0x0, 0x0, false, 0xa527ff859612d300, 8, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "NVME_CDW11_DIRECTIVE_RECEIVE.DSPEC", dspec, 0x0, 0x0, false, 0x7ef5f10ac8e00aba, 16, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW11_DIRECTIVE_RECEIVE.AsUlong", as_ulong, 0x0, 0x0, false, 0x3b915dc7ed5886ed)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif