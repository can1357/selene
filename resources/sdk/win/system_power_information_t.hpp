#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_power_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_POWER_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_power_information_t      
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t max_idleness_allowed;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MaxIdlenessAllowed
        _m01 uint32_t idleness;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Idleness
        _m02 uint32_t time_remaining;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TimeRemaining
        _m03 uint8_t  cooling_mode;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .CoolingMode
                                           
        SDK_MAGIC_PROPERTIES( "_SYSTEM_POWER_INFORMATION.$", 0x10, true, 0xbde2de1e512f042 );                     
        SDK_FIXED_SIZE( system_power_information_t, 0x10 );                     
    };                                     
};
#include "magic/system_power_information_t.end.hpp"
SDK_VERIFY( struct win::system_power_information_t, 0x10 );
