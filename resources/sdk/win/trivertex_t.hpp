#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/trivertex_t.start.hpp"
namespace win
{
    // [struct _TRIVERTEX]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct trivertex_t      
    {                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 int32_t  x;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .x
        _m01 int32_t  y;      //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .y
        _m02 uint16_t red;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Red
        _m03 uint16_t green;  //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .Green
        _m04 uint16_t blue;   //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Blue
        _m05 uint16_t alpha;  //{ +0x000e    +0x000e    +0x000e    +0x000e    +0x000e    } | .Alpha
                            
        SDK_NONVOL_PROPERTIES( "_TRIVERTEX.$", 0x10, true, 0x487160c8b960805 );      
        SDK_FIXED_SIZE( trivertex_t, 0x10 );      
    };                      
};
#include "magic/trivertex_t.end.hpp"
SDK_VERIFY( struct win::trivertex_t, 0x10 );
