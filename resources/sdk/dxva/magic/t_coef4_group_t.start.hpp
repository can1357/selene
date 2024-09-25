#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_DXVA_TCoef4Group.TCoefIDX", t_coef_idx, 0x0, 0x20, true, 0xc94253a2d779f96b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<int16_t, 4>), "_DXVA_TCoef4Group.TCoefValue", t_coef_value, 0x20, 0x40, true, 0x22266d85f8faedbf)
#else
#define _m00
#define _m01
#endif