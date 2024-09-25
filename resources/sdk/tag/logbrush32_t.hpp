#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/logbrush32_t.start.hpp"
namespace tag
{
    // [struct tagLOGBRUSH32]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct logbrush32_t        
    {                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint32_t lb_style;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .lbStyle
        _m01 uint32_t lb_color;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .lbColor
        _m02 uint32_t lb_hatch;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .lbHatch
                               
        SDK_NONVOL_PROPERTIES( "tagLOGBRUSH32.$", 0xc, true, 0x8f74e8a44d737d41 );         
        SDK_FIXED_SIZE( logbrush32_t, 0xc );         
    };                         
};
#include "magic/logbrush32_t.end.hpp"
SDK_VERIFY( struct tag::logbrush32_t, 0xc );
