#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::colorspace_transform_target_caps_version_t), "_COLORSPACE_TRANSFORM_TARGET_CAPS.Version", version, 0x0, 0x20, true, 0xff73b3befd130e6d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::colorspace_transform_1dlut_cap_t), "_COLORSPACE_TRANSFORM_TARGET_CAPS.LookupTable1DDegammaCap", lookup_table1d_degamma_cap, 0x20, 0xa0, true, 0xe968eae2779388b8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::colorspace_transform_matrix_cap_t), "_COLORSPACE_TRANSFORM_TARGET_CAPS.ColorMatrix3x3Cap", color_matrix3x3_cap, 0xc0, 0xa0, true, 0x41f643da9bc80ee4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::colorspace_transform_1dlut_cap_t), "_COLORSPACE_TRANSFORM_TARGET_CAPS.LookupTable1DRegammaCap", lookup_table1d_regamma_cap, 0x160, 0xa0, true, 0x1408e01e3ccc9328)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif