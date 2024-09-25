#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::colorspace_transform_stage_control_t), "_COLORSPACE_TRANSFORM_MATRIX_V2.StageControlLookupTable1DDegamma", stage_control_lookup_table1d_degamma, 0x0, 0x20, true, 0xcf9300db2e4073a2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::gamma_ramp_rgb_t, 4096>), "_COLORSPACE_TRANSFORM_MATRIX_V2.LookupTable1DDegamma", lookup_table1d_degamma, 0x20, 0x0, true, 0xd0847d937c935799)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::colorspace_transform_stage_control_t), "_COLORSPACE_TRANSFORM_MATRIX_V2.StageControlColorMatrix3x3", stage_control_color_matrix3x3, 0x60020, 0x20, true, 0x43644ac80ddc24d9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<float, 3>, 3>), "_COLORSPACE_TRANSFORM_MATRIX_V2.ColorMatrix3x3", color_matrix3x3, 0x60040, 0x20, true, 0xcb03d2d28afbdfb2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::colorspace_transform_stage_control_t), "_COLORSPACE_TRANSFORM_MATRIX_V2.StageControlLookupTable1DRegamma", stage_control_lookup_table1d_regamma, 0x60160, 0x20, true, 0x1b7c1c952c84c97f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::gamma_ramp_rgb_t, 4096>), "_COLORSPACE_TRANSFORM_MATRIX_V2.LookupTable1DRegamma", lookup_table1d_regamma, 0x60180, 0x0, true, 0xd84b1a5612cdd8d0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif