#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<float, 4>, 3>), "_D3DKMDT_3X4_COLORSPACE_TRANSFORM.ColorMatrix3x4", color_matrix3x4, 0x0, 0x80, true, 0x506f926830a1289f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_D3DKMDT_3X4_COLORSPACE_TRANSFORM.ScalarMultiplier", scalar_multiplier, 0x180, 0x20, true, 0x28509b3ddb914128)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct d3d::ddi::dxgi_rgb_t, 4096>), "_D3DKMDT_3X4_COLORSPACE_TRANSFORM.LookupTable1D", lookup_table1d, 0x1a0, 0x0, true, 0xe000049ac5f8d8d3)
#else
#define _m00
#define _m01
#define _m02
#endif