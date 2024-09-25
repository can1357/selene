#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_variant_t.vt", vt, 0x0, 0x10, true, 0x7059d593862813b1)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_variant_t.wReserved1", w_reserved1, 0x10, 0x10, true, 0xda2f928e5689f169)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_variant_t.wReserved2", w_reserved2, 0x20, 0x10, true, 0x3c5ea8a2da6a88a0)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_variant_t.wReserved3", w_reserved3, 0x30, 0x10, true, 0xf3863a6808617624)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_variant_t.llVal", ll_val, 0x40, 0x40, true, 0x9cacb54c4b307ea2)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_variant_t.lVal", l_val, 0x40, 0x20, true, 0x8c5b597c4c62b804)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_variant_t.bVal", b_val, 0x40, 0x8, true, 0x87cae5402c16c644)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_variant_t.iVal", i_val, 0x40, 0x10, true, 0xa8f7c35f9d494645)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(float), "_variant_t.fltVal", flt_val, 0x40, 0x20, true, 0x82c6ad9e1d1be3a3)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(double), "_variant_t.dblVal", dbl_val, 0x40, 0x40, true, 0xf843dce4db1451ab)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_variant_t.boolVal", bool_val, 0x40, 0x10, true, 0xfb08f49b833f2fa4)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_variant_t.scode", scode, 0x40, 0x20, true, 0x22b1c7016e6e1076)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union tag::cy_t), "_variant_t.cyVal", cy_val, 0x40, 0x40, true, 0x1982b8f97a8c4a31)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(double), "_variant_t.date", date, 0x40, 0x40, true, 0x76bdb1a949889b97)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_variant_t.bstrVal", bstr_val, 0x40, 0x40, true, 0xc6503332eb4d6279)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "_variant_t.punkVal", punk_val, 0x40, 0x40, true, 0x102b17c2dc0261b9)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_dispatch_t*), "_variant_t.pdispVal", pdisp_val, 0x40, 0x40, true, 0x2e3e2c5d55129e7a)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::safearray_t*), "_variant_t.parray", parray, 0x40, 0x40, true, 0xf63d0598a9ace2d5)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_variant_t.pbVal", pb_val, 0x40, 0x40, true, 0x31e64e9a9675d59c)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t*), "_variant_t.piVal", pi_val, 0x40, 0x40, true, 0xba6ecfb681a72ad8)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t*), "_variant_t.plVal", pl_val, 0x40, 0x40, true, 0x35a9575e488f86e5)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t*), "_variant_t.pllVal", pll_val, 0x40, 0x40, true, 0x3726ea7c7d5af4c7)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(float*), "_variant_t.pfltVal", pflt_val, 0x40, 0x40, true, 0x5a3125382eb629f7)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(double*), "_variant_t.pdblVal", pdbl_val, 0x40, 0x40, true, 0xcdc0dddfe2c77e01)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t*), "_variant_t.pboolVal", pbool_val, 0x40, 0x40, true, 0x5763aaa079f34feb)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t*), "_variant_t.pscode", pscode, 0x40, 0x40, true, 0x195977b94483ee64)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union tag::cy_t*), "_variant_t.pcyVal", pcy_val, 0x40, 0x40, true, 0x81a00dc3afd65650)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(double*), "_variant_t.pdate", pdate, 0x40, 0x40, true, 0x41c3aa28d0f012b8)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t**), "_variant_t.pbstrVal", pbstr_val, 0x40, 0x40, true, 0xeb913f1cff47d276)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t**), "_variant_t.ppunkVal", ppunk_val, 0x40, 0x40, true, 0x624d5e6793c25631)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_dispatch_t**), "_variant_t.ppdispVal", ppdisp_val, 0x40, 0x40, true, 0xd6f269420d3d54f9)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::safearray_t**), "_variant_t.pparray", pparray, 0x40, 0x40, true, 0xe92086f253f975eb)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::variant_t*), "_variant_t.pvarVal", pvar_val, 0x40, 0x40, true, 0x7d4ebd9454919eac)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_variant_t.byref", byref, 0x40, 0x40, true, 0x85e0b11a9cd9497b)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_variant_t.cVal", c_val, 0x40, 0x8, true, 0x7a8a4fce986e598d)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_variant_t.uiVal", ui_val, 0x40, 0x10, true, 0xcc9b26b9303deb1b)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_variant_t.ulVal", ul_val, 0x40, 0x20, true, 0xd30b4f62b3f44a0e)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_variant_t.ullVal", ull_val, 0x40, 0x40, true, 0x77a10eaa509c4466)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_variant_t.intVal", int_val, 0x40, 0x20, true, 0x7837a28983204906)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_variant_t.uintVal", uint_val, 0x40, 0x20, true, 0x5ab1927b74732fdf)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::dec_t*), "_variant_t.pdecVal", pdec_val, 0x40, 0x40, true, 0x250bf1ef8905f7e3)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_variant_t.pcVal", pc_val, 0x40, 0x40, true, 0x8541e1ada1071223)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "_variant_t.puiVal", pui_val, 0x40, 0x40, true, 0x82c7128cd8c45221)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_variant_t.pulVal", pul_val, 0x40, 0x40, true, 0x94ff98e900de6fed)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t*), "_variant_t.pullVal", pull_val, 0x40, 0x40, true, 0xe9660aadf97ed98f)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t*), "_variant_t.pintVal", pint_val, 0x40, 0x40, true, 0xc0fba6e8bb639ef7)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_variant_t.puintVal", puint_val, 0x40, 0x40, true, 0x2866071d35baaabb)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_variant_t.pvRecord", pv_record, 0x40, 0x40, true, 0x11e1be3c472d1bee)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_record_info_t*), "_variant_t.pRecInfo", p_rec_info, 0x80, 0x40, true, 0xba9d4bc164fd3d1a)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::dec_t), "_variant_t.decVal", dec_val, 0x0, 0x80, true, 0x3e53cf082093a0e)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_variant_t.__OBSOLETE__VARIANT_BOOL", obsolete_variant_bool, 0x40, 0x10, true, 0x1717267fbec2626f)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t*), "_variant_t.__OBSOLETE__VARIANT_PBOOL", obsolete_variant_pbool, 0x40, 0x40, true, 0xeaa2d4fbeb381cf7)
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
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m047
#define _m048
#define _m049
#define _m050
#define _m051
#endif