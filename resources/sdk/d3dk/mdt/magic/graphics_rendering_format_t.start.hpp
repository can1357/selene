#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::_2dregion_t), "_D3DKMDT_GRAPHICS_RENDERING_FORMAT.PrimSurfSize", prim_surf_size, 0x0, 0x40, true, 0x46713fd2717eb633)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::_2dregion_t), "_D3DKMDT_GRAPHICS_RENDERING_FORMAT.VisibleRegionSize", visible_region_size, 0x40, 0x40, true, 0x497cea34269fc99b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_GRAPHICS_RENDERING_FORMAT.Stride", stride, 0x80, 0x20, true, 0x54442e7a62dd15c5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum kuser::d3dddiformat_t), "_D3DKMDT_GRAPHICS_RENDERING_FORMAT.PixelFormat", pixel_format, 0xa0, 0x20, true, 0xe07a1631b7057f10)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::color_basis_t), "_D3DKMDT_GRAPHICS_RENDERING_FORMAT.ColorBasis", color_basis, 0xc0, 0x20, true, 0xb56ecc11265effac)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::pixel_value_access_mode_t), "_D3DKMDT_GRAPHICS_RENDERING_FORMAT.PixelValueAccessMode", pixel_value_access_mode, 0xe0, 0x20, true, 0xec703c675f685979)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif