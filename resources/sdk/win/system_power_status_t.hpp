#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_power_status_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_POWER_STATUS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_power_status_t             
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint8_t  ac_line_status;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ACLineStatus
        _m01 uint8_t  battery_flag;            //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .BatteryFlag
        _m02 uint8_t  battery_life_percent;    //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .BatteryLifePercent
        _m03 uint8_t  system_status_flag;      //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .SystemStatusFlag
        _m04 uint32_t battery_life_time;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .BatteryLifeTime
        _m05 uint32_t battery_full_life_time;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BatteryFullLifeTime
                                             
        SDK_MAGIC_PROPERTIES( "_SYSTEM_POWER_STATUS.$", 0xc, true, 0x93197ce69ed8f5b4 );                       
        SDK_FIXED_SIZE( system_power_status_t, 0xc );                       
    };                                       
};
#include "magic/system_power_status_t.end.hpp"
SDK_VERIFY( struct win::system_power_status_t, 0xc );
