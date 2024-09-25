#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/currencyfmt_a_t.start.hpp"
namespace win
{
    // [struct _currencyfmtA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct currencyfmt_a_t               
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t num_digits;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumDigits
        _m01 uint32_t leading_zero;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .LeadingZero
        _m02 uint32_t grouping;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Grouping
        _m03 char*    lp_decimal_sep;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .lpDecimalSep
        _m04 char*    lp_thousand_sep;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .lpThousandSep
        _m05 uint32_t negative_order;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NegativeOrder
        _m06 uint32_t positive_order;      //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .PositiveOrder
        _m07 char*    lp_currency_symbol;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .lpCurrencySymbol
                                         
        SDK_MAGIC_PROPERTIES( "_currencyfmtA.$", 0x30, true, 0x66d6f4edef2996fc );                   
        SDK_FIXED_SIZE( currencyfmt_a_t, 0x30 );                   
    };                                   
};
#include "magic/currencyfmt_a_t.end.hpp"
SDK_VERIFY( struct win::currencyfmt_a_t, 0x30 );
