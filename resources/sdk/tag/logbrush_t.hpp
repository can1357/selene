#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/logbrush_t.start.hpp"
namespace tag
{
    // [struct tagLOGBRUSH]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct logbrush_t          
    {                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint32_t lb_style;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .lbStyle
        _m01 uint32_t lb_color;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .lbColor
        _m02 uint64_t lb_hatch;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .lbHatch
                               
        SDK_NONVOL_PROPERTIES( "tagLOGBRUSH.$", 0x10, true, 0x45c5682a809ae3ce );         
        SDK_FIXED_SIZE( logbrush_t, 0x10 );         
    };                         
};
#include "magic/logbrush_t.end.hpp"
SDK_VERIFY( struct tag::logbrush_t, 0x10 );
