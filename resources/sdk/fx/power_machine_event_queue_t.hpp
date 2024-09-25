#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/power_machine_event_queue_t.start.hpp"
namespace fx
{
    // [union FxPowerMachineEventQueue]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union power_machine_event_queue_t       
    {                                       
        struct u0_e_t                       
        {                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
            //                              
            _m00 int16_t event1;              //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Event1
            _m01 int16_t event2;              //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .Event2
            _m02 int16_t event3;              //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .Event3
            _m03 int16_t event4;              //{ +0x0004@16 +0x0004@16 +0x0004@16 +0x0004@16 } | .Event4
            _m04 int16_t event5;              //{ +0x0008@0  +0x0008@0  +0x0008@0  +0x0008@0  } | .Event5
            _m05 int16_t event6;              //{ +0x0008@16 +0x0008@16 +0x0008@16 +0x0008@16 } | .Event6
            _m06 int16_t event7;              //{ +0x000c@0  +0x000c@0  +0x000c@0  +0x000c@0  } | .Event7
            _m07 int16_t event8;              //{ +0x000c@16 +0x000c@16 +0x000c@16 +0x000c@16 } | .Event8
                                            
            SDK_MAGIC_PROPERTIES( "FxPowerMachineEventQueue.E.$", 0x10, true, 0x93ce51bc3b56d7da );              
            SDK_FIXED_SIZE( u0_e_t, 0x10 );              
        };                                  
                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                  
        _m08 u0_e_t                  e;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .E
        _m09 sdk::array<uint16_t, 8> events;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Events
                                            
        SDK_MAGIC_PROPERTIES( "FxPowerMachineEventQueue.$", 0x10, true, 0x431d3c04209cdad5 );       
        SDK_FIXED_SIZE( power_machine_event_queue_t, 0x10 );       
    };                                      
};
#include "magic/power_machine_event_queue_t.end.hpp"
SDK_VERIFY( struct fx::power_machine_event_queue_t::u0_e_t, 0x10 );
SDK_VERIFY( union fx::power_machine_event_queue_t, 0x10 );
