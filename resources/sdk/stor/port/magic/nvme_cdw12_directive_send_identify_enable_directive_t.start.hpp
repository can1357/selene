#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_CDW12_DIRECTIVE_SEND_IDENTIFY_ENABLE_DIRECTIVE.ENDIR", endir, 0x0, 0x0, false, 0xfd52b4815b6c5a33, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW12_DIRECTIVE_SEND_IDENTIFY_ENABLE_DIRECTIVE.DTYPE", dtype, 0x0, 0x0, false, 0x1e7f5f4ac3b9fdad, 8, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW12_DIRECTIVE_SEND_IDENTIFY_ENABLE_DIRECTIVE.AsUlong", as_ulong, 0x0, 0x0, false, 0xea2253cefcb85989)
#else
#define _m00
#define _m01
#define _m02
#endif