#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_numberfmtW.NumDigits", num_digits, 0x0, 0x20, true, 0xb9bc9ef5371a94b1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_numberfmtW.LeadingZero", leading_zero, 0x20, 0x20, true, 0x76b5d623b64aece8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_numberfmtW.Grouping", grouping, 0x40, 0x20, true, 0x98f0bacbad0846)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_numberfmtW.lpDecimalSep", lp_decimal_sep, 0x80, 0x40, true, 0x23d5cbf3d28556de)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_numberfmtW.lpThousandSep", lp_thousand_sep, 0xc0, 0x40, true, 0xf27a699034623a7d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_numberfmtW.NegativeOrder", negative_order, 0x100, 0x20, true, 0xbfb76416137a0d39)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif