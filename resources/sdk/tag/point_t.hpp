#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/point_t.start.hpp"
namespace tag
{
    // [struct tagPOINT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct point_t     
    {                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2  
        //             
        _m00 int32_t x;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .x
        _m01 int32_t y;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .y
                       
        SDK_NONVOL_PROPERTIES( "tagPOINT.$", 0x8, true, 0x56aa2acca2fda9df );  
        SDK_FIXED_SIZE( point_t, 0x8 );  
    };                 
};
#include "magic/point_t.end.hpp"
SDK_VERIFY( struct tag::point_t, 0x8 );
