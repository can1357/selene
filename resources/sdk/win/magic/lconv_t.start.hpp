#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "lconv.decimal_point", decimal_point, 0x0, 0x40, true, 0x8fe389d3bfc89bed)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "lconv.thousands_sep", thousands_sep, 0x40, 0x40, true, 0x5e8cbf28ce6f3d8b)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "lconv.grouping", grouping, 0x80, 0x40, true, 0xd888420ce946aefa)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "lconv.int_curr_symbol", int_curr_symbol, 0xc0, 0x40, true, 0x902d47aebe598753)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "lconv.currency_symbol", currency_symbol, 0x100, 0x40, true, 0xd70761a30edc22d1)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "lconv.mon_decimal_point", mon_decimal_point, 0x140, 0x40, true, 0x32271a80cbb07573)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "lconv.mon_thousands_sep", mon_thousands_sep, 0x180, 0x40, true, 0xf48183239cc548d7)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "lconv.mon_grouping", mon_grouping, 0x1c0, 0x40, true, 0x70b06d563a7181fc)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "lconv.positive_sign", positive_sign, 0x200, 0x40, true, 0x84660db9cc56a2ba)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "lconv.negative_sign", negative_sign, 0x240, 0x40, true, 0xc3eb2dd4b1ac92f2)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "lconv.int_frac_digits", int_frac_digits, 0x280, 0x8, true, 0x9cb14ab8ef014a89)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "lconv.frac_digits", frac_digits, 0x288, 0x8, true, 0x9aeb7c083bdfcc12)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "lconv.p_cs_precedes", p_cs_precedes, 0x290, 0x8, true, 0x6dedc2964bd78b45)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "lconv.p_sep_by_space", p_sep_by_space, 0x298, 0x8, true, 0xbb99d639df4ddb58)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "lconv.n_cs_precedes", n_cs_precedes, 0x2a0, 0x8, true, 0xbc9498c59765a015)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "lconv.n_sep_by_space", n_sep_by_space, 0x2a8, 0x8, true, 0x642ffb2632c396eb)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "lconv.p_sign_posn", p_sign_posn, 0x2b0, 0x8, true, 0xe9f26ae4d1d106ff)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "lconv.n_sign_posn", n_sign_posn, 0x2b8, 0x8, true, 0xe12e28dcdfb5e253)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "lconv._W_decimal_point", w_decimal_point, 0x2c0, 0x40, true, 0x374e4955f0151f66)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "lconv._W_thousands_sep", w_thousands_sep, 0x300, 0x40, true, 0x6f59995c11e6ca6f)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "lconv._W_int_curr_symbol", w_int_curr_symbol, 0x340, 0x40, true, 0x8f7c171a4cd4179)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "lconv._W_currency_symbol", w_currency_symbol, 0x380, 0x40, true, 0x4c3df3c4958b24b7)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "lconv._W_mon_decimal_point", w_mon_decimal_point, 0x3c0, 0x40, true, 0x70942fd6517810ff)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "lconv._W_mon_thousands_sep", w_mon_thousands_sep, 0x400, 0x40, true, 0x4eb07d11d321cd37)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "lconv._W_positive_sign", w_positive_sign, 0x440, 0x40, true, 0x258a9d3db01c400)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "lconv._W_negative_sign", w_negative_sign, 0x480, 0x40, true, 0x3b6057714cba6a6f)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#endif