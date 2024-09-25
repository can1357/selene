#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/numberfmt_a_t.start.hpp"
namespace win
{
    // [struct _numberfmtA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct numberfmt_a_t              
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t num_digits;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumDigits
        _m01 uint32_t leading_zero;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .LeadingZero
        _m02 uint32_t grouping;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Grouping
        _m03 char*    lp_decimal_sep;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .lpDecimalSep
        _m04 char*    lp_thousand_sep;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .lpThousandSep
        _m05 uint32_t negative_order;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NegativeOrder
                                      
        SDK_MAGIC_PROPERTIES( "_numberfmtA.$", 0x28, true, 0x85031a5282502f7c );                
        SDK_FIXED_SIZE( numberfmt_a_t, 0x28 );                
    };                                
};
#include "magic/numberfmt_a_t.end.hpp"
SDK_VERIFY( struct win::numberfmt_a_t, 0x28 );
