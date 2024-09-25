#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/points_t.start.hpp"
namespace tag
{
    // [struct tagPOINTS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct points_t    
    {                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2  
        //             
        _m00 int16_t x;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .x
        _m01 int16_t y;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .y
                       
        SDK_NONVOL_PROPERTIES( "tagPOINTS.$", 0x4, true, 0xcdc46b033b409e96 );  
        SDK_FIXED_SIZE( points_t, 0x4 );  
    };                 
};
#include "magic/points_t.end.hpp"
SDK_VERIFY( struct tag::points_t, 0x4 );
