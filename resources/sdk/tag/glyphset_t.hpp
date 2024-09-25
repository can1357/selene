#pragma once
#include <sdkgen/support_library.hpp>
#include "wcrange_t.hpp"

#include "magic/glyphset_t.start.hpp"
namespace tag
{
    // [struct tagGLYPHSET]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct glyphset_t                                                
    {                                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                           
        _m00 uint32_t                             cb_this;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .cbThis
        _m01 uint32_t                             fl_accel;            //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .flAccel
        _m02 uint32_t                             c_glyphs_supported;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .cGlyphsSupported
        _m03 uint32_t                             c_ranges;            //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .cRanges
        _m04 sdk::array<struct tag::wcrange_t, 1> ranges;              //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ranges
                                                                     
        SDK_NONVOL_PROPERTIES( "tagGLYPHSET.$", 0x14, true, 0x886967c731af9916 );                   
        SDK_FIXED_SIZE( glyphset_t, 0x14 );                          
    };                                                               
};
#include "magic/glyphset_t.end.hpp"
SDK_VERIFY( struct tag::glyphset_t, 0x14 );
