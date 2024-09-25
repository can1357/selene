#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/psfeature_custpaper_t.start.hpp"
namespace win
{
    // [struct _PSFEATURE_CUSTPAPER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct psfeature_custpaper_t     
    {                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                           
        _m00 int32_t l_orientation;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .lOrientation
        _m01 int32_t l_width;          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .lWidth
        _m02 int32_t l_height;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .lHeight
        _m03 int32_t l_width_offset;   //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .lWidthOffset
        _m04 int32_t l_height_offset;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .lHeightOffset
                                     
        SDK_NONVOL_PROPERTIES( "_PSFEATURE_CUSTPAPER.$", 0x14, true, 0xd579b43f5076e33a );                
        SDK_FIXED_SIZE( psfeature_custpaper_t, 0x14 );                
    };                               
};
#include "magic/psfeature_custpaper_t.end.hpp"
SDK_VERIFY( struct win::psfeature_custpaper_t, 0x14 );
