#pragma once
#include <sdkgen/support_library.hpp>
#include "systemtime_t.hpp"

#include "magic/udate_t.start.hpp"
namespace win
{
    // [struct UDATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct udate_t                                  
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                          
        _m00 struct win::systemtime_t st;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .st
        _m01 uint16_t                 w_day_of_year;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .wDayOfYear
                                                    
        SDK_MAGIC_PROPERTIES( "UDATE.$", 0x12, true, 0x5c00434fc293f99b );              
        SDK_FIXED_SIZE( udate_t, 0x12 );              
    };                                              
};
#include "magic/udate_t.end.hpp"
SDK_VERIFY( struct win::udate_t, 0x12 );
