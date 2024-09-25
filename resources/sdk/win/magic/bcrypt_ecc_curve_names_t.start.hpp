#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BCRYPT_ECC_CURVE_NAMES.dwEccCurveNames", dw_ecc_curve_names, 0x0, 0x20, true, 0xa738d6b00392bd04)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t**), "_BCRYPT_ECC_CURVE_NAMES.pEccCurveNames", p_ecc_curve_names, 0x40, 0x40, true, 0x54de26ecbcffef11)
#else
#define _m00
#define _m01
#endif