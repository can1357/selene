#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ifr_offset_t.start.hpp"
namespace wdf
{
    // [struct _WDF_IFR_OFFSET]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct ifr_offset_t        
    {                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint16_t current;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Current
        _m01 uint16_t previous;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Previous
        _m02 int32_t  as_long;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsLONG
                               
        SDK_NONVOL_PROPERTIES( "_WDF_IFR_OFFSET.$", 0x4, true, 0xcf92d333d901f6af );         
        SDK_FIXED_SIZE( ifr_offset_t, 0x4 );         
    };                         
};
#include "magic/ifr_offset_t.end.hpp"
SDK_VERIFY( struct wdf::ifr_offset_t, 0x4 );
