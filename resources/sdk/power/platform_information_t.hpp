#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/platform_information_t.start.hpp"
namespace power
{
    // [struct _POWER_PLATFORM_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct platform_information_t
    {                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                 
        _m00 uint8_t ao_ac;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AoAc
                                 
        SDK_NONVOL_PROPERTIES( "_POWER_PLATFORM_INFORMATION.$", 0x1, true, 0x2afa17b0b58de5d3 );      
        SDK_FIXED_SIZE( platform_information_t, 0x1 );      
    };                           
};
#include "magic/platform_information_t.end.hpp"
SDK_VERIFY( struct power::platform_information_t, 0x1 );
