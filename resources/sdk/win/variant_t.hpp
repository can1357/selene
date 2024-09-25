#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/cy_t.hpp"
#include "../tag/dec_t.hpp"

namespace tag { struct safearray_t; }
namespace tag { struct variant_t;   }

#include "magic/variant_t.start.hpp"
namespace win
{
    struct i_unknown_t;
    struct i_dispatch_t;
    struct i_record_info_t;

    // [class _variant_t]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class variant_t                                               
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                        
        _m000 uint16_t                     vt;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .vt
        _m001 uint16_t                     w_reserved1;             //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .wReserved1
        _m002 uint16_t                     w_reserved2;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .wReserved2
        _m003 uint16_t                     w_reserved3;             //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .wReserved3
        _m004 int64_t                      ll_val;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .llVal
        _m005 int32_t                      l_val;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lVal
        _m006 uint8_t                      b_val;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .bVal
        _m007 int16_t                      i_val;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .iVal
        _m008 float                        flt_val;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .fltVal
        _m009 double                       dbl_val;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dblVal
        _m010 int16_t                      bool_val;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .boolVal
        _m011 int32_t                      scode;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .scode
        _m012 union tag::cy_t              cy_val;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cyVal
        _m013 double                       date;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .date
        _m014 wchar_t*                     bstr_val;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .bstrVal
        _m015 struct win::i_unknown_t*     punk_val;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .punkVal
        _m016 struct win::i_dispatch_t*    pdisp_val;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pdispVal
        _m017 struct tag::safearray_t*     parray;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .parray
        _m018 uint8_t*                     pb_val;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pbVal
        _m019 int16_t*                     pi_val;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .piVal
        _m020 int32_t*                     pl_val;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .plVal
        _m021 int64_t*                     pll_val;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pllVal
        _m022 float*                       pflt_val;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pfltVal
        _m023 double*                      pdbl_val;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pdblVal
        _m024 int16_t*                     pbool_val;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pboolVal
        _m025 int32_t*                     pscode;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pscode
        _m026 union tag::cy_t*             pcy_val;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pcyVal
        _m027 double*                      pdate;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pdate
        _m028 wchar_t**                    pbstr_val;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pbstrVal
        _m029 struct win::i_unknown_t**    ppunk_val;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ppunkVal
        _m030 struct win::i_dispatch_t**   ppdisp_val;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ppdispVal
        _m031 struct tag::safearray_t**    pparray;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pparray
        _m032 struct tag::variant_t*       pvar_val;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pvarVal
        _m033 void*                        byref;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .byref
        _m034 char                         c_val;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cVal
        _m035 uint16_t                     ui_val;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .uiVal
        _m036 uint32_t                     ul_val;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ulVal
        _m037 uint64_t                     ull_val;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ullVal
        _m038 int32_t                      int_val;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .intVal
        _m039 uint32_t                     uint_val;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .uintVal
        _m040 struct tag::dec_t*           pdec_val;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pdecVal
        _m041 char*                        pc_val;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pcVal
        _m042 uint16_t*                    pui_val;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .puiVal
        _m043 uint32_t*                    pul_val;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pulVal
        _m044 uint64_t*                    pull_val;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pullVal
        _m045 int32_t*                     pint_val;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pintVal
        _m046 uint32_t*                    puint_val;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .puintVal
        _m047 void*                        pv_record;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pvRecord
        _m048 struct win::i_record_info_t* p_rec_info;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pRecInfo
        _m049 struct tag::dec_t            dec_val;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .decVal
                                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                        
        _m050 int16_t                      obsolete_variant_bool;   //{ +0x0008    +0x0008    +0x0008    } | .__OBSOLETE__VARIANT_BOOL
        _m051 int16_t*                     obsolete_variant_pbool;  //{ +0x0008    +0x0008    +0x0008    } | .__OBSOLETE__VARIANT_PBOOL
                                                                  
        SDK_MAGIC_PROPERTIES( "_variant_t.$", 0x18, true, 0x7dc31fbc846ba8ba );                       
        SDK_FIXED_SIZE( variant_t, 0x18 );                        
    };                                                            
};
#include "magic/variant_t.end.hpp"
SDK_VERIFY( class win::variant_t, 0x18 );
