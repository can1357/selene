#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/numberfmt_w_t.start.hpp"
namespace win
{
    // [struct _numberfmtW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct numberfmt_w_t              
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t num_digits;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumDigits
        _m01 uint32_t leading_zero;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .LeadingZero
        _m02 uint32_t grouping;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Grouping
        _m03 wchar_t* lp_decimal_sep;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .lpDecimalSep
        _m04 wchar_t* lp_thousand_sep;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .lpThousandSep
        _m05 uint32_t negative_order;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NegativeOrder
                                      
        SDK_MAGIC_PROPERTIES( "_numberfmtW.$", 0x28, true, 0x5b07a3f0862a8f14 );                
        SDK_FIXED_SIZE( numberfmt_w_t, 0x28 );                
    };                                
};
#include "magic/numberfmt_w_t.end.hpp"
SDK_VERIFY( struct win::numberfmt_w_t, 0x28 );
