#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_battery_life_info_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_BATTERY_LIFE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_battery_life_info_t  
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t remaining_capacity;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RemainingCapacity
        _m01 uint32_t rate;                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Rate
                                         
        SDK_MAGIC_PROPERTIES( "_PERFINFO_BATTERY_LIFE_INFO.$", 0x8, true, 0x7dbc2a9bce0da605 );                   
        SDK_FIXED_SIZE( perfinfo_battery_life_info_t, 0x8 );                   
    };                                   
};
#include "magic/perfinfo_battery_life_info_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_battery_life_info_t, 0x8 );
