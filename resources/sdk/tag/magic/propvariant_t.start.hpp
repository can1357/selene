#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagPROPVARIANT.vt", vt, 0x0, 0x10, true, 0x65ccaed49d2313fa)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagPROPVARIANT.wReserved1", w_reserved1, 0x10, 0x10, true, 0x3c9badd1b7bfcb3a)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagPROPVARIANT.wReserved2", w_reserved2, 0x20, 0x10, true, 0xeb568f8aa576f041)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagPROPVARIANT.wReserved3", w_reserved3, 0x30, 0x10, true, 0x4e7be70512db17ae)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "tagPROPVARIANT.cVal", c_val, 0x40, 0x8, true, 0x37be651735d70332)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPROPVARIANT.bVal", b_val, 0x40, 0x8, true, 0xb19c3ebabba649ca)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "tagPROPVARIANT.iVal", i_val, 0x40, 0x10, true, 0x8342dfde6d3707a0)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagPROPVARIANT.uiVal", ui_val, 0x40, 0x10, true, 0xf2074b2112fc4307)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagPROPVARIANT.lVal", l_val, 0x40, 0x20, true, 0x326f9dd39a2c862c)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPROPVARIANT.ulVal", ul_val, 0x40, 0x20, true, 0x90294a8dc545606f)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagPROPVARIANT.intVal", int_val, 0x40, 0x20, true, 0xcad1b7d60cf526c9)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPROPVARIANT.uintVal", uint_val, 0x40, 0x20, true, 0xbb7020f56ad475d1)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "tagPROPVARIANT.hVal", h_val, 0x40, 0x40, true, 0x30cd2e3737941786)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagPROPVARIANT.uhVal", uh_val, 0x40, 0x40, true, 0x392dd399a98470a7)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(float), "tagPROPVARIANT.fltVal", flt_val, 0x40, 0x20, true, 0xca6fe4c4aad797ba)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(double), "tagPROPVARIANT.dblVal", dbl_val, 0x40, 0x40, true, 0xb33d9a940d379e9)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "tagPROPVARIANT.boolVal", bool_val, 0x40, 0x10, true, 0xb5255f91cbb17aab)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagPROPVARIANT.scode", scode, 0x40, 0x20, true, 0x25c8091e0fcbde07)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union tag::cy_t), "tagPROPVARIANT.cyVal", cy_val, 0x40, 0x40, true, 0xb05e81bbda3e4a0e)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(double), "tagPROPVARIANT.date", date, 0x40, 0x40, true, 0x7ecf111fca1fe3d8)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "tagPROPVARIANT.filetime", filetime, 0x40, 0x40, true, 0x5ecce4607eb198ea)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "tagPROPVARIANT.puuid", puuid, 0x40, 0x40, true, 0x96ede22be9aadef0)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::clipdata_t*), "tagPROPVARIANT.pclipdata", pclipdata, 0x40, 0x40, true, 0x5e88c115fcd1d216)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagPROPVARIANT.bstrVal", bstr_val, 0x40, 0x40, true, 0x52fa7959f4555b69)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::bstrblob_t), "tagPROPVARIANT.bstrblobVal", bstrblob_val, 0x40, 0x80, true, 0x874cad0b2816dd06)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::blob_t), "tagPROPVARIANT.blob", blob, 0x40, 0x80, true, 0x77f84f0830e7e127)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "tagPROPVARIANT.pszVal", psz_val, 0x40, 0x40, true, 0xd8325b7518d40f68)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagPROPVARIANT.pwszVal", pwsz_val, 0x40, 0x40, true, 0xd1800d1935117d91)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "tagPROPVARIANT.punkVal", punk_val, 0x40, 0x40, true, 0x4e76f244815d33c7)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_dispatch_t*), "tagPROPVARIANT.pdispVal", pdisp_val, 0x40, 0x40, true, 0x694b56b11b085fed)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_stream_t*), "tagPROPVARIANT.pStream", p_stream, 0x40, 0x40, true, 0xb68e35ae9d51a148)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_storage_t*), "tagPROPVARIANT.pStorage", p_storage, 0x40, 0x40, true, 0x954fbbc3e4a60b26)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::versioned_stream_t*), "tagPROPVARIANT.pVersionedStream", p_versioned_stream, 0x40, 0x40, true, 0xc8b1c67c204fc963)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::safearray_t*), "tagPROPVARIANT.parray", parray, 0x40, 0x40, true, 0xdaa06dc2d1b371ed)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::cac_t), "tagPROPVARIANT.cac", cac, 0x40, 0x80, true, 0xe1e973d73ce7ac0f)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::caub_t), "tagPROPVARIANT.caub", caub, 0x40, 0x80, true, 0x6dbad8fb4e5d0412)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::cai_t), "tagPROPVARIANT.cai", cai, 0x40, 0x80, true, 0xae52b4d92ebad36a)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::caui_t), "tagPROPVARIANT.caui", caui, 0x40, 0x80, true, 0xb465f675c697a95d)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::cal_t), "tagPROPVARIANT.cal", cal, 0x40, 0x80, true, 0x461b6ed3de54a3a3)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::caul_t), "tagPROPVARIANT.caul", caul, 0x40, 0x80, true, 0x7ef2aceeef1aaa6e)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::cah_t), "tagPROPVARIANT.cah", cah, 0x40, 0x80, true, 0x43fb44155238224f)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::cauh_t), "tagPROPVARIANT.cauh", cauh, 0x40, 0x80, true, 0x8bd6d685f447d62a)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::caflt_t), "tagPROPVARIANT.caflt", caflt, 0x40, 0x80, true, 0x690f660a999a0a94)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::cadbl_t), "tagPROPVARIANT.cadbl", cadbl, 0x40, 0x80, true, 0x1da4def034377854)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::cabool_t), "tagPROPVARIANT.cabool", cabool, 0x40, 0x80, true, 0x99b0c6af08af1dc0)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::cascode_t), "tagPROPVARIANT.cascode", cascode, 0x40, 0x80, true, 0x6e26bc082685274f)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::cacy_t), "tagPROPVARIANT.cacy", cacy, 0x40, 0x80, true, 0xa13372ea5a509856)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::cadate_t), "tagPROPVARIANT.cadate", cadate, 0x40, 0x80, true, 0xdaf4aa8abd831224)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::cafiletime_t), "tagPROPVARIANT.cafiletime", cafiletime, 0x40, 0x80, true, 0x3ff1e6f2efb8f595)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::caclsid_t), "tagPROPVARIANT.cauuid", cauuid, 0x40, 0x80, true, 0x762abb2a1b968b23)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::caclipdata_t), "tagPROPVARIANT.caclipdata", caclipdata, 0x40, 0x80, true, 0x90a1d70e2b4a5a8d)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::cabstr_t), "tagPROPVARIANT.cabstr", cabstr, 0x40, 0x80, true, 0x7d32d694115b8f1d)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::cabstrblob_t), "tagPROPVARIANT.cabstrblob", cabstrblob, 0x40, 0x80, true, 0x927197911da193a0)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::calpstr_t), "tagPROPVARIANT.calpstr", calpstr, 0x40, 0x80, true, 0xd83d66b0c5da60ae)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::calpwstr_t), "tagPROPVARIANT.calpwstr", calpwstr, 0x40, 0x80, true, 0xa1447ca7fa49ad30)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::capropvariant_t), "tagPROPVARIANT.capropvar", capropvar, 0x40, 0x80, true, 0xb2329cddc846e1b5)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "tagPROPVARIANT.pcVal", pc_val, 0x40, 0x40, true, 0x4aa6608318cccf56)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "tagPROPVARIANT.pbVal", pb_val, 0x40, 0x40, true, 0xa7e10add245a49e5)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t*), "tagPROPVARIANT.piVal", pi_val, 0x40, 0x40, true, 0xa409449a62d4e1be)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "tagPROPVARIANT.puiVal", pui_val, 0x40, 0x40, true, 0x9117e2e35823b8ab)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t*), "tagPROPVARIANT.plVal", pl_val, 0x40, 0x40, true, 0x9d7c8ec25aa1e72b)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "tagPROPVARIANT.pulVal", pul_val, 0x40, 0x40, true, 0xbd69b8a44b8fdefc)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t*), "tagPROPVARIANT.pintVal", pint_val, 0x40, 0x40, true, 0xa39ae92569be885f)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "tagPROPVARIANT.puintVal", puint_val, 0x40, 0x40, true, 0x574f5b140ad7338)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(float*), "tagPROPVARIANT.pfltVal", pflt_val, 0x40, 0x40, true, 0x710236a270f72848)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(double*), "tagPROPVARIANT.pdblVal", pdbl_val, 0x40, 0x40, true, 0xd53ab838cad063ce)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t*), "tagPROPVARIANT.pboolVal", pbool_val, 0x40, 0x40, true, 0x8dc47f62da651f86)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::dec_t*), "tagPROPVARIANT.pdecVal", pdec_val, 0x40, 0x40, true, 0xcc63245dec9f6f34)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t*), "tagPROPVARIANT.pscode", pscode, 0x40, 0x40, true, 0x38d0f02ed01b119e)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union tag::cy_t*), "tagPROPVARIANT.pcyVal", pcy_val, 0x40, 0x40, true, 0x6021567838981554)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(double*), "tagPROPVARIANT.pdate", pdate, 0x40, 0x40, true, 0xba5a1eb8a80abb92)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t**), "tagPROPVARIANT.pbstrVal", pbstr_val, 0x40, 0x40, true, 0xafc7686419a4bb4)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t**), "tagPROPVARIANT.ppunkVal", ppunk_val, 0x40, 0x40, true, 0xe2255b50ce85bbac)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_dispatch_t**), "tagPROPVARIANT.ppdispVal", ppdisp_val, 0x40, 0x40, true, 0xb1628f505f128f71)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::safearray_t**), "tagPROPVARIANT.pparray", pparray, 0x40, 0x40, true, 0xd54e51200552f295)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::propvariant_t*), "tagPROPVARIANT.pvarVal", pvar_val, 0x40, 0x40, true, 0xcdd1a07e4a12e1ae)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::dec_t), "tagPROPVARIANT.decVal", dec_val, 0x0, 0x80, true, 0xe0df8a28dfb295c1)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "tagPROPVARIANT.__OBSOLETE__VARIANT_BOOL", obsolete_variant_bool, 0x40, 0x10, true, 0x101f75c0318731a)
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
#define _m052
#define _m053
#define _m054
#define _m055
#define _m056
#define _m057
#define _m058
#define _m059
#define _m060
#define _m061
#define _m062
#define _m063
#define _m064
#define _m065
#define _m066
#define _m067
#define _m068
#define _m069
#define _m070
#define _m071
#define _m072
#define _m073
#define _m074
#define _m075
#define _m076
#define _m077
#endif