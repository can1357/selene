#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<float, 4>, 3>), "_COLORSPACE_TRANSFORM_3x4.ColorMatrix3x4", color_matrix3x4, 0x0, 0x80, true, 0xcccd034857948698)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_COLORSPACE_TRANSFORM_3x4.ScalarMultiplier", scalar_multiplier, 0x180, 0x20, true, 0x63e779f33b44ba5e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::gamma_ramp_rgb_t, 4096>), "_COLORSPACE_TRANSFORM_3x4.LookupTable1D", lookup_table1d, 0x1a0, 0x0, true, 0x3fb390fdb4335416)
#else
#define _m00
#define _m01
#define _m02
#endif