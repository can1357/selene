#pragma once
#include <sdkgen/support_library.hpp>
#include "system_power_state_t.hpp"
#include "../power/action_policy_t.hpp"

#include "magic/system_power_level_t.start.hpp"
namespace nt
{
    // [struct SYSTEM_POWER_LEVEL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_power_level_t                             
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                  
        _m00 uint8_t                       enable;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Enable
        _m01 uint32_t                      battery_level;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .BatteryLevel
        _m02 struct power::action_policy_t power_policy;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PowerPolicy
        _m03 enum nt::system_power_state_t min_system_state;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .MinSystemState
                                                            
        SDK_MAGIC_PROPERTIES( "SYSTEM_POWER_LEVEL.$", 0x18, true, 0xbad1f2a94b9d5fa9 );                 
        SDK_FIXED_SIZE( system_power_level_t, 0x18 );                 
    };                                                      
};
#include "magic/system_power_level_t.end.hpp"
SDK_VERIFY( struct nt::system_power_level_t, 0x18 );
