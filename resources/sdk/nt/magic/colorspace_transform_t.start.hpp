#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::colorspace_transform_type_t), "_COLORSPACE_TRANSFORM.Type", type, 0x0, 0x20, true, 0x3f3f91e4d75549e5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::gamma_ramp_rgb256x3x16_t), "_COLORSPACE_TRANSFORM.Data.Rgb256x3x16", rgb256x3x16, 0x0, 0x0, true, 0x25b17659227fe254)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::gamma_ramp_dxgi_1_t), "_COLORSPACE_TRANSFORM.Data.Dxgi1", dxgi1, 0x0, 0x20, true, 0xb94937f80a7447ad)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::colorspace_transform_3x4_t), "_COLORSPACE_TRANSFORM.Data.T3x4", t3x4, 0x0, 0xa0, true, 0xfa4d47511c0e385b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::colorspace_transform_matrix_v2_t), "_COLORSPACE_TRANSFORM.Data.MatrixV2", matrix_v2, 0x0, 0x80, true, 0x9de4e026feaae1bc)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_data_t), "_COLORSPACE_TRANSFORM.Data", data, 0x20, 0x80, true, 0x6424593ba04c5921)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif