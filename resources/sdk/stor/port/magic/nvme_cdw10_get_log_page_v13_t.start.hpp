#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW10_GET_LOG_PAGE_V13.LID", lid, 0x0, 0x0, false, 0xc60b3acd2090004f, 8, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "NVME_CDW10_GET_LOG_PAGE_V13.LSP", lsp, 0x0, 0x0, false, 0x2bc091d98babc23a, 4, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW10_GET_LOG_PAGE_V13.RAE", rae, 0x0, 0x0, false, 0xf67e3c1fac60309b, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "NVME_CDW10_GET_LOG_PAGE_V13.NUMDL", numdl, 0x0, 0x0, false, 0x21ddffeff84941e8, 16, uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW10_GET_LOG_PAGE_V13.AsUlong", as_ulong, 0x0, 0x0, false, 0x9a31dd00754f03a1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif