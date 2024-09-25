#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/displayconfig_2dregion_t.start.hpp"
namespace win
{
    // [struct DISPLAYCONFIG_2DREGION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct displayconfig_2dregion_t
    {                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2   
        //               
        _m00 uint32_t cx;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .cx
        _m01 uint32_t cy;            //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .cy
                                   
        SDK_NONVOL_PROPERTIES( "DISPLAYCONFIG_2DREGION.$", 0x8, true, 0xa1f95573323cd22c );   
        SDK_FIXED_SIZE( displayconfig_2dregion_t, 0x8 );   
    };                             
};
#include "magic/displayconfig_2dregion_t.end.hpp"
SDK_VERIFY( struct win::displayconfig_2dregion_t, 0x8 );
