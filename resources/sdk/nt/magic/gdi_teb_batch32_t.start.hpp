#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint31_t), "_GDI_TEB_BATCH32.Offset", offset, 0x0, 0x1f, true, 0x634ffc706f7026bb, 31, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_GDI_TEB_BATCH32.HasRenderingCommand", has_rendering_command, 0x1f, 0x1, true, 0x527ecf3149d86059, 1, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_GDI_TEB_BATCH32.HDC", hdc, 0x20, 0x20, true, 0xb7f0be58e82b1074)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 310>), "_GDI_TEB_BATCH32.Buffer", buffer, 0x40, 0xc0, true, 0x89c084298eac6de9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif