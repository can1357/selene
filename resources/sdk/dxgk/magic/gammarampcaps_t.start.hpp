#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_GAMMARAMPCAPS.Gamma_Rgb256x3x16", gamma_rgb256x3x16, 0x0, 0x1, true, 0x146f751ae6c3904a, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GAMMARAMPCAPS.Value", value, 0x0, 0x20, true, 0x6e57e1e055c6e42d)
#else
#define _m00
#define _m01
#endif