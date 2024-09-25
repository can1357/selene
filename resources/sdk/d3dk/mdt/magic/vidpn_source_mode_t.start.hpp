#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_VIDPN_SOURCE_MODE.Id", id, 0x0, 0x20, true, 0x7d169a059b636d6e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::vidpn_source_mode_type_t), "_D3DKMDT_VIDPN_SOURCE_MODE.Type", type, 0x20, 0x20, true, 0x18639903e2e984be)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::graphics_rendering_format_t), "_D3DKMDT_VIDPN_SOURCE_MODE.Format.Graphics", graphics, 0x0, 0x0, true, 0x170d5f6e128aa2ed)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::text_rendering_format_t), "_D3DKMDT_VIDPN_SOURCE_MODE.Format.Text", text, 0x0, 0x20, true, 0x1cc34ccacc548bc2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_format_t), "_D3DKMDT_VIDPN_SOURCE_MODE.Format", format, 0x40, 0x0, true, 0xa169b7f920126da)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif