#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lconv_t.start.hpp"
namespace win
{
    // [struct lconv]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lconv_t                         
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                 
        _m000 char*    decimal_point;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .decimal_point
        _m001 char*    thousands_sep;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .thousands_sep
        _m002 char*    grouping;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .grouping
        _m003 char*    int_curr_symbol;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .int_curr_symbol
        _m004 char*    currency_symbol;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .currency_symbol
        _m005 char*    mon_decimal_point;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .mon_decimal_point
        _m006 char*    mon_thousands_sep;    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .mon_thousands_sep
        _m007 char*    mon_grouping;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .mon_grouping
        _m008 char*    positive_sign;        //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .positive_sign
        _m009 char*    negative_sign;        //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .negative_sign
        _m010 char     int_frac_digits;      //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .int_frac_digits
        _m011 char     frac_digits;          //{ +0x0051    +0x0051    +0x0051    +0x0051    } | .frac_digits
        _m012 char     p_cs_precedes;        //{ +0x0052    +0x0052    +0x0052    +0x0052    } | .p_cs_precedes
        _m013 char     p_sep_by_space;       //{ +0x0053    +0x0053    +0x0053    +0x0053    } | .p_sep_by_space
        _m014 char     n_cs_precedes;        //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .n_cs_precedes
        _m015 char     n_sep_by_space;       //{ +0x0055    +0x0055    +0x0055    +0x0055    } | .n_sep_by_space
        _m016 char     p_sign_posn;          //{ +0x0056    +0x0056    +0x0056    +0x0056    } | .p_sign_posn
        _m017 char     n_sign_posn;          //{ +0x0057    +0x0057    +0x0057    +0x0057    } | .n_sign_posn
        _m018 wchar_t* w_decimal_point;      //{ +0x0058    +0x0058    +0x0058    +0x0058    } | ._W_decimal_point
        _m019 wchar_t* w_thousands_sep;      //{ +0x0060    +0x0060    +0x0060    +0x0060    } | ._W_thousands_sep
        _m020 wchar_t* w_int_curr_symbol;    //{ +0x0068    +0x0068    +0x0068    +0x0068    } | ._W_int_curr_symbol
        _m021 wchar_t* w_currency_symbol;    //{ +0x0070    +0x0070    +0x0070    +0x0070    } | ._W_currency_symbol
        _m022 wchar_t* w_mon_decimal_point;  //{ +0x0078    +0x0078    +0x0078    +0x0078    } | ._W_mon_decimal_point
        _m023 wchar_t* w_mon_thousands_sep;  //{ +0x0080    +0x0080    +0x0080    +0x0080    } | ._W_mon_thousands_sep
        _m024 wchar_t* w_positive_sign;      //{ +0x0088    +0x0088    +0x0088    +0x0088    } | ._W_positive_sign
        _m025 wchar_t* w_negative_sign;      //{ +0x0090    +0x0090    +0x0090    +0x0090    } | ._W_negative_sign
                                           
        SDK_MAGIC_PROPERTIES( "lconv.$", 0x98, true, 0x52e3c7eb2488a293 );                    
        SDK_FIXED_SIZE( lconv_t, 0x98 );                    
    };                                     
};
#include "magic/lconv_t.end.hpp"
SDK_VERIFY( struct win::lconv_t, 0x98 );
