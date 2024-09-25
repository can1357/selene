#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::gamma_data_type_t), "_DKGK_GAMMA_DATA_CAP.DataType", data_type, 0x0, 0x20, true, 0x662ba6ae2e5ce919)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_DKGK_GAMMA_DATA_CAP.BitCountOfInteger", bit_count_of_integer, 0x20, 0x6, true, 0xafa1c3009ee6fe48, 6, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_DKGK_GAMMA_DATA_CAP.BitCountOfFraction", bit_count_of_fraction, 0x26, 0x6, true, 0x373aa014403136f2, 6, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_DKGK_GAMMA_DATA_CAP.BitCountOfExponent", bit_count_of_exponent, 0x20, 0x6, true, 0x21e5a18ddae82507, 6, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_DKGK_GAMMA_DATA_CAP.BitCountOfMantissa", bit_count_of_mantissa, 0x26, 0x6, true, 0x8be4305beea5fa2d, 6, uint32_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DKGK_GAMMA_DATA_CAP.Value", value, 0x20, 0x20, true, 0xf4208e800b9fd166)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_DKGK_GAMMA_DATA_CAP.NumericRangeMin", numeric_range_min, 0x40, 0x20, true, 0x9b13b8abbb0391b)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_DKGK_GAMMA_DATA_CAP.NumericRangeMax", numeric_range_max, 0x60, 0x20, true, 0xb38856abb51d91d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif