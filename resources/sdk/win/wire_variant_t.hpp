#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/cy_t.hpp"
#include "../tag/dec_t.hpp"

#include "magic/wire_variant_t.start.hpp"
namespace win
{
    struct i_unknown_t;
    struct i_dispatch_t;
    struct wire_brecord_t;
    struct wire_variant_t;
    struct wire_safearray_t;
    struct flagged_word_blob_t;

    // [struct _wireVARIANT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wire_variant_t                                    
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                   
        _m000 uint32_t                          cl_size;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .clSize
        _m001 uint32_t                          rpc_reserved;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .rpcReserved
        _m002 uint16_t                          vt;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .vt
        _m003 uint16_t                          w_reserved1;   //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .wReserved1
        _m004 uint16_t                          w_reserved2;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .wReserved2
        _m005 uint16_t                          w_reserved3;   //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .wReserved3
        _m006 int64_t                           ll_val;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .llVal
        _m007 int32_t                           l_val;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .lVal
        _m008 uint8_t                           b_val;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .bVal
        _m009 int16_t                           i_val;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .iVal
        _m010 float                             flt_val;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .fltVal
        _m011 double                            dbl_val;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dblVal
        _m012 int16_t                           bool_val;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .boolVal
        _m013 int32_t                           scode;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .scode
        _m014 union tag::cy_t                   cy_val;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cyVal
        _m015 double                            date;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .date
        _m016 struct win::flagged_word_blob_t*  bstr_val;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .bstrVal
        _m017 struct win::i_unknown_t*          punk_val;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .punkVal
        _m018 struct win::i_dispatch_t*         pdisp_val;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pdispVal
        _m019 struct win::wire_safearray_t**    parray;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .parray
        _m020 struct win::wire_brecord_t*       brec_val;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .brecVal
        _m021 uint8_t*                          pb_val;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pbVal
        _m022 int16_t*                          pi_val;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .piVal
        _m023 int32_t*                          pl_val;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .plVal
        _m024 int64_t*                          pll_val;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pllVal
        _m025 float*                            pflt_val;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pfltVal
        _m026 double*                           pdbl_val;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pdblVal
        _m027 int16_t*                          pbool_val;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pboolVal
        _m028 int32_t*                          pscode;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pscode
        _m029 union tag::cy_t*                  pcy_val;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pcyVal
        _m030 double*                           pdate;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pdate
        _m031 struct win::flagged_word_blob_t** pbstr_val;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pbstrVal
        _m032 struct win::i_unknown_t**         ppunk_val;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ppunkVal
        _m033 struct win::i_dispatch_t**        ppdisp_val;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ppdispVal
        _m034 struct win::wire_safearray_t***   pparray;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pparray
        _m035 struct win::wire_variant_t**      pvar_val;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pvarVal
        _m036 char                              c_val;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cVal
        _m037 uint16_t                          ui_val;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .uiVal
        _m038 uint32_t                          ul_val;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ulVal
        _m039 uint64_t                          ull_val;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ullVal
        _m040 int32_t                           int_val;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .intVal
        _m041 uint32_t                          uint_val;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .uintVal
        _m042 struct tag::dec_t                 dec_val;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .decVal
        _m043 struct tag::dec_t*                pdec_val;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pdecVal
        _m044 char*                             pc_val;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pcVal
        _m045 uint16_t*                         pui_val;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .puiVal
        _m046 uint32_t*                         pul_val;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pulVal
        _m047 uint64_t*                         pull_val;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pullVal
        _m048 int32_t*                          pint_val;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pintVal
        _m049 uint32_t*                         puint_val;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .puintVal
                                                             
        SDK_MAGIC_PROPERTIES( "_wireVARIANT.$", 0x20, true, 0xc8fce212fc77a6fd );             
        SDK_FIXED_SIZE( wire_variant_t, 0x20 );              
    };                                                       
};
#include "magic/wire_variant_t.end.hpp"
SDK_VERIFY( struct win::wire_variant_t, 0x20 );
