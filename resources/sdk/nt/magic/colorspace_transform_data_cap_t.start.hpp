#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::colorspace_transform_data_type_t), "_COLORSPACE_TRANSFORM_DATA_CAP.DataType", data_type, 0x0, 0x20, true, 0x529d59c404cd8a4c)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_COLORSPACE_TRANSFORM_DATA_CAP.BitCountOfInteger", bit_count_of_integer, 0x20, 0x6, true, 0x7bf9720dfb6362be, 6, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_COLORSPACE_TRANSFORM_DATA_CAP.BitCountOfFraction", bit_count_of_fraction, 0x26, 0x6, true, 0x7b62fe0773692277, 6, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_COLORSPACE_TRANSFORM_DATA_CAP.BitCountOfExponent", bit_count_of_exponent, 0x20, 0x6, true, 0xabb34252ad578fa7, 6, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_COLORSPACE_TRANSFORM_DATA_CAP.BitCountOfMantissa", bit_count_of_mantissa, 0x26, 0x6, true, 0xe31bb576b3eb01ea, 6, uint32_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_COLORSPACE_TRANSFORM_DATA_CAP.Value", value, 0x20, 0x20, true, 0x821715d580f0ad86)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_COLORSPACE_TRANSFORM_DATA_CAP.NumericRangeMin", numeric_range_min, 0x40, 0x20, true, 0x1300933b0729dbd4)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_COLORSPACE_TRANSFORM_DATA_CAP.NumericRangeMax", numeric_range_max, 0x60, 0x20, true, 0x3f57a398679552d6)
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