#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::gammaramp_type_t), "_D3DKMDT_GAMMA_RAMP.Type", type, 0x0, 0x20, true, 0x9ead209a87980a7c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMDT_GAMMA_RAMP.DataSize", data_size, 0x40, 0x40, true, 0xf2000ef910297c41)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::gamma_ramp_rgb256x3x16_t*), "_D3DKMDT_GAMMA_RAMP.Data.pRgb256x3x16", p_rgb256x3x16, 0x0, 0x40, true, 0x6af80f80ad96403d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::gamma_ramp_dxgi_1_t*), "_D3DKMDT_GAMMA_RAMP.Data.pDxgi1", p_dxgi1, 0x0, 0x40, true, 0xcf42146377bd486d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMDT_GAMMA_RAMP.Data.pRaw", p_raw, 0x0, 0x40, true, 0x402d818f51ffd6a4)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::_3x4_colorspace_transform_t*), "_D3DKMDT_GAMMA_RAMP.Data.p3x4", p3x4, 0x0, 0x40, true, 0x72c87596ea95a986)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::colorspace_transform_matrix_v2_t*), "_D3DKMDT_GAMMA_RAMP.Data.pMatrixV2", p_matrix_v2, 0x0, 0x40, true, 0x9d59e93a89402649)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_data_t), "_D3DKMDT_GAMMA_RAMP.Data", data, 0x80, 0x40, true, 0xb67ecf0c125852cf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif