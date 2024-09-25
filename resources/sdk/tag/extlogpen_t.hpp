#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/extlogpen_t.start.hpp"
namespace tag
{
    // [struct tagEXTLOGPEN]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct extlogpen_t                               
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                           
        _m00 uint32_t                elp_pen_style;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .elpPenStyle
        _m01 uint32_t                elp_width;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .elpWidth
        _m02 uint32_t                elp_brush_style;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .elpBrushStyle
        _m03 uint32_t                elp_color;        //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .elpColor
        _m04 uint64_t                elp_hatch;        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .elpHatch
        _m05 uint32_t                elp_num_entries;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .elpNumEntries
        _m06 sdk::array<uint32_t, 1> elp_style_entry;  //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .elpStyleEntry
                                                     
        SDK_NONVOL_PROPERTIES( "tagEXTLOGPEN.$", 0x20, true, 0x39badce02e4f0de8 );                
        SDK_FIXED_SIZE( extlogpen_t, 0x20 );                
    };                                               
};
#include "magic/extlogpen_t.end.hpp"
SDK_VERIFY( struct tag::extlogpen_t, 0x20 );
