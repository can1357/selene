#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "_GDI_TEB_BATCH.Offset", offset, 0x0, 0x1f, true, 0x2448e36277b4d274, 0, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_GDI_TEB_BATCH.HDC", hdc, 0x40, 0x40, true, 0x33a87337e24b8b58)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 310>), "_GDI_TEB_BATCH.Buffer", buffer, 0x80, 0xc0, true, 0xad91b4fa8d1cd0df)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_GDI_TEB_BATCH.HasRenderingCommand", has_rendering_command, 0x1f, 0x1, true, 0x96836a4de14a1f69, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif