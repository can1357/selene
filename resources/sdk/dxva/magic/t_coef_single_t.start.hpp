#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_TCoefSingle.wIndexWithEOB", w_index_with_eob, 0x0, 0x10, true, 0x2ee7812764cd28e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_DXVA_TCoefSingle.TCoefValue", t_coef_value, 0x10, 0x10, true, 0x2004f162d2680d63)
#else
#define _m00
#define _m01
#endif