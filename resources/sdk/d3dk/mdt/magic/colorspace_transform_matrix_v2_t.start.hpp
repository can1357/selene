#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(d3dkmdt_colorspace_transform_stage_control_t ), "_D3DKMDT_COLORSPACE_TRANSFORM_MATRIX_V2.StageControlLookupTable1DDegamma", stage_control_lookup_table1d_degamma, 0x0, 0x20, true, 0xc91046725a821429)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct d3d::ddi::dxgi_rgb_t, 4096>), "_D3DKMDT_COLORSPACE_TRANSFORM_MATRIX_V2.LookupTable1DDegamma", lookup_table1d_degamma, 0x20, 0x0, true, 0x2470f01a95ee02)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(d3dkmdt_colorspace_transform_stage_control_t ), "_D3DKMDT_COLORSPACE_TRANSFORM_MATRIX_V2.StageControlColorMatrix3x3", stage_control_color_matrix3x3, 0x60020, 0x20, true, 0x9f256e9e63db762c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<float, 3>, 3>), "_D3DKMDT_COLORSPACE_TRANSFORM_MATRIX_V2.ColorMatrix3x3", color_matrix3x3, 0x60040, 0x20, true, 0x538d4c904a825d36)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(d3dkmdt_colorspace_transform_stage_control_t ), "_D3DKMDT_COLORSPACE_TRANSFORM_MATRIX_V2.StageControlLookupTable1DRegamma", stage_control_lookup_table1d_regamma, 0x60160, 0x20, true, 0x5a5fcc036468d126)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct d3d::ddi::dxgi_rgb_t, 4096>), "_D3DKMDT_COLORSPACE_TRANSFORM_MATRIX_V2.LookupTable1DRegamma", lookup_table1d_regamma, 0x60180, 0x0, true, 0xfbedf0318e5a8e3d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif