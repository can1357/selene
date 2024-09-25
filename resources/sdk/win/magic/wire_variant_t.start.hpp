#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_wireVARIANT.clSize", cl_size, 0x0, 0x20, true, 0x3754f0c1f543dce8)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_wireVARIANT.rpcReserved", rpc_reserved, 0x20, 0x20, true, 0x13caab37c72330d)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_wireVARIANT.vt", vt, 0x40, 0x10, true, 0x1cfa30ae8cd34a0)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_wireVARIANT.wReserved1", w_reserved1, 0x50, 0x10, true, 0xa3be261936467810)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_wireVARIANT.wReserved2", w_reserved2, 0x60, 0x10, true, 0x4e3d1114646e61b0)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_wireVARIANT.wReserved3", w_reserved3, 0x70, 0x10, true, 0x2cf7148837bb08ce)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_wireVARIANT.llVal", ll_val, 0x80, 0x40, true, 0xeea3d3bcf27fb49)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_wireVARIANT.lVal", l_val, 0x80, 0x20, true, 0xcc39a07c95742d0e)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_wireVARIANT.bVal", b_val, 0x80, 0x8, true, 0x88d11417aceb3adb)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_wireVARIANT.iVal", i_val, 0x80, 0x10, true, 0x7c73e2c6d15b8b81)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(float), "_wireVARIANT.fltVal", flt_val, 0x80, 0x20, true, 0x29c10a85d1a28072)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(double), "_wireVARIANT.dblVal", dbl_val, 0x80, 0x40, true, 0x8809835f76d7b1a1)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_wireVARIANT.boolVal", bool_val, 0x80, 0x10, true, 0x447535ec438323c0)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_wireVARIANT.scode", scode, 0x80, 0x20, true, 0xa5030e35180ba9e7)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union tag::cy_t), "_wireVARIANT.cyVal", cy_val, 0x80, 0x40, true, 0xb7ec76b28d504887)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(double), "_wireVARIANT.date", date, 0x80, 0x40, true, 0xe63bfeb642eb51f5)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::flagged_word_blob_t*), "_wireVARIANT.bstrVal", bstr_val, 0x80, 0x40, true, 0xced6ea720ecf7181)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "_wireVARIANT.punkVal", punk_val, 0x80, 0x40, true, 0x54efb787b855d4d3)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_dispatch_t*), "_wireVARIANT.pdispVal", pdisp_val, 0x80, 0x40, true, 0x9f0c636719d79d6c)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wire_safearray_t**), "_wireVARIANT.parray", parray, 0x80, 0x40, true, 0xeb46c18774b0541d)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wire_brecord_t*), "_wireVARIANT.brecVal", brec_val, 0x80, 0x40, true, 0xaea5bdb478cc205a)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_wireVARIANT.pbVal", pb_val, 0x80, 0x40, true, 0x9aad5d814909bba5)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t*), "_wireVARIANT.piVal", pi_val, 0x80, 0x40, true, 0xdc56daf764e6a5c0)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t*), "_wireVARIANT.plVal", pl_val, 0x80, 0x40, true, 0xb5f79de596029b0f)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t*), "_wireVARIANT.pllVal", pll_val, 0x80, 0x40, true, 0x43791a86d05dcf59)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(float*), "_wireVARIANT.pfltVal", pflt_val, 0x80, 0x40, true, 0xab5eeb236506aa9b)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(double*), "_wireVARIANT.pdblVal", pdbl_val, 0x80, 0x40, true, 0x29d2b4c3ab8fbb92)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t*), "_wireVARIANT.pboolVal", pbool_val, 0x80, 0x40, true, 0x35b6ff2515187c51)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t*), "_wireVARIANT.pscode", pscode, 0x80, 0x40, true, 0x517be18e68612009)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union tag::cy_t*), "_wireVARIANT.pcyVal", pcy_val, 0x80, 0x40, true, 0xa147e91442679865)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(double*), "_wireVARIANT.pdate", pdate, 0x80, 0x40, true, 0x5a526a5d4869c191)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::flagged_word_blob_t**), "_wireVARIANT.pbstrVal", pbstr_val, 0x80, 0x40, true, 0xb29bcc15f2caac23)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t**), "_wireVARIANT.ppunkVal", ppunk_val, 0x80, 0x40, true, 0x1f083f132200b51b)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_dispatch_t**), "_wireVARIANT.ppdispVal", ppdisp_val, 0x80, 0x40, true, 0x584fe419609765a4)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wire_safearray_t***), "_wireVARIANT.pparray", pparray, 0x80, 0x40, true, 0xfa96cafaec51c1d5)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wire_variant_t**), "_wireVARIANT.pvarVal", pvar_val, 0x80, 0x40, true, 0x474e5d5e7a9b20e4)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_wireVARIANT.cVal", c_val, 0x80, 0x8, true, 0xb7398986ffe7a997)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_wireVARIANT.uiVal", ui_val, 0x80, 0x10, true, 0x79570081f44be04)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_wireVARIANT.ulVal", ul_val, 0x80, 0x20, true, 0x452c22794906f39c)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_wireVARIANT.ullVal", ull_val, 0x80, 0x40, true, 0xa8039ccdb38a0def)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_wireVARIANT.intVal", int_val, 0x80, 0x20, true, 0xc96f8edd625a784)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_wireVARIANT.uintVal", uint_val, 0x80, 0x20, true, 0x9dc4b09e8f6361b8)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::dec_t), "_wireVARIANT.decVal", dec_val, 0x80, 0x80, true, 0xee82c059be6dc80f)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::dec_t*), "_wireVARIANT.pdecVal", pdec_val, 0x80, 0x40, true, 0x31bbc971fec5c2e5)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_wireVARIANT.pcVal", pc_val, 0x80, 0x40, true, 0xa6d2592fcb84fd3b)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "_wireVARIANT.puiVal", pui_val, 0x80, 0x40, true, 0x454bb4ea087efdd5)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_wireVARIANT.pulVal", pul_val, 0x80, 0x40, true, 0x103b1b38bfd775b8)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t*), "_wireVARIANT.pullVal", pull_val, 0x80, 0x40, true, 0x69436c84e4b94963)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t*), "_wireVARIANT.pintVal", pint_val, 0x80, 0x40, true, 0xa5cb4ff0b1e52b11)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_wireVARIANT.puintVal", puint_val, 0x80, 0x40, true, 0x7fc6d5b9a676a04e)
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
#endif