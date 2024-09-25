#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/platform_information_t.start.hpp"
namespace hal
{
    // [struct _HAL_PLATFORM_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct platform_information_t    
    {                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t platform_flags;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PlatformFlags
                                     
        SDK_NONVOL_PROPERTIES( "_HAL_PLATFORM_INFORMATION.$", 0x4, true, 0x73a8dbe9adafdca7 );               
        SDK_FIXED_SIZE( platform_information_t, 0x4 );               
    };                               
};
#include "magic/platform_information_t.end.hpp"
SDK_VERIFY( struct hal::platform_information_t, 0x4 );
