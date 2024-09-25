#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/point_t.hpp"

#include "magic/drawpatrect_t.start.hpp"
namespace win
{
    // [struct _DRAWPATRECT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct drawpatrect_t                     
    {                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                   
        _m00 struct tag::point_t pt_position;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ptPosition
        _m01 struct tag::point_t pt_size;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ptSize
        _m02 uint16_t            w_style;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .wStyle
        _m03 uint16_t            w_pattern;    //{ +0x0012    +0x0012    +0x0012    +0x0012    +0x0012    } | .wPattern
                                             
        SDK_NONVOL_PROPERTIES( "_DRAWPATRECT.$", 0x14, true, 0x3cdec816ad9fc4a2 );            
        SDK_FIXED_SIZE( drawpatrect_t, 0x14 );            
    };                                       
};
#include "magic/drawpatrect_t.end.hpp"
SDK_VERIFY( struct win::drawpatrect_t, 0x14 );
