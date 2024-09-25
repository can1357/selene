#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_currencyfmtA.NumDigits", num_digits, 0x0, 0x20, true, 0x8bf1d29e2481c781)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_currencyfmtA.LeadingZero", leading_zero, 0x20, 0x20, true, 0x89e971628d52547e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_currencyfmtA.Grouping", grouping, 0x40, 0x20, true, 0xfbbaa9effc49a506)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_currencyfmtA.lpDecimalSep", lp_decimal_sep, 0x80, 0x40, true, 0x2392bcb56110e662)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_currencyfmtA.lpThousandSep", lp_thousand_sep, 0xc0, 0x40, true, 0xbfffa89005c503c4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_currencyfmtA.NegativeOrder", negative_order, 0x100, 0x20, true, 0x1bd63327e2b97169)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_currencyfmtA.PositiveOrder", positive_order, 0x120, 0x20, true, 0x327ba60ab2a8542f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_currencyfmtA.lpCurrencySymbol", lp_currency_symbol, 0x140, 0x40, true, 0x9a5a10981ac6d5aa)
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