#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fixed_t.start.hpp"
namespace win
{
    // [struct _FIXED]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fixed_t          
    {                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint16_t fract;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .fract
        _m01 int16_t  value;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .value
                            
        SDK_NONVOL_PROPERTIES( "_FIXED.$", 0x4, true, 0xa36f3f8e01733e99 );      
        SDK_FIXED_SIZE( fixed_t, 0x4 );      
    };                      
};
#include "magic/fixed_t.end.hpp"
SDK_VERIFY( struct win::fixed_t, 0x4 );
