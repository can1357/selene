#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint31_t), "_GDI_TEB_BATCH64.Offset", offset, 0x0, 0x1f, true, 0xe72db424dfa2cb12, 31, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_GDI_TEB_BATCH64.HasRenderingCommand", has_rendering_command, 0x1f, 0x1, true, 0x9b19165b1b2c6a69, 1, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_GDI_TEB_BATCH64.HDC", hdc, 0x40, 0x40, true, 0x6a91b2fec9edb166)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 310>), "_GDI_TEB_BATCH64.Buffer", buffer, 0x80, 0xc0, true, 0x642af72a7d4916c7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif