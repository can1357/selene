#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_battery_state_t.start.hpp"
namespace win
{
    // [struct SYSTEM_BATTERY_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_battery_state_t        
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint8_t  ac_on_line;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AcOnLine
        _m01 uint8_t  battery_present;     //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .BatteryPresent
        _m02 uint8_t  charging;            //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Charging
        _m03 uint8_t  discharging;         //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .Discharging
        _m04 uint8_t  tag;                 //{ +0x0007    +0x0007    +0x0007    +0x0007    } | .Tag
        _m05 uint32_t max_capacity;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MaxCapacity
        _m06 uint32_t remaining_capacity;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .RemainingCapacity
        _m07 uint32_t rate;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Rate
        _m08 uint32_t estimated_time;      //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .EstimatedTime
        _m09 uint32_t default_alert1;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DefaultAlert1
        _m10 uint32_t default_alert2;      //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .DefaultAlert2
                                         
        SDK_MAGIC_PROPERTIES( "SYSTEM_BATTERY_STATE.$", 0x20, true, 0x5bf73b7fe629d37c );                   
        SDK_FIXED_SIZE( system_battery_state_t, 0x20 );                   
    };                                   
};
#include "magic/system_battery_state_t.end.hpp"
SDK_VERIFY( struct win::system_battery_state_t, 0x20 );
