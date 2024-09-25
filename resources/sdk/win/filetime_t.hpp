#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/filetime_t.start.hpp"
namespace win
{
    // [struct _FILETIME]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct filetime_t                   
    {                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t dw_low_date_time;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .dwLowDateTime
        _m01 uint32_t dw_high_date_time;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .dwHighDateTime
                                        
        SDK_NONVOL_PROPERTIES( "_FILETIME.$", 0x8, true, 0xae7be198ab4abbae );                  
        SDK_FIXED_SIZE( filetime_t, 0x8 );                  
    };                                  
};
#include "magic/filetime_t.end.hpp"
SDK_VERIFY( struct win::filetime_t, 0x8 );
