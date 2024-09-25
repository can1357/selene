#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_currencyfmtW.NumDigits", num_digits, 0x0, 0x20, true, 0xdd6f4b5ba5239ace)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_currencyfmtW.LeadingZero", leading_zero, 0x20, 0x20, true, 0xf52a4304a44675d0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_currencyfmtW.Grouping", grouping, 0x40, 0x20, true, 0x8a9eb9979857cd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_currencyfmtW.lpDecimalSep", lp_decimal_sep, 0x80, 0x40, true, 0x65829902a389c705)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_currencyfmtW.lpThousandSep", lp_thousand_sep, 0xc0, 0x40, true, 0xcb02cd516383475d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_currencyfmtW.NegativeOrder", negative_order, 0x100, 0x20, true, 0x31c95be5bfccfc4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_currencyfmtW.PositiveOrder", positive_order, 0x120, 0x20, true, 0x8f96030eaa0a06c0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_currencyfmtW.lpCurrencySymbol", lp_currency_symbol, 0x140, 0x40, true, 0x83f1c430ddba294c)
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