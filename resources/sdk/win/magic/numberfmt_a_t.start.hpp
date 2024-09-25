#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_numberfmtA.NumDigits", num_digits, 0x0, 0x20, true, 0xc11d43d6bebc16ee)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_numberfmtA.LeadingZero", leading_zero, 0x20, 0x20, true, 0xd8ab257a2e2fed9f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_numberfmtA.Grouping", grouping, 0x40, 0x20, true, 0xf5596c429c9c34ae)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_numberfmtA.lpDecimalSep", lp_decimal_sep, 0x80, 0x40, true, 0x682f9db1621a43d9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_numberfmtA.lpThousandSep", lp_thousand_sep, 0xc0, 0x40, true, 0x81ca32f2dfb7e99c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_numberfmtA.NegativeOrder", negative_order, 0x100, 0x20, true, 0xf397d4bc77b8ead1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif