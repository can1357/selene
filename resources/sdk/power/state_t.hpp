#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/device_power_state_t.hpp"
#include "../nt/system_power_state_t.hpp"

#include "magic/state_t.start.hpp"
namespace power
{
    // [union _POWER_STATE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union state_t                                       
    {                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                              
        _m00 enum nt::system_power_state_t system_state;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SystemState
        _m01 enum nt::device_power_state_t device_state;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceState
                                                        
        SDK_NONVOL_PROPERTIES( "_POWER_STATE.$", 0x4, true, 0x980ab0724dfe0490 );             
        SDK_FIXED_SIZE( state_t, 0x4 );                 
    };                                                  
};
#include "magic/state_t.end.hpp"
SDK_VERIFY( union power::state_t, 0x4 );
