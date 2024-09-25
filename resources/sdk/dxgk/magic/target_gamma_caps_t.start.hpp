#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::target_gamma_caps_version_t), "_DXGK_TARGET_GAMMA_CAPS.Version", version, 0x0, 0x20, true, 0x94b93e8b5204a6ef)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::gamma_1dlut_cap_t), "_DXGK_TARGET_GAMMA_CAPS.LookupTable1DDegammaCap", lookup_table1d_degamma_cap, 0x20, 0xa0, true, 0xaae92c6ab7d80370)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::gamma_matrix_cap_t), "_DXGK_TARGET_GAMMA_CAPS.ColorMatrix3x3Cap", color_matrix3x3_cap, 0xc0, 0xa0, true, 0xda6a8825ff02393a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::gamma_1dlut_cap_t), "_DXGK_TARGET_GAMMA_CAPS.LookupTable1DRegammaCap", lookup_table1d_regamma_cap, 0x160, 0xa0, true, 0xdf39d85e94ed064e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif