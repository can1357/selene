#pragma once
#include <sdkgen/support_library.hpp>
#include "../../power/action_t.hpp"
#include "../../nt/device_power_state_t.hpp"
#include "../../nt/system_power_state_t.hpp"

#include "magic/raid_power_state_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_POWER_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_power_state_t                                   
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                      
        _m00 enum nt::system_power_state_t system_state;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SystemState
        _m01 enum nt::device_power_state_t device_state;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DeviceState
        _m02 enum power::action_t          power_action;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PowerAction
        _m03 uint8_t                       system_powering_down;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .SystemPoweringDown
                                                                
        SDK_MAGIC_PROPERTIES( "_RAID_POWER_STATE.$", 0x10, true, 0x65f714dd9254551e );                     
        SDK_FIXED_SIZE( raid_power_state_t, 0x10 );                     
    };                                                          
};
#include "magic/raid_power_state_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_power_state_t, 0x10 );
