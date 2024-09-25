#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/coord_t.start.hpp"
namespace win
{
    // [struct _COORD]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct coord_t     
    {                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2  
        //             
        _m00 int16_t x;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .X
        _m01 int16_t y;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Y
                       
        SDK_NONVOL_PROPERTIES( "_COORD.$", 0x4, true, 0x44a53e41f0749b91 );  
        SDK_FIXED_SIZE( coord_t, 0x4 );  
    };                 
};
#include "magic/coord_t.end.hpp"
SDK_VERIFY( struct win::coord_t, 0x4 );
