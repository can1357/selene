#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<float, 16>), "_DXGK_DIAG_DISPLAY_SAMPLED_GAMMA.Red", red, 0x0, 0x0, true, 0xc87a7ff1ce122319)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<float, 16>), "_DXGK_DIAG_DISPLAY_SAMPLED_GAMMA.Green", green, 0x200, 0x0, true, 0xe5435a490193cf77)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<float, 16>), "_DXGK_DIAG_DISPLAY_SAMPLED_GAMMA.Blue", blue, 0x400, 0x0, true, 0x87b2367ba10ff7d1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<float, 3>, 3>), "_DXGK_DIAG_DISPLAY_SAMPLED_GAMMA.ColorMatrix", color_matrix, 0x600, 0x20, true, 0x37aef080844bd5d5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif