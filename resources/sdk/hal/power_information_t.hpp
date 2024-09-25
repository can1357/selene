#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/power_information_t.start.hpp"
namespace hal
{
    // [struct _HAL_POWER_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct power_information_t
    {                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2    
        //                
        _m00 uint32_t tbd;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TBD
                              
        SDK_NONVOL_PROPERTIES( "_HAL_POWER_INFORMATION.$", 0x4, true, 0x8f33ef68478f4d9a );    
        SDK_FIXED_SIZE( power_information_t, 0x4 );    
    };                        
};
#include "magic/power_information_t.end.hpp"
SDK_VERIFY( struct hal::power_information_t, 0x4 );
