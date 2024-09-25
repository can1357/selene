#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/point_t.hpp"

#include "magic/glyphmetrics_t.start.hpp"
namespace win
{
    // [struct _GLYPHMETRICS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct glyphmetrics_t                          
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                         
        _m00 uint32_t            gm_black_box_x;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .gmBlackBoxX
        _m01 uint32_t            gm_black_box_y;     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .gmBlackBoxY
        _m02 struct tag::point_t gmpt_glyph_origin;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .gmptGlyphOrigin
        _m03 int16_t             gm_cell_inc_x;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .gmCellIncX
        _m04 int16_t             gm_cell_inc_y;      //{ +0x0012    +0x0012    +0x0012    +0x0012    +0x0012    } | .gmCellIncY
                                                   
        SDK_NONVOL_PROPERTIES( "_GLYPHMETRICS.$", 0x14, true, 0xf7c01b323d09b375 );                  
        SDK_FIXED_SIZE( glyphmetrics_t, 0x14 );                  
    };                                             
};
#include "magic/glyphmetrics_t.end.hpp"
SDK_VERIFY( struct win::glyphmetrics_t, 0x14 );
