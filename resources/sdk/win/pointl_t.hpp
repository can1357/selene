#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pointl_t.start.hpp"
namespace win
{
    // [struct _POINTL]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pointl_t    
    {                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2  
        //             
        _m00 int32_t x;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .x
        _m01 int32_t y;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .y
                       
        SDK_NONVOL_PROPERTIES( "_POINTL.$", 0x8, true, 0x8840536a412ec3c5 );  
        SDK_FIXED_SIZE( pointl_t, 0x8 );  
    };                 
};
#include "magic/pointl_t.end.hpp"
SDK_VERIFY( struct win::pointl_t, 0x8 );
