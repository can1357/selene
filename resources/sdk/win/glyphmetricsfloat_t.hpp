#pragma once
#include <sdkgen/support_library.hpp>
#include "pointfloat_t.hpp"

#include "magic/glyphmetricsfloat_t.start.hpp"
namespace win
{
    // [struct _GLYPHMETRICSFLOAT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct glyphmetricsfloat_t                           
    {                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                               
        _m00 float                    gmf_black_box_x;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .gmfBlackBoxX
        _m01 float                    gmf_black_box_y;     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .gmfBlackBoxY
        _m02 struct win::pointfloat_t gmfpt_glyph_origin;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .gmfptGlyphOrigin
        _m03 float                    gmf_cell_inc_x;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .gmfCellIncX
        _m04 float                    gmf_cell_inc_y;      //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .gmfCellIncY
                                                         
        SDK_NONVOL_PROPERTIES( "_GLYPHMETRICSFLOAT.$", 0x18, true, 0x8a55d1c075e9913a );                   
        SDK_FIXED_SIZE( glyphmetricsfloat_t, 0x18 );                   
    };                                                   
};
#include "magic/glyphmetricsfloat_t.end.hpp"
SDK_VERIFY( struct win::glyphmetricsfloat_t, 0x18 );
