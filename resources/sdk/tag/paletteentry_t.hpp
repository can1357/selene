#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/paletteentry_t.start.hpp"
namespace tag
{
    // [struct tagPALETTEENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct paletteentry_t     
    {                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                    
        _m00 uint8_t pe_red;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .peRed
        _m01 uint8_t pe_green;  //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .peGreen
        _m02 uint8_t pe_blue;   //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .peBlue
        _m03 uint8_t pe_flags;  //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .peFlags
                              
        SDK_NONVOL_PROPERTIES( "tagPALETTEENTRY.$", 0x4, true, 0x8e1c859b4572cdf6 );         
        SDK_FIXED_SIZE( paletteentry_t, 0x4 );         
    };                        
};
#include "magic/paletteentry_t.end.hpp"
SDK_VERIFY( struct tag::paletteentry_t, 0x4 );
