#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagVARIANT.vt", vt, 0x0, 0x10, true, 0xcbd72bc65f50a8a5)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagVARIANT.wReserved1", w_reserved1, 0x10, 0x10, true, 0xda3f80b3ffcc6821)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagVARIANT.wReserved2", w_reserved2, 0x20, 0x10, true, 0xed0d88d4efec7f)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagVARIANT.wReserved3", w_reserved3, 0x30, 0x10, true, 0x2574ff76dbf04b9d)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "tagVARIANT.llVal", ll_val, 0x40, 0x40, true, 0x5665d40e89bdbb2c)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagVARIANT.lVal", l_val, 0x40, 0x20, true, 0x8194f9a13a7b96e4)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "tagVARIANT.bVal", b_val, 0x40, 0x8, true, 0xbe14ba72cb133897)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "tagVARIANT.iVal", i_val, 0x40, 0x10, true, 0xfd6296f23f9a52)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(float), "tagVARIANT.fltVal", flt_val, 0x40, 0x20, true, 0x6bd86c925eb5b698)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(double), "tagVARIANT.dblVal", dbl_val, 0x40, 0x40, true, 0x155c39197303df1e)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "tagVARIANT.boolVal", bool_val, 0x40, 0x10, true, 0xa9122156e1b57082)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagVARIANT.scode", scode, 0x40, 0x20, true, 0xe97cf978a61722e1)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union tag::cy_t), "tagVARIANT.cyVal", cy_val, 0x40, 0x40, true, 0xa923c4db918646ea)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(double), "tagVARIANT.date", date, 0x40, 0x40, true, 0x983b375806fbd2af)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagVARIANT.bstrVal", bstr_val, 0x40, 0x40, true, 0x1c54eee3e28f8dd6)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "tagVARIANT.punkVal", punk_val, 0x40, 0x40, true, 0x78fce5e8eebabeb4)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_dispatch_t*), "tagVARIANT.pdispVal", pdisp_val, 0x40, 0x40, true, 0xffd871adc86d4191)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::safearray_t*), "tagVARIANT.parray", parray, 0x40, 0x40, true, 0x1303239ed9eefd27)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "tagVARIANT.pbVal", pb_val, 0x40, 0x40, true, 0x51df23294d96a659)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t*), "tagVARIANT.piVal", pi_val, 0x40, 0x40, true, 0x8b3785aaba490472)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t*), "tagVARIANT.plVal", pl_val, 0x40, 0x40, true, 0x883f994fa120b7a8)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t*), "tagVARIANT.pllVal", pll_val, 0x40, 0x40, true, 0xc9178e6f3e6db8ea)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(float*), "tagVARIANT.pfltVal", pflt_val, 0x40, 0x40, true, 0x79080f5bbd029000)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(double*), "tagVARIANT.pdblVal", pdbl_val, 0x40, 0x40, true, 0x20f72e0764eb5950)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t*), "tagVARIANT.pboolVal", pbool_val, 0x40, 0x40, true, 0x89e45d46c9674d32)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t*), "tagVARIANT.pscode", pscode, 0x40, 0x40, true, 0x10b906a6b8eddb90)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union tag::cy_t*), "tagVARIANT.pcyVal", pcy_val, 0x40, 0x40, true, 0x491f52a6b049b5c8)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(double*), "tagVARIANT.pdate", pdate, 0x40, 0x40, true, 0x95473e088736cb84)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t**), "tagVARIANT.pbstrVal", pbstr_val, 0x40, 0x40, true, 0x31d2ff81f809e4e0)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t**), "tagVARIANT.ppunkVal", ppunk_val, 0x40, 0x40, true, 0x2d3e3f2ebdfa3143)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_dispatch_t**), "tagVARIANT.ppdispVal", ppdisp_val, 0x40, 0x40, true, 0x4b67e67ee1b4f2bd)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::safearray_t**), "tagVARIANT.pparray", pparray, 0x40, 0x40, true, 0x54a3471bec6df142)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::variant_t*), "tagVARIANT.pvarVal", pvar_val, 0x40, 0x40, true, 0x9d9baef1310777c7)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagVARIANT.byref", byref, 0x40, 0x40, true, 0x3a378b14f839699d)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "tagVARIANT.cVal", c_val, 0x40, 0x8, true, 0x6272e8e094030a68)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagVARIANT.uiVal", ui_val, 0x40, 0x10, true, 0xcf2185374ddcb99b)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagVARIANT.ulVal", ul_val, 0x40, 0x20, true, 0xc8bec4b79913105e)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagVARIANT.ullVal", ull_val, 0x40, 0x40, true, 0x3850b65400b45005)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagVARIANT.intVal", int_val, 0x40, 0x20, true, 0x6ef7485f9a2f44ad)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagVARIANT.uintVal", uint_val, 0x40, 0x20, true, 0xdf72460b469f938a)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::dec_t*), "tagVARIANT.pdecVal", pdec_val, 0x40, 0x40, true, 0xeabb336a312ab6ac)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "tagVARIANT.pcVal", pc_val, 0x40, 0x40, true, 0x7073ce1a8446aaf)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "tagVARIANT.puiVal", pui_val, 0x40, 0x40, true, 0x9c4e0cd2f93a3c7b)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "tagVARIANT.pulVal", pul_val, 0x40, 0x40, true, 0x7b8b1585ff2cdc3)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t*), "tagVARIANT.pullVal", pull_val, 0x40, 0x40, true, 0xb66111dbc9f1402b)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t*), "tagVARIANT.pintVal", pint_val, 0x40, 0x40, true, 0xdde3075c2973d78d)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "tagVARIANT.puintVal", puint_val, 0x40, 0x40, true, 0x30f899e1d65db12)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagVARIANT.pvRecord", pv_record, 0x40, 0x40, true, 0xc05b083c1ee01142)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_record_info_t*), "tagVARIANT.pRecInfo", p_rec_info, 0x80, 0x40, true, 0x260a80209cd191eb)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::dec_t), "tagVARIANT.decVal", dec_val, 0x0, 0x80, true, 0x51ceb7f2e7510bc7)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "tagVARIANT.__OBSOLETE__VARIANT_BOOL", obsolete_variant_bool, 0x40, 0x10, true, 0x3667a290e1bbf0e6)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t*), "tagVARIANT.__OBSOLETE__VARIANT_PBOOL", obsolete_variant_pbool, 0x40, 0x40, true, 0xf05eed31f250b5b2)
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