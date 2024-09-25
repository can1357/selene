#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_COLORTRANSFORMCAPS.Gamma_Rgb256x3x16", gamma_rgb256x3x16, 0x0, 0x1, true, 0xe4483dfbd99aab44, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_COLORTRANSFORMCAPS.Gamma_Dxgi1", gamma_dxgi1, 0x1, 0x1, true, 0x48ffdcebe0ad84a8, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_COLORTRANSFORMCAPS.Transform_3x4Matrix", transform_3x4_matrix, 0x2, 0x1, true, 0x7b157db9903ccf98, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_COLORTRANSFORMCAPS.Transform_3x4Matrix_WideColor", transform_3x4_matrix_wide_color, 0x3, 0x1, true, 0x2eeeeec9cd89b8e0, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_COLORTRANSFORMCAPS.Transform_3x4Matrix_HighColor", transform_3x4_matrix_high_color, 0x4, 0x1, true, 0x3f5c944158a7af05, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_COLORTRANSFORMCAPS.Transform_Matrix_V2", transform_matrix_v2, 0x5, 0x1, true, 0x27946876f024fa9f, 1, uint32_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_COLORTRANSFORMCAPS.Value", value, 0x0, 0x20, true, 0x6331b3af578fd368)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif