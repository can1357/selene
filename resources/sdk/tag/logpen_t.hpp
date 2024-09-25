#pragma once
#include <sdkgen/support_library.hpp>
#include "point_t.hpp"

#include "magic/logpen_t.start.hpp"
namespace tag
{
    // [struct tagLOGPEN]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct logpen_t                         
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                  
        _m00 uint32_t            lopn_style;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .lopnStyle
        _m01 struct tag::point_t lopn_width;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .lopnWidth
        _m02 uint32_t            lopn_color;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .lopnColor
                                            
        SDK_NONVOL_PROPERTIES( "tagLOGPEN.$", 0x10, true, 0xc1d484f0719d5b61 );           
        SDK_FIXED_SIZE( logpen_t, 0x10 );           
    };                                      
};
#include "magic/logpen_t.end.hpp"
SDK_VERIFY( struct tag::logpen_t, 0x10 );
