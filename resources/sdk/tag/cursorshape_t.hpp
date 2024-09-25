#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cursorshape_t.start.hpp"
namespace tag
{
    // [struct tagCURSORSHAPE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cursorshape_t        
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                      
        _m00 int32_t x_hot_spot;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .xHotSpot
        _m01 int32_t y_hot_spot;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .yHotSpot
        _m02 int32_t cx;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cx
        _m03 int32_t cy;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .cy
        _m04 int32_t cb_width;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cbWidth
        _m05 uint8_t planes;      //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Planes
        _m06 uint8_t bits_pixel;  //{ +0x0015    +0x0015    +0x0015    +0x0015    } | .BitsPixel
                                
        SDK_MAGIC_PROPERTIES( "tagCURSORSHAPE.$", 0x18, true, 0x2dcc76394ea12aa6 );           
        SDK_FIXED_SIZE( cursorshape_t, 0x18 );           
    };                          
};
#include "magic/cursorshape_t.end.hpp"
SDK_VERIFY( struct tag::cursorshape_t, 0x18 );
